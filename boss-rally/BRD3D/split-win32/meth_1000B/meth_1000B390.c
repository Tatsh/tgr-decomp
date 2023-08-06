#include "../../types-win32.h"
//----- (1000B390) --------------------------------------------------------
HRESULT __thiscall meth_1000B390(unk0 *this, int a2, int a3, int a4)
{
  gameSpecificUnk1 *v5; // edi
  HRESULT result; // eax
  int v7; // ebx
  void *v8; // eax
  void *v9; // ebx
  unk1 *v10; // ebp
  unk1 *v11; // edx
  void *v12; // eax
  int v13; // edi
  void *v14; // ecx
  int v15; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+18h] [ebp-Ch] BYREF
  unk1 *v18; // [esp+1Ch] [ebp-8h] BYREF
  void *v19; // [esp+20h] [ebp-4h] BYREF

  v5 = sub_1001A550((gameSpecificUnk1 *)a2);
  if ( !v5 )
    return -2005522670;
  if ( a3 )
  {
    v7 = a3 + 4;
  }
  else
  {
    v8 = this->unk;
    if ( v8 )
      v7 = (int)v8 + 4;
    else
      v7 = 0;
  }
  if ( a4 )
  {
    meth_1001AC80((unk1 *)a4, &v17, &v16, &v15, &a2);
  }
  else
  {
    v17 = 640;
    v16 = 480;
    v15 = 16;
    a2 = 0;
  }
  if ( !sub_1001A6E0((int)v5, v7, v17, v16, v15, a2, &v18, &v19) )
    return -2005522671;
  v9 = this->gameSpecificUnk1_instance;
  v10 = this->u0;
  a3 = (int)this->unk;
  meth_1000A350(this);
  v11 = v18;
  v12 = v19;
  this->gameSpecificUnk1_instance = v5;
  this->u0 = v11;
  this->unk = v12;
  v13 = meth_1000A2C0(this);
  if ( v13 >= 0 )
  {
    SendMessageA(this->hwnd, 0xBD2u, 0, 0);
    result = 0;
  }
  else
  {
    meth_1000A350(this);
    v14 = (void *)a3;
    this->gameSpecificUnk1_instance = v9;
    this->unk = v14;
    this->u0 = v10;
    meth_1000A2C0(this);
    result = v13;
  }
  return result;
}
