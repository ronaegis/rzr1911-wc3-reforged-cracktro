
void FUN_1400014b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    free(*(void **)(param_1 + 0xd8));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    free(*(void **)(param_1 + 0xc0));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    free(*(void **)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  return;
}

