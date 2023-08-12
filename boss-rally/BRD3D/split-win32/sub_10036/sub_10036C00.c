#include "types-win32.h"
//----- (10036C00) --------------------------------------------------------
__int16 __cdecl sub_10036C00(int a1) {
    int v1;               // ebp
    __int16 v2;           // cx
    int v3;               // eax
    int *v4;              // esi
    char v5;              // dl
    char v6;              // cl
    char v7;              // al
    unsigned __int16 v8;  // dx
    int v9;               // edx
    int v10;              // edi
    int v11;              // ebx
    char v12;             // cl
    int v13;              // eax
    char v14;             // cl
    _BYTE *v15;           // eax
    unsigned __int16 v16; // cx
    int v17;              // eax
    int v18;              // eax
    int v19;              // eax
    char v20;             // cl
    int v21;              // eax
    char v22;             // cl
    _BYTE *v23;           // eax
    unsigned __int16 v24; // cx
    int v25;              // eax
    int v26;              // eax
    int v27;              // eax
    int v28;              // eax
    int v29;              // eax
    int v30;              // eax
    int v31;              // eax
    int v32;              // eax
    int v33;              // eax
    int v34;              // ebx
    char v35;             // cl
    int v36;              // ecx
    char v37;             // dl
    int v38;              // eax
    _BYTE *v39;           // eax
    char v40;             // cl
    int v41;              // eax
    char v42;             // cl
    _DWORD *v43;          // eax
    int v44;              // ecx
    int v45;              // ebp
    __int16 v46;          // ax
    unsigned int v47;     // ebx
    _BYTE *v48;           // esi
    int *v49;             // edi
    char v50;             // al
    char v51;             // al
    __int16 v52;          // dx
    __int16 v53;          // ax
    int v55;              // [esp+10h] [ebp-Ch]
    int v56;              // [esp+14h] [ebp-8h]
    int v57;              // [esp+18h] [ebp-4h]

    v1 = a1;
    LOBYTE(v3) = *(_BYTE *)(a1 + 3);
    LOBYTE(v2) = *(_BYTE *)(a1 + 1);
    BYTE1(v3) = *(_BYTE *)(a1 + 2);
    HIBYTE(v2) = *(_BYTE *)a1;
    v4 = (int *)(a1 + 4);
    *(_WORD *)(a1 + 2) = v3;
    *(_WORD *)a1 = v2;
    if (*(_DWORD *)(a1 + 4)) {
        v5 = *(_BYTE *)v4;
        v6 = *(_BYTE *)(a1 + 5);
        *(_BYTE *)v4 = *(_BYTE *)(a1 + 7);
        v7 = *(_BYTE *)(a1 + 6);
        *(_BYTE *)(a1 + 7) = v5;
        *(_BYTE *)(a1 + 6) = v6;
        *(_BYTE *)(a1 + 5) = v7;
        sub_1002B970(v4);
        LOBYTE(v8) = *(_BYTE *)(*v4 + 1);
        HIBYTE(v8) = *(_BYTE *)*v4;
        *(_DWORD *)*v4 =
            *(unsigned __int8 *)(*v4 + 3) | ((*(unsigned __int8 *)(*v4 + 2) | (v8 << 8)) << 8);
        v3 = *v4;
        v9 = 0;
        v56 = 0;
        if (*(int *)*v4 > 0) {
            while (1) {
                v10 = 4 * v9 + 4;
                v11 = 4 * v9;
                v12 = *(_BYTE *)(4 * v9 + v3 + 7);
                *(_BYTE *)(v11 + v3 + 7) = *(_BYTE *)(v10 + v3);
                *(_BYTE *)(v10 + *v4) = v12;
                v13 = 4 * v9 + *v4;
                v14 = *(_BYTE *)(v13 + 6);
                *(_BYTE *)(v13 + 6) = *(_BYTE *)(v13 + 5);
                *(_BYTE *)(v11 + *v4 + 5) = v14;
                sub_1002B970((int *)(*v4 + v10));
                v15 = *(_BYTE **)(v10 + *v4);
                LOBYTE(v16) = v15[1];
                HIBYTE(v16) = *v15;
                *(_DWORD *)v15 =
                    (unsigned __int8)v15[3] | (((unsigned __int8)v15[2] | (v16 << 8)) << 8);
                v17 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v16) = *(_BYTE *)(v17 + 7);
                *(_BYTE *)(v17 + 7) = *(_BYTE *)(v17 + 4);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 4) = v16;
                v18 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v16) = *(_BYTE *)(v18 + 6);
                *(_BYTE *)(v18 + 6) = *(_BYTE *)(v18 + 5);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 5) = v16;
                sub_1002B970((int *)(*(_DWORD *)(v10 + *v4) + 4));
                sub_1002BD50((__int16 **)(*(_DWORD *)(v10 + *v4) + 4), **(_DWORD **)(v10 + *v4));
                v19 = *(_DWORD *)(v10 + *v4);
                v20 = *(_BYTE *)(v19 + 11);
                *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 8) = v20;
                v21 = *(_DWORD *)(v10 + *v4);
                v22 = *(_BYTE *)(v21 + 10);
                *(_BYTE *)(v21 + 10) = *(_BYTE *)(v21 + 9);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 9) = v22;
                sub_1002B970((int *)(*(_DWORD *)(v10 + *v4) + 8));
                v57 = 0;
                v23 = *(_BYTE **)(v10 + *v4);
                LOBYTE(v24) = v23[13];
                HIBYTE(v24) = v23[12];
                *((_DWORD *)v23 + 3) =
                    (unsigned __int8)v23[15] | (((unsigned __int8)v23[14] | (v24 << 8)) << 8);
                v25 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v25 + 17);
                HIBYTE(v24) = *(_BYTE *)(v25 + 16);
                *(_WORD *)(v25 + 16) = v24;
                v26 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v26 + 19);
                HIBYTE(v24) = *(_BYTE *)(v26 + 18);
                *(_WORD *)(v26 + 18) = v24;
                v27 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v27 + 23);
                *(_BYTE *)(v27 + 23) = *(_BYTE *)(v27 + 20);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 20) = v24;
                v28 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v28 + 22);
                *(_BYTE *)(v28 + 22) = *(_BYTE *)(v28 + 21);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 21) = v24;
                v29 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v29 + 27);
                *(_BYTE *)(v29 + 27) = *(_BYTE *)(v29 + 24);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 24) = v24;
                v30 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v30 + 26);
                *(_BYTE *)(v30 + 26) = *(_BYTE *)(v30 + 25);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 25) = v24;
                v31 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v31 + 31);
                *(_BYTE *)(v31 + 31) = *(_BYTE *)(v31 + 28);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 28) = v24;
                v32 = *(_DWORD *)(v10 + *v4);
                LOBYTE(v24) = *(_BYTE *)(v32 + 30);
                *(_BYTE *)(v32 + 30) = *(_BYTE *)(v32 + 29);
                *(_BYTE *)(*(_DWORD *)(v10 + *v4) + 29) = v24;
                v33 = *(_DWORD *)(v10 + *v4);
                if (*(int *)(v33 + 12) > 0) {
                    v34 = 32;
                    do {
                        v35 = *(_BYTE *)(v34 + v33 + 3);
                        *(_BYTE *)(v34 + v33 + 3) = *(_BYTE *)(v34 + v33);
                        *(_BYTE *)(*(_DWORD *)(v10 + *v4) + v34) = v35;
                        v36 = *(_DWORD *)(v10 + *v4);
                        v37 = *(_BYTE *)(v36 + v34 + 1);
                        v38 = v36 + v34 - 32;
                        LOBYTE(v36) = *(_BYTE *)(v36 + v34 + 2);
                        *(_BYTE *)(v38 + 34) = v37;
                        *(_BYTE *)(*(_DWORD *)(v10 + *v4) + v34 + 1) = v36;
                        sub_1002B970((int *)(v34 + *(_DWORD *)(v10 + *v4)));
                        v55 = 0;
                        v39 = *(_BYTE **)(*(_DWORD *)(v10 + *v4) + v34);
                        v40 = v39[3];
                        v39[3] = *v39;
                        **(_BYTE **)(*(_DWORD *)(v10 + *v4) + v34) = v40;
                        v41 = *(_DWORD *)(*(_DWORD *)(v10 + *v4) + v34);
                        v42 = *(_BYTE *)(v41 + 2);
                        *(_BYTE *)(v41 + 2) = *(_BYTE *)(v41 + 1);
                        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v10 + *v4) + v34) + 1) = v42;
                        v43 = *(_DWORD **)(v10 + *v4);
                        if (3 * *v43 > 0) {
                            v44 = 4;
                            do {
                                v45 = v43[v34 / 4u];
                                LOBYTE(v46) = *(_BYTE *)(v44 + v45 + 1);
                                ++v55;
                                HIBYTE(v46) = *(_BYTE *)(v44 + v45);
                                *(_WORD *)(v44 + v45) = v46;
                                v44 += 2;
                                v43 = *(_DWORD **)(v10 + *v4);
                            } while (v55 < 3 * *v43);
                            v1 = a1;
                        }
                        v34 += 4;
                        v33 = *(_DWORD *)(v10 + *v4);
                        ++v57;
                    } while (v57 < *(_DWORD *)(v33 + 12));
                }
                v3 = *v4;
                if (++v56 >= *(_DWORD *)*v4)
                    break;
                v9 = v56;
            }
        }
    }
    v47 = 0;
    if (*(_WORD *)(v1 + 2)) {
        v48 = (_BYTE *)(v1 + 10);
        do {
            v3 = *(_DWORD *)(v48 - 2);
            v49 = (int *)(v48 - 2);
            if (v3) {
                v50 = v48[1];
                v48[1] = *(_BYTE *)v49;
                *(_BYTE *)v49 = v50;
                v51 = *v48;
                *v48 = *(v48 - 1);
                *(v48 - 1) = v51;
                sub_1002B970((int *)(v48 - 2));
                LOBYTE(v52) = v48[3];
                HIBYTE(v52) = v48[2];
                *((_WORD *)v48 + 1) = v52;
                LOBYTE(v53) = v48[5];
                HIBYTE(v53) = v48[4];
                *((_WORD *)v48 + 2) = v53;
                LOBYTE(v53) = v48[9];
                v48[9] = v48[6];
                v48[6] = v53;
                LOBYTE(v53) = v48[8];
                v48[8] = v48[7];
                v48[7] = v53;
                LOBYTE(v53) = v48[13];
                v48[13] = v48[10];
                v48[10] = v53;
                LOBYTE(v53) = v48[12];
                v48[12] = v48[11];
                v48[11] = v53;
                LOBYTE(v53) = v48[17];
                v48[17] = v48[14];
                v48[14] = v53;
                LOBYTE(v53) = v48[16];
                v48[16] = v48[15];
                v48[15] = v53;
                sub_1002BF80(*v49);
                sub_10074DC0(8);
                LOWORD(v3) = dword_118AA0C4(*v49);
            }
            ++v47;
            v48 += 20;
        } while (v47 < *(unsigned __int16 *)(v1 + 2));
    }
    return v3;
}
// 118AA0C4: using guessed type int (__cdecl *dword_118AA0C4)(_DWORD);
