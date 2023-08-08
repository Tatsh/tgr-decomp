#include "types-win32.h"
//----- (10071870) --------------------------------------------------------
int *sub_10071870() {
    size_t v0;            // ebp
    int v1;               // ebx
    float *v2;            // edi
    unsigned int *v3;     // esi
    HANDLE v4;            // ecx
    unsigned int v5;      // eax
    _DWORD *v6;           // edi
    size_t v7;            // ebx
    int v8;               // edx
    HANDLE *v9;           // esi
    int v10;              // edi
    float *v11;           // ebp
    int *v12;             // ebx
    char *v13;            // esi
    void *v14;            // eax
    int v15;              // eax
    double v16;           // st7
    int v17;              // eax
    int v18;              // ecx
    int *result;          // eax
    int v20;              // edx
    size_t NumOfElements; // [esp+10h] [ebp-20h]
    char *v22;            // [esp+14h] [ebp-1Ch]
    int v23;              // [esp+18h] [ebp-18h]
    HANDLE Handles;       // [esp+20h] [ebp-10h] BYREF
    HANDLE v25;           // [esp+24h] [ebp-Ch]
    HANDLE v26[2];        // [esp+28h] [ebp-8h] BYREF

    v0 = 0;
    v1 = 15;
    v2 = (float *)&unk_11826B54;
    v3 = (unsigned int *)&unk_1178FEE4;
    do {
        v4 = (HANDLE) * (v3 - 602);
        Handles = dword_11826B00;
        v25 = v4;
        if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
            ExitThread(0);
        if ((*(v3 - 591) & 0x3F) >= 2 && (*(v3 - 591) & 0x3F) < 5) {
            v5 = *v3;
            if (*v3) {
                *((_DWORD *)v2 - 1) = v1;
                ++v0;
                *v2 = (float)v5;
                v2 += 2;
            }
        }
        ReleaseMutex((HANDLE) * (v3 - 602));
        v3 -= 603;
        --v1;
    } while ((int)v3 >= (int)dword_11787190);
    if (v0) {
        qsort(&unk_11826B50, v0, 8u, sub_10071B60);
        if ((int)(v0 - 1) >= 0) {
            v6 = (_DWORD *)((char *)&unk_11826B50 + 8 * v0 - 8);
            v7 = v0;
            do {
                v8 = 603 * *v6;
                Handles = dword_11826B00;
                v9 = &dword_11786828 + v8;
                v25 = *v9;
                if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
                    ExitThread(0);
                if (((unsigned int)v9[11] & 0x3F) >= 2 && ((unsigned int)v9[11] & 0x3F) < 5 &&
                    v9[602]) {
                    sub_1003DB50((_DWORD *)dword_10A9D008, (int)v9[1], dword_11826AF8);
                    v9[11] = (HANDLE)(dword_11826AF8 + 5);
                    ++dword_11826AF8;
                }
                ReleaseMutex(*v9);
                v6 -= 2;
                --v7;
            } while (v7);
        }
    }
    v10 = 15;
    NumOfElements = 0;
    v23 = 15;
    v22 = (char *)&unk_11826BCC;
    v11 = (float *)&unk_11826B54;
    v12 = (int *)&unk_11826B50;
    v13 = (char *)&unk_1178F5A8;
    do {
        v14 = (void *)*((_DWORD *)v13 - 11);
        v26[0] = dword_11826B00;
        v26[1] = v14;
        if (!WaitForMultipleObjects(2u, v26, 0, 0xFFFFFFFF))
            ExitThread(0);
        if ((*(_DWORD *)v13 & 0x3Fu) >= 2 && (*(_DWORD *)v13 & 0x3Fu) < 5 &&
            *(float *)&v13[160 * *((_DWORD *)v13 + 331) + 164] >= 4188888.0) {
            sub_1003DB50((_DWORD *)dword_10A9D008, *((_DWORD *)v13 - 10), dword_11826AF8);
            v15 = dword_11826AF8 + 1;
            *(_DWORD *)v13 = dword_11826AF8 + 5;
            dword_11826AF8 = v15;
        }
        Handles = *(HANDLE *)v13;
        if (((unsigned __int8)Handles & 0x3Fu) < 5) {
            if (((unsigned __int8)Handles & 0x3Fu) < 2) {
                *((_DWORD *)v22 - 1) = v10;
                v22 -= 8;
                *((float *)v22 + 2) = -10000000.0 - (double)v23;
            } else {
                v17 = *((_DWORD *)v13 + 331);
                *v12 = v10;
                v12 += 2;
                *v11 = *(float *)&v13[160 * v17 + 164];
                ++NumOfElements;
                v11 += 2;
            }
        } else {
            v16 = (double)(int)Handles;
            *v12 = v10;
            v12 += 2;
            ++NumOfElements;
            v11 += 2;
            *(v11 - 2) = 10000000.0 - v16;
        }
        ReleaseMutex(*((HANDLE *)v13 - 11));
        v13 -= 2412;
        v23 = --v10;
    } while ((int)v13 >= (int)dword_11786854);
    qsort(&unk_11826B50, NumOfElements, 8u, sub_10071B60);
    v18 = 0;
    result = (int *)&unk_11826B50;
    do {
        v20 = *result;
        result += 2;
        dword_11826B08[v20] = v18++;
    } while ((int)result < (int)&dword_11826BD0);
    return result;
}
// 11786854: using guessed type int dword_11786854[];
// 11787190: using guessed type int dword_11787190[];
// 11826AF8: using guessed type int dword_11826AF8;
// 11826B08: using guessed type int dword_11826B08[];
