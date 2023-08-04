#include "../../types-win32.h"
//----- (1004CAC0) --------------------------------------------------------
int __cdecl sub_1004CAC0(int a1)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _WORD *v8; // edi
  int v9; // ebx
  LPCSTR v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // eax
  char *v14; // edi
  int v15; // ebx
  LPCSTR v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  int v19; // ebx
  LPCSTR v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // edi
  int v23; // ebx
  LPCSTR v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // edi
  _DWORD *v27; // eax
  _DWORD *v28; // edi
  int v29; // ebx
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  __int16 v32; // cx
  _DWORD *v33; // eax
  _WORD *v34; // edi
  int v35; // ebx
  LPCSTR v36; // eax
  _DWORD *v37; // eax
  _DWORD *v38; // edi
  int v39; // ebx
  float v41; // [esp+19Ch] [ebp-38h]
  float v42; // [esp+19Ch] [ebp-38h]
  int v43; // [esp+1C4h] [ebp-10h]
  _DWORD *v44; // [esp+1D8h] [ebp+4h]

  v2 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v2 + 108) = 1;
  v3 = (_DWORD *)malloc(0x348u);
  if ( v3 )
    v4 = meth_10048470(v3);
  else
    v4 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v4;
  if ( !v4 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v4[208] = a1;
  v4[4] = 0;
  v4[206] = 1128464384;
  v4[207] = 1124204544;
  v5 = (_DWORD *)malloc(0x1E214u);
  if ( v5 )
    v6 = meth_100476C0(v5);
  else
    v6 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v6;
  if ( !v6 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v6 + 56))(
    v6,
    a1,
    0,
    0,
    9,
    2,
    5,
    0,
    0);
  ++*((_WORD *)v4 + 10);
  v7 = (_DWORD *)malloc(0x1E214u);
  if ( v7 )
    v8 = meth_100476C0(v7);
  else
    v8 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v8;
  if ( !v8 )
    sub_1003E260(4);
  v9 = *(_DWORD *)v8;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v8 + 56))(
    v8,
    a1,
    v4[206],
    1092616192,
    1048585,
    2,
    5,
    1,
    -1);
  v8[61702] = 3;
  v10 = getCaptionString(0x26u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v9 + 52))(v8, v10, 1, 1, &unk_100AB508);
  ++*((_WORD *)v4 + 10);
  v11 = (_DWORD *)malloc(0x1E214u);
  if ( v11 )
    v12 = meth_100476C0(v11);
  else
    v12 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v12;
  if ( !v12 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v12 + 56))(
    v12,
    a1,
    v4[206],
    v4[207],
    12289,
    2,
    5,
    1,
    -1);
  v13 = v12[3598];
  v12[1] = sub_1003EC80;
  v12[30845] = 1;
  v44 = v12 + 3598;
  v43 = v13;
  (*(void (__stdcall **)(int, void *, int, _DWORD, int))(v13 + 20))(262145, &unk_100AB4D8, 5, 0, -1);
  v14 = aE_0;
  do
  {
    v15 = 0;
    if ( dword_10AA2A0C == 3 && (v14 == aE_0 || v14 == (char *)&unk_100AB338) )
    {
      v15 = 16;
      dword_10AA2840 = 2;
    }
    if ( getCaptionString(*(_DWORD *)v14) )
    {
      v16 = getCaptionString(*(_DWORD *)v14);
      (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, void *, _DWORD))(v43 + 16))(
        v44,
        v16,
        v15,
        1,
        &unk_100AB4D8,
        0);
    }
    v14 += 8;
  }
  while ( (int)v14 < (int)&dword_100AB3D8 );
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v17 = (_DWORD *)malloc(0x1E214u);
  if ( v17 )
    v18 = meth_100476C0(v17);
  else
    v18 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v18;
  if ( !v18 )
    sub_1003E260(4);
  v19 = *v18;
  v41 = *((float *)v4 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v18 + 56))(
    v18,
    a1,
    v4[206],
    LODWORD(v41),
    1056769,
    2,
    5,
    1,
    -1);
  v18[3] = sub_10047360;
  v18[2] = sub_10040680;
  v18[6] = sub_10040450;
  *((_WORD *)v18 + 61702) = 3;
  v20 = getCaptionString(0x27u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v19 + 52))(v18, v20, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v21 = (_DWORD *)malloc(0x1E214u);
  if ( v21 )
    v22 = meth_100476C0(v21);
  else
    v22 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v22;
  if ( !v22 )
    sub_1003E260(4);
  v23 = *v22;
  v42 = *((float *)v4 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v22 + 56))(
    v22,
    a1,
    v4[206],
    LODWORD(v42),
    1056769,
    2,
    5,
    1,
    -1);
  v22[3] = sub_10047360;
  v22[2] = sub_10046560;
  *((_WORD *)v22 + 61702) = 3;
  v24 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v23 + 52))(v22, v24, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v22;
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v25 = (_DWORD *)malloc(0x1E214u);
  if ( v25 )
    v26 = meth_100476C0(v25);
  else
    v26 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v26;
  if ( !v26 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v26 + 56))(
    v26,
    a1,
    1117782016,
    1110966272,
    9,
    2,
    5,
    0,
    9);
  ++*((_WORD *)v4 + 10);
  v27 = (_DWORD *)malloc(0x1E214u);
  if ( v27 )
    v28 = meth_100476C0(v27);
  else
    v28 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v28;
  if ( !v28 )
    sub_1003E260(4);
  v29 = *v28;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v28 + 56))(
    v28,
    a1,
    v4[206],
    1124532224,
    1052673,
    2,
    5,
    1,
    -1);
  v28[1] = sub_1003F8D0;
  *((_WORD *)v28 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v29 + 52))(v28, asc_100AD300, 1, 1, &unk_100AB488);
  ++*((_WORD *)v4 + 10);
  v30 = (_DWORD *)malloc(0x1E214u);
  if ( v30 )
    v31 = meth_100476C0(v30);
  else
    v31 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v31;
  if ( !v31 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v31 + 56))(
    v31,
    a1,
    1134690304,
    1110966272,
    1,
    2,
    5,
    1,
    22);
  v31[1] = sub_10041870;
  v32 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v31 + 5466);
  *((_WORD *)v31 + 5467) = v32;
  ++*((_WORD *)v4 + 10);
  v33 = (_DWORD *)malloc(0x1E214u);
  if ( v33 )
    v34 = meth_100476C0(v33);
  else
    v34 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v34;
  if ( !v34 )
    sub_1003E260(4);
  v35 = *(_DWORD *)v34;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v34 + 56))(
    v34,
    a1,
    v4[206],
    1125842944,
    1048577,
    2,
    5,
    1,
    -1);
  v34[61702] = 3;
  v36 = getCaptionString(0x28u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v35 + 52))(v34, v36, 1, 1, &unk_100AB4C8);
  ++*((_WORD *)v4 + 10);
  v37 = (_DWORD *)malloc(0x1E214u);
  if ( v37 )
    v38 = meth_100476C0(v37);
  else
    v38 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v38;
  if ( !v38 )
    sub_1003E260(4);
  v39 = *v38;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v38 + 56))(
    v38,
    a1,
    v4[206],
    1120403456,
    1052673,
    2,
    5,
    1,
    -1);
  v38[1] = sub_100400E0;
  *((_WORD *)v38 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v39 + 52))(v38, asc_100AD300, 1, 1, &unk_100AB4C8);
  ++*((_WORD *)v4 + 10);
  dword_10AA2850 = sub_10040330(dword_100AC520[dword_10AA2A0C]);
  return 1;
}
// 1004CAC0: using guessed type int __cdecl sub_1004CAC0(int);
// 100AB3D8: using guessed type int dword_100AB3D8;
// 100AB448: using guessed type int dword_100AB448;
// 10AA2840: using guessed type int dword_10AA2840;
// 10AA2850: using guessed type int dword_10AA2850;
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA2A0C: using guessed type int dword_10AA2A0C;
