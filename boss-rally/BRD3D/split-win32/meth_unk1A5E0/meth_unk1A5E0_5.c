#include "types-win32.h"
//----- (1005B910) --------------------------------------------------------
int __thiscall meth_unk1A5E0_5(
    unk1A5E0 *this, int a2, int *a3, __int16 a4, __int16 a5, __int16 a6) {
  int v7;     // edi
  int v8;     // ebx
  int v9;     // ecx
  int v10;    // edx
  int v11;    // ecx
  int v12;    // edx
  double v13; // st7
  int v14;    // ebp
  double v15; // st6
  int v16;    // ecx
  int v17;    // ebp
  double v18; // st7
  int v19;    // edx
  int v20;    // ecx
  int v21;    // eax
  int v22;    // eax
  double v23; // st7
  double v24; // st6
  double v25; // st7
  int v26;    // ebp
  int v28;    // [esp+20h] [ebp+10h]

  *(float *)&this->field_1C = (float)*a3;
  *(float *)&this->field_20 = (float)a3[1];
  *(_DWORD *)&this->gap1A93A[2] = *a3;
  *(_DWORD *)&this->gap1A93A[6] = a3[1];
  *(_DWORD *)&this->gap1A93A[10] = a3[2];
  *(_DWORD *)&this->gap1A93A[14] = a3[3];
  this->field_18 = a2;
  this->field_1A92C[2] = a4;
  this->field_1A92C[1] = a5;
  this->field_1A92C[5] = a6;
  this->field_1A92C[3] = 48;
  this->field_1A92C[4] = 46;
  this->field_1A938 = 58;
  v7 = dword_100AB9F4 - dword_100AB9EC;
  v8 = dword_100AB9F8 - dword_100AB9F0;
  if (dword_100AB9F4 - dword_100AB9EC < 0)
    v7 = 0;
  if (v8 < 0)
    v8 = 0;
  if (*(_DWORD *)&this->field_1A99C[14]) {
    v9 = *a3;
    *(_DWORD *)&this->gap1A93A[50] = *a3;
    v10 = a3[3] + 3;
    v11 = v7 + v9;
    *(_DWORD *)&this->gap1A93A[54] = v10;
    v28 = v10;
    *(_DWORD *)&this->gap1A93A[58] = v11;
    *(_DWORD *)&this->gap1A93A[62] = v8 + v10;
    v12 = a3[2] - v7;
    *(_DWORD *)&this->gap1A93A[66] = v12;
    v13 = (double)v11 - -1.0;
    *(_DWORD *)&this->gap1A93A[70] = a3[3] + 3;
    v14 = *(_DWORD *)&this->gap1A93A[70];
    *(float *)&this->field_1A99C[8] = v13;
    *(_DWORD *)&this->gap1A93A[74] = v7 + v12;
    *(float *)&this->field_1A99C[10] = (float)v28;
    v15 = (double)(v12 - v7);
    *(_DWORD *)&this->gap1A93A[78] = v14 + v8;
    *(float *)&this->field_1A99C[26] = v15 - v13;
    *(float *)&this->field_1A99C[18] = (float)(v11 + 1);
    *(float *)&this->field_1A99C[20] = v15;
  } else if (*(_DWORD *)&this->field_1A99C[16]) {
    v16 = a3[2] + 3;
    *(_DWORD *)&this->gap1A93A[18] = v16;
    *(_DWORD *)&this->gap1A93A[22] = a3[1];
    v17 = *(_DWORD *)&this->gap1A93A[22];
    *(_DWORD *)&this->gap1A93A[26] = v16 + dword_100AB9F4;
    *(_DWORD *)&this->gap1A93A[30] = v17 + dword_100AB9F8;
    *(_DWORD *)&this->gap1A93A[34] = a3[2] + 3;
    v18 = (double)v16;
    *(_DWORD *)&this->gap1A93A[38] = a3[3] - dword_100AB9C8;
    v19 = v16 + dword_100AB9C4;
    v20 = *(_DWORD *)&this->gap1A93A[38];
    *(_DWORD *)&this->gap1A93A[42] = v19;
    v21 = a3[3];
    *(float *)&this->field_1A99C[8] = v18;
    *(_DWORD *)&this->gap1A93A[46] = v21;
    v22 = *(_DWORD *)&this->gap1A93A[30];
    v23 = (double)v22 - -1.0;
    *(float *)&this->field_1A99C[10] = v23;
    v24 = (double)(v20 - v8);
    *(float *)&this->field_1A99C[26] = v24 - v23;
    *(float *)&this->field_1A99C[22] = (float)(v22 + 1);
    *(float *)&this->field_1A99C[24] = v24;
  }
  v25 = *(float *)&this->field_1A99C[10];
  v26 = (__int64)*(float *)&this->field_1A99C[8];
  *(_DWORD *)&this->gap1A93A[82] = v26;
  *(_DWORD *)&this->gap1A93A[90] = v26 + v7;
  *(_DWORD *)&this->gap1A93A[86] = (__int64)v25;
  *(_DWORD *)&this->gap1A93A[94] = (__int64)v25 + v8;
  return 1;
}
// 100AB9C4: using guessed type int dword_100AB9C4;
// 100AB9C8: using guessed type int dword_100AB9C8;
// 100AB9EC: using guessed type int dword_100AB9EC;
// 100AB9F0: using guessed type int dword_100AB9F0;
// 100AB9F4: using guessed type int dword_100AB9F4;
// 100AB9F8: using guessed type int dword_100AB9F8;
