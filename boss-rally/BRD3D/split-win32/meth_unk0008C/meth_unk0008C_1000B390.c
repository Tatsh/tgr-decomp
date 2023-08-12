#include "types-win32.h"
//----- (1000B390) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B390(unk0008C *this,
                                          CLSID *guidOrRefreshRate,
                                          unk00334 *a3,
                                          int a4) {
  unk00334 *v5;   // edi
  HRESULT result; // eax
  GUID **v7;      // ebx
  unk00334 *u334; // eax
  unk00334 *v9;   // ebx
  unk00334 *v10;  // ebp
  unk00334 *v11;  // edx
  unk00334 *v12;  // eax
  int v13;        // edi
  unk00334 *v14;  // ecx
  int a4a;        // [esp+10h] [ebp-14h] BYREF
  int a3a;        // [esp+14h] [ebp-10h] BYREF
  int a2;         // [esp+18h] [ebp-Ch] BYREF
  unk00334 *a7;   // [esp+1Ch] [ebp-8h] BYREF
  unk00334 *a8;   // [esp+20h] [ebp-4h] BYREF

  v5 = sub_1001A550(guidOrRefreshRate);
  if (!v5)
    return -2005522670;
  if (a3) {
    v7 = &a3->lpGUID;
  } else {
    u334 = this->? ;
    if (u334)
      v7 = &u334->lpGUID;
    else
      v7 = 0;
  }
  if (a4) {
    meth_unk00334_1001AC80((unk00334 *)a4, &a2, &a3a, &a4a, (int *)&guidOrRefreshRate);
  } else {
    a2 = 640;
    a3a = 480;
    a4a = 16;
    guidOrRefreshRate = 0;
  }
  if (!s_unk00334_1001A6E0(v5, (int)v7, a2, a3a, a4a, (int)guidOrRefreshRate, &a7, &a8))
    return -2005522671;
  v9 = this-> ? ;
  v10 = this->? ;
  a3 = this-> ? ;
  meth_unk0008C_ReleaseDDrawD3D(this);
  v11 = a7;
  v12 = a8;
  this->? = v5;
  this->? = v11;
  this->? = v12;
  v13 = meth_unk0008C_1000A2C0(this);
  if (v13 >= 0) {
    SendMessageA(this->?, 0xBD2u, 0, 0);
    result = 0;
  } else {
    meth_unk0008C_ReleaseDDrawD3D(this);
    v14 = a3;
    this->? = v9;
    this->? = v14;
    this->? = v10;
    meth_unk0008C_1000A2C0(this);
    result = v13;
  }
  return result;
}
