#include "../../types-n64.h"
//----- (8022C9FC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8022C9FC(int a1) {
    int v1;                         // $v0
    int v3;                         // $v1
    int v4;                         // $v0
    _DWORD *v5;                     // $v0
    int v6;                         // $v0
    void(__fastcall * v7)(_DWORD);  // $a3
    _DWORD *v8;                     // $a0
    void(__fastcall * v9)(_DWORD);  // $a2
    _DWORD *v10;                    // $a0
    int v11;                        // $v0
    void(__fastcall * v12)(_DWORD); // $a2
    float v13;                      // $f16
    float v14;                      // $f18
    int v15;                        // $t7
    int v16;                        // $a1
    int v17;                        // $a0
    int v18;                        // $t4
    float v19;                      // $f2
    float v20;                      // $f0
    float v21;                      // [sp+30h] [-30h]

    v1 = *(_DWORD *)(a1 + 96);
    if (v1 && sub_802288B4 == *(void(__fastcall **)(int))(v1 + 3800)) {
        **(_DWORD **)(v1 + 8308) &= 0xF000000u;
        *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 8308) + 32) = 0.0;
    }
    v3 = *(_DWORD *)(a1 + 104);
    v4 = *(_DWORD *)(a1 + 96);
    if ((v3 & 1) != 0) {
        if (v4) {
            **(_DWORD **)(v4 + 8308) |= 0x40000u;
            *(_DWORD *)(*(_DWORD *)(a1 + 96) + 3648) = 0;
            v5 = *(_DWORD **)(a1 + 96);
            v5[980] = v5[12];
            v5[981] = v5[13];
            v5[982] = v5[14];
            v6 = *(_DWORD *)(a1 + 96);
            v7 = *(void(__fastcall **)(_DWORD))(v6 + 3800);
            if (v7) {
                v7(*(_DWORD *)(a1 + 96));
                v6 = *(_DWORD *)(a1 + 96);
            }
            *(_DWORD *)(v6 + 3648) = 0;
        }
    } else if ((v3 & 2) != 0) {
        if (v4) {
            if (*(int *)(a1 + 100) < 1) {
                **(_DWORD **)(v4 + 8308) = 786432;
                *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 8308) + 36) = -127;
                *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 8308) + 32) = -1.0;
                v4 = *(_DWORD *)(a1 + 96);
            }
            if (*(int *)(a1 + 100) >= 1) {
                *(_BYTE *)(v4 + 8291) = 2;
                *(float *)(*(_DWORD *)(a1 + 96) + 8292) =
                    *(float *)(*(_DWORD *)(a1 + 96) + 8292) - 0.0;
                v4 = *(_DWORD *)(a1 + 96);
                if (*(float *)(v4 + 8292) < 0.0) {
                    *(float *)(v4 + 8292) = 0.0;
                    v4 = *(_DWORD *)(a1 + 96);
                }
                v8 = (_DWORD *)(v4 + 48);
            } else {
                v8 = (_DWORD *)(v4 + 48);
            }
            *(_DWORD *)(v4 + 3920) = *v8;
            *(_DWORD *)(v4 + 3924) = v8[1];
            *(_DWORD *)(v4 + 3928) = v8[2];
            v9 = *(void(__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 96) + 3800);
            if (v9)
                v9(*(_DWORD *)(a1 + 96));
        }
    } else if (v4) {
        if (*(_BYTE *)(v4 + 8291) == 2) {
            *(float *)(v4 + 8292) = *(float *)(v4 + 8292) + (float)(0.0 * 1.6);
            v4 = *(_DWORD *)(a1 + 96);
            if (*(float *)(v4 + 8292) >= 1.0) {
                *(float *)(v4 + 8292) = 1.0;
                *(_BYTE *)(*(_DWORD *)(a1 + 96) + 8291) = 0;
                v4 = *(_DWORD *)(a1 + 96);
            }
            v10 = (_DWORD *)(v4 + 48);
        } else {
            v10 = (_DWORD *)(v4 + 48);
        }
        *(_DWORD *)(v4 + 3920) = *v10;
        *(_DWORD *)(v4 + 3924) = v10[1];
        *(_DWORD *)(v4 + 3928) = v10[2];
        v11 = *(_DWORD *)(a1 + 96);
        v12 = *(void(__fastcall **)(_DWORD))(v11 + 3800);
        if (v12) {
            v12(*(_DWORD *)(a1 + 96));
            v11 = *(_DWORD *)(a1 + 96);
        }
        *(float *)(v11 + 4072) = *(float *)(v11 + 4072) + (float)(*(float *)(v11 + 4068) * 0.0);
    } else {
        v13 = *(float *)(a1 + 4);
        v14 = *(float *)(a1 + 8);
        v15 = *(_DWORD *)(a1 + 68) + 1;
        *(_DWORD *)(a1 + 12) = *(_DWORD *)a1;
        *(float *)(a1 + 16) = v13;
        *(float *)(a1 + 20) = v14;
        v16 = *(_DWORD *)(a1 + 44);
        v17 = *(_DWORD *)(a1 + 40);
        v18 = 8336 * *(_DWORD *)(a1 + 116) + 8336;
        v19 = (float)((float)((float)(*(float *)(MEMORY[0x80025C70] + 100) * (float)v15) -
                              *(float *)(a1 + 80)) -
                      *(float *)(v17 + 40 * v16 + 140)) /
              (float)(*(float *)(v17 + 40 * v16 + 100) - *(float *)(v17 + 40 * v16 + 140));
        if (*(int *)((char *)&dword_8031B760[948] + v18)) {
            v21 = v19;
            v20 = sub_80224B08((float *)((char *)&dword_8031B760[1014] + v18));
            sub_802290C4(*(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 44), v21, v20 * 0.0);
            *(float *)(a1 + 80) =
                *(float *)(a1 + 80) +
                (float)(sub_80224B08(
                            (float *)&dword_8031B760[2084 * *(_DWORD *)(a1 + 116) + 3098]) *
                        0.0);
        } else {
            sub_802290C4(v17, v16, v19, 2.22);
            *(float *)(a1 + 80) = *(float *)(a1 + 80) + 2.22;
        }
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 44) = 0;
        *(float *)a1 = -2.9421496e-34;
        *(float *)(a1 + 4) = 9.0549455e22;
        *(float *)(a1 + 8) = 1.9692021e31;
        sub_80224808((float *)(a1 + 24), (float *)a1, (float *)(a1 + 12));
        sub_80224528((float *)(a1 + 24), 1.0 / 0.0);
        sub_8022A0E0(a1);
    }
}
// 8022CAA4: write access to const memory at 802A492C has been detected
// 8022CAA8: write access to const memory at 802A4928 has been detected
// 8022CAAC: write access to const memory at 802A4934 has been detected
// 8022CAB0: write access to const memory at 802A4944 has been detected
// 8022CAB4: write access to const memory at 802A4940 has been detected
// 8022CAB8: write access to const memory at 802A494C has been detected
// 8022CABC: write access to const memory at 802A495C has been detected
// 8022CAC0: write access to const memory at 802A4958 has been detected
// 8022CAC4: write access to const memory at 802A4964 has been detected
// 8022CAC8: write access to const memory at 802A4974 has been detected
// 8022CACC: write access to const memory at 802A4970 has been detected
// 8022CAD0: write access to const memory at 802A497C has been detected
// 8022CAD4: write access to const memory at 802A498C has been detected
// 8022CAD8: write access to const memory at 802A4988 has been detected
// 8022CAE0: write access to const memory at 802A4994 has been detected
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028B824: using guessed type int dword_8028B824;
// 8028B828: using guessed type int dword_8028B828;
// 802A4928: using guessed type __int64 qword_802A4928;
// 802A4934: using guessed type int dword_802A4934;
// 802A4940: using guessed type __int64 qword_802A4940;
// 802A494C: using guessed type int dword_802A494C;
// 802A4958: using guessed type __int64 qword_802A4958;
// 802A4964: using guessed type int dword_802A4964;
// 802A4970: using guessed type __int64 qword_802A4970;
// 802A497C: using guessed type int dword_802A497C;
// 802A4988: using guessed type __int64 qword_802A4988;
// 802A4994: using guessed type int dword_802A4994;
// 8031B750: using guessed type float flt_8031B750;
// 8031B760: using guessed type int dword_8031B760[512];
