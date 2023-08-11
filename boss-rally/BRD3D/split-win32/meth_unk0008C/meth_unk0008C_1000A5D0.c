#include "types-win32.h"
//----- (1000A5D0) --------------------------------------------------------
int __thiscall meth_unk0008C_1000A5D0(unk0008C *this) {
    DWORD flags;       // edi
    unk00334 *u0;      // ecx
    int hr;            // edi
    int v5;            // eax
    int v6;            // ecx
    int v7;            // eax
    int result;        // eax
    unk00334 *iid;     // edx
    unk00334 *v10;     // eax
    unk00334 *v11;     // ecx
    unk00334 *u0_1;    // eax
    int v13;           // eax
    int v14;           // ecx
    int v15;           // edx
    int v16;           // eax
    unk00334 *v17;     // [esp+8h] [ebp-38h]
    unk00334 *iid0;    // [esp+1Ch] [ebp-24h]
    DWORD width;       // [esp+30h] [ebp-10h] BYREF
    DWORD height;      // [esp+34h] [ebp-Ch] BYREF
    int bitDepth;      // [esp+38h] [ebp-8h] BYREF
    DWORD refreshRate; // [esp+3Ch] [ebp-4h] BYREF

    flags = 0;
    u0 = this->? ;
  if ( !u0 || !this->? )
      return -2005522669;
  meth_unk00334_1001AC80(u0, (int *)&width, (int *)&height, &bitDepth, (int *)&refreshRate);
  if (width == 320 && height == 200 && bitDepth == 8)
      flags = 1;
  hr = this->?->lpVtbl->SetDisplayMode(this->?, width, height, bitDepth, refreshRate, flags);
  if ( hr < 0
    && (width == 640 && height == 480
     || (iid = this->?,
         height = 480,
         v17 = this->?,
         width = 640,
         v10 = meth_unk00334_1001A570(v17, 640, 480, bitDepth, 0, (unk00228 *)iid),
         (this->? = v10) == 0)
     || (hr = this->?->lpVtbl->SetDisplayMode(this->?, width, height, bitDepth, 0, 0), hr < 0)) )
  {
    if ( bitDepth == 16
      || (iid0 = this->?,
          v11 = this->?,
          bitDepth = 16,
          u0_1 = meth_unk00334_1001A570(v11, width, height, 16, 0, (unk00228 *)iid0),
          (this->? = u0_1) == 0)
      || (hr = this->?->lpVtbl->SetDisplayMode(this->?, width, height, bitDepth, 0, 0), hr < 0) )
    {
        result = hr;
    } else {
        v13 = width;
        v14 = height;
        v15 = bitDepth;
        this->field_78 = 0;
        this->field_7C = 0;
        this->field_80 = v13;
        this->field_84 = v14;
        gWidth = v13;
        g_Width1 = v13;
        gHeight = v14;
        g_Height1 = v14;
        g_BitDepth = v15;
        v16 = this->? ;
        LOBYTE(v16) = v16 | 2;
        this->? = v16;
        result = hr;
    }
  } else {
    v5 = width;
    v6 = height;
    this->field_78 = 0;
    this->field_7C = 0;
    this->field_80 = v5;
    this->field_84 = v6;
    gWidth = v5;
    g_Width1 = v5;
    gHeight = v6;
    g_Height1 = v6;
    g_BitDepth = bitDepth;
    v7 = this->? ;
    LOBYTE(v7) = v7 | 2;
    this->? = v7;
    result = hr;
  }
  return result;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
// 100AA8A8: using guessed type int g_BitDepth;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
