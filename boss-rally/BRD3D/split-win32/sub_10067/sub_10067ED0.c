#include "types-win32.h"
//----- (10067ED0) --------------------------------------------------------
int sub_10067ED0() {
  int result; // eax
  int v1;     // edx
  int v2;     // ecx
  int v3;     // eax
  int v4;     // [esp+8h] [ebp-10h] BYREF
  float v5;   // [esp+Ch] [ebp-Ch]
  float v6;   // [esp+10h] [ebp-8h] BYREF
  float v7;   // [esp+14h] [ebp-4h] BYREF

  result = dword_100B36FC;
  if (dword_100B36FC) {
    result = dword_10ACEDA8[0];
    if ((*(_BYTE *)(dword_10ACEDA8[0] + 104) & 1) == 0) {
        result = -1;
        if (dword_10AA3470 != -1) {
            if (qword_118AC770)
                return result;
            dword_10AA3470 = -1;
            dword_10AF9B90 = -1;
            dword_10AF9BA0 = 0;
        }
        v1 = dword_10AF9B8C;
        if (dword_10AF9B8C == -1) {
            v2 = dword_10AF9B70;
            dword_118AC77C = 0;
            dword_118AC778 = 0;
            qword_118AC770 = 0i64;
        } else {
            v2 = dword_10AF9B70;
            if (dword_10AF9B8C == dword_10AF9B90 && dword_10AF9B70 == dword_10AF9B74) {
                if (flt_10AF9B98 >= 0.0) {
                    v5 = sub_10067AE0((int)&dword_10AF9B58,
                                      (int)&dword_10AF9B64,
                                      COERCE_FLOAT(dword_10AF9B70 + 48),
                                      (int)&dword_10AF9B78) *
                         flt_10AF9B98;
                    sub_10067BC0(
                        (float *)&dword_10AF9B58, (float *)dword_10AF9B70, &v7, &v6, &v4, 0);
                } else {
                    v5 = -(sub_10067AE0((int)&dword_10AF9B58,
                                        (int)&dword_10AF9B58,
                                        COERCE_FLOAT(dword_10AF9B70 + 48),
                                        (int)&dword_10AF9B78) *
                           flt_10AF9B98);
                    sub_10067BC0(
                        (float *)&dword_10AF9B58, (float *)dword_10AF9B70, &v7, &v6, &v4, 1);
                }
                v4 = (dword_10AF9B9C * v4) >> 8;
                if (!dword_10AF9BA0) {
                    dword_10AF9BA0 = 1;
                    strftime((char *)3,
                             *(&SizeInBytes + 6 * dword_10AF9B84),
                             (&Format)[6 * dword_10AF9B84],
                             *(&Tm + 6 * dword_10AF9B84));
                }
                if (!dword_10ACEE20[2778 * dword_106C1638] &&
                    (dword_100AA8B4 == 1 || !dword_10ACEE20[2778 * dword_106C1690])) {
                    qword_118AC770 = (__int64)(v5 * 0.000090909089 * 4294967296.0);
                    v3 = (__int64)(v6 * (double)v4) +
                         ((unsigned int)(__int64)(v7 * (double)v4) << 16);
                    if (!dword_118AC77C)
                        v3 = (v3 >> 1) & 0x7FFF7FFF;
                    dword_118AC77C = v3;
                }
                dword_10AF9B64 = dword_10AF9B58;
                v2 = dword_10AF9B70;
                dword_10AF9B68 = dword_10AF9B5C;
                dword_10AF9B6C = dword_10AF9B60;
                dword_10AF9B78 = *(_DWORD *)(dword_10AF9B70 + 48);
                dword_10AF9B7C = *(_DWORD *)(dword_10AF9B70 + 52);
                dword_10AF9B80 = *(_DWORD *)(dword_10AF9B70 + 56);
                v1 = dword_10AF9B8C;
            } else {
                dword_10AF9BA0 = 0;
                dword_118AC77C = ((unsigned int)dword_118AC77C >> 1) & 0x7FFF7FFF;
            }
        }
        result = dword_10AF9B84;
        dword_10AF9B90 = v1;
        dword_10AF9B88 = dword_10AF9B84;
        dword_10AF9B74 = v2;
    }
  }
  return result;
}
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100B36FC: using guessed type int dword_100B36FC;
// 106C1638: using guessed type int dword_106C1638;
// 106C1690: using guessed type int dword_106C1690;
// 10AA3470: using guessed type int dword_10AA3470;
// 10ACEDA8: using guessed type int dword_10ACEDA8[];
// 10ACEE20: using guessed type int dword_10ACEE20[];
// 10AF9B58: using guessed type int dword_10AF9B58;
// 10AF9B5C: using guessed type int dword_10AF9B5C;
// 10AF9B60: using guessed type int dword_10AF9B60;
// 10AF9B64: using guessed type int dword_10AF9B64;
// 10AF9B68: using guessed type int dword_10AF9B68;
// 10AF9B6C: using guessed type int dword_10AF9B6C;
// 10AF9B70: using guessed type int dword_10AF9B70;
// 10AF9B74: using guessed type int dword_10AF9B74;
// 10AF9B78: using guessed type int dword_10AF9B78;
// 10AF9B7C: using guessed type int dword_10AF9B7C;
// 10AF9B80: using guessed type int dword_10AF9B80;
// 10AF9B84: using guessed type int dword_10AF9B84;
// 10AF9B88: using guessed type int dword_10AF9B88;
// 10AF9B8C: using guessed type int dword_10AF9B8C;
// 10AF9B90: using guessed type int dword_10AF9B90;
// 10AF9B98: using guessed type float flt_10AF9B98;
// 10AF9B9C: using guessed type int dword_10AF9B9C;
// 10AF9BA0: using guessed type int dword_10AF9BA0;
// 118AC770: using guessed type __int64 qword_118AC770;
// 118AC778: using guessed type int dword_118AC778;
// 118AC77C: using guessed type int dword_118AC77C;
