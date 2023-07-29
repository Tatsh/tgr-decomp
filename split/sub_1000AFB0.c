//----- (1000AFB0) --------------------------------------------------------
int __thiscall sub_1000AFB0(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // ebp
  double v4; // st7
  int *v5; // eax
  int v6; // ecx
  int result; // eax
  void *v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  int v14[11]; // [esp+18h] [ebp-38h] BYREF
  int v15; // [esp+4Ch] [ebp-4h]

  if ( !this[24] || !this[25] )
    return -2005522669;
  v2 = abs32(this[32] - this[30]);
  v3 = abs32(this[33] - this[31]);
  if ( v2 )
    v4 = (double)v3 / (double)v2;
  else
    v4 = 1.0;
  memset(v14, 0, sizeof(v14));
  *(float *)&v14[6] = v4;
  v5 = (int *)this[25];
  *(float *)&v14[8] = v4 + v4;
  v6 = *v5;
  v14[0] = 44;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = v2;
  v14[4] = v3;
  v14[5] = -1082130432;
  v14[7] = 0x40000000;
  v14[9] = 0;
  v14[10] = 1065353216;
  result = (*(int (__stdcall **)(int *, int *))(v6 + 68))(v5, v14);
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this[24] + 52))(this[24], this[25]);
    if ( result >= 0 )
    {
      v8 = (void *)this[2];
      if ( v8 )
      {
        sub_1000A170((_DWORD *)this[2]);
        operator delete(v8);
      }
      v9 = (_DWORD *)operator new(0x5Cu);
      v15 = 0;
      if ( v9 )
        v10 = sub_1000A100(v9, (int *)this[16], this[24]);
      else
        v10 = 0;
      this[2] = v10;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v10[22] = 1;
      v11 = this[25];
      v12 = (_DWORD *)this[2];
      v15 = -1;
      v13 = v12[21];
      v12[19] = 1;
      v12[22] = 0;
      (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v13 + 12))(v13, v12);
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v11 + 32))(v11, v12[20]);
      result = 0;
    }
  }
  return result;
}
