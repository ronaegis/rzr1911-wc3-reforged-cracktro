/* Frame uniforms from the decompiled intro.
   FUN_14001c744, FUN_14001851c, FUN_14001859c and FUN_1400187f4 are the
   Ghidra functions. The key table is the one the constructor pushes. */

#include "keys.h"
#include <stdint.h>

static void memcpy(void *dst, const void *src, unsigned n) {
    unsigned char *d = dst;
    const unsigned char *s = src;
    for (unsigned i = 0; i < n; i++) d[i] = s[i];
}

static void memset(void *dst, int value, unsigned n) {
    unsigned char *d = dst;
    for (unsigned i = 0; i < n; i++) d[i] = (unsigned char)value;
}

static float floorf(float x) {
    int i = (int)x;
    if ((float)i > x) i -= 1;
    return (float)i;
}

static float sqrtf(float x) {
    return __builtin_sqrtf(x);
}

static float sinf(float x) {
    const float pi = 3.14159265358979323846f;
    const float twopi = 6.28318530717958647692f;
    x = x - twopi * floorf(x / twopi + 0.5f);
    float x2 = x * x;
    float term = x;
    float sum = x;
    for (int n = 1; n < 8; n++) {
        term *= -x2 / (float)((2 * n) * (2 * n + 1));
        sum += term;
    }
    (void)pi;
    return sum;
}

static float cosf(float x) {
    return sinf(x + 1.57079632679489661923f);
}

static float tanf(float x) {
    float c = cosf(x);
    if (c > -1.0e-8f && c < 1.0e-8f) return (x < 0.0f) ? -1.0e8f : 1.0e8f;
    return sinf(x) / c;
}

/* FUN_14001c744. Row rate is 8 rows/beat * 173 bpm / 60. */
float FUN_14001c744(unsigned track, float time) {
    if (track >= 104 || SYNC_COUNT[track] == 0) return 0.0f;
    float rows_per_second = (8.0f * 173.0f) / 60.0f;
    float row_now = rows_per_second * time;
    const SyncKey *base = SYNC_KEYS + SYNC_OFFSET[track];
    unsigned count = SYNC_COUNT[track];
    const SyncKey *prev = 0;
    const SyncKey *next = 0;
    for (unsigned i = 0; i < count; i++) {
        if (row_now < (float)base[i].row) {
            next = &base[i];
            break;
        }
        prev = &base[i];
    }
    if (!prev) return 0.0f;
    const SyncKey *b = next ? next : prev;
    float t0 = (float)prev->row / rows_per_second + 0.001f;
    float t1 = (float)b->row / rows_per_second + 0.001f;
    float u = 0.0f;
    if (t0 < t1) u = (time - t0) / (t1 - t0);
    unsigned mode = prev->interp;
    float v0 = prev->value;
    if (mode == 0) return v0;
    if (mode != 1) {
        if (mode == 2) {
            u = (3.0f - (u + u)) * u * u;
            return (1.0f - u) * v0 + u * b->value;
        }
        if (mode != 3) {
            if (mode != 4) return v0;
            u = u * u;
        }
        u = u * u;
    }
    return (1.0f - u) * v0 + u * b->value;
}

/* FUN_14001851c */
static float *FUN_14001851c(float *out, const float *v) {
    float inv = 1.0f / sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    out[0] = v[0] * inv;
    out[1] = v[1] * inv;
    out[2] = v[2] * inv;
    return out;
}

/* FUN_14001859c. cross(forward, up), then cross(forward, side), then the
   translation the decompiler stores in out[12..14]. */
static float *FUN_14001859c(float *out, const float *eye, const float *fwd, const float *up) {
    float fx = fwd[0], fy = fwd[1], fz = fwd[2];
    float side_in[3] = {
        up[2] * fy - up[1] * fz,
        up[0] * fz - fx * up[2],
        fx * up[1] - up[0] * fy
    };
    float s[3];
    FUN_14001851c(s, side_in);
    float up_in[3] = {
        fy * s[2] - fz * s[1],
        fz * s[0] - fx * s[2],
        fx * s[1] - fy * s[0]
    };
    float t[3];
    FUN_14001851c(t, up_in);
    out[0] = s[0]; out[1] = t[0]; out[2] = fx; out[3] = 0.0f;
    out[4] = s[1]; out[5] = t[1]; out[6] = fy; out[7] = 0.0f;
    out[8] = s[2]; out[9] = t[2]; out[10] = fz; out[11] = 0.0f;
    out[12] = -(eye[1] * s[1] + eye[0] * s[0] + eye[2] * s[2]);
    out[13] = -(eye[1] * t[1] + eye[0] * t[0] + eye[2] * t[2]);
    out[14] = -(eye[1] * fy + eye[0] * fx + eye[2] * fz);
    out[15] = 1.0f;
    return out;
}

/* FUN_1400187f4 uses row-major multiplication. The GPU consumes the
   resulting memory as columns, so this composes roll * view on the GPU. */
static float *FUN_1400187f4(float *param_1, const float *param_2, const float *param_3) {
    float dst[16];
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 4; row++) {
            float sum = 0.0f;
            for (int k = 0; k < 4; k++) sum += param_2[col * 4 + k] * param_3[k * 4 + row];
            dst[col * 4 + row] = sum;
        }
    }
    memcpy(param_1, dst, sizeof dst);
    return param_1;
}

static float g_uniforms[256];
static float g_last_time;
static int g_frame;

float *uniforms(void) { return g_uniforms; }

/* The block FUN_140018eb4 builds after waveOutGetPosition, then the stores
   FUN_14001a9e8 makes into the 1024-byte ContextBuffer. Tracks 0..103 are the
   floats that follow the matrix header. */
void fill_uniforms(float time, float width, float height) {
    float elapsed = (time >= g_last_time) ? (time - g_last_time) : time;
    g_last_time = time;
    float pos[3] = { FUN_14001c744(0, time), FUN_14001c744(1, time), FUN_14001c744(2, time) };
    float fwd[3] = { -FUN_14001c744(3, time), -FUN_14001c744(4, time), -FUN_14001c744(5, time) };
    float up[3] = { 0.0f, 1.0f, 0.0f };
    float fov = FUN_14001c744(6, time);
    float roll = FUN_14001c744(7, time);
    if (fov < 0.05f) fov = 0.05f;
    if (fwd[0] == 0.0f && fwd[1] == 0.0f && fwd[2] == 0.0f) fwd[2] = -1.0f;

    float view[16];
    FUN_14001859c(view, pos, fwd, up);

    float ang = (roll / 180.0f) * 3.1415927f;
    float axis_in[3] = { 0.0f, 0.0f, 1.0f };
    float axis[3];
    FUN_14001851c(axis, axis_in);
    float c = cosf(ang);
    float s = sinf(ang);
    float t = 1.0f - c;
    float ax = axis[0], ay = axis[1], az = axis[2];
    float rollm[16] = {
        ax * ax * t + c, ax * ay * t + az * s, ax * az * t - ay * s, 0.0f,
        ax * ay * t - az * s, ay * ay * t + c, ay * az * t + ax * s, 0.0f,
        ax * az * t + ay * s, ay * az * t - ax * s, az * az * t + c, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f
    };
    float view_roll[16];
    FUN_1400187f4(view_roll, view, rollm);

    float focal = 1.0f / tanf(fov * 0.017453292f * 0.5f);
    float aspect = width / height;
    unsigned n1 = 0xbf800347u;
    unsigned nz = 0xbdccd20bu;
    float near_a, near_b;
    memcpy(&near_a, &n1, 4);
    memcpy(&near_b, &nz, 4);
    float proj[16] = {
        focal / aspect, 0.0f, 0.0f, 0.0f,
        0.0f, focal, 0.0f, 0.0f,
        0.0f, 0.0f, near_a, -1.0f,
        0.0f, 0.0f, near_b, 0.0f
    };

    memset(g_uniforms, 0, sizeof g_uniforms);
    g_uniforms[0] = time;
    memcpy(g_uniforms + 1, &g_frame, sizeof g_frame);
    g_uniforms[2] = elapsed;
    g_uniforms[3] = aspect;
    g_uniforms[4] = width;
    g_uniforms[5] = height;
    g_uniforms[6] = 1.0f / width;
    g_uniforms[7] = 1.0f / height;
    memcpy(g_uniforms + 8, view_roll, sizeof view_roll);
    memcpy(g_uniforms + 24, proj, sizeof proj);
    for (unsigned i = 0; i < 104; i++) g_uniforms[152 + i] = FUN_14001c744(i, time);
    g_frame += 1;
}

#ifdef CRACKTRO_TEST
#include <stdio.h>
int main(void) {
    fill_uniforms(5.0f, 1920.0f, 1080.0f);
    printf("t=5 fov %f pos %f %f %f alpha96 %f frame94 %f\n",
        g_uniforms[152 + 6], g_uniforms[152], g_uniforms[153], g_uniforms[154],
        g_uniforms[152 + 96], g_uniforms[152 + 94]);
    printf("view ");
    for (int i = 8; i < 24; i++) printf("%g ", g_uniforms[i]);
    printf("\nproj ");
    for (int i = 24; i < 40; i++) printf("%g ", g_uniforms[i]);
    printf("\n");
    fill_uniforms(30.0f, 1920.0f, 1080.0f);
    printf("t=30 fov %f pos %f %f %f L1 %f %f a %f page %f\n",
        g_uniforms[152 + 6], g_uniforms[152], g_uniforms[153], g_uniforms[154],
        g_uniforms[152 + 17], g_uniforms[152 + 18], g_uniforms[152 + 96], g_uniforms[152 + 94]);
    return 0;
}
#endif
