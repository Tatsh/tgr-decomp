#include "../../types-win32.h"
//----- (1000A5D0) --------------------------------------------------------
int __thiscall meth_1000A5D0(unk0 *this)
{
  DWORD flags; // edi
  unk1 *u0; // ecx
  int hr; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int result; // eax
  void *iid; // edx
  unk1 *v10; // eax
  _DWORD *v11; // ecx
  unk1 *u0_1; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // [esp+8h] [ebp-38h]
  int iid0; // [esp+1Ch] [ebp-24h]
  DWORD width; // [esp+30h] [ebp-10h] BYREF
  DWORD height; // [esp+34h] [ebp-Ch] BYREF
  int bitDepth; // [esp+38h] [ebp-8h] BYREF
  DWORD refreshRate; // [esp+3Ch] [ebp-4h] BYREF

  flags = 0;
  u0 = this->u0;
  if ( !u0 || !this->ddraw2 )
    return -2005522669;
  meth_1001AC80(u0, &width, &height, &bitDepth, &refreshRate);
  if ( width == 320 && height == 200 && bitDepth == 8 )
    flags = 1;
  hr = this->ddraw2->lpVtbl->SetDisplayMode(this->ddraw2, width, height, bitDepth, refreshRate, flags);
  if ( hr < 0
    && (width == 640 && height == 480
     || (iid = this->unk,
         height = 480,
         v17 = this->gameSpecificUnk1_instance,
         width = 640,
         v10 = meth_1001A570(v17, 640, 480, bitDepth, 0, (int)iid),
         (this->u0 = v10) == 0)
     || (hr = this->ddraw2->lpVtbl->SetDisplayMode(this->ddraw2, width, height, bitDepth, 0, 0), hr < 0)) )
  {
    if ( bitDepth == 16
      || (iid0 = (int)this->unk,
          v11 = this->gameSpecificUnk1_instance,
          bitDepth = 16,
          u0_1 = meth_1001A570(v11, width, height, 16, 0, iid0),
          (this->u0 = u0_1) == 0)
      || (hr = this->ddraw2->lpVtbl->SetDisplayMode(this->ddraw2, width, height, bitDepth, 0, 0), hr < 0) )
    {
      result = hr;
    }
    else
    {
      v13 = width;
      v14 = height;
      v15 = bitDepth;
      this->field_1 = 0;
      this->field_7C = 0;
      this->field_80 = v13;
      this->field_84 = v14;
      g_Width = v13;
      g_Width1 = v13;
      g_Height = v14;
      g_Height1 = v14;
      g_BitDepth = v15;
      v16 = this->field_1C;
      LOBYTE(v16) = v16 | 2;
      this->field_1C = v16;
      result = hr;
    }
  }
  else
  {
    v5 = width;
    v6 = height;
    this->field_1 = 0;
    this->field_7C = 0;
    this->field_80 = v5;
    this->field_84 = v6;
    g_Width = v5;
    g_Width1 = v5;
    g_Height = v6;
    g_Height1 = v6;
    g_BitDepth = bitDepth;
    v7 = this->field_1C;
    LOBYTE(v7) = v7 | 2;
    this->field_1C = v7;
    result = hr;
  }
  return result;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 100AA8A8: using guessed type int g_BitDepth;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
