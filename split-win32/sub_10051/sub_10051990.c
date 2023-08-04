#include "../../types-win32.h"
//----- (10051990) --------------------------------------------------------
int __cdecl sub_10051990(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  int v16; // ebx
  LPCSTR v17; // eax

  v1 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
  v2 = (_DWORD *)malloc(0x348u);
  if ( v2 )
    v3 = sub_10048470(v2);
  else
    v3 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v3;
  if ( !v3 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v3[208] = a1;
  v3[4] = 0;
  v3[206] = 1128464384;
  v3[207] = 1124204544;
  v4 = (_DWORD *)malloc(0x1E214u);
  if ( v4 )
    v5 = sub_100476C0(v4);
  else
    v5 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v5;
  if ( !v5 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v5 + 56))(
    v5,
    a1,
    0,
    0,
    9,
    2,
    5,
    0,
    0);
  ++*((_WORD *)v3 + 10);
  v6 = (_DWORD *)malloc(0x1E214u);
  if ( v6 )
    v7 = sub_100476C0(v6);
  else
    v7 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v7;
  if ( !v7 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, _DWORD, int))(*v7 + 56))(
    v7,
    a1,
    0,
    1105723392,
    9,
    2,
    5,
    0,
    78);
  ++*((_WORD *)v3 + 10);
  v8 = (_DWORD *)malloc(0x1E214u);
  if ( v8 )
    v9 = sub_100476C0(v8);
  else
    v9 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v9;
  if ( !v9 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v9 + 56))(
    v9,
    a1,
    1095761920,
    1088421888,
    9,
    2,
    5,
    0,
    79);
  ++*((_WORD *)v3 + 10);
  v10 = (_DWORD *)malloc(0x1E214u);
  if ( v10 )
    v11 = sub_100476C0(v10);
  else
    v11 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v11;
  if ( !v11 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v11 + 56))(
    v11,
    a1,
    1098907648,
    1125711872,
    9,
    2,
    5,
    1,
    71);
  v11[1] = sub_1003F440;
  ++*((_WORD *)v3 + 10);
  v12 = (_DWORD *)malloc(0x1E214u);
  if ( v12 )
    v13 = sub_100476C0(v12);
  else
    v13 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v13;
  if ( !v13 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v13 + 56))(
    v13,
    a1,
    1136918528,
    1127546880,
    9,
    2,
    5,
    1,
    72);
  v13[1] = sub_1003F540;
  ++*((_WORD *)v3 + 10);
  v14 = (_DWORD *)malloc(0x1E214u);
  if ( v14 )
    v15 = sub_100476C0(v14);
  else
    v15 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  v16 = *v15;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, _DWORD, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    1139146752,
    1056769,
    2,
    5,
    0,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_10047120;
  v15[1] = sub_100471F0;
  *((_WORD *)v15 + 61702) = 2;
  v17 = getCaptionString(0x42u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, _DWORD, void *))(v16 + 52))(v15, v17, 1, 0, &unk_100AB438);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  return 1;
}
// 1003F440: using guessed type int __cdecl sub_1003F440(int);
// 1003F540: using guessed type int __cdecl sub_1003F540(int);
// 10047120: using guessed type int __cdecl sub_10047120(int);
// 100471F0: using guessed type int __cdecl sub_100471F0(int);
