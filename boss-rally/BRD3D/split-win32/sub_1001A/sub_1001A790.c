#include "types-win32.h"
//----- (1001A790) --------------------------------------------------------
HRESULT __cdecl sub_1001A790(int a1,
                             int width,
                             int height,
                             int bitDepth,
                             int a5,
                             int a6,
                             int a7,
                             unk00334 *a8,
                             unk00334 *a9,
                             unk00334 *a10) {
  unk00334 *gsu1; // ebp
  unk00334 *v11;  // ebx
  unk00334 *v12;  // edi
  HRESULT result; // eax
  unk00334 *v14;  // esi
  unk00334 *v15;  // edx
  unk00334 *v16;  // eax

  gsu1 = a8;
  if (!a8)
    return -2005522670;
  v11 = a9;
  if (!a9)
    return -2005522670;
  v12 = a10;
  if (!a10)
    return -2005522670;
  if ((gHasCalledDDrawEnum & 1) == 0) {
    result = graphics_1001B970();
    if (result < 0)
      return result;
  }
  v14 = sub_1001A550((CLSID *)a1);
  if (!v14)
    return -2005522670;
  if (a7) {
    if (!s_unk00334_1001A6E0(v14, a6, width, height, bitDepth, a5, &a8, &a9))
      return -2005522671;
  } else if (!sub_1001A610((int)v14, a6, &a8, (int *)&a9)) {
    return -2005522671;
  }
  v15 = a8;
  v16 = a9;
  gsu1->ddCapsFlags = (DWORD)v14;
  v11->ddCapsFlags = (DWORD)v15;
  v12->ddCapsFlags = (DWORD)v16;
  return 0;
}
// 104BBE18: using guessed type int gHasCalledDDrawEnum;
