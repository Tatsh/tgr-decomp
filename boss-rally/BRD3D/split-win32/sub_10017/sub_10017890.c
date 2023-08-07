#include "../../types-win32.h"
//----- (10017890) --------------------------------------------------------
int __cdecl sub_10017890(_DWORD *a1, int a2) {
    int result;       // eax
    int v3;           // edi
    int v4;           // ebp
    float v5;         // ebx
    int v6;           // esi
    int v7;           // ebp
    int v8;           // edi
    int v9;           // eax
    int v10;          // eax
    char *v11;        // eax
    int v12;          // eax
    char *v13;        // eax
    int v14;          // [esp-10h] [ebp-128h]
    const char *v15;  // [esp-Ch] [ebp-124h]
    int v16;          // [esp-8h] [ebp-120h]
    int v17;          // [esp+Ch] [ebp-10Ch]
    int v18;          // [esp+10h] [ebp-108h]
    int v19;          // [esp+14h] [ebp-104h]
    char Buffer[256]; // [esp+18h] [ebp-100h] BYREF

    result = dword_100BD3FC;
    if (dword_100BD3FC) {
        sub_100192F0(15);
        sub_10019280();
        result = g_NetworkPlay;
        v3 = *a1 + 16;
        v4 = a1[1] + 29;
        v17 = v3;
        v19 = v4;
        if (g_NetworkPlay) {
            result = dword_100B36FC;
            if (dword_100B36FC) {
                v5 = 0.0;
                if (dword_100B36FC > 0) {
                    do {
                        v6 = a2 + 11112 * LODWORD(v5);
                        if (*(_DWORD *)(v6 + 3848)) {
                            v18 = sub_10005F40(*(_DWORD *)(v6 + 324));
                            if (v18) {
                                sprintf(Buffer, "%%11%d.", *(_DWORD *)(v6 + 4088) + 1);
                            } else {
                                if (v5 == 0.0) {
                                    v16 = *(_DWORD *)(a2 + 4088) + 1;
                                    v15 = aY1D;
                                } else {
                                    v16 = *(_DWORD *)(v6 + 4088) + 1;
                                    v15 = aRyD;
                                }
                                sprintf(Buffer, v15, v16);
                            }
                            sub_10019300((int)Buffer, v3, 16 * *(_DWORD *)(v6 + 4088) + v4 + 20);
                            if (dword_118ABDC8) {
                                v7 = 32;
                                v8 = 32;
                                if (g_NetworkPlay > 1) {
                                    v9 = sub_100714D0(*(_DWORD *)(v6 + 324)) & 0x3F;
                                    if (v9 >= 3) {
                                        if (v9 == 3)
                                            v8 = (sub_10071510(*(_DWORD *)(v6 + 324)) & 0x3F) != 3 ?
                                                     42 :
                                                     32;
                                    } else {
                                        v7 = 42;
                                        v8 = 42;
                                    }
                                }
                                if (v18) {
                                    v10 = sub_10005F90(*(_DWORD *)(v6 + 324));
                                    sprintf(Buffer,
                                            "%%11%s %dms %c%c",
                                            (const char *)(v6 + 328),
                                            v10,
                                            v8,
                                            v7);
                                } else if ((*(_BYTE *)(*(_DWORD *)(v6 + 3840) + 104) & 1) != 0 ||
                                           dword_106909E0) {
                                    v12 = sub_10005F90(*(_DWORD *)(v6 + 324));
                                    sprintf(Buffer,
                                            "%%x%02x%02x%02x%s %dms %c%c",
                                            *(unsigned __int8 *)(v6 + 10668),
                                            *(unsigned __int8 *)(v6 + 10669),
                                            *(unsigned __int8 *)(v6 + 10670),
                                            (const char *)(v6 + 328),
                                            v12,
                                            v8,
                                            v7);
                                } else {
                                    v14 = sub_10005F90(*(_DWORD *)(v6 + 324));
                                    v11 = sub_10017C80(a2, v5);
                                    sprintf(Buffer,
                                            "%%x%02x%02x%02x%s %s %dms %c%c",
                                            *(unsigned __int8 *)(v6 + 10668),
                                            *(unsigned __int8 *)(v6 + 10669),
                                            *(unsigned __int8 *)(v6 + 10670),
                                            (const char *)(v6 + 328),
                                            v11,
                                            v14,
                                            v8,
                                            v7);
                                }
                                sub_10019300(
                                    (int)Buffer, v17 + 16, 16 * *(_DWORD *)(v6 + 4088) + v19 + 20);
                                v4 = v19;
                                v3 = v17;
                            } else {
                                if (v18) {
                                    sprintf(Buffer, "%%11%s", (const char *)(v6 + 328));
                                } else if ((*(_BYTE *)(*(_DWORD *)(v6 + 3840) + 104) & 1) != 0 ||
                                           dword_106909E0) {
                                    sprintf(Buffer,
                                            "%%x%02x%02x%02x%s",
                                            *(unsigned __int8 *)(v6 + 10668),
                                            *(unsigned __int8 *)(v6 + 10669),
                                            *(unsigned __int8 *)(v6 + 10670),
                                            (const char *)(v6 + 328));
                                } else {
                                    v13 = sub_10017C80(a2, v5);
                                    sprintf(Buffer,
                                            "%%x%02x%02x%02x%s %s",
                                            *(unsigned __int8 *)(v6 + 10668),
                                            *(unsigned __int8 *)(v6 + 10669),
                                            *(unsigned __int8 *)(v6 + 10670),
                                            (const char *)(v6 + 328),
                                            v13);
                                }
                                sub_10019300(
                                    (int)Buffer, v3 + 16, 16 * *(_DWORD *)(v6 + 4088) + v4 + 20);
                            }
                        } else {
                            sprintf(Buffer, "%%55%d.", *(_DWORD *)(v6 + 4088) + 1);
                            sub_10019300((int)Buffer, v3, 16 * *(_DWORD *)(v6 + 4088) + v4 + 20);
                            sprintf(Buffer, "%%55%s", (const char *)(v6 + 328));
                            sub_10019300(
                                (int)Buffer, v3 + 16, 16 * *(_DWORD *)(v6 + 4088) + v4 + 20);
                        }
                        result = dword_100B36FC;
                        ++LODWORD(v5);
                    } while (SLODWORD(v5) < dword_100B36FC);
                }
            }
        }
    }
    return result;
}
// 100B36FC: using guessed type int dword_100B36FC;
// 100BD3FC: using guessed type int dword_100BD3FC;
// 1022AF18: using guessed type int g_NetworkPlay;
// 106909E0: using guessed type int dword_106909E0;
// 118ABDC8: using guessed type int dword_118ABDC8;
