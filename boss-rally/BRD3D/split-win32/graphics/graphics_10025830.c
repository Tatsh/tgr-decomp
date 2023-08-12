#include "types-win32.h"
//----- (10025830) --------------------------------------------------------
char *__cdecl graphics_10025830(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
  int v8;              // esi
  int v9;              // edi
  int v10;             // eax
  int v11;             // eax
  int v12;             // eax
  int v14;             // [esp+20h] [ebp-29Ch]
  DWORD v15[10];       // [esp+28h] [ebp-294h] BYREF
  int v16;             // [esp+50h] [ebp-26Ch]
  int v17;             // [esp+54h] [ebp-268h]
  int v18;             // [esp+58h] [ebp-264h]
  int v19;             // [esp+5Ch] [ebp-260h]
  int v20;             // [esp+60h] [ebp-25Ch]
  int v21;             // [esp+64h] [ebp-258h]
  int v22;             // [esp+68h] [ebp-254h]
  int v23;             // [esp+6Ch] [ebp-250h]
  int v24;             // [esp+70h] [ebp-24Ch]
  int v25[129];        // [esp+74h] [ebp-248h] BYREF
  int v26;             // [esp+278h] [ebp-44h]
  int v27;             // [esp+27Ch] [ebp-40h]
  int v28;             // [esp+2A4h] [ebp-18h]
  unsigned __int8 v29; // [esp+2A8h] [ebp-14h]
  unsigned __int8 v30; // [esp+2A9h] [ebp-13h]
  unsigned __int8 v31; // [esp+2AAh] [ebp-12h]
  char v32;            // [esp+2ABh] [ebp-11h]
  int v33;             // [esp+2ACh] [ebp-10h]

  v8 = 1 << sub_10027C00(a4);
  v9 = 1 << sub_10027C00(a5);
  v17 = a4;
  v18 = a5;
  math_pow2ExponentToAdd(v15, v8, v9);
  v15[1] = v15[0];
  v23 = 0;
  v25[3] = 0;
  v10 = sub_10027C00(a4);
  v25[16 * v23 + 8] = v10;
  v11 = sub_10027C00(a5);
  dword_10575444 = 0;
  v25[16 * v23 + 9] = v11;
  dword_10575440 = 0;
  v25[16 * v23 + 2] = a6;
  v25[16 * v23 + 1] = a7;
  v25[16 * v23] = a8;
  v24 = 1;
  v33 = 0;
  v26 = 0;
  v27 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v14 = sub_10027B90(v25[16 * v23 + 1], v25[16 * v23], 0);
  v12 = v8 * v9 * _RTC_NumErrors();
  v25[128] = dword_118AA088;
  v16 = v12;
  v19 = a2;
  v20 = a3;
  v21 = 0;
  v22 = 0;
  sub_10025AB0(byte_11829870,
               v12,
               v25[16 * v23 + 1],
               a2,
               a3,
               v25[16 * v23],
               0,
               0,
               v23,
               v24,
               v25,
               dword_118AA088,
               v26,
               v28,
               BYTE1(v28),
               BYTE2(v28),
               SHIBYTE(v28),
               v29,
               v30,
               v31,
               v32,
               v33);
  return graphics_100098A0(a1, byte_11829870, v16, v14);
}
// 10575440: using guessed type int dword_10575440;
// 10575444: using guessed type int dword_10575444;
// 118AA088: using guessed type int dword_118AA088;
