#include "types-win32.h"
//----- (1002FB20) --------------------------------------------------------
_DWORD *__cdecl sub_1002FB20(unsigned int a1, int a2) {
  _DWORD *v2;        // eax
  _DWORD *v3;        // eax
  _DWORD *v4;        // eax
  _DWORD *v5;        // eax
  _DWORD *v6;        // eax
  _DWORD *v7;        // eax
  _DWORD *v8;        // eax
  _DWORD *v9;        // eax
  _DWORD *v10;       // eax
  _DWORD *v11;       // eax
  _DWORD *v12;       // eax
  _DWORD *v13;       // eax
  _DWORD *v14;       // eax
  _DWORD *v15;       // eax
  _DWORD *v16;       // eax
  _DWORD *v17;       // eax
  _DWORD *v18;       // eax
  _DWORD *v19;       // eax
  char *v20;         // esi
  _DWORD *v21;       // eax
  _DWORD *v22;       // eax
  char *v23;         // esi
  unsigned int v24;  // edx
  _DWORD *v25;       // eax
  _DWORD *v26;       // eax
  _DWORD *v27;       // eax
  _DWORD *v28;       // eax
  _DWORD *v29;       // eax
  _DWORD *v30;       // eax
  _DWORD *v31;       // eax
  int v32;           // eax
  unsigned int v33;  // esi
  _DWORD *v34;       // eax
  _DWORD *v35;       // eax
  _DWORD *v36;       // eax
  _DWORD *v37;       // eax
  _DWORD *v38;       // eax
  _DWORD *v39;       // eax
  _DWORD *v40;       // eax
  _DWORD *v41;       // eax
  char *v42;         // edi
  _DWORD *v43;       // eax
  _DWORD *v44;       // eax
  _DWORD *v45;       // eax
  _DWORD *v46;       // eax
  _DWORD *v47;       // eax
  _DWORD *v48;       // eax
  _DWORD *v49;       // eax
  _DWORD *v50;       // eax
  _DWORD *v51;       // eax
  _DWORD *result;    // eax
  unsigned int *v53; // [esp-44h] [ebp-5Ch]
  int v54;           // [esp+10h] [ebp-8h]
  BOOL v55;          // [esp+14h] [ebp-4h]
  unsigned int v56;  // [esp+20h] [ebp+8h]

  v2 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v2 = -419430400;
  v2[1] = 0;
  v3 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v3 = -1174399998;
  v3[1] = 0x100000;
  v4 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  if (dword_10690A1C) {
    *v4 = -1191181539;
    v4[1] = 202973192;
    dword_10690A1C = 0;
  } else {
    *v4 = -1191181539;
    v4[1] = 202973240;
  }
  v53 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  sub_1002F900(
      v53, 1002, 1001, 1013, 1001, 1002, 1001, 1013, 1001, 1000, 0, 1004, 0, 0, 0, 0, 1000);
  v5 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v5 = -117440512;
  v5[1] = 0;
  v6 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v6 = -1174400766;
  v6[1] = 0;
  v7 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v7 = -1174401023;
  v7[1] = 0;
  v8 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v8 = -1174401534;
  v8[1] = 0;
  v9 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v9 = -1174402046;
  v9[1] = dword_106C0258;
  v10 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v10 = -1174403582;
  v10[1] = dword_106C0688;
  v11 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v11 = -1174404094;
  v11[1] = dword_106C0920;
  v12 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v12 = -1224736768;
  v12[1] = 1;
  v13 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v13 = -1191182334;
  v13[1] = 1;
  v14 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v14 = -1174400766;
  v14[1] = 0;
  v15 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v15 = -1174401023;
  v15[1] = 0x10000;
  v16 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v16 = -1174401534;
  v16[1] = 0;
  v17 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v17 = -1174402046;
  v17[1] = dword_106C0258;
  v18 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v18 = -1241513984;
  v18[1] = 8729088;
  v19 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v19 = -1224736768;
  v19[1] = (dword_106C1174 != dword_106C3364 ? 4096 : 0x2000) | 0xA0205;
  v20 = sub_10069530();
  sub_10030E20((int)&flt_106C08A0, (int)v20, 0.0, -1.0, 15.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
  v21 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v21 = 58982416;
  v21[1] = v20;
  v22 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v22 = 58851344;
  v22[1] = v20 + 16;
  v23 = sub_10069490();
  sub_100307A0(a2, v23);
  v25 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v25 = 17039424;
  v25[1] = v23;
  v26 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v26 = -1157627903;
  v26[1] = -1;
  v27 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v27 = -1241513984;
  v27[1] = 786432;
  v28 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v28 = -402653184;
  v28[1] = 0;
  v29 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v29 = -183500800;
  v29[1] = 117440512;
  v30 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v30 = -184548880;
  v30[1] = 100663296;
  v31 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v31 = -184549120;
  v31[1] = 83886080;
  v32 = 0;
  v54 = 0;
  do {
    v56 = 0;
    if (*(_WORD *)(a1 + 2)) {
      v55 = v32 == 0;
      v33 = a1 + 12;
      do {
        LOBYTE(v24) = ~(unsigned __int8)*(_WORD *)v33;
        if (v55 == ((v24 >> 3) & 1) && *(_DWORD *)(v33 - 4)) {
          if ((*(_WORD *)v33 & 0x400) != 0) {
              v34 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v34 = -1140850678;
              v34[1] = 0;
              v35 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v35 = -1140849654;
              v35[1] = 0;
              v36 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v36 = -1140842486;
              v36[1] = dword_100AA5D0[*(_BYTE *)v33 & 3];
              v37 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v37 = -1140841462;
              v37[1] = dword_100AA5D0[*(_BYTE *)v33 & 3];
          }
          if ((*(_BYTE *)v33 & 4) != 0) {
              v38 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v38 = -1241513984;
              v38[1] = 12288;
          }
          if (*(char *)v33 < 0 && dword_100AA880) {
              v39 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v39 = -1241513984;
              v39[1] = 512;
          }
          v40 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v40 = -1157627903;
          v40[1] = -1;
          v41 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v41 = -402653184;
          v41[1] = 0;
          v42 = sub_10069490();
          sub_10031140(
              &flt_106C0860, *(_DWORD *)(v33 + 4), *(_DWORD *)(v33 + 8), *(_DWORD *)(v33 + 12));
          sub_100307A0((int)&flt_106C0860, v42);
          v43 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v43 = 17039424;
          v43[1] = v42;
          v44 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v44 = 100663296;
          v44[1] = *(_DWORD *)(v33 - 4);
          v45 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v45 = -1124073472;
          v45[1] = 0;
          if (*(char *)v33 < 0 && dword_100AA880) {
              v46 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v46 = -1224736768;
              v46[1] = 512;
          }
          if ((*(_BYTE *)v33 & 4) != 0) {
              v47 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v47 = -1224736768;
              v47[1] = dword_106C1174 != dword_106C3364 ? 4096 : 0x2000;
          }
          if ((*(_BYTE *)(v33 + 1) & 4) != 0) {
              v48 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v48 = -1140850678;
              v48[1] = -256;
              v49 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v49 = -1140849654;
              v49[1] = -256;
              v50 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v50 = -1140842486;
              v50[1] = 1077952512;
              v51 = (_DWORD *)dword_106C0680;
              dword_106C0680 += 8;
              *v51 = -1140841462;
              v51[1] = 1077952512;
          }
        }
        v24 = a1;
        v33 += 20;
        ++v56;
      } while (v56 < *(unsigned __int16 *)(a1 + 2));
      v32 = v54;
    }
    v54 = ++v32;
  } while (v32 < 2);
  result = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  result[1] = 0;
  *result = -1124073472;
  return result;
}
// 1002FF37: variable 'v24' is possibly undefined
// 100AA880: using guessed type int dword_100AA880;
// 10690A1C: using guessed type int dword_10690A1C;
// 106C0258: using guessed type int dword_106C0258;
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C0860: using guessed type float flt_106C0860;
// 106C08A0: using guessed type float flt_106C08A0;
// 106C0920: using guessed type int dword_106C0920;
// 106C1174: using guessed type int dword_106C1174;
// 106C3364: using guessed type int dword_106C3364;
