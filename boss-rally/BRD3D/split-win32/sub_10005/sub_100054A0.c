#include "types-win32.h"
//----- (100054A0) --------------------------------------------------------
int __cdecl sub_100054A0(float *a1, int a2) {
    HANDLE *v2;        // ebx
    int v4;            // eax
    int v5;            // esi
    unsigned int *v6;  // edx
    int v7;            // eax
    int v8;            // edi
    unsigned int *v9;  // edx
    int v10;           // eax
    HANDLE v11;        // ecx
    int v12;           // edx
    signed int v13;    // eax
    char *v14;         // ecx
    HANDLE v15;        // ecx
    int v16;           // edx
    signed int v17;    // eax
    HANDLE *v18;       // esi
    int v19;           // eax
    int v20;           // ecx
    double v21;        // st7
    int v22;           // ecx
    int v23;           // edx
    double v24;        // st7
    double v25;        // st6
    HANDLE *v26;       // esi
    int v27;           // ecx
    int v28;           // edx
    double v29;        // st7
    int v30;           // edx
    int v31;           // eax
    float v33;         // [esp+0h] [ebp-30h]
    float v34;         // [esp+0h] [ebp-30h]
    HANDLE Handles[2]; // [esp+1Ch] [ebp-14h] BYREF
    HANDLE v36;        // [esp+24h] [ebp-Ch] BYREF
    int v37;           // [esp+28h] [ebp-8h]
    int v38;           // [esp+2Ch] [ebp-4h]
    unsigned int v39;  // [esp+34h] [ebp+4h]
    unsigned int v40;  // [esp+34h] [ebp+4h]
    int v41;           // [esp+34h] [ebp+4h]
    float v42;         // [esp+34h] [ebp+4h]
    float v43;         // [esp+34h] [ebp+4h]
    int v44;           // [esp+38h] [ebp+8h]

    Handles[0] = gMutex4;
    Handles[1] = gMutexes[606 * a2];
    v2 = &gMutexes[606 * a2];
    WaitForMultipleObjects(2u, Handles, TRUE, INFINITE);
    if (a2 != dword_10094294) {
        if ((int)v2[342] < 2) {
            a1[31] = 400.0;
            ReleaseMutex(*v2);
            ReleaseMutex(gMutex4);
            return 0;
        }
        v4 = 0;
        v5 = 0;
        v39 = 0;
        v6 = (unsigned int *)(v2 + 3);
        do {
            if (v6[11] && *v6 > v39) {
                v5 = v4;
                v39 = *v6;
            }
            ++v4;
            ++v6;
        } while (v4 < 8);
        v7 = 0;
        v8 = 0;
        v44 = 0;
        v40 = 0;
        v9 = (unsigned int *)(v2 + 3);
        do {
            if (v9[11]) {
                if (*v9 <= v40 || v7 == v5) {
                    v8 = v44;
                } else {
                    v8 = v7;
                    v40 = *v9;
                    v44 = v7;
                }
            }
            ++v7;
            ++v9;
        } while (v7 < 8);
        v10 = (_BYTE *)v2[v5 + 3] - (_BYTE *)v2[v8 + 3];
        v11 = v2[344];
        v41 = v10;
        if (v11 != (HANDLE)v5) {
            v14 = (char *)v2[345];
            v2[344] = (HANDLE)v5;
            v15 = v14 + 1;
            if (v2[v5 + 3] < v15) {
                v16 = (int)v2[347];
                if (v16 < 20) {
                    if (v10) {
                        v2[346] = HANDLE_FLAG_INHERIT;
                        v2[347] = (HANDLE)(v16 + 1);
                        v2[345] = v15;
                        v17 = sub_10003460() - (_DWORD)v2[v5 + 3];
                        if (v17 > 6)
                            v17 = 6;
                        v18 = &v2[40 * v5];
                        v33 = (double)(v41 + v17) / (double)v41;
                        math_100079E0((int)a1, v33, (int)&v2[40 * v8 + 22], (int)(v18 + 22));
                        v19 = (int)v18[27];
                        v20 = (int)v18[28];
                        v36 = v18[26];
                        v37 = v19;
                        v38 = v20;
                        v21 = sub_1006F310((float *)&v36);
                        v22 = *((_DWORD *)a1 + 5);
                        v23 = *((_DWORD *)a1 + 6);
                        v42 = v21;
                        v36 = (HANDLE) * ((_DWORD *)a1 + 4);
                        v37 = v22;
                        v38 = v23;
                        v24 = sub_1006F310((float *)&v36);
                        v25 = v42;
                        goto LABEL_32;
                    }
                }
            }
            v2[346] = 0;
            v2[347] = 0;
            v2[345] = v2[v5 + 3];
            v13 = sub_10003460() - (_DWORD)v2[v5 + 3];
            if (v13 > 6)
                v13 = 6;
        LABEL_31:
            v26 = &v2[40 * v5];
            v34 = (double)(v41 + v13) / (double)v41;
            math_100079E0((int)a1, v34, (int)&v2[40 * v8 + 22], (int)(v26 + 22));
            v27 = (int)v26[27];
            v28 = (int)v26[28];
            v36 = v26[26];
            v37 = v27;
            v38 = v28;
            v29 = sub_1006F310((float *)&v36);
            v30 = *((_DWORD *)a1 + 5);
            v31 = *((_DWORD *)a1 + 6);
            v43 = v29;
            v36 = (HANDLE) * ((_DWORD *)a1 + 4);
            v37 = v30;
            v38 = v31;
            v24 = sub_1006F310((float *)&v36);
            v25 = v43;
        LABEL_32:
            a1[6] = v25 - v24 + a1[6];
            goto LABEL_33;
        }
        v12 = (int)v2[346];
        if (v12 < 15) {
            v2[346] = (HANDLE)(v12 + 1);
            v2[345] = (char *)v2[345] + 1;
        }
        if (v10) {
            v13 = sub_10003460() - (_DWORD)v2[v5 + 3];
            if (v13 > 6)
                v13 = 6;
            goto LABEL_31;
        }
        qmemcpy(a1, &v2[40 * (_DWORD)v11 + 22], 0xA0u);
    }
LABEL_33:
    ReleaseMutex(*v2);
    ReleaseMutex(gMutex4);
    sub_100058D0(a1);
    sub_100058D0(a1 + 1);
    sub_100058D0(a1 + 2);
    sub_100058D0(a1 + 3);
    if (*a1 + a1[1] + a1[3] + a1[2] == 0.0) {
        *a1 = 1.0;
        a1[1] = 0.0;
        a1[2] = 0.0;
        a1[3] = 0.0;
    } else {
        math_100741B0(a1);
    }
    Clamp0To2048(a1 + 4);
    Clamp0To2048(a1 + 5);
    Clamp256(a1 + 6);
    return 1;
}
// 10094294: using guessed type int dword_10094294;
