#include "types-win32.h"
//----- (10061720) --------------------------------------------------------
void __thiscall meth_10061720(_DWORD *this) {
  int v2;     // edx
  int v3;     // eax
  float *v4;  // ecx
  int v5;     // edx
  double v6;  // st7
  double v7;  // st6
  double v8;  // st7
  double v9;  // st6
  double v10; // rt1
  double v11; // st6
  double v12; // st7
  void *v13;  // ecx
  int v14;    // [esp-10h] [ebp-20h]

  meth_DebugPrint(this);
  v2 = this[90];
  this[95] = this + 744;
  *(_DWORD *)(v2 + 24) = this + 840;
  *(_DWORD *)(this[91] + 24) = this + 856;
  *(_DWORD *)(this[92] + 24) = this + 848;
  *(_DWORD *)(this[93] + 24) = this + 864;
  *(_DWORD *)(*(_DWORD *)(this[90] + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(this[90] + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this[90] + 24) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(this[91] + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(this[91] + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this[91] + 24) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(this[92] + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(this[92] + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this[92] + 24) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(this[93] + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(this[93] + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this[93] + 24) + 16) = 0;
  sub_1006F540((int)(this + 89));
  if (!this[929]) {
    this[927] = 0;
    v14 = this[90];
    this[925] = 0;
    *((_BYTE *)this + 3712) = 0;
    sub_1006C1F0((int)(this + 89), v14, (int)(this + 927), (int)(this + 928), 0.033333335);
    sub_1006C1F0((int)(this + 89), this[91], (int)(this + 927), (int)(this + 928), 0.033333335);
    sub_1006C1F0((int)(this + 89), this[92], (int)(this + 925), (int)(this + 926), 0.033333335);
    sub_1006C1F0((int)(this + 89), this[93], (int)(this + 925), (int)(this + 926), 0.033333335);
  }
  this[929] = 0;
  this[152] = 0;
  this[153] = 0;
  this[154] = 0;
  this[155] = 0;
  this[156] = 0;
  this[157] = 0;
  sub_1006B260((int)(this + 89));
  math_100743A0((int)(this + 119), (int)(this + 89), 0.033333335);
  sub_1006B5F0((int)(this + 89),
               0.033333335,
               (int)(this + 927),
               (int)(this + 925),
               (int)(this + 928),
               (int)(this + 926));
  math_100742D0((float *)this + 119);
  v3 = this[90];
  this[95] = this + 776;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(this[92] + 24) = 0;
  *(_DWORD *)(this[91] + 24) = 0;
  *(_DWORD *)(this[93] + 24) = 0;
  sub_1006EF80((int)(this + 89), (float *)this + 832);
  sub_1006F650((int)(this + 89));
  this[152] = 0;
  this[153] = 0;
  this[154] = 0;
  this[155] = 0;
  this[156] = 0;
  this[157] = 0;
  sub_1006B260((int)(this + 89));
  qmemcpy(this + 175, this + 119, 0x44u);
  math_100743A0((int)(this + 175), (int)(this + 89), 0.033333335);
  v4 = (float *)(this + 129);
  v5 = 3;
  do {
    if (*v4 == 0.0) {
      v6 = 0.0;
    } else if (*v4 <= 0.0) {
      v6 = -1.0;
    } else {
      v6 = 1.0;
    }
    if (v4[56] == 0.0) {
      v7 = 0.0;
    } else if (v4[56] <= 0.0) {
      v7 = -1.0;
    } else {
      v7 = 1.0;
    }
    if (v6 == v7)
      *v4 = v4[56];
    else
      *v4 = 0.0;
    if (*(v4 - 7) == 0.0) {
      v8 = 0.0;
    } else if (*(v4 - 7) <= 0.0) {
      v8 = -1.0;
    } else {
      v8 = 1.0;
    }
    if (v4[49] == 0.0) {
      v9 = 0.0;
    } else if (v4[49] <= 0.0) {
      v9 = -1.0;
    } else {
      v9 = 1.0;
    }
    v10 = v9;
    v11 = v8;
    v12 = v10;
    if (v11 == v10)
      *(v4 - 7) = v4[49];
    else
      *(v4 - 7) = 0.0;
    ++v4;
    --v5;
  } while (v5);
  qmemcpy(this + 158, this + 119, 0x44u);
  math_100742D0((float *)this + 158);
  math_100742D0((float *)this + 158);
  sub_1006EC80((int)this, (int)(this + 89));
  qmemcpy(this + 119, this + 175, 0x44u);
  sub_1006F4A0(v12, this + 89);
  math_10074450((float *)(this[90] + 188), (float *)(this[90] + 120));
  math_10074450((float *)(this[91] + 188), (float *)(this[91] + 120));
  math_10074450((float *)(this[92] + 188), (float *)(this[92] + 120));
  math_10074450((float *)(this[93] + 188), (float *)(this[93] + 120));
  meth_DebugPrint(v13);
}
// 10061BC9: variable 'v13' is possibly undefined
