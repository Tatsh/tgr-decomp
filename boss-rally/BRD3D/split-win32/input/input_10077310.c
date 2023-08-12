#include "types-win32.h"
//----- (10077310) --------------------------------------------------------
int input_10077310() {
  HRESULT v0;  // eax
  int result;  // eax
  int *v2;     // ecx
  char v3[16]; // [esp+4h] [ebp-10h] BYREF

  if (!gUnk54Ptr || !gUnk54Ptr->lpDIDeviceA)
    return -1;
  dword_10AA33C0[0] = 0;
  dword_10AA33C4 = 0;
  dword_10AA33C8 = 0;
  dword_10AA33CC = 0;
  v0 = gUnk54Ptr->lpDIDeviceA->lpVtbl->GetDeviceState(gUnk54Ptr->lpDIDeviceA, 16, v3);
  if (v0 && v0 == -2147024866)
    gUnk54Ptr->lpDIDeviceA->lpVtbl->Acquire(gUnk54Ptr->lpDIDeviceA);
  if (v3[12] < 0)
    dword_10AA33C0[0] = 1;
  if ((v3[13] & 0x80) != 0)
    dword_10AA33C4 = 1;
  if ((v3[14] & 0x80) != 0)
    dword_10AA33C8 = 1;
  if ((v3[15] & 0x80) != 0)
    dword_10AA33CC = 1;
  sub_1005FFF0();
  result = 0;
  v2 = dword_10AA33D0;
  while (!*v2) {
    ++v2;
    ++result;
    if ((int)v2 >= (int)&dword_10AA33E0)
      return -1;
  }
  return result;
}
// 10AA33C0: using guessed type int dword_10AA33C0[];
// 10AA33C4: using guessed type int dword_10AA33C4;
// 10AA33C8: using guessed type int dword_10AA33C8;
// 10AA33CC: using guessed type int dword_10AA33CC;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33E0: using guessed type int dword_10AA33E0;
