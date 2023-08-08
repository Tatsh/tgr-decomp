#include "../types-win32.h"
//----- (10063FF0) --------------------------------------------------------
int __thiscall meth_10063FF0(_DWORD *this, int a2, int a3, int a4) {
    int v4;          // esi
    int v5;          // ebx
    int v6;          // eax
    int v7;          // ebp
    unsigned int v8; // ebp
    int v9;          // esi
    int *v10;        // edi
    int v11;         // edx
    double v12;      // st7
    int v13;         // esi
    int i;           // eax
    int *v15;        // eax
    int v16;         // eax
    int v17;         // esi
    int v18;         // eax
    int v20;         // [esp+10h] [ebp-1Ch]
    int v22;         // [esp+18h] [ebp-14h]
    float v23[3];    // [esp+20h] [ebp-Ch] BYREF

    v4 = a4;
    v5 = 0;
    v20 = 0;
    if (a4) {
        v6 = a3;
    } else {
        a4 = dword_106C7CB8;
        v6 = 0;
        v4 = dword_106C7CB8;
        a3 = 0;
    }
    v7 = a2;
    if (a2) {
        if (a2 > 8 || (*(_BYTE *)(v4 + 22) & 1) != 0)
            return 0;
        v8 = 12 * a2;
        v9 = v4 + 40 * v6;
        sub_1003AFA0((int)&flt_10AF97DC[3 * a2], v9 + 64, v9 + 88, 0.2);
        v10 = (int *)((char *)&unk_10AF971C + 12 * a2);
        *v10 = *(_DWORD *)(v9 + 76);
        v10[1] = *(_DWORD *)(v9 + 80);
        v10[2] = *(_DWORD *)(v9 + 84);
        sub_1003AFA0((int)&unk_10AF977C + 12 * a2, v9 + 88, v9 + 64, 0.2);
        sub_1003B050((float *)((char *)&unk_10AF9584 + v8),
                     (float *)((char *)&unk_10AF977C + v8),
                     (float *)((char *)&unk_10AF971C + v8));
        sub_1003B050((float *)((char *)&unk_10AF9524 + v8),
                     &flt_10AF97DC[3 * a2],
                     (float *)((char *)&unk_10AF971C + v8));
        v11 = a2;
        v23[0] = (*(float *)(v9 + 64) + *(float *)(v9 + 88)) * 0.5;
        v12 = *(float *)(v9 + 92) + *(float *)(v9 + 68);
        v13 = 1;
        v23[1] = v12 * 0.5;
        if (a2 - 1 <= 1) {
        LABEL_14:
            if (v11 > dword_10AA34AC) {
                dword_10AA34AC = v11;
                dword_10AA3474 = a4;
                dword_10AF9528 = a3;
                if (v11 <= 2) {
                    dword_10AF9888 = 0;
                    dword_10AF9BA4 = 0;
                } else if (sub_1003BA70(
                               (float *)this + 12, flt_10AF9740, flt_10AF959C, flt_10AF9794)) {
                    v11 = a2;
                    dword_10AF9888 = 0;
                    dword_10AF9BA4 = 1;
                } else {
                    if (sub_1003BA70(
                            (float *)this + 12, flt_10AF9740, flt_10AF953C, flt_10AF97F4)) {
                        v11 = a2;
                        dword_10AF9888 = 1;
                    } else {
                        v11 = a2;
                        dword_10AF9888 = 0;
                    }
                    dword_10AF9BA4 = 0;
                }
                dword_10AF9B28 = *v10;
                dword_10AF9B2C = v10[1];
                dword_10AF9B30 = v10[2];
                v20 = 1;
                v15 = &dword_10AF9728[3 * (v11 >> 1)];
                dword_10ACDE98 = *v15;
                dword_10ACDE9C = v15[1];
                dword_10ACDEA0 = v15[2];
                dword_10AF96BC = v11;
                qmemcpy(&unk_10AF9658, &unk_10AF9788, v8);
                qmemcpy(&unk_10AF96C8, dword_10AF9728, v8);
                qmemcpy(&unk_10AF95F8, &unk_10AF97E8, v8);
            }
        } else {
            v22 = 0;
            for (i = sub_1003BA70((float *)this + 12, v23, flt_10AF9794, flt_10AF97F4); i;
                 i = sub_1003BA70(
                     (float *)this + 12, v23, &flt_10AF9794[v22], &flt_10AF97F4[v22])) {
                ++v13;
                v22 += 3;
                if (v13 >= a2 - 1) {
                    v11 = a2;
                    goto LABEL_14;
                }
            }
            dword_10AF9BAC = 1;
        }
        v7 = a2;
        v5 = v20;
        v4 = a4;
        v6 = a3;
    } else {
        dword_10AA34AC = 0;
        dword_10AF96B8 = 0;
        dword_10AF9BA8 = 0;
        dword_10AF9BAC = 0;
    }
    v16 = v6 + 1;
    if (v16 != *(unsigned __int16 *)(v4 + 20))
        return meth_10063FF0(this, v7 + 1, v16, v4) | v5;
    v17 = *(_DWORD *)v4;
    if (!v17) {
        v17 = dword_106C7CB8;
        if (!dword_106C7CB8)
            return v5;
    }
    do {
        v18 = meth_10063FF0(this, v7 + 1, 0, v17);
        v17 = *(_DWORD *)(v17 + 4);
        v5 |= v18;
    } while (v17);
    return v5;
}
// 10AA3474: using guessed type int dword_10AA3474;
// 10AA34AC: using guessed type int dword_10AA34AC;
// 10ACDE98: using guessed type int dword_10ACDE98;
// 10ACDE9C: using guessed type int dword_10ACDE9C;
// 10ACDEA0: using guessed type int dword_10ACDEA0;
// 10AF9528: using guessed type int dword_10AF9528;
// 10AF96B8: using guessed type int dword_10AF96B8;
// 10AF96BC: using guessed type int dword_10AF96BC;
// 10AF9728: using guessed type int dword_10AF9728[];
// 10AF9888: using guessed type int dword_10AF9888;
// 10AF9B28: using guessed type int dword_10AF9B28;
// 10AF9B2C: using guessed type int dword_10AF9B2C;
// 10AF9B30: using guessed type int dword_10AF9B30;
// 10AF9BA4: using guessed type int dword_10AF9BA4;
// 10AF9BA8: using guessed type int dword_10AF9BA8;
// 10AF9BAC: using guessed type int dword_10AF9BAC;
