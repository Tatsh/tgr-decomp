#include "types-win32.h"
//----- (100575F0) --------------------------------------------------------
int __cdecl sub_100575F0(int a1) {
  _DWORD *v1;       // eax
  _DWORD *v2;       // ebp
  _DWORD *v3;       // eax
  _DWORD *v4;       // edi
  _DWORD *v5;       // eax
  _WORD *v6;        // edi
  int v7;           // ebx
  LPCSTR v8;        // eax
  _DWORD *v9;       // eax
  _WORD *v10;       // edi
  int v11;          // ebx
  LPCSTR v12;       // eax
  _DWORD *v13;      // eax
  _DWORD *v14;      // edi
  _DWORD *v15;      // eax
  _DWORD *v16;      // ebx
  int v17;          // edi
  LPCSTR v18;       // eax
  char *v19;        // edx
  const char *v20;  // edi
  unsigned int v21; // kr08_4
  const char *v22;  // esi
  char *v23;        // edi
  int v24;          // edx
  _DWORD *v25;      // eax
  _DWORD *v26;      // esi
  int v27;          // edi
  LPCSTR v28;       // eax
  _DWORD *v29;      // eax
  _DWORD *v30;      // esi
  int v31;          // edi
  LPCSTR v32;       // eax
  _DWORD *v33;      // eax
  _DWORD *v34;      // esi
  float v36;        // [esp+124h] [ebp-38h]
  float v37;        // [esp+124h] [ebp-38h]

  *(_WORD *)(a1 + 18) = 0;
  sub_100586A0();
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
  v1 = (_DWORD *)malloc(0x348u);
  if (v1)
    v2 = meth_10048470(v1);
  else
    v2 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v2;
  if (!v2)
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v2[208] = a1;
  v2[4] = 0;
  v2[206] = 1128464384;
  v2[207] = 1124204544;
  v3 = (_DWORD *)malloc(0x1E214u);
  if (v3)
    v4 = meth_unk1E214_init(v3);
  else
    v4 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v4;
  if (!v4)
    sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v4 + 56))(
      v4, a1, 0, 0, 9, 2, 5, 0, 0);
  ++*((_WORD *)v2 + 10);
  v5 = (_DWORD *)malloc(0x1E214u);
  if (v5)
    v6 = meth_unk1E214_init(v5);
  else
    v6 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v6;
  if (!v6)
    sub_1003E260(4);
  v7 = *(_DWORD *)v6;
  (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v6 + 56))(
      v6, a1, v2[206], 1092616192, 1048585, 2, 5, 1, -1);
  v6[61702] = 3;
  v8 = GetStringWithIndex(0x62u);
  (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v7 + 52))(v6, v8, 1, 1, &unk_100AB508);
  ++*((_WORD *)v2 + 10);
  v9 = (_DWORD *)malloc(0x1E214u);
  if (v9)
    v10 = meth_unk1E214_init(v9);
  else
    v10 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v10;
  if (!v10)
    sub_1003E260(4);
  v11 = *(_DWORD *)v10;
  (*(void(__thiscall **)(_WORD *, int, _DWORD, _DWORD, int, int, int, int, int))(
      *(_DWORD *)v10 + 56))(v10, a1, v2[206], v2[207], 1048585, 2, 5, 1, -1);
  v10[61702] = 52;
  v12 = GetStringWithIndex(0x63u);
  (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, int *))(v11 + 52))(
      v10, v12, 1, 4, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v13 = (_DWORD *)malloc(0x1E214u);
  if (v13)
    v14 = meth_unk1E214_init(v13);
  else
    v14 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v14;
  if (!v14)
    sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v14 + 56))(
      v14, a1, 1125908480, 1126957056, 9, 2, 5, 0, 57);
  ++*((_WORD *)v2 + 10);
  v15 = (_DWORD *)malloc(0x1E214u);
  if (v15)
    v16 = meth_unk1E214_init(v15);
  else
    v16 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v16;
  if (!v16)
    sub_1003E260(4);
  v17 = *v16;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v16 + 56))(
      v16, a1, v2[206], 1127088128, 2097153, 2, 5, 1, -1);
  v16[2] = sub_10042B00;
  v16[1] = sub_1003F210;
  v16[4] = sub_1003F280;
  *((_WORD *)v16 + 61702) = 3;
  (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, int *))(v17 + 52))(
      v16, String2, 1, 1, &dword_100AB448);
  if (strlen(g_lpSessionDesc_dwUser3) > 1) {
    v19 = (char *)v16 + 11109;
    v20 = g_lpSessionDesc_dwUser3;
  } else {
    v18 = GetStringWithIndex(0xC1u);
    v19 = (char *)v16 + 11109;
    v20 = v18;
  }
  v21 = strlen(v20) + 1;
  v22 = v20;
  v23 = v19;
  v24 = v16[2775];
  qmemcpy(v23, v22, v21);
  (*(void(__thiscall **)(_DWORD *))(v24 + 4))(v16 + 2775);
  v16[20] = 197;
  v16[3040] = 197;
  v16[22] = 309;
  v16[3042] = 309;
  v16[21] = 172;
  v16[3041] = 172;
  v16[23] = 188;
  v16[3043] = 188;
  *((_WORD *)v16 + 6076) = *((_WORD *)v16 + 6084) - *((_WORD *)v16 + 6080) - 16;
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v25 = (_DWORD *)malloc(0x1E214u);
  if (v25)
    v26 = meth_unk1E214_init(v25);
  else
    v26 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v26;
  if (!v26)
    sub_1003E260(4);
  v27 = *v26;
  v36 = *((float *)v2 + 207) - -95.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v26 + 56))(
      v26, a1, v2[206], LODWORD(v36), 1056769, 2, 5, 1, -1);
  v26[3] = sub_10047360;
  v26[2] = sub_100443E0;
  *((_WORD *)v26 + 61702) = 3;
  v28 = GetStringWithIndex(0x1Eu);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v27 + 52))(
      v26, v28, 1, 1, &dword_100AB448);
  dword_10AA29BC = (int)v26;
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v29 = (_DWORD *)malloc(0x1E214u);
  if (v29)
    v30 = meth_unk1E214_init(v29);
  else
    v30 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v30;
  if (!v30)
    sub_1003E260(4);
  v31 = *v30;
  v37 = *((float *)v2 + 207) - -114.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v30 + 56))(
      v30, a1, v2[206], LODWORD(v37), 1056769, 2, 5, 1, -1);
  v30[3] = sub_10047360;
  v30[2] = sub_100444C0;
  *((_WORD *)v30 + 61702) = 3;
  v32 = GetStringWithIndex(0xCu);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v31 + 52))(
      v30, v32, 1, 1, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v33 = (_DWORD *)malloc(0x1E214u);
  if (v33)
    v34 = meth_unk1E214_init(v33);
  else
    v34 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v34;
  if (!v34)
    sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v34 + 56))(
      v34, a1, 1117782016, 1110966272, 9, 2, 5, 0, 7);
  ++*((_WORD *)v2 + 10);
  return 1;
}
// 100575F0: using guessed type int __cdecl sub_100575F0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29BC: using guessed type int dword_10AA29BC;
