#include "../../types-n64.h"
//----- (80256720) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80256720(int a1, int a2) {
    char *v3;             // $v0
    _BYTE *v4;            // $s0
    unsigned int v5;      // $s3
    char i;               // $t9
    int v7;               // $s3
    unsigned int v8;      // $s0
    int v9;               // $s1
    char *v10;            // $a1
    int *v11;             // $t0
    int v12;              // $v1
    int v13;              // $a3
    char *v14;            // $v0
    int v15;              // $a0
    int v16;              // $v1
    char v17;             // $t3
    int v18;              // $t5
    char v19;             // $t6
    _BYTE *v20;           // $s0
    int v21;              // $v0
    int *v22;             // $s2
    unsigned int v23;     // $a0
    int v24;              // $v1
    unsigned __int8 *v25; // $t0
    int v26;              // $a3
    unsigned __int8 *v27; // $v0
    unsigned __int8 v28;  // $t1
    unsigned __int8 *v29; // $v0
    int v30;              // $a0
    int v31;              // $t3
    int v32;              // $v0
    int v33;              // $t8
    int v34;              // $v1
    int v35;              // $v1
    int v36;              // $v1
    int v37;              // $a0
    int v38;              // $a0
    _BYTE *v39;           // $v0
    char v40;             // $t4
    unsigned int v41;     // $s0
    int v42;              // [sp+2Ch] [-34h]
    int v43;              // [sp+34h] [-2Ch]
    int v44;              // [sp+48h] [-18h]
    unsigned __int8 *v45; // [sp+50h] [-10h]
    char *v46;            // [sp+54h] [-Ch]
    unsigned __int8 *v47; // [sp+54h] [-Ch]

    v42 = a2;
    dword_80378FA8 = a2;
    byte_80378FB1 = *(_BYTE *)(a1 + 64);
    v3 = (char *)(a1 + 80);
    v4 = (_BYTE *)a2;
    word_80378FA0 = *(unsigned __int8 *)(a1 + 76);
    v5 = 0;
    dword_802A49C0 = *(unsigned __int8 *)(a1 + 68);
    for (i = *(_BYTE *)(a1 + 80);; i = *v3) {
        ++v5;
        *v4++ = i;
        ++v3;
        if (v5 >= 0xA4)
            break;
    }
    v7 = 0;
    v8 = (unsigned int)(v4 + 3) & 0xFFFFFFFC;
    debugPrint("Length = %d\n", 164);
    byte_80378FB2 = *(_BYTE *)(a1 + 66);
    debugPrint("Restartfrom = %d\n", 80);
    v9 = *(unsigned __int8 *)(a1 + 70);
    debugPrint("%d Patterns found\n", v9);
    v44 = *(unsigned __int8 *)(a1 + 72);
    debugPrint("%d Instruments found\n", v44);
    v10 = (char *)(a1 + (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 60)) +
                   ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 60)) << 8) +
                   ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 60)) << 16) +
                   (*(_DWORD *)(a1 + 60) << 24) + 60);
    if (v9) {
        v11 = dword_803789D0;
        do {
            *v11 = v8;
            v12 = ((unsigned __int8)v10[3] << 24) + (unsigned __int8)*v10 +
                  ((unsigned __int8)v10[1] << 8) + ((unsigned __int8)v10[2] << 16) +
                  ((unsigned __int8)v10[8] << 8) + (unsigned __int8)v10[7];
            v13 = v12;
            v14 = v10;
            v15 = 0;
            if (v12) {
                v16 = (*v10 + v10[7]) & 3;
                if ((v13 & 3) == 0)
                    goto LABEL_41;
                do {
                    v17 = *v14;
                    ++v15;
                    ++v8;
                    ++v14;
                    *(_BYTE *)(v8 - 1) = v17;
                } while (v16 != v15);
                if (v15 == v13) {
                    v18 = (unsigned __int8)v10[3];
                } else {
                LABEL_41:
                    do {
                        v15 += 4;
                        v8 += 4;
                        *(_BYTE *)(v8 - 4) = *v14;
                        v19 = v14[1];
                        v14 += 4;
                        *(_BYTE *)(v8 - 3) = v19;
                        *(_BYTE *)(v8 - 2) = *(v14 - 2);
                        *(_BYTE *)(v8 - 1) = *(v14 - 1);
                    } while (v15 != v13);
                    v18 = (unsigned __int8)v10[3];
                }
                v12 = (v18 << 24) + (unsigned __int8)*v10 + ((unsigned __int8)v10[1] << 8) +
                      ((unsigned __int8)v10[2] << 16) + ((unsigned __int8)v10[8] << 8) +
                      (unsigned __int8)v10[7];
            }
            ++v7;
            ++v11;
            v10 += v12;
        } while (v7 != v9);
        v7 = 0;
    }
    v20 = (_BYTE *)((v8 + 3) & 0xFFFFFFFC);
    v46 = v10;
    debugPrint("Now doSamples");
    v21 = (int)v46;
    v22 = dword_803787D0;
    if (v44) {
        while (1) {
            v47 = (unsigned __int8 *)v21;
            debugPrint(".");
            v23 = 0;
            v24 = 0;
            v25 = &v47[0x1000000 * v47[3] + 0x10000 * v47[2] + 256 * v47[1] + *v47];
            if (v47[27])
                break;
            *v22 = 0;
            v21 = (int)v25;
        LABEL_37:
            ++v7;
            ++v22;
            if (v7 == v44)
                goto LABEL_38;
        }
        v26 = (v25[3] << 24) + *v25 + (v25[1] << 8) + (v25[2] << 16);
        *v22 = (int)v20;
        v27 = v25;
        do {
            v28 = *v27;
            ++v23;
            ++v20;
            ++v27;
            *(v20 - 1) = v28;
        } while (v23 < 0x28);
        *(_DWORD *)*v22 = (v25[3] << 24) + *v25 + (v25[1] << 8) + (v25[2] << 16);
        v29 = v25 + 40;
        v30 = 0;
        *(_DWORD *)(*v22 + 8) = (v25[11] << 24) + v25[8] + (v25[9] << 8) + (v25[10] << 16);
        if (v26) {
            if ((v26 & 3) != 0) {
                do {
                    v31 = *v29;
                    ++v30;
                    ++v29;
                    v24 += v31;
                    *v20++ = v24;
                } while ((v26 & 3) != v30);
                if (v30 == v26) {
                    v32 = v25[14];
                LABEL_27:
                    v37 = 0;
                    if (v32) {
                        v38 = 0;
                        if (v32 == 1) {
                            v39 = &v20[-v25[8] + -256 * v25[9] + -65536 * v25[10] +
                                       -16777216 * v25[11]];
                            do {
                                v38 += 4;
                                v20 += 4;
                                *(v20 - 4) = *v39;
                                v40 = v39[1];
                                v39 += 4;
                                *(v20 - 3) = v40;
                                *(v20 - 2) = *(v39 - 2);
                                *(v20 - 1) = *(v39 - 1);
                            } while (v38 != 1200);
                            v41 = (unsigned int)(v20 + 3);
                        } else {
                            v43 = v26;
                            v45 = v25;
                            debugPrint("WANKER fuck off no 16bit, no Ping fucking pong\n");
                            v26 = v43;
                            v25 = v45;
                            v41 = (unsigned int)(v20 + 3);
                        }
                    } else {
                        do {
                            v37 += 4;
                            *v20 = 0;
                            v20[1] = 0;
                            v20[2] = 0;
                            v20[3] = 0;
                            v20 += 4;
                        } while (v37 != 1200);
                        v41 = (unsigned int)(v20 + 3);
                    }
                    v20 = (_BYTE *)(v41 & 0xFFFFFFFC);
                    v21 = (int)&v25[v26 + 40];
                    goto LABEL_37;
                }
            }
            do {
                v33 = *v29;
                v30 += 4;
                v29 += 4;
                v34 = v33 + v24;
                *v20 = v34;
                v20 += 4;
                v35 = *(v29 - 3) + v34;
                *(v20 - 3) = v35;
                v36 = *(v29 - 2) + v35;
                *(v20 - 2) = v36;
                v24 = *(v29 - 1) + v36;
                *(v20 - 1) = v24;
            } while (v30 != v26);
        }
        v32 = v25[14];
        goto LABEL_27;
    }
LABEL_38:
    debugPrint("\n\nSample Space used = %d bytes\n", &v20[-v42]);
}
// 80256774: write access to const memory at 802A49C0 has been detected
// 802567D4: write access to const memory at 80378FB2 has been detected
// 80256744: write access to const memory at 80378FA8 has been detected
// 80256754: write access to const memory at 80378FB1 has been detected
// 80256764: write access to const memory at 80378FA0 has been detected
// 802A49C0: using guessed type int dword_802A49C0;
// 803787D0: using guessed type int dword_803787D0[128];
// 803789D0: using guessed type int dword_803789D0[256];
// 80378FA0: using guessed type __int16 word_80378FA0;
// 80378FA8: using guessed type int dword_80378FA8;
// 80378FB1: using guessed type char byte_80378FB1;
// 80378FB2: using guessed type char byte_80378FB2;
