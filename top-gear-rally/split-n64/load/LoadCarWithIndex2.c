#include "types-n64.h"
//----- (8021CD30) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall LoadCarWithIndex2(char *next_out, int a2, char *a3) {
    char *v5;        // $s1
    unsigned int v6; // $s7
    int v7;          // $s5
    int v8;          // $s1
    char *a5;        // $s0
    char *v10;       // $s1
    int *v11;        // $v0
    __int64 v12;     // $v1
    int v13;         // $t1
    char *v15;       // [sp+68h] [-20h]
    int v16;         // [sp+70h] [-18h]
    int total_out;   // [sp+78h] [-10h] BYREF
    int v18;         // [sp+80h] [-8h]
    int v19;         // [sp+84h] [-4h]

    if (a3 && *((_DWORD *)a3 + 1)) {
        v5 = *(char **)a3;
        next_out = (char *)*((_DWORD *)a3 + 1);
        v6 = *((_DWORD *)a3 + 6);
        v19 = *((_DWORD *)a3 + 4);
        v18 = *((_DWORD *)a3 + 5);
        v15 = (char *)*((_DWORD *)a3 + 2);
        v7 = *((_DWORD *)a3 + 3);
        v16 = 0;
        dword_8031B348 = *((_DWORD *)a3 + 7);
    } else {
        sub_8021C748((unsigned int)&dword_8031B348, a2, 4);
        v8 = a2 + 4;
        v19 = 0xE2F95986;
        sub_8021C748((unsigned int)&dword_8031B348, v8, 4);
        v5 = (char *)(v8 + 4);
        v6 = 0xE2F9597E;
        v18 = 0xE2F95986;
        if (a3)
            v15 = (char *)*((_DWORD *)a3 + 2);
        else
            v15 = (char *)dword_802F7F00;
        v7 = 0;
        v16 = 1;
        dword_8031B348 = 0;
    }
    sub_802649F0();
    for (a5 = &v15[v7];; a5 = &v15[v7]) {
        if (v6 <= 0xE2F9598A) {
            sub_8021735C();
        } else {
            if (((unsigned __int8)v5 & 1) != 0)
                ++v5;
            sub_8021C748((unsigned int)&dword_8031B348, (int)v5, 4);
            v10 = v5 + 4;
            sub_802662E0((unsigned int)a5, 16000);
            v11 = sub_802172D0();
            justReturnsNegative1((int)v11, 0, 0, (int)v10, (int)a5, -486975098);
            v5 = v10 - 486975098;
        }
        sub_802662E0((unsigned int)a5, 16000);
        v7 ^= 0x3E80u;
        if (v16) {
            v16 = 0;
            goto LABEL_21;
        }
        total_out = 16000;
        if (a3) {
            dword_80368AC0 = (int)dword_80324550;
            dword_80368AC4 = (int)&dword_8033CAB0[80];
        }
        inflateWrapper(next_out, &total_out, &v15[v7], 0xE2F95986);
        if (a3) {
            dword_80368AC4 = 0;
            dword_80368AC0 = 0;
        }
        v6 += 0x1D06A676;
        next_out += total_out;
        if (!v6)
            break;
    LABEL_21:
        if (a3)
            break;
    }
    sub_802649F0();
    HIDWORD(v12) = sub_80266188();
    sub_80266088(v12, 62500000LL);
    if (a3) {
        *(_DWORD *)a3 = v5;
        *((_DWORD *)a3 + 6) = v6;
        *((_DWORD *)a3 + 1) = next_out;
        *((_DWORD *)a3 + 4) = v19;
        v13 = v18;
        *((_DWORD *)a3 + 3) = v7;
        *((_DWORD *)a3 + 5) = v13;
        *((_DWORD *)a3 + 2) = v15;
        *((_DWORD *)a3 + 7) = 0xE2F95986;
    }
    return v18;
}
// 8021CDB0: write access to const memory at 8031B348 has been detected
// 8021CE30: write access to const memory at 8031B348 has been detected
// 8021CF80: write access to const memory at 80368AC4 has been detected
// 8021CF84: write access to const memory at 80368AC0 has been detected
// 8021CF58: write access to const memory at 80368AC0 has been detected
// 8021CF5C: write access to const memory at 80368AC4 has been detected
// 8021CFF4: variable 'v12' is possibly undefined
// 802A6140: using guessed type __int64 qword_802A6140;
// 802F7F00: using guessed type int dword_802F7F00[512];
// 8031B348: using guessed type int dword_8031B348;
// 80324550: using guessed type int dword_80324550[512];
// 8033CAB0: using guessed type int dword_8033CAB0[512];
// 80368AC0: using guessed type int dword_80368AC0;
// 80368AC4: using guessed type int dword_80368AC4;
