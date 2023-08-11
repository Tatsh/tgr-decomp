#include "types-win32.h"
//----- (1007A710) --------------------------------------------------------
int __cdecl s_unk00334_QSortCompareFn(unk00334 *u334aOrBitDepth, unk00334 **u334OrBitDepth) {
  unk00334 *v2; // esi
  int v3;       // edi
  int width;    // [esp+8h] [ebp-18h] BYREF
  int width1;   // [esp+Ch] [ebp-14h] BYREF
  int height;   // [esp+10h] [ebp-10h] BYREF
  int height1;  // [esp+14h] [ebp-Ch] BYREF
  char v9[4];   // [esp+18h] [ebp-8h] BYREF
  char v10[4];  // [esp+1Ch] [ebp-4h] BYREF

  v2 = *u334OrBitDepth;
  v3 = 0;
  if (u334aOrBitDepth->u8c) {
    if (!v2)
        return -1;
  } else if (!v2) {
    return 0;
  }
  meth_unk00334_1001AC80(
      (unk00334 *)u334aOrBitDepth->u8c, &width, &height, (int *)&u334aOrBitDepth, (int *)v9);
  meth_unk00334_1001AC80(v2, &width1, &height1, (int *)&u334OrBitDepth, (int *)v10);
  if (u334aOrBitDepth < (unk00334 *)u334OrBitDepth)
    return -1;
  if (u334aOrBitDepth > (unk00334 *)u334OrBitDepth)
    return 1;
  if (width < (unsigned int)width1)
    return -1;
  if (width > (unsigned int)width1)
    return 1;
  if (height < (unsigned int)height1)
    return -1;
  if (height > (unsigned int)height1)
    return 1;
  return v3;
}
// 1007A735: conditional instruction was optimized away because of 'ecx.4==0'
