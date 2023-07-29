//----- (10079390) --------------------------------------------------------
HRESULT __cdecl sub_10079390(int a1, int a2)
{
  IDirectInputDevice2AVtbl *v2; // ecx
  IDirectInputDevice2AVtbl *v3; // ecx
  int v5[2]; // [esp+14h] [ebp-8h] BYREF

  dword_118ABD24 = a2;
  dword_118ABD28 = a2;
  dword_118AB8A0 = (int)v5;
  v2 = g_DirectInputDevice2A->lpVtbl;
  v5[0] = 0;
  v5[1] = 4;
  dword_118ABD08 = 0;
  dword_118ABD0C = a1;
  dword_118ABD10 = a1;
  dword_118ABD14 = 10000;
  dword_118ABD18 = 10000;
  dword_118ABD1C = 0;
  dword_118ABD20 = 0;
  dword_118ABD2C = 10000;
  dword_118ABD30 = 10000;
  dword_118ABD34 = 0;
  dword_118AB880 = 52;
  dword_118AB884 = 18;
  dword_118AB888 = -1;
  dword_118AB88C = 0;
  dword_118AB890 = 10000;
  dword_118AB894 = -1;
  dword_118AB898 = 0;
  dword_118AB89C = 2;
  dword_118AB8A4 = (int)&unk_118ABDF0;
  dword_118AB8A8 = 0;
  dword_118AB8AC = 48;
  dword_118AB8B0 = (int)&dword_118ABD08;
  if ( !v2->CreateEffect(
          g_DirectInputDevice2A,
          &CLSID_GUID_Spring,
          (LPCDIEFFECT)&dword_118AB880,
          (LPDIRECTINPUTEFFECT *)&dword_118ABDEC,
          0) )
  {
    dword_118ABD78 = a1;
    dword_118ABDF8 = 1;
  }
  dword_118ABDA8 = (int)v5;
  v3 = g_DirectInputDevice2A->lpVtbl;
  dword_118ABAC0 = 10000;
  dword_118ABAC4 = 0;
  dword_118ABAC8 = 0;
  dword_118ABACC = 250000;
  dword_118ABD88 = 52;
  dword_118ABD8C = 18;
  dword_118ABD90 = dword_100BD438;
  dword_118ABD94 = 0;
  dword_118ABD98 = 10000;
  dword_118ABD9C = -1;
  dword_118ABDA0 = 0;
  dword_118ABDA4 = 2;
  dword_118ABDAC = (int)&dword_100BD430;
  dword_118ABDB0 = 0;
  dword_118ABDB4 = 16;
  dword_118ABDB8 = (int)&dword_118ABAC0;
  return v3->CreateEffect(
           g_DirectInputDevice2A,
           &CLSID_GUID_Square,
           (LPCDIEFFECT)&dword_118ABD88,
           (LPDIRECTINPUTEFFECT *)&dword_118ABDFC,
           0);
}
// 100BD430: using guessed type int dword_100BD430;
// 100BD438: using guessed type int dword_100BD438;
// 118AB880: using guessed type int dword_118AB880;
// 118AB884: using guessed type int dword_118AB884;
// 118AB888: using guessed type int dword_118AB888;
// 118AB88C: using guessed type int dword_118AB88C;
// 118AB890: using guessed type int dword_118AB890;
// 118AB894: using guessed type int dword_118AB894;
// 118AB898: using guessed type int dword_118AB898;
// 118AB89C: using guessed type int dword_118AB89C;
// 118AB8A0: using guessed type int dword_118AB8A0;
// 118AB8A4: using guessed type int dword_118AB8A4;
// 118AB8A8: using guessed type int dword_118AB8A8;
// 118AB8AC: using guessed type int dword_118AB8AC;
// 118AB8B0: using guessed type int dword_118AB8B0;
// 118ABAC0: using guessed type int dword_118ABAC0;
// 118ABAC4: using guessed type int dword_118ABAC4;
// 118ABAC8: using guessed type int dword_118ABAC8;
// 118ABACC: using guessed type int dword_118ABACC;
// 118ABD08: using guessed type int dword_118ABD08;
// 118ABD0C: using guessed type int dword_118ABD0C;
// 118ABD10: using guessed type int dword_118ABD10;
// 118ABD14: using guessed type int dword_118ABD14;
// 118ABD18: using guessed type int dword_118ABD18;
// 118ABD1C: using guessed type int dword_118ABD1C;
// 118ABD20: using guessed type int dword_118ABD20;
// 118ABD24: using guessed type int dword_118ABD24;
// 118ABD28: using guessed type int dword_118ABD28;
// 118ABD2C: using guessed type int dword_118ABD2C;
// 118ABD30: using guessed type int dword_118ABD30;
// 118ABD34: using guessed type int dword_118ABD34;
// 118ABD78: using guessed type int dword_118ABD78;
// 118ABD88: using guessed type int dword_118ABD88;
// 118ABD8C: using guessed type int dword_118ABD8C;
// 118ABD90: using guessed type int dword_118ABD90;
// 118ABD94: using guessed type int dword_118ABD94;
// 118ABD98: using guessed type int dword_118ABD98;
// 118ABD9C: using guessed type int dword_118ABD9C;
// 118ABDA0: using guessed type int dword_118ABDA0;
// 118ABDA4: using guessed type int dword_118ABDA4;
// 118ABDA8: using guessed type int dword_118ABDA8;
// 118ABDAC: using guessed type int dword_118ABDAC;
// 118ABDB0: using guessed type int dword_118ABDB0;
// 118ABDB4: using guessed type int dword_118ABDB4;
// 118ABDB8: using guessed type int dword_118ABDB8;
// 118ABDEC: using guessed type int dword_118ABDEC;
// 118ABDF8: using guessed type int dword_118ABDF8;
// 118ABDFC: using guessed type int dword_118ABDFC;
