#include "types-win32.h"
//----- (1005FF60) --------------------------------------------------------
int sub_1005FF60() {
  int result; // eax
  int v1;     // ecx
  char *v2;   // edx

  for (result = 0; result < 256; ++result) {
    dword_10AA2A80[result] = (char *)(dword_10AA2E88[result] == 0);
    v1 = ((unsigned __int8)byte_10AA3288[result] >> 7) & 1;
    v2 = (char *)(v1 & (unsigned int)dword_10AA2A80[result]);
    dword_10AA2E88[result] = (char *)v1;
    dword_10AA2A80[result] = v2;
  }
  return result;
}
