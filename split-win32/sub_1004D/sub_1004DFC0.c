#include "../../types-win32.h"
//----- (1004DFC0) --------------------------------------------------------
int __cdecl sub_1004DFC0(int a1)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  _WORD *v8; // ebx
  int v9; // edi
  LPCSTR v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // eax
  float *v14; // ebx
  int v15; // eax
  int v16; // edi
  void (__thiscall *v17)(float *, _DWORD, _DWORD, int, void *, int); // edx
  char **v18; // edi
  __int64 v19; // rax
  _DWORD *v20; // eax
  _DWORD *v21; // edi
  int v22; // ebx
  LPCSTR v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // edi
  int v26; // ebx
  LPCSTR v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // edi
  int v30; // ebx
  LPCSTR v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // edi
  _DWORD *v34; // eax
  _DWORD *v35; // edi
  _DWORD *v36; // eax
  _DWORD *v37; // edi
  _DWORD *v38; // eax
  _DWORD *v39; // edi
  int v40; // ebx
  LPCSTR v41; // eax
  _DWORD *v42; // eax
  _DWORD *v43; // edi
  int v44; // ebx
  LPCSTR v45; // eax
  float v47; // [esp+1E0h] [ebp-34h]
  float v48; // [esp+1E0h] [ebp-34h]
  float v49; // [esp+1E0h] [ebp-34h]
  void (__thiscall *v50)(float *, _DWORD, _DWORD, int, void *, int); // [esp+218h] [ebp+4h]

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
  v10 = getCaptionString(0x21u);
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
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v12 + 56))(
    v12,
    a1,
    1117782016,
    1110966272,
    9,
    2,
    5,
    0,
    9);
  ++*((_WORD *)v4 + 10);
  v13 = (_DWORD *)malloc(0x1E214u);
  if ( v13 )
    v14 = (float *)meth_100476C0(v13);
  else
    v14 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v14;
  if ( !v14 )
    sub_1003E260(4);
  (*(void (__thiscall **)(float *, int, _DWORD, _DWORD, int, int, int, int, int))(*(_DWORD *)v14 + 56))(
    v14,
    a1,
    v4[206],
    v4[207],
    12289,
    2,
    5,
    1,
    -1);
  *((_DWORD *)v14 + 1) = sub_1003EE20;
  *((_DWORD *)v14 + 30845) = 1;
  v15 = dword_10AA2A34;
  if ( dword_10AA2A34 < 0 )
  {
    v15 = 0;
  }
  else if ( dword_10AA2A34 > 11 )
  {
    v15 = 11;
  }
  v16 = *((_DWORD *)v14 + 3598);
  (*(void (__thiscall **)(_DWORD *, int, void *, int, int, int))(v16 + 20))(
    (_DWORD *)v14 + 3598,
    262145,
    &unk_100AB548,
    4,
    v15,
    -1);
  v17 = *(void (__thiscall **)(float *, _DWORD, _DWORD, int, void *, int))(v16 + 16);
  *((_DWORD *)v14 + 3599) = sub_1004E810;
  v50 = v17;
  v18 = off_100B89C8;
  do
    v50(v14 + 3598, *v18++, 0, 1, &unk_100AB4D8, 1);
  while ( (int)v18 < (int)aFancyCar );
  if ( dword_10AA2A34 >= 0 )
  {
    if ( dword_10AA2A34 <= 11 )
      v14[30842] = v14[30848] - (v14[30849] - v14[30848]) * (double)dword_10AA2A34 * -0.090909094;
    else
      v14[30842] = v14[30849];
  }
  else
  {
    v14[30842] = v14[30848];
  }
  v19 = (__int64)v14[30842];
  *((_DWORD *)v14 + 30834) = v19;
  *((_DWORD *)v14 + 30836) = v19 + 16;
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v20 = (_DWORD *)malloc(0x1E214u);
  if ( v20 )
    v21 = meth_100476C0(v20);
  else
    v21 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v21;
  if ( !v21 )
    sub_1003E260(4);
  v22 = *v21;
  v47 = *((float *)v4 + 207) - -76.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v21 + 56))(
    v21,
    a1,
    v4[206],
    LODWORD(v47),
    1056769,
    2,
    5,
    1,
    -1);
  v21[3] = sub_10047360;
  v21[2] = sub_10042CF0;
  *((_WORD *)v21 + 61702) = 3;
  v23 = getCaptionString(0x2Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v22 + 52))(v21, v23, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v24 = (_DWORD *)malloc(0x1E214u);
  if ( v24 )
    v25 = meth_100476C0(v24);
  else
    v25 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v25;
  if ( !v25 )
    sub_1003E260(4);
  v26 = *v25;
  v48 = *((float *)v4 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v25 + 56))(
    v25,
    a1,
    v4[206],
    LODWORD(v48),
    1056769,
    2,
    5,
    1,
    -1);
  v25[3] = sub_10047360;
  v25[2] = sub_10042D60;
  *((_WORD *)v25 + 61702) = 3;
  v27 = getCaptionString(0x2Fu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v26 + 52))(v25, v27, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v28 = (_DWORD *)malloc(0x1E214u);
  if ( v28 )
    v29 = meth_100476C0(v28);
  else
    v29 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v29;
  if ( !v29 )
    sub_1003E260(4);
  v30 = *v29;
  v49 = *((float *)v4 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v29 + 56))(
    v29,
    a1,
    v4[206],
    LODWORD(v49),
    1056769,
    2,
    5,
    1,
    -1);
  v29[3] = sub_10047360;
  v29[2] = sub_100466C0;
  *((_WORD *)v29 + 61702) = 3;
  v31 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v30 + 52))(v29, v31, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v29;
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v32 = (_DWORD *)malloc(0x1E214u);
  if ( v32 )
    v33 = meth_100476C0(v32);
  else
    v33 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v33;
  if ( !v33 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v33 + 56))(
    v33,
    a1,
    1117257728,
    1129512960,
    1,
    2,
    5,
    1,
    104);
  v33[1] = sub_1003E950;
  ++*((_WORD *)v4 + 10);
  v34 = (_DWORD *)malloc(0x1E214u);
  if ( v34 )
    v35 = meth_100476C0(v34);
  else
    v35 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v35;
  if ( !v35 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v35 + 56))(
    v35,
    a1,
    1117126656,
    1132822528,
    9,
    2,
    5,
    1,
    106);
  ++*((_WORD *)v4 + 10);
  v36 = (_DWORD *)malloc(0x1E214u);
  if ( v36 )
    v37 = meth_100476C0(v36);
  else
    v37 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v37;
  if ( !v37 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v37 + 56))(
    v37,
    a1,
    1117650944,
    1132462080,
    1,
    2,
    5,
    1,
    107);
  v37[1] = sub_1003EA40;
  ++*((_WORD *)v4 + 10);
  v38 = (_DWORD *)malloc(0x1E214u);
  if ( v38 )
    v39 = meth_100476C0(v38);
  else
    v39 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v39;
  if ( !v39 )
    sub_1003E260(4);
  v40 = *v39;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v39 + 56))(
    v39,
    a1,
    1135181824,
    1119092736,
    1056769,
    2,
    5,
    1,
    -1);
  v39[1] = sub_1003E980;
  *((_WORD *)v39 + 61702) = 3;
  v41 = getCaptionString(0x2Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, void *))(v40 + 52))(v39, v41, 1, 1, &unk_100AB468);
  ++*((_WORD *)v4 + 10);
  v42 = (_DWORD *)malloc(0x1E214u);
  if ( v42 )
    v43 = meth_100476C0(v42);
  else
    v43 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v43;
  if ( !v43 )
    sub_1003E260(4);
  v44 = *v43;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v43 + 56))(
    v43,
    a1,
    1135181824,
    1124073472,
    1056769,
    2,
    5,
    1,
    -1);
  v43[1] = sub_1003E9E0;
  *((_WORD *)v43 + 61702) = 3;
  v45 = getCaptionString(0x2Fu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, void *))(v44 + 52))(v43, v45, 1, 1, &unk_100AB468);
  ++*((_WORD *)v4 + 10);
  return 1;
}
// 1004DFC0: using guessed type int __cdecl sub_1004DFC0(int);
// 100AB448: using guessed type int dword_100AB448;
// 100B89C8: using guessed type char *off_100B89C8[12];
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA2A34: using guessed type int dword_10AA2A34;
