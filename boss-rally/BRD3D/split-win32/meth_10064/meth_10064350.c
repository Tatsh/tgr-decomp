#include "types-win32.h"
//----- (10064350) --------------------------------------------------------
void __thiscall meth_10064350(_DWORD *this) {
  int v2;       // eax
  int v3;       // ecx
  int v4;       // eax
  int v5;       // edx
  int v6;       // ecx
  double v7;    // st7
  int *v8;      // eax
  int v9;       // ecx
  int v10;      // edx
  int i;        // edi
  int *v12;     // eax
  float *v13;   // ebx
  float *v14;   // ebp
  int v15;      // eax
  float *v16;   // edi
  int v17;      // edx
  double v18;   // st7
  double v19;   // st7
  double v20;   // st6
  double v21;   // st7
  char v23;     // c0
  float v24;    // [esp+0h] [ebp-78h]
  float v25;    // [esp+0h] [ebp-78h]
  float v26;    // [esp+0h] [ebp-78h]
  float v27;    // [esp+0h] [ebp-78h]
  int v28;      // [esp+14h] [ebp-64h]
  float v29;    // [esp+14h] [ebp-64h]
  float v30;    // [esp+18h] [ebp-60h]
  float v31;    // [esp+18h] [ebp-60h]
  float v32;    // [esp+18h] [ebp-60h]
  float v33;    // [esp+1Ch] [ebp-5Ch]
  float v34;    // [esp+1Ch] [ebp-5Ch]
  float v35;    // [esp+1Ch] [ebp-5Ch]
  float *v36;   // [esp+20h] [ebp-58h]
  float v37;    // [esp+20h] [ebp-58h]
  float v38;    // [esp+20h] [ebp-58h]
  int v39[3];   // [esp+24h] [ebp-54h] BYREF
  int v40[3];   // [esp+30h] [ebp-48h] BYREF
  int v41[3];   // [esp+3Ch] [ebp-3Ch] BYREF
  int v42[3];   // [esp+48h] [ebp-30h] BYREF
  int v43[3];   // [esp+54h] [ebp-24h] BYREF
  float v44[3]; // [esp+60h] [ebp-18h] BYREF
  float v45[3]; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = this[996];
  v3 = this[995];
  v2 *= 5;
  v30 = *(float *)(v3 + 8 * v2 + 100) - *(float *)(v3 + 8 * v2 + 140);
  sub_1003AEE0((float *)v40, (float *)(v3 + 8 * v2 + 64), (float *)(v3 + 8 * v2 + 76));
  v4 = this[995] + 40 * this[996];
  sub_1003AEE0((float *)v39, (float *)(v4 + 104), (float *)(v4 + 116));
  sub_1003B050((float *)v39, (float *)v40, (float *)v39);
  v5 = this[995];
  v40[1] = v39[0];
  v6 = 5 * this[996];
  *(float *)v40 = -*(float *)&v39[1];
  v40[2] = 0;
  sub_1003B050((float *)v39, (float *)(v5 + 8 * v6 + 76), (float *)(v5 + 8 * v6 + 116));
  sub_1003AEE0((float *)v39, (float *)this + 12, (float *)v39);
  v7 = sub_1003AC90((float *)v40, (float *)v39);
  v8 = (int *)this[995];
  if (v7 >= 0.0) {
    v10 = this[996];
    v9 = v10 - 1;
    goto LABEL_7;
  }
  v9 = this[996];
  v10 = v9 + 1;
  if (v9 + 1 != *((unsigned __int16 *)v8 + 10)) {
  LABEL_7:
    i = this[995];
    v28 = v10;
    goto LABEL_8;
  }
  for (i = *v8; (*(_BYTE *)(i + 22) & 1) != 0; i = *(_DWORD *)(i + 4))
    ;
  v28 = 0;
LABEL_8:
  v12 = &v8[10 * v9];
  v13 = (float *)(v12 + 29);
  v14 = (float *)(v12 + 19);
  sub_1003ADA0((float *)v40, (float *)v12 + 19, (float *)v12 + 29);
  v15 = i + 40 * v28;
  v16 = (float *)(v15 + 116);
  v36 = (float *)(v15 + 76);
  sub_1003ADA0((float *)v39, (float *)(v15 + 76), (float *)(v15 + 116));
  v33 = v30 * 0.5;
  sub_1003AD10((int)v40, v33);
  sub_1003AD10((int)v39, v33);
  sub_1003B050((float *)v42, v14, v13);
  sub_1003B050((float *)v43, v36, v16);
  v17 = this[13];
  v41[0] = this[12];
  v41[1] = v17;
  v41[2] = 0;
  sub_1003AEE0(v44, (float *)v41, (float *)v42);
  sub_1003AEE0(v45, (float *)v41, (float *)v43);
  v34 = sub_1003AC90(v44, (float *)v40);
  v37 = -sub_1003AC90(v45, (float *)v39);
  v31 = sub_1003B0E0((float *)v42, (float *)v43);
  v18 = v34 * v31 / (v37 + v34) / v31;
  v32 = v18;
  v19 = v18 * v32;
  v29 = v19;
  v20 = v19 * v32;
  v35 = v20;
  v38 = v20 * -2.0;
  v24 = 1.0 - (v38 - v29 * -3.0);
  sub_1003ACE0((int)(this + 966), (int)v42, v24);
  v25 = v38 - v29 * -3.0;
  sub_1003B020((int)(this + 966), (int)v43, v25);
  v26 = v35 - (v29 + v29) + v32;
  sub_1003B020((int)(this + 966), (int)v40, v26);
  v27 = v35 - v29;
  sub_1003B020((int)(this + 966), (int)v39, v27);
  sub_1003AFA0((int)(this + 969), (int)v39, (int)v40, v32);
  sub_1003AE50((float *)this + 969);
  sub_1003AC30((float *)this + 972, (float *)this + 975, (float *)this + 969);
  sub_1003AE50((float *)this + 972);
  sub_1003AC30((float *)this + 975, (float *)this + 969, (float *)this + 972);
  sub_1003AEE0((float *)this + 979, (float *)this + 12, (float *)this + 966);
  v21 = sub_1003AC90((float *)this + 972, (float *)this + 979);
  *((float *)this + 982) = v21;
  if (v23)
    v21 = -v21;
  *((float *)this + 978) = v21;
}
// 100646E7: variable 'v23' is possibly undefined
