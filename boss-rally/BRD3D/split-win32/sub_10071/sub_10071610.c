#include "types-win32.h"
//----- (10071610) --------------------------------------------------------
void __cdecl sub_10071610() {
    `eh vector destructor iterator'(&dword_11826BD0, 0x214u, 16, debugPrint); }

        //----- (10071630) --------------------------------------------------------
        HANDLE
        sub_10071630() {
        HANDLE result; // eax

        dword_11826B00 = CreateEventA(0, 0, 0, 0);
        result = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sub_10071680, 0, 0, &dword_11826B04);
        dword_11828D1C = result;
        dword_11826B48 = 1000;
        dword_11828D18 = 1;
        return result;
    }
    // 11826B48: using guessed type int dword_11826B48;
    // 11828D18: using guessed type int dword_11828D18;

    //----- (10071680) --------------------------------------------------------
    void __stdcall __noreturn sub_10071680(LPVOID lpThreadParameter) {
        DWORD v1; // eax

        while (1) {
            v1 = sub_100713A0();
            dword_11828D10 = v1;
            if (v1 < dword_11826B48) {
                Sleep(dword_11826B48 - v1);
            } else {
                sub_100716E0();
                sub_10071870();
                sub_10071B80();
                sub_10071C10();
                sub_10072170(&unk);
                dword_11826B48 += 1000;
            }
        }
    }
    // 11826B48: using guessed type int dword_11826B48;
    // 11828D10: using guessed type int dword_11828D10;

    //----- (100716E0) --------------------------------------------------------
    BOOL sub_100716E0() {
        HANDLE *v0;     // esi
        HANDLE v1;      // ecx
        bool v2;        // bl
        BOOL result;    // eax
        int *v4;        // edi
        HANDLE *v5;     // esi
        HANDLE v6;      // edx
        bool v7;        // bl
        HANDLE v8;      // ecx
        bool v9;        // bl
        HANDLE *v10;    // esi
        HANDLE v11;     // eax
        int v12;        // eax
        HANDLE Handles; // [esp+10h] [ebp-10h] BYREF
        HANDLE v14;     // [esp+14h] [ebp-Ch]
        HANDLE v15;     // [esp+18h] [ebp-8h] BYREF
        HANDLE v16;     // [esp+1Ch] [ebp-4h]

        v0 = &dword_11786828;
        while (1) {
            v1 = *v0;
            Handles = dword_11826B00;
            v14 = v1;
            if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
                ExitThread(0);
            v2 = ((unsigned int)v0[11] & 0x3F) >= 2 && ((unsigned int)v0[11] & 0x3F) != 3;
            result = ReleaseMutex(*v0);
            if (v2)
                break;
            v0 += 603;
            if ((int)v0 >= (int)&dword_1178FEE8) {
                v4 = dword_1178FEF8;
                v5 = &dword_11786828;
                while (1) {
                    v6 = *v5;
                    Handles = dword_11826B00;
                    v14 = v6;
                    if (!WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF))
                        ExitThread(0);
                    v7 = ((_BYTE)v5[11] & 0x3F) == 3;
                    ReleaseMutex(*v5);
                    if (v7) {
                        v8 = (HANDLE)*v4;
                        v15 = dword_11826B00;
                        v16 = v8;
                        if (!WaitForMultipleObjects(2u, &v15, 0, 0xFFFFFFFF))
                            ExitThread(0);
                        v9 = (v4[11] & 0x3F) != 3;
                        result = ReleaseMutex((HANDLE)*v4);
                        if (v9)
                            break;
                    }
                    v5 += 603;
                    v4 += 10251;
                    if ((int)v5 >= (int)&dword_1178FEE8) {
                        v10 = &dword_11786828;
                        do {
                            v11 = *v10;
                            v15 = dword_11826B00;
                            v16 = v11;
                            if (!WaitForMultipleObjects(2u, &v15, 0, 0xFFFFFFFF))
                                ExitThread(0);
                            if (((_BYTE)v10[11] & 0x3F) == 3) {
                                v12 = dword_11828D10;
                                v10[11] = (HANDLE)4;
                                dword_1178FEF0 = 1;
                                dword_11828D14 = v12 + 3000;
                            }
                            result = ReleaseMutex(*v10);
                            v10 += 603;
                        } while ((int)v10 < (int)&dword_1178FEE8);
                        return result;
                    }
                }
                return result;
            }
        }
        return result;
    }
    // 1178FEE8: using guessed type int dword_1178FEE8;
    // 1178FEF0: using guessed type int dword_1178FEF0;
    // 1178FEF8: using guessed type int dword_1178FEF8[];
    // 11828D10: using guessed type int dword_11828D10;
    // 11828D14: using guessed type int dword_11828D14;

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

    //----- (10071B60) --------------------------------------------------------
    BOOL __cdecl sub_10071B60(const void *a1, const void *a2) {
        return *((float *)a1 + 1) < (double)*((float *)a2 + 1);
    }

    //----- (10071B80) --------------------------------------------------------
    BOOL sub_10071B80() {
        HANDLE *v0;        // esi
        char *v1;          // edi
        HANDLE v2;         // ecx
        BOOL result;       // eax
        HANDLE Handles[2]; // [esp+10h] [ebp-8h] BYREF

        v0 = &dword_11786828;
        v1 = (char *)&dword_11826BD0;
        do {
            v2 = *v0;
            Handles[0] = dword_11826B00;
            Handles[1] = v2;
            if (!WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF))
                ExitThread(0);
            sub_10071BF0(v1);
            result = ReleaseMutex(*v0);
            v1 += 532;
            v0 += 603;
        } while ((int)v1 < (int)&dword_11828D10);
        return result;
    }
    // 10071BF0: using guessed type _DWORD __cdecl sub_10071BF0(_DWORD);
    // 11828D10: using guessed type int dword_11828D10;

    //----- (10071BF0) --------------------------------------------------------
    int __cdecl sub_10071BF0(_DWORD * a1) {
        meth_10073B80(a1);
        return meth_10073DC0(a1, dword_11828D10);
    }
    // 11828D10: using guessed type int dword_11828D10;

    //----- (10071C10) --------------------------------------------------------
    int sub_10071C10() {
        int v0;                                                    // esi
        _DWORD *v1;                                                // edi
        int *v2;                                                   // ebp
        void *v3;                                                  // ecx
        DWORD(__stdcall * v4)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
        int *v5;                                                   // ebp
        int v6;                                                    // edx
        char v7;                                                   // al
        char v8;                                                   // cl
        char v9;                                                   // al
        int v10;                                                   // edx
        bool v11;                                                  // bl
        int v12;                                                   // edi
        bool v13;                                                  // cc
        int result;                                                // eax
        _DWORD *v15;                                               // [esp+10h] [ebp-448h]
        int v16;                                                   // [esp+14h] [ebp-444h]
        int v17;                                                   // [esp+18h] [ebp-440h]
        int *v18;                                                  // [esp+1Ch] [ebp-43Ch]
        int *v19;                                                  // [esp+20h] [ebp-438h]
        int *v20;                                                  // [esp+24h] [ebp-434h]
        int v21;                                                   // [esp+28h] [ebp-430h]
        HANDLE v22;                                                // [esp+2Ch] [ebp-42Ch] BYREF
        int v23;                                                   // [esp+30h] [ebp-428h]
        int v24;                                                   // [esp+34h] [ebp-424h]
        int v25;                                                   // [esp+38h] [ebp-420h]
        int v26;                                                   // [esp+3Ch] [ebp-41Ch]
        HANDLE v27;                                                // [esp+40h] [ebp-418h] BYREF
        HANDLE hMutex;                                             // [esp+44h] [ebp-414h]
        int v29;                                                   // [esp+48h] [ebp-410h]
        int v30;                                                   // [esp+4Ch] [ebp-40Ch]
        HANDLE Handles[2];                                         // [esp+50h] [ebp-408h] BYREF
        char v32[1024];                                            // [esp+58h] [ebp-400h] BYREF

        v0 = 0;
        v1 = &dword_11826BD0;
        v2 = dword_11786854;
        v21 = 0;
        v17 = 0;
        v15 = &dword_11826BD0;
        v19 = dword_1178FEF8;
        v20 = dword_11786854;
        do {
            v3 = (void *)*(v2 - 11);
            v4 = WaitForMultipleObjects;
            Handles[0] = dword_11826B00;
            Handles[1] = v3;
            if (!WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF))
                ExitThread(0);
            if ((*v2 & 0x3F) != 0) {
                v21 = 1;
                if ((*v2 & 0x3F) == 1) {
                    sub_10072080(v1, v0);
                } else {
                    v16 = 0;
                    v18 = v19;
                    v5 = dword_11786858;
                    do {
                        v6 = *(v5 - 12);
                        v22 = dword_11826B00;
                        v23 = v6;
                        if (!v4(2u, &v22, 0, 0xFFFFFFFF))
                            ExitThread(0);
                        v23 = *v18;
                        if (!v4(2u, &v22, 0, 0xFFFFFFFF))
                            ExitThread(0);
                        v7 = *((_BYTE *)v5 + 4);
                        v30 = *v5;
                        v8 = *((_BYTE *)v5 + 5);
                        LOBYTE(v26) = v7;
                        v9 = *((_BYTE *)v5 + 6);
                        LOBYTE(v25) = v8;
                        LOBYTE(v24) = v9;
                        v10 = *(v5 - 1);
                        strcpy(v32, (const char *)v5 + 1324);
                        v29 = v10;
                        v11 = v18[11] != v10;
                        if (v18[11] != v10 && (v10 & 0x3F) == 2 && v17 == v16) {
                            v18[11] = v10;
                            v11 = 0;
                        }
                        ReleaseMutex((HANDLE)*v18);
                        if (v11)
                            sub_10071F40(v15, v16, v29, v30, v26, v25, v24, (int)v32, *(v5 - 11));
                        ReleaseMutex((HANDLE) * (v5 - 12));
                        v4 = WaitForMultipleObjects;
                        v5 += 603;
                        ++v16;
                        v18 += 603;
                    } while ((int)v5 < (int)&unk_1178FF18);
                    v2 = v20;
                    v0 = v17;
                    v1 = v15;
                }
                sub_10072110(v1, v0);
                if (dword_11828D10 > (unsigned int)(v2[588] + 1000) && !dword_1178FEF0 &&
                    sub_10072030(v1, v0, v2[589], *((_WORD *)v2 + 1180))) {
                    v12 = 0;
                    v2[588] = dword_11828D10;
                    do {
                        if (v0 != v12) {
                            v27 = dword_11826B00;
                            hMutex = *(&dword_11786828 + 603 * v12);
                            if (!v4(2u, &v27, 0, 0xFFFFFFFF))
                                ExitThread(0);
                            if ((dword_11786854[603 * v12] & 0x3F) != 0 &&
                                !sub_10072030(v15,
                                              v12,
                                              dword_11787188[603 * v12],
                                              dword_1178718C[603 * v12])) {
                                v12 = 16;
                            }
                            ReleaseMutex(hMutex);
                            v0 = v17;
                        }
                        ++v12;
                    } while (v12 < 16);
                    v1 = v15;
                }
            }
            ReleaseMutex((HANDLE) * (v2 - 11));
            ++v0;
            v1 += 133;
            v2 += 603;
            v13 = (int)(v19 + 9648) < (int)&dword_11826AF8;
            v17 = v0;
            v19 += 9648;
            v15 = v1;
            v20 = v2;
        } while (v13);
        result = v21;
        if (!v21)
            dword_1178FEF0 = 0;
        return result;
    }
    // 11786854: using guessed type int dword_11786854[];
    // 11786858: using guessed type int dword_11786858[];
    // 11787188: using guessed type int dword_11787188[];
    // 1178718C: using guessed type int dword_1178718C[];
    // 1178FEF0: using guessed type int dword_1178FEF0;
    // 1178FEF8: using guessed type int dword_1178FEF8[];
    // 11826AF8: using guessed type int dword_11826AF8;
    // 11828D10: using guessed type int dword_11828D10;

    //----- (10071F40) --------------------------------------------------------
    int __cdecl sub_10071F40(
        _DWORD * a1, char a2, char a3, char a4, char a5, char a6, char a7, int a8, int a9) {
        int v9;           // eax
        unsigned int v10; // ebx
        int v11;          // ebp
        int i;            // edi

        v9 = meth_10073F40(a1) + 10;
        v10 = a3 & 0x3F;
        if (v10 <= 2)
            v9 += 24;
        if (v10 == 4)
            v9 += 3;
        if (v9 > 256)
            return 0;
        meth_10073D60(a1, a2);
        meth_10073D60(a1, a3);
        meth_10073D60(a1, a4);
        meth_10073D60(a1, a5);
        meth_10073D60(a1, a6);
        meth_10073D60(a1, a7);
        meth_10073E10(a1, a9);
        if ((a3 & 0x3Fu) <= 2) {
            v11 = 0;
            for (i = 0; i < 24; ++i) {
                if (v11) {
                    meth_10073D60(a1, 0);
                } else {
                    meth_10073D60(a1, *(_BYTE *)(i + a8));
                    if (!*(_BYTE *)(i + a8))
                        v11 = 1;
                }
            }
            v10 = a3 & 0x3F;
        }
        if (v10 == 4)
            meth_10073DC0(a1, dword_11828D14);
        return 1;
    }
    // 11828D14: using guessed type int dword_11828D14;

    //----- (10072030) --------------------------------------------------------
    int __cdecl sub_10072030(_DWORD * a1, char a2, int a3, __int16 a4) {
        if (meth_10073F40(a1) + 6 > 256)
            return 0;
        meth_10073D60(a1, a2 | 0xC0);
        meth_10073DC0(a1, a3);
        meth_10073D80(a1, a4);
        return 1;
    }

    //----- (10072080) --------------------------------------------------------
    int __cdecl sub_10072080(_DWORD * a1, char a2) {
        if (meth_10073F40(a1) + 9 > 256)
            return 0;
        meth_10073D60(a1, a2 | 0xE0);
        meth_10073D60(a1, g_cPlayers);
        meth_10073D60(a1, g_chosenTrack);
        meth_10073D60(a1, g_ChosenWeather);
        meth_10073D80(a1, g_bcar);
        meth_10073D60(a1, dword_10221280);
        meth_10073D60(a1, g_btire);
        meth_10073D60(a1, g_bsuspension);
        return 1;
    }
    // 100B380C: using guessed type int g_chosenTrack;
    // 10221280: using guessed type int dword_10221280;
    // 102212C8: using guessed type int g_cPlayers;
    // 10221320: using guessed type int g_bcar;
    // 1022AF0C: using guessed type int g_bsuspension;
    // 1022AF10: using guessed type int g_btire;
    // 1022B350: using guessed type int g_ChosenWeather;

    //----- (10072110) --------------------------------------------------------
    int __cdecl sub_10072110(_DWORD * a1, char a2) {
        _BYTE *v2; // esi

        if (meth_10073F40(a1) + 9 > 256)
            return 0;
        meth_10073D60(a1, a2 | 0x20);
        v2 = &unk_11826B0C;
        do {
            meth_10073D60(a1, (16 * *v2) | *(v2 - 4));
            v2 += 8;
        } while ((int)v2 < (int)&unk_11826B4C);
        return 1;
    }

    //----- (10072170) --------------------------------------------------------
    int __cdecl sub_10072170(_DWORD * a1) {
        int v1;            // edi
        int v2;            // eax
        int v3;            // eax
        int v5;            // [esp-Ch] [ebp-28h]
        int v6;            // [esp-4h] [ebp-20h]
        int v7;            // [esp+10h] [ebp-Ch]
        HANDLE Handles[2]; // [esp+14h] [ebp-8h] BYREF

        v1 = 0;
        v7 = 0;
        do {
            Handles[0] = dword_11826B00;
            Handles[1] = *(&dword_11786828 + 603 * v1);
            if (!WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF))
                ExitThread(0);
            if ((dword_11786854[603 * v1] & 0x3F) != 0 &&
                meth_10073F40(&dword_11826BD0[133 * v1]) > 3) {
                if (v1) {
                    v6 = meth_10073F40(&dword_11826BD0[133 * v1]);
                    v3 = meth_10073F50(&dword_11826BD0[133 * v1]);
                    if (sub_1000C4D0(*a1, 1, dword_1178682C[603 * v1], 0, v3, v6))
                        v7 = -1;
                } else {
                    v5 = meth_10073F40(dword_11826BD0);
                    v2 = meth_10073F50(dword_11826BD0);
                    np_sub_10003580((int)a1, v2, v5, 1);
                }
            }
            ReleaseMutex(*(&dword_11786828 + 603 * v1++));
        } while (v1 < 16);
        return v7;
    }
    // 1178682C: using guessed type int dword_1178682C[];
    // 11786854: using guessed type int dword_11786854[];

    //----- (10072270) --------------------------------------------------------
    int sub_10072270() {
        int result; // eax

        result = dword_11828D18;
        if (dword_11828D18) {
            SetEvent(dword_11826B00);
            WaitForSingleObject(dword_11828D1C, 0xFFFFFFFF);
            CloseHandle(dword_11828D1C);
            dword_11828D1C = 0;
            result = CloseHandle(dword_11826B00);
            dword_11826B00 = 0;
            dword_11828D18 = 0;
        }
        return result;
    }
    // 11828D18: using guessed type int dword_11828D18;

    //----- (100722D0) --------------------------------------------------------
    int __cdecl sub_100722D0(int *a1) {
        int *v1;     // ebp
        int v2;      // eax
        int v3;      // ecx
        int *v4;     // ebx
        int v5;      // esi
        int v6;      // eax
        int result;  // eax
        void *v8;    // [esp+70h] [ebp-34h] BYREF
        int v9;      // [esp+74h] [ebp-30h] BYREF
        char v10[4]; // [esp+78h] [ebp-2Ch] BYREF
        int v11;     // [esp+7Ch] [ebp-28h] BYREF
        int v12;     // [esp+80h] [ebp-24h]
        int v13;     // [esp+84h] [ebp-20h]
        int v14;     // [esp+88h] [ebp-1Ch]
        int v15;     // [esp+8Ch] [ebp-18h]
        int v16;     // [esp+90h] [ebp-14h] BYREF
        char v17;    // [esp+94h] [ebp-10h]

        v11 = 0;
        v1 = a1;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v2 = a1[10];
        v11 = 20;
        v8 = 0;
        v9 = 0;
        v12 = 65762;
        if (v2)
            v12 = 82146;
        v3 = a1[1];
        v15 = a1[2];
        v4 = a1 + 39;
        v13 = v3;
        v5 = g_DSound->lpVtbl->CreateSoundBuffer(
            g_DSound, (LPCDSBUFFERDESC)&v11, (LPDIRECTSOUNDBUFFER *)(a1 + 39), 0);
        if (v5)
            goto LABEL_9;
        v5 = (*(int(__stdcall **)(int, _DWORD, int, void **, char *, int *, int **, _DWORD))(
            *(_DWORD *)*v4 + 44))(*v4, 0, v1[1], &v8, v10, &v9, &a1, 0);
        if (v5)
            goto LABEL_9;
        qmemcpy(v8, (const void *)*v1, v1[1]);
        v5 = (*(int(__stdcall **)(int, void *, int, _DWORD, _DWORD))(*(_DWORD *)*v4 + 76))(
            *v4, v8, v1[1], 0, 0);
        if (v5 ||
            (v8 = 0,
             (v5 = (*(int(__stdcall **)(int, _DWORD))(*(_DWORD *)*v4 + 60))(*v4, 0)) != 0) ||
            (v5 = (*(int(__stdcall **)(int, _DWORD))(*(_DWORD *)*v4 + 64))(*v4, 0)) != 0 ||
            (v6 = *v4,
             v16 = 20,
             result = (*(int(__stdcall **)(int, int *))(*(_DWORD *)v6 + 12))(v6, &v16),
             (v5 = result) != 0)) {
        LABEL_9:
            if (v8) {
                v5 = (*(int(__stdcall **)(int, void *, int, _DWORD, _DWORD))(*(_DWORD *)*v4 + 76))(
                    *v4, v8, v1[1], 0, 0);
                v8 = 0;
            }
            if (*v4) {
                (*(void(__stdcall **)(int))(*(_DWORD *)*v4 + 8))(*v4);
                *v4 = 0;
                return v5;
            }
        } else {
            if ((v17 & 4) != 0) {
                v1[9] = 1;
                return result;
            }
            v1[9] = 0;
        }
        return v5;
    }

    //----- (10072450) --------------------------------------------------------
    int __cdecl sub_10072450(int a1, int a2) {
        int v2; // ecx
        int i;  // eax

        v2 = a1;
        *(_DWORD *)(a2 + 424) = 0;
        *(_DWORD *)(a2 + 28) = 0;
        for (i = *(_DWORD *)(a1 + 424); i; i = *(_DWORD *)(i + 424))
            v2 = i;
        *(_DWORD *)(v2 + 424) = a2;
        return 0;
    }

    //----- (10072490) --------------------------------------------------------
    int __cdecl sub_10072490(int a1) {
        return (*(int(__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 156) + 64))(
            *(_DWORD *)(a1 + 156), 10 * (*(_DWORD *)(a1 + 16) - 400));
    }

    //----- (100724B0) --------------------------------------------------------
    int __cdecl sub_100724B0(int a1) {
        return (*(int(__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 156) + 68))(
            *(_DWORD *)(a1 + 156), *(_DWORD *)(a1 + 12));
    }

    //----- (100724D0) --------------------------------------------------------
    int __cdecl sub_100724D0(int a1) {
        int result; // eax

        if (byte_100BBAE0)
            result = (*(int(__stdcall **)(_DWORD, unsigned int))(**(_DWORD **)(a1 + 156) + 60))(
                *(_DWORD *)(a1 + 156),
                10 * ((unsigned int)(unsigned __int8)byte_100BBAE0 * *(_DWORD *)(a1 + 20) / 0xFF -
                      400));
        else
            result = (*(int(__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 156) + 60))(
                *(_DWORD *)(a1 + 156), -10000);
        return result;
    }
    // 100BBAE0: using guessed type char byte_100BBAE0;

    //----- (10072520) --------------------------------------------------------
    int __cdecl sub_10072520(int a1) {
        int v1; // eax

        v1 = *(_DWORD *)(a1 + 156);
        if (v1) {
            (*(void(__stdcall **)(_DWORD))(*(_DWORD *)v1 + 8))(*(_DWORD *)(a1 + 156));
            *(_DWORD *)(a1 + 156) = 0;
        }
        return 0;
    }

    //----- (10072550) --------------------------------------------------------
    int __cdecl sub_10072550(int a1) {
        int result; // eax

        if (!*(_DWORD *)(a1 + 28))
            return 0;
        result =
            (*(int(__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 156) + 72))(*(_DWORD *)(a1 + 156));
        if (!result)
            *(_DWORD *)(a1 + 28) = 0;
        return result;
    }

    //----- (10072580) --------------------------------------------------------
    BOOL __cdecl sub_10072580(int a1) {
        BOOL result; // eax

        if (g_Playsfx && g_DSound && dword_118290FC && dword_11828F08[a1])
            result = sub_10072550(dword_11828F08[a1]) == 0;
        else
            result = 1;
        return result;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (100725C0) --------------------------------------------------------
    BOOL __cdecl sub_100725C0(int a1, int a2) {
        int v2; // eax
        int v3; // eax

        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        LODWORD(dbl_11828E88[a2]) = dword_100B5E30[18 * a1];
        v2 = dword_11828F08[a2];
        HIDWORD(dbl_11828E88[a2]) = dword_100B5E34[18 * a1];
        if (v2)
            sub_10072580(a2);
        v3 = dword_100B5DF0[18 * a1 + a2];
        dword_11828F08[a2] = v3;
        return v3 != 0;
    }
    // 10072580: using guessed type _DWORD __cdecl sub_10072580(_DWORD);
    // 100B5DE8: using guessed type int g_Playsfx;
    // 100B5E30: using guessed type int dword_100B5E30[];
    // 11828E88: using guessed type double dbl_11828E88[];
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072640) --------------------------------------------------------
    int __cdecl sub_10072640(int a1, int a2) {
        int v2; // eax

        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        v2 = dword_11828F08[a1];
        if (!v2)
            return 0;
        *(_DWORD *)(v2 + 24) = a2;
        return 1;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072680) --------------------------------------------------------
    int __cdecl sub_10072680(int a1, __int64 a2) {
        int v2; // ecx

        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        if (!sub_10072700(dword_11828F08[a1],
                          (__int64)((double)a2 * dbl_11828E88[a1] * 2.328306436538696e-10)))
            return 0;
        v2 = 3 * a1;
        dword_11828D28[2 * v2] = a2;
        dword_11828D2C[2 * v2] = HIDWORD(a2);
        return 1;
    }
    // 10072700: using guessed type _DWORD __cdecl sub_10072700(_DWORD, _DWORD);
    // 100B5DE8: using guessed type int g_Playsfx;
    // 11828D28: using guessed type int dword_11828D28[];
    // 11828D2C: using guessed type int dword_11828D2C[];
    // 11828E88: using guessed type double dbl_11828E88[];
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072700) --------------------------------------------------------
    int __cdecl sub_10072700(int a1, int a2) {
        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        if (!a1)
            return 0;
        *(_DWORD *)(a1 + 12) = a2;
        sub_100724B0(a1);
        return 1;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072750) --------------------------------------------------------
    BOOL __cdecl sub_10072750(int a1, int a2, float a3) {
        return sub_10072770(a1, 2 * a2, (__int64)a3);
    }

    //----- (10072770) --------------------------------------------------------
    BOOL __cdecl sub_10072770(int a1, int a2, int a3) {
        BOOL result; // eax

        if (g_Playsfx && g_DSound && dword_118290FC)
            result = sub_10072700(dword_100B5DF0[18 * a1 + a2], a3) != 0;
        else
            result = 1;
        return result;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (100727C0) --------------------------------------------------------
    int __cdecl sub_100727C0(int a1, unsigned int a2) {
        int result; // eax

        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        if (!sub_10072820(dword_11828F08[a1], a2))
            return 0;
        result = 1;
        dword_11828D34[6 * a1] = a2;
        return result;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072820) --------------------------------------------------------
    int __cdecl sub_10072820(int a1, unsigned int a2) {
        int v2;        // ecx
        signed int v3; // esi
        int v4;        // eax

        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        if (!a1)
            return 0;
        v2 = (unsigned __int16)a2;
        v3 = HIWORD(a2);
        if (HIWORD(a2) > 0x20u)
            v3 = 32;
        if ((unsigned __int16)a2 > 0x20u)
            v2 = 32;
        if (v3 <= v2) {
            *(_DWORD *)(a1 + 16) = 400;
            *(_DWORD *)(a1 + 20) = 400 * v2 / 32;
            if (v2) {
                v4 = 400 * (v2 - v3) / v2;
                goto LABEL_14;
            }
        } else {
            *(_DWORD *)(a1 + 16) = 400;
            *(_DWORD *)(a1 + 20) = 400 * v3 / 32;
            if (v3) {
                v4 = 400 * (v2 - v3) / v3;
            LABEL_14:
                *(_DWORD *)(a1 + 16) = v4 + 400;
                return !sub_100724D0(a1) && !sub_10072490(a1);
            }
        }
        return !sub_100724D0(a1) && !sub_10072490(a1);
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072910) --------------------------------------------------------
    int __cdecl sub_10072910(int a1, int a2, int a3) {
        int v3;     // ebx
        __int64 v4; // rax
        int v5;     // ecx

        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        v3 = dword_100B5DF0[18 * a1 + a2];
        if (!v3 || sub_100729E0(v3, a3))
            return 0;
        v4 = (__int64)((double)*(unsigned int *)(v3 + 12) * 4294967296.0 / dbl_11828E88[a2]);
        dword_118AC728[6 * a2] = v4;
        dword_118AC72C[6 * a2] = HIDWORD(v4);
        v5 = dword_118AC728[6 * a2];
        dword_11828F08[a2] = v3;
        dword_11828D28[6 * a2] = v5;
        dword_11828D2C[6 * a2] = HIDWORD(v4);
        return 1;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 11828D28: using guessed type int dword_11828D28[];
    // 11828D2C: using guessed type int dword_11828D2C[];
    // 11828E88: using guessed type double dbl_11828E88[];
    // 118290FC: using guessed type int dword_118290FC;
    // 118AC728: using guessed type int dword_118AC728[];
    // 118AC72C: using guessed type int dword_118AC72C[];

    //----- (100729E0) --------------------------------------------------------
    int __cdecl sub_100729E0(int a1, int a2) {
        *(_DWORD *)(a1 + 24) = a2;
        return sub_10072A00(a1);
    }

    //----- (10072A00) --------------------------------------------------------
    int __cdecl sub_10072A00(int a1) {
        int v1;     // edi
        int v2;     // eax
        int result; // eax
        int v4;     // [esp+8h] [ebp-4h] BYREF

        v1 = 0;
        v2 = *(_DWORD *)(a1 + 24);
        v4 = 0;
        if (v2)
            v1 = 1;
        if (!(*(int(__stdcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 156) + 36))(
                *(_DWORD *)(a1 + 156), &v4) &&
            (v4 & 1) == 1) {
            return (*(int(__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 156) + 52))(
                *(_DWORD *)(a1 + 156), 0);
        }
        result = (*(int(__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 156) + 48))(
            *(_DWORD *)(a1 + 156), 0, 0, v1);
        if (!result)
            *(_DWORD *)(a1 + 28) = 1;
        return result;
    }

    //----- (10072A70) --------------------------------------------------------
    BOOL __cdecl sub_10072A70(int a1, unsigned int a2, int a3) {
        return sub_10072A90(a1, 1, a2, a3);
    }

    //----- (10072A90) --------------------------------------------------------
    BOOL __cdecl sub_10072A90(int a1, int a2, unsigned int a3, int a4) {
        int v4;      // esi
        BOOL result; // eax

        result = 1;
        if (g_Playsfx) {
            if (g_DSound) {
                if (dword_118290FC) {
                    v4 = dword_100B5DF0[18 * a1 + a2];
                    if (!sub_10072820(v4, a3) || sub_100729E0(v4, a4))
                        result = 0;
                }
            }
        }
        return result;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072AF0) --------------------------------------------------------
    BOOL __cdecl sub_10072AF0(int a1, unsigned int a2) {
        return sub_10072A70(a1, a2, 0);
    }

    //----- (10072B10) --------------------------------------------------------
    BOOL __cdecl sub_10072B10(int a1, int a2, unsigned int a3) {
        return sub_10072A90(a1, 2 * a2, a3, 1);
    }

    //----- (10072B30) --------------------------------------------------------
    BOOL __cdecl sub_10072B30(int a1, int a2, unsigned int a3) {
        BOOL result; // eax

        if (g_Playsfx && g_DSound && dword_118290FC)
            result = sub_10072820(dword_100B5DF0[18 * a1 + a2], a3) != 0;
        else
            result = 1;
        return result;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072B80) --------------------------------------------------------
    BOOL __cdecl sub_10072B80(int a1, int a2, unsigned int a3) {
        return sub_10072B30(a1, 2 * a2, a3);
    }

    //----- (10072BA0) --------------------------------------------------------
    BOOL __cdecl sub_10072BA0(int a1, int a2) {
        int v2;      // edx
        BOOL result; // eax

        if (g_Playsfx && g_DSound && dword_118290FC &&
            (v2 = a2 + 8 * a1, dword_100B5DF0[2 * v2 + 2 * a1]))
            result = sub_10072550(dword_100B5DF0[2 * v2 + 2 * a1]) == 0;
        else
            result = 1;
        return result;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072BF0) --------------------------------------------------------
    int __cdecl sub_10072BF0(int a1) {
        int *v1; // esi
        int v2;  // eax

        v1 = (int *)(a1 + 424);
        v2 = *(_DWORD *)(a1 + 424);
        if (v2) {
            do {
                sub_10072550(v2);
                v1 = (int *)(*v1 + 424);
                v2 = *v1;
            } while (*v1);
        }
        return 0;
    }

    //----- (10072C20) --------------------------------------------------------
    int __cdecl sub_10072C20(int a1) {
        int v1;     // esi
        HGLOBAL v2; // eax
        HGLOBAL v3; // eax
        HGLOBAL v4; // eax
        HGLOBAL v5; // eax
        int v6;     // ebx
        HGLOBAL v7; // eax
        HGLOBAL v8; // eax

        v1 = *(_DWORD *)(a1 + 424);
        *(_DWORD *)(a1 + 424) = 0;
        if (v1) {
            do {
                sub_10072520(v1);
                v2 = GlobalHandle(*(LPCVOID *)(v1 + 8));
                GlobalUnlock(v2);
                v3 = GlobalHandle(*(LPCVOID *)(v1 + 8));
                GlobalFree(v3);
                v4 = GlobalHandle(*(LPCVOID *)v1);
                GlobalUnlock(v4);
                v5 = GlobalHandle(*(LPCVOID *)v1);
                GlobalFree(v5);
                v6 = *(_DWORD *)(v1 + 424);
                v7 = GlobalHandle((LPCVOID)v1);
                GlobalUnlock(v7);
                v8 = GlobalHandle((LPCVOID)v1);
                GlobalFree(v8);
                v1 = v6;
            } while (v6);
        }
        return 0;
    }
    // 10072520: using guessed type _DWORD __cdecl sub_10072520(_DWORD);

    //----- (10072CA0) --------------------------------------------------------
    HMMIO __cdecl sub_10072CA0(LPSTR pszFileName) {
        HGLOBAL v1; // eax
        HMMIO v2;   // ebx
        HGLOBAL v3; // eax
        HGLOBAL v4; // eax
        HGLOBAL v5; // eax
        HGLOBAL v6; // eax
        HGLOBAL v7; // eax
        HGLOBAL v8; // eax
        int v10;    // [esp+10h] [ebp-4h] BYREF

        v1 = GlobalAlloc(0x40u, 0x1ACu);
        v2 = (HMMIO)GlobalLock(v1);
        if (v2) {
            *(_DWORD *)v2 = 0;
            *((_DWORD *)v2 + 2) = 0;
            *((_DWORD *)v2 + 39) = 0;
            *((_DWORD *)v2 + 10) = 0;
            strcpy((char *)v2 + 164, pszFileName);
            if (!sub_10076FA0(pszFileName, (int)(v2 + 1), (int)&v10, (int)(v2 + 2), v2) &&
                !sub_100722D0((int *)v2) && !sub_10072450((int)&dword_11828F48, (int)v2)) {
                if (strrchr((const char *)v2 + 164, 92))
                    *((_DWORD *)v2 + 40) = &strrchr((const char *)v2 + 164, 92)[-163 - (_DWORD)v2];
                else
                    *((_DWORD *)v2 + 40) = 0;
                *(_DWORD *)(v2 + 3) = *(_DWORD *)(HMMIO)(*((_DWORD *)v2 + 2) + 4);
                *((_DWORD *)v2 + 4) = 400;
                *((_DWORD *)v2 + 5) = 400;
                sub_100724D0((int)v2);
                sub_100724B0((int)v2);
                sub_10072490((int)v2);
                return v2;
            }
        }
        if (!v2)
            return v2;
        sub_10072520((int)v2);
        if (*((_DWORD *)v2 + 2)) {
            v3 = GlobalHandle(*((LPCVOID *)v2 + 2));
            GlobalUnlock(v3);
            v4 = GlobalHandle(*((LPCVOID *)v2 + 2));
            GlobalFree(v4);
        }
        if (*(_DWORD *)v2) {
            v5 = GlobalHandle(*(LPCVOID *)v2);
            GlobalUnlock(v5);
            v6 = GlobalHandle(*(LPCVOID *)v2);
            GlobalFree(v6);
        }
        v7 = GlobalHandle(v2);
        GlobalUnlock(v7);
        v8 = GlobalHandle(v2);
        GlobalFree(v8);
        return 0;
    }

    //----- (10072E00) --------------------------------------------------------
    int sub_10072E00() {
        int *v0; // edi
        int v1;  // esi

        if (g_Playsfx && g_DSound && dword_118290FC) {
            v0 = dword_11828F08;
            do {
                v1 = *v0;
                if (*v0) {
                    (*(void(__stdcall **)(_DWORD, int))(**(_DWORD **)(v1 + 156) + 60))(
                        *(_DWORD *)(v1 + 156), -10000);
                    (*(void(__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 156) + 64))(
                        *(_DWORD *)(v1 + 156), 0);
                }
                ++v0;
            } while ((int)v0 < (int)&unk_11828F44);
        }
        return 1;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10072E60) --------------------------------------------------------
    int sub_10072E60() {
        int v0;     // esi
        int *v1;    // ebx
        int v2;     // edi
        int v3;     // eax
        int v4;     // eax
        __int64 v6; // [esp-8h] [ebp-18h]
        __int64 v7; // [esp-8h] [ebp-18h]
        __int64 v8; // [esp-8h] [ebp-18h]

        v0 = 0;
        v1 = dword_100B64F8;
        v2 = 0;
        do {
            if (dword_118290F4) {
                v3 = dword_100B5DF0[v0];
                if (v3 && v3 == dword_11828F08[v0]) {
                    sub_100725C0(25, v0);
                    sub_10072640(v0, 1);
                    HIDWORD(v6) = dword_118AC72C[v2];
                    LODWORD(v6) = dword_118AC728[v2];
                    sub_10072680(v0, v6);
                    sub_100727C0(v0, dword_118AC734[v2]);
                    sub_10072910(25, v0, 1);
                }
            } else if (*v1 && *v1 == dword_11828F08[v0]) {
                sub_100725C0(0, v0);
                sub_10072640(v0, 1);
                HIDWORD(v7) = dword_118AC72C[v2];
                LODWORD(v7) = dword_118AC728[v2];
                sub_10072680(v0, v7);
                sub_100727C0(v0, dword_118AC734[v2]);
                sub_10072910(0, v0, 1);
            }
            v4 = dword_118AC720[v2];
            if (dword_11828D20[v2] != v4)
                dword_11828D20[v2] = v4;
            if (dword_11828D28[v2] != dword_118AC728[v2] ||
                dword_11828D2C[v2] != dword_118AC72C[v2]) {
                HIDWORD(v8) = dword_118AC72C[v2];
                LODWORD(v8) = dword_118AC728[v2];
                sub_10072680(v0, v8);
            }
            if (dword_11828D34[v2] != dword_118AC734[v2])
                sub_100727C0(v0, dword_118AC734[v2]);
            if (dword_118AC72C[v2] | dword_118AC728[v2] && !pm_sub_10072FE0(v0)) {
                dword_118AC728[v2] = 0;
                dword_11828D28[v2] = 0;
                dword_118AC72C[v2] = 0;
                dword_11828D2C[v2] = 0;
            }
            ++v1;
            ++v0;
            v2 += 6;
        } while ((int)v1 < (int)&unk_100B6534);
        return 1;
    }
    // 11828D20: using guessed type int dword_11828D20[];
    // 11828D28: using guessed type int dword_11828D28[];
    // 11828D2C: using guessed type int dword_11828D2C[];
    // 118290F4: using guessed type int dword_118290F4;
    // 118AC720: using guessed type int dword_118AC720[];
    // 118AC728: using guessed type int dword_118AC728[];
    // 118AC72C: using guessed type int dword_118AC72C[];
    // 118AC734: using guessed type int dword_118AC734[];

    //----- (10072FE0) --------------------------------------------------------
    BOOL __cdecl pm_sub_10072FE0(int a1) {
        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        if (dword_11828F08[a1])
            return sub_10073020(dword_11828F08[a1]);
        return 0;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10073020) --------------------------------------------------------
    BOOL __cdecl sub_10073020(int a1) {
        BOOL result; // eax
        int v2;      // [esp+8h] [ebp-4h] BYREF

        v2 = 0;
        if ((*(int(__stdcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 156) + 36))(
                *(_DWORD *)(a1 + 156), &v2))
            result = 0;
        else
            result = (v2 & 1) == 1;
        return result;
    }

    //----- (10073060) --------------------------------------------------------
    int *sub_10073060() {
        int *result; // eax

        result = dword_100B6C00;
        do {
            *(result - 432) = 0;
            *result = 0;
            result[18] = 0;
            ++result;
        } while ((int)result < (int)&unk_100B6C3C);
        return result;
    }

    //----- (10073080) --------------------------------------------------------
    int __cdecl sub_10073080(int a1, int a2) {
        int result; // eax

        result = a2 + 1;
        dword_100B6540[2 * a1] = a2 + 1;
        dword_100B6C00[2 * a1] = a2 + 1;
        dword_100B6C48[2 * a1] = a2 + 1;
        return result;
    }

    //----- (100730A0) --------------------------------------------------------
    int __cdecl sub_100730A0(int a1) {
        int v1;                 // edx
        HMMIO v2;               // eax
        HMMIO v3;               // eax
        HMMIO v4;               // eax
        int v6;                 // [esp+10h] [ebp-408h]
        CHAR pszFileName[1024]; // [esp+18h] [ebp-400h] BYREF

        v6 = 1;
        if (g_Playsfx && g_DSound && dword_118290FC && (v1 = dword_100B6540[2 * a1]) != 0) {
            strcpy(pszFileName, aSfx);
            strcat(pszFileName, (const char *)dword_100B84F4[v1]);
            strcat(pszFileName, aWav);
            v2 = sub_10072CA0(pszFileName);
            dword_100B5DF0[2 * a1] = (int)v2;
            if (!v2)
                v6 = 0;
            strcpy(pszFileName, aSfx);
            strcat(pszFileName, (const char *)dword_100B84F4[dword_100B6C00[2 * a1]]);
            strcat(pszFileName, aHWav);
            v3 = sub_10072CA0(pszFileName);
            dword_100B64B0[2 * a1] = (int)v3;
            if (!v3)
                v6 = 0;
            strcpy(pszFileName, aSfx);
            strcat(pszFileName, (const char *)dword_100B84F4[dword_100B6C48[2 * a1]]);
            strcat(pszFileName, aRWav);
            v4 = sub_10072CA0(pszFileName);
            dword_100B64F8[2 * a1] = (int)v4;
            if (!v4)
                return 0;
        } else {
            dword_100B5DF0[2 * a1] = 0;
            dword_100B64B0[2 * a1] = 0;
            dword_100B64F8[2 * a1] = 0;
        }
        return v6;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 100B84F4: using guessed type int dword_100B84F4[];
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10073320) --------------------------------------------------------
    int __cdecl pm_sub_10073320(int a1) {
        char *v1;               // ebp
        int v2;                 // edi
        int *v3;                // ebx
        int *v4;                // esi
        int v5;                 // ebx
        const char **v6;        // ebp
        HMMIO v7;               // eax
        char *v9;               // [esp+10h] [ebp-410h]
        int v10;                // [esp+10h] [ebp-410h]
        int v11;                // [esp+14h] [ebp-40Ch]
        int v12;                // [esp+18h] [ebp-408h]
        int v13;                // [esp+1Ch] [ebp-404h]
        CHAR pszFileName[1024]; // [esp+20h] [ebp-400h] BYREF

        v11 = 1;
        if (!g_Playsfx || !g_DSound || !dword_118290FC)
            return 1;
        if (a1) {
            if (a1 == 1) {
                v1 = (char *)&unk_100B8938;
                dword_11828F00 = 25;
                v2 = 0;
                v3 = dword_100B64F8;
                v4 = dword_100B64B0;
                do {
                    if (dword_100B6540[v2]) {
                        if (!sub_100730A0(v2 / 2))
                            v11 = 0;
                    } else {
                        dword_100B5DF0[v2] = 0;
                        *v4 = 0;
                        *v3 = 0;
                    }
                    ++v4;
                    ++v2;
                    ++v3;
                } while ((int)v4 < (int)&unk_100B64EC);
            } else {
                v1 = v9;
            }
        } else {
            v1 = (char *)&unk_100B89A0;
            dword_11828F00 = 9;
        }
        v12 = 1;
        if (dword_11828F00 - 1 > 1) {
            v5 = 72;
            v6 = (const char **)(v1 + 4);
            v10 = 72;
            do {
                v13 = 15;
                do {
                    if (*(int *)((char *)dword_100B6540 + v5)) {
                        strcpy(pszFileName, aSfx);
                        strcat(pszFileName, *v6);
                        v7 = sub_10072CA0(pszFileName);
                        *(int *)((char *)dword_100B5DF0 + v5) = (int)v7;
                        if (!v7)
                            v11 = 0;
                    } else {
                        *(int *)((char *)dword_100B5DF0 + v5) = 0;
                    }
                    v5 += 4;
                    --v13;
                } while (v13);
                v5 = v10 + 72;
                ++v6;
                ++v12;
                v10 += 72;
            } while (v12 < dword_11828F00 - 1);
        }
        return v11;
    }
    // 100733E2: variable 'v9' is possibly undefined
    // 100B5DE8: using guessed type int g_Playsfx;
    // 11828F00: using guessed type int dword_11828F00;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (100734F0) --------------------------------------------------------
    int sub_100734F0() {
        int v0;  // esi
        int *v1; // edx
        int *v2; // edi

        if (g_Playsfx && g_DSound && dword_118290FC) {
            sub_10072BF0((int)&dword_11828F48);
            sub_10072C20((int)&dword_11828F48);
            v0 = dword_11828F00;
            if (dword_11828F00 > 0) {
                v1 = dword_100B5DF0;
                do {
                    v2 = v1;
                    v1 += 18;
                    --v0;
                    memset(v2, 0, 0x3Cu);
                } while (v0);
            }
            memset(dword_11828F08, 0, sizeof(dword_11828F08));
        }
        return 1;
    }
    // 100B5DE8: using guessed type int g_Playsfx;
    // 11828F00: using guessed type int dword_11828F00;
    // 118290FC: using guessed type int dword_118290FC;

    //----- (10073730) --------------------------------------------------------
    int ReleaseDirectSound() {
        HGLOBAL v1; // eax
        HGLOBAL v2; // eax
        HGLOBAL v3; // eax
        HGLOBAL v4; // eax

        if (--dword_118290FC)
            return 1;
        sub_100734F0();
        if (g_dSoundBuffer) {
            g_dSoundBuffer->lpVtbl->Stop(g_dSoundBuffer);
            g_dSoundBuffer->lpVtbl->Release(g_dSoundBuffer);
            g_dSoundBuffer = 0;
        }
        if (g_DSound) {
            g_DSound->lpVtbl->Release(g_DSound);
            g_DSound = 0;
        }
        if (pMem) {
            v1 = GlobalHandle(pMem);
            GlobalUnlock(v1);
            v2 = GlobalHandle(pMem);
            GlobalFree(v2);
            pMem = 0;
        }
        if (dword_11828F48) {
            v3 = GlobalHandle(dword_11828F48);
            GlobalUnlock(v3);
            v4 = GlobalHandle(dword_11828F48);
            GlobalFree(v4);
            dword_11828F48 = 0;
        }
        return 1;
    }
    // 118290FC: using guessed type int dword_118290FC;

    //----- (100737E0) --------------------------------------------------------
    int sub_100737E0() {
        int result; // eax

        dword_11829110 = dword_118AA0B0(&unk_100BAAC8, 0, 64, 64, 1, 4, 0, 0, 1, 1, 15, 15, 1, 0);
        result = sub_10024AE0(dword_11829110);
        dword_1182931C = result;
        return result;
    }
    // 11829110: using guessed type int dword_11829110;
    // 1182931C: using guessed type int dword_1182931C;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10073820) --------------------------------------------------------
    int sub_10073820() {
        int i;      // esi
        int j;      // esi
        int k;      // esi
        int l;      // esi
        int result; // eax

        if (dword_100B8C90 <= 1) {
            for (i = 0; i < 27; ++i)
                dword_11829238[i] =
                    tex_sub_dword_118AA0AC((char *)&unk_1009B4C8 + dword_100A6070[i],
                                           0,
                                           64,
                                           64,
                                           704,
                                           1,
                                           3,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           1,
                                           0);
            for (j = 0; j < 26; ++j)
                dword_118292A8[j] =
                    tex_sub_dword_118AA0AC((char *)&unk_100946C8 + dword_100A60E0[j],
                                           0,
                                           64,
                                           64,
                                           704,
                                           1,
                                           3,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           1,
                                           0);
        }
        for (k = 0; k < 27; ++k)
            dword_11829158[k] = tex_sub_dword_118AA0AC((char *)&unk_100A4170 + dword_100A6150[k],
                                                       0,
                                                       32,
                                                       32,
                                                       392,
                                                       1,
                                                       3,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       1,
                                                       0);
        for (l = 0; l < 26; ++l) {
            result = tex_sub_dword_118AA0AC((char *)&unk_100A22D0 + dword_100A61C0[l],
                                            0,
                                            32,
                                            32,
                                            392,
                                            1,
                                            3,
                                            0,
                                            0,
                                            0,
                                            0,
                                            0,
                                            0,
                                            1,
                                            0);
            dword_118291C8[l] = result;
        }
        return result;
    }
    // 100A6070: using guessed type int dword_100A6070[];
    // 100A60E0: using guessed type int dword_100A60E0[];
    // 100A6150: using guessed type int dword_100A6150[];
    // 100A61C0: using guessed type int dword_100A61C0[];
    // 100B8C90: using guessed type int dword_100B8C90;
    // 11829158: using guessed type int dword_11829158[];
    // 118291C8: using guessed type int dword_118291C8[];
    // 11829238: using guessed type int dword_11829238[];
    // 118292A8: using guessed type int dword_118292A8[];
    // 118AA0AC: using guessed type int (__cdecl *tex_sub_dword_118AA0AC)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10073950) --------------------------------------------------------
    int sub_10073950() {
        int result; // eax

        result = dword_118AA0B0(&unk_100B6CA8, 0, 64, 64, 1, 4, 0, 0, 1, 1, 0, 0, 1, 0);
        dword_11829328 = result;
        return result;
    }
    // 11829328: using guessed type int dword_11829328;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10073980) --------------------------------------------------------
    int sub_10073980() {
        int result; // eax

        result = dword_118AA0B0(&unk_100B9CB0, 0, 32, 64, 0, 4, 0, 0, 0, 0, 0, 0, 1, 0);
        dword_11829108 = result;
        return result;
    }
    // 11829108: using guessed type int dword_11829108;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (100739B0) --------------------------------------------------------
    int sub_100739B0() {
        int result; // eax

        result = dword_118AA0B0(&unk_100B94A8, 0, 64, 64, 0, 4, 0, 0, 0, 0, 0, 0, 1, 0);
        dword_11829314 = result;
        return result;
    }
    // 11829314: using guessed type int dword_11829314;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (100739E0) --------------------------------------------------------
    int sub_100739E0() {
        int result; // eax

        result = dword_118AA0B0(&unk_100B8CA0, 0, 64, 64, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0);
        dword_11829324 = result;
        return result;
    }
    // 11829324: using guessed type int dword_11829324;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10073AC0) --------------------------------------------------------
    void *sub_10073AC0() {
        void *result; // eax

        result =
            (void *)dword_118AA0B0(&lutBuffer_0, &lutBuffer, 32, 128, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0);
        off_100A6498 = result;
        return result;
    }
    // 100A6498: using guessed type void *off_100A6498;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10073B00) --------------------------------------------------------
    void *sub_10073B00() {
        void *result; // eax

        result =
            (void *)dword_118AA0B0(&ciBuffer_0, &ciBuffer, 32, 128, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0);
        off_100A64A0 = result;
        off_100A649C = result;
        return result;
    }
    // 100A649C: using guessed type void *off_100A649C;
    // 100A64A0: using guessed type void *off_100A64A0;
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10073B40) --------------------------------------------------------
    void __thiscall meth_10073B40(void *this) {
        *((_DWORD *)this + 2) = 0;
        *((_DWORD *)this + 3) = 0;
        *(_DWORD *)this = 0;
        *((_DWORD *)this + 1) = 0;
        *((_DWORD *)this + 4) = (char *)this + 20;
    }

    //----- (10073B60) --------------------------------------------------------
    _DWORD *__thiscall meth_10073B60(_DWORD * this, int a2, int a3) {
        _DWORD *result; // eax

        result = this;
        this[2] = 0;
        *this = 0;
        this[1] = 0;
        this[3] = a3;
        this[4] = a2;
        return result;
    }

    //----- (10073B80) --------------------------------------------------------
    int __thiscall meth_10073B80(_DWORD * this) {
        int result; // eax

        result = 0;
        this[2] = 0;
        this[3] = 0;
        *this = 0;
        this[1] = 0;
        return result;
    }

    //----- (10073BA0) --------------------------------------------------------
    int __thiscall meth_10073BA0(_DWORD * this, int a2) {
        int result; // eax

        meth_10073D20(this);
        result = a2;
        this[1] += a2;
        return result;
    }

    //----- (10073BC0) --------------------------------------------------------
    char __thiscall meth_10073BC0(_DWORD * this) {
        int v2;      // ecx
        char result; // al

        meth_10073D20(this);
        v2 = this[1];
        result = *(_BYTE *)(this[4] + v2);
        this[1] = v2 + 1;
        return result;
    }

    //----- (10073BE0) --------------------------------------------------------
    int __thiscall meth_10073BE0(_DWORD * this) {
        int v2;              // ecx
        _BYTE *v3;           // eax
        unsigned __int16 v4; // dx

        meth_10073D20(this);
        v2 = this[1];
        v3 = (_BYTE *)(v2 + this[4]);
        HIBYTE(v4) = *v3;
        LOBYTE(v4) = v3[1];
        this[1] = v2 + 2;
        return v4;
    }

    //----- (10073C10) --------------------------------------------------------
    int __thiscall meth_10073C10(_DWORD * this) {
        int v2;              // ecx
        _BYTE *v3;           // eax
        unsigned __int16 v4; // dx
        int v5;              // eax

        meth_10073D20(this);
        v2 = this[1];
        v3 = (_BYTE *)(v2 + this[4]);
        LOBYTE(v4) = v3[1];
        HIBYTE(v4) = *v3;
        v5 = (unsigned __int8)v3[2];
        this[1] = v2 + 3;
        return (v4 << 8) | v5;
    }

    //----- (10073C40) --------------------------------------------------------
    int __thiscall meth_10073C40(_DWORD * this) {
        int v2;              // edi
        unsigned __int8 *v3; // ecx
        int v4;              // eax
        int v5;              // edx
        int v6;              // ecx

        meth_10073D20(this);
        v2 = this[1];
        v3 = (unsigned __int8 *)(this[4] + v2);
        v4 = v3[1] | ((char)*v3 << 8);
        v5 = v3[2];
        v6 = v3[3];
        this[1] = v2 + 4;
        return v6 | ((v5 | (v4 << 8)) << 8);
    }

    //----- (10073C90) --------------------------------------------------------
    unsigned int __thiscall meth_10073C90(int *this, int a2) {
        int v3;              // ecx
        unsigned int result; // eax
        int v5;              // edx
        char v6;             // di
        int v7;              // ebx
        unsigned int v8;     // ebp
        int v9;              // ecx
        int i;               // [esp+4h] [ebp-4h]

        v3 = a2;
        result = 0;
        for (i = 0; a2; a2 -= v5) {
            v5 = 8 - *this;
            if (v5 <= v3) {
                v6 = 0;
            } else {
                v5 = v3;
                v6 = 8 - *(_BYTE *)this - v3;
            }
            v7 = this[1];
            v8 = (*(char *)(this[4] + v7) & (unsigned int)(((1 << v5) - 1) << v6)) >> v6;
            v9 = v5 + *this;
            *this = v9;
            result = v8 | (result << v5);
            i += v5;
            if (v9 >= 8) {
                *this = 0;
                this[1] = v7 + 1;
            }
            v3 = a2 - v5;
        }
        return result;
    }

    //----- (10073D20) --------------------------------------------------------
    int __thiscall meth_10073D20(_DWORD * this) {
        int v1;     // eax
        int result; // eax

        if (*this) {
            v1 = this[1];
            *this = 0;
            result = v1 + 1;
            this[1] = result;
        }
        return result;
    }

    //----- (10073D40) --------------------------------------------------------
    BOOL __thiscall meth_10073D40(_DWORD * this) {
        int v1; // eax

        v1 = this[1];
        if (*this)
            ++v1;
        return v1 >= this[3];
    }

    //----- (10073D60) --------------------------------------------------------
    int __thiscall meth_10073D60(_DWORD * this, char a2) {
        int result; // eax

        meth_10073F20(this);
        *(_BYTE *)(this[4] + this[3]) = a2;
        result = this[3] + 1;
        this[3] = result;
        return result;
    }

    //----- (10073D80) --------------------------------------------------------
    int __thiscall meth_10073D80(_DWORD * this, __int16 a2) {
        int v3;     // edx
        int v4;     // ecx
        int result; // eax

        meth_10073F20(this);
        *(_BYTE *)(this[4] + this[3]) = HIBYTE(a2);
        v3 = this[4];
        v4 = this[3] + 1;
        this[3] = v4;
        *(_BYTE *)(v3 + v4) = a2;
        result = this[3] + 1;
        this[3] = result;
        return result;
    }

    //----- (10073DC0) --------------------------------------------------------
    int __thiscall meth_10073DC0(_DWORD * this, int a2) {
        int v3;     // edi
        int v4;     // ecx
        int v5;     // edx
        int v6;     // ecx
        int result; // eax

        meth_10073F20(this);
        *(_BYTE *)(this[3] + this[4]) = BYTE2(a2);
        v3 = this[4];
        v4 = this[3] + 1;
        this[3] = v4;
        *(_BYTE *)(v3 + v4) = BYTE1(a2);
        v5 = this[4];
        v6 = this[3] + 1;
        this[3] = v6;
        *(_BYTE *)(v5 + v6) = a2;
        result = this[3] + 1;
        this[3] = result;
        return result;
    }

    //----- (10073E10) --------------------------------------------------------
    int __thiscall meth_10073E10(_DWORD * this, int a2) {
        int v3;     // edi
        int v4;     // ecx
        int v5;     // edi
        int v6;     // ecx
        int v7;     // edx
        int v8;     // ecx
        int result; // eax

        meth_10073F20(this);
        *(_BYTE *)(this[3] + this[4]) = HIBYTE(a2);
        v3 = this[4];
        v4 = this[3] + 1;
        this[3] = v4;
        *(_BYTE *)(v3 + v4) = BYTE2(a2);
        v5 = this[4];
        v6 = this[3] + 1;
        this[3] = v6;
        *(_BYTE *)(v5 + v6) = BYTE1(a2);
        v7 = this[4];
        v8 = this[3] + 1;
        this[3] = v8;
        *(_BYTE *)(v7 + v8) = a2;
        result = this[3] + 1;
        this[3] = result;
        return result;
    }

    //----- (10073E70) --------------------------------------------------------
    int __thiscall meth_10073E70(_DWORD * this, int a2, int a3) {
        int v3;     // ebp
        int v4;     // edi
        _BYTE *v5;  // edx
        int result; // eax
        int v7;     // eax
        char v8;    // [esp+10h] [ebp+8h]

        v3 = a3;
        while (v3) {
            v4 = 8 - this[2];
            if (v4 <= v3) {
                v8 = 0;
            } else {
                v8 = v4 - v3;
                v4 = v3;
            }
            v3 -= v4;
            v5 = (_BYTE *)(this[4] + this[3]);
            *v5 = (((1 << this[2]) - 1) << (8 - this[2])) & *v5 |
                  ((unsigned __int8)((a2 & (unsigned int)(((1 << v4) - 1) << v3)) >> v3) << v8);
            result = v4 + this[2];
            this[2] = result;
            if (result >= 8) {
                v7 = this[3];
                this[2] = 0;
                result = v7 + 1;
                this[3] = result;
            }
        }
        return result;
    }

    //----- (10073F20) --------------------------------------------------------
    int __thiscall meth_10073F20(_DWORD * this) {
        int result; // eax
        int v2;     // eax

        result = this[2];
        if (result) {
            v2 = this[3];
            this[2] = 0;
            result = v2 + 1;
            this[3] = result;
        }
        return result;
    }

    //----- (10073F40) --------------------------------------------------------
    int __thiscall meth_10073F40(_DWORD * this) {
        int result; // eax

        result = this[3];
        if (this[2])
            ++result;
        return result;
    }

    //----- (10073F50) --------------------------------------------------------
    int __thiscall meth_10073F50(_DWORD * this) {
        return this[4];
    }

    //----- (10073F60) --------------------------------------------------------
    // positive sp value has been detected, the output may be wrong!
    HMODULE LoadBrstringDll() {
        HMODULE hMod;      // eax
        CHK_File *cFile;   // esi
        HINSTANCE hInst;   // ebx
        void *brStringMem; // edx
        int v4;            // eax
        UINT v5;           // edi
        _DWORD *v6;        // esi
        int v7;            // eax
        void *_unused;     // [esp-4h] [ebp-10h]

        memset(&unk_11829374, 0, 0x4B8u);
        hMod = (HMODULE)g_brstring;
        if (!g_brstring) {
            cFile = CHK_FReadOpen(kBRStringDLLFilename);
            brStringFileSize = CHK_GetFileSize(cFile, _unused);
            CHK_FClose(cFile);
            hMod = LoadLibraryA(kBRStringDLLFilename);
            hInst = hMod;
            if (hMod) {
                brStringMem = malloc(brStringFileSize);
                g_brstring = brStringMem;
                if (brStringMem) {
                    v4 = dword_11829830;
                    v5 = 1;
                    v6 = &unk_11829374;
                    do {
                        v7 = LoadStringA(hInst, v5, (LPSTR)brStringMem + v4, brStringFileSize - v4);
                        brStringMem = g_brstring;
                        if (v7) {
                            v4 = dword_11829830 + v7 + 1;
                            *v6 = (char *)g_brstring + dword_11829830;
                            dword_11829830 = v4;
                        } else {
                            v4 = dword_11829830;
                        }
                        ++v6;
                        ++v5;
                    } while ((int)v6 < (int)&g_brstring);
                }
                hMod = (HMODULE)FreeLibrary(hInst);
            }
        }
        return hMod;
    }
    // 1007402E: positive sp value 4 has been found
    // 10073F8E: variable '_unused' is possibly undefined
    // 11829830: using guessed type int dword_11829830;

    //----- (10074030) --------------------------------------------------------
    LPCSTR __cdecl getCaptionString(unsigned int a1) {
        LPCSTR result; // eax

        if (a1 && a1 < 0x12F)
            result = (LPCSTR)dword_11829370[a1];
        else
            result = 0;
        return result;
    }

    //----- (10074050) --------------------------------------------------------
    void sub_10074050() {
        if (g_brstring) {
            free(g_brstring);
            g_brstring = 0;
            dword_11829830 = 0;
            brStringFileSize = 0;
        }
    }
    // 11829830: using guessed type int dword_11829830;

    //----- (10074090) --------------------------------------------------------
    float *__cdecl sub_10074090(float *a1, float *a2, float *a3) {
        double v4;     // st2
        double v5;     // st4
        double v6;     // st5
        double v7;     // st7
        float *result; // eax
        float v9;      // [esp+0h] [ebp-14h]
        float v10;     // [esp+4h] [ebp-10h]
        float v11;     // [esp+8h] [ebp-Ch]
        float v12;     // [esp+Ch] [ebp-8h]
        float v13;     // [esp+10h] [ebp-4h]
        float v14;     // [esp+1Ch] [ebp+8h]
        float v15;     // [esp+1Ch] [ebp+8h]
        float v16;     // [esp+20h] [ebp+Ch]

        v13 = *a2;
        v10 = a2[1];
        v11 = a2[2];
        v12 = a2[3];
        v14 = *a3;
        v16 = a3[1];
        v4 = v10 * v14;
        v9 = a3[2];
        v5 = v13 * v14 - v10 * v16;
        v6 = v12 * v14 - v11 * v16;
        v7 = v12 * v16 + v11 * v14 + v13 * v9;
        v15 = a3[3];
        result = a1;
        a1[3] = v6 + v10 * v9 + v13 * v15;
        a1[2] = v7 - v10 * v15;
        a1[1] = v4 + v13 * v16 - v12 * v9 + v11 * v15;
        *a1 = v5 - v11 * v9 - v12 * v15;
        return result;
    }

    //----- (100741B0) --------------------------------------------------------
    void __cdecl sub_100741B0(float *a1) {
        long double v2; // st6
        long double v3; // st5
        double v4;      // st7
        double v5;      // st6
        float v6;       // [esp+0h] [ebp-Ch]
        float v7;       // [esp+10h] [ebp+4h]

        v6 = a1[1] * a1[1] + a1[2] * a1[2] + a1[3] * a1[3] + *a1 * *a1;
        v2 = 1.0 / sqrt_(v6);
        v7 = v2;
        v3 = v2 * a1[1];
        v4 = v7 * a1[2];
        v5 = v7 * a1[3];
        *a1 = *a1 * v7;
        a1[1] = v3;
        a1[2] = v4;
        a1[3] = v5;
    }

    //----- (10074250) --------------------------------------------------------
    void __cdecl sub_10074250(float *a1) {
        long double v2; // st6
        long double v3; // rt1
        double v4;      // st6
        float v5;       // [esp+0h] [ebp-Ch]
        float v6;       // [esp+10h] [ebp+4h]

        v5 = a1[1] * a1[1] + a1[2] * a1[2] + *a1 * *a1;
        v2 = 1.0 / sqrt_(v5);
        v6 = v2;
        v3 = v2 * a1[1];
        v4 = v6 * a1[2];
        *a1 = *a1 * v6;
        a1[1] = v3;
        a1[2] = v4;
    }

    //----- (100742D0) --------------------------------------------------------
    float *__cdecl sub_100742D0(float *a1) {
        float *result; // eax
        double v2;     // st7
        double v3;     // st1
        double v4;     // st5
        double v5;     // st4
        double v6;     // st6
        double v7;     // st3
        double v8;     // st7
        float v9;      // [esp+0h] [ebp-Ch]
        float v10;     // [esp+4h] [ebp-8h]
        float v11;     // [esp+8h] [ebp-4h]

        result = a1;
        v2 = a1[11] * 0.5;
        v9 = a1[10] * 0.5;
        v10 = v2;
        v3 = a1[12] * 0.5;
        v11 = v3;
        v4 = v9 * a1[8] + v11 * a1[6];
        v5 = v10 * a1[7];
        v6 = v3 * a1[7] + v10 * a1[6] - v9 * a1[9];
        v7 = -(v9 * a1[7]) - v2 * a1[8] - v11 * a1[9];
        v8 = v10 * a1[9] + v9 * a1[6] - v11 * a1[8];
        a1[13] = v7;
        a1[14] = v8;
        a1[15] = v6;
        a1[16] = v4 - v5;
        return result;
    }

    //----- (100743A0) --------------------------------------------------------
    int __cdecl sub_100743A0(int a1, int a2, float a3) {
        int result; // eax
        double v4;  // st7
        double v5;  // rt1
        double v6;  // st6
        double v7;  // rtt
        double v8;  // rt0
        float v9;   // [esp+8h] [ebp-4h]

        v9 = *(float *)(a2 + 260) * a3;
        result = a1;
        v4 = v9 + *(float *)(a1 + 20);
        v5 = *(float *)(a2 + 264) * a3 + *(float *)(a1 + 40);
        v6 = *(float *)(a2 + 268) * a3 + *(float *)(a1 + 44);
        v7 = *(float *)(a2 + 272) * a3 + *(float *)(a1 + 48);
        v8 = *(float *)(a2 + 252) * a3 + *(float *)(a1 + 12);
        *(float *)(a1 + 16) = *(float *)(a2 + 256) * a3 + *(float *)(a1 + 16);
        *(float *)(a1 + 20) = v4;
        *(float *)(a1 + 40) = v5;
        *(float *)(a1 + 12) = v8;
        *(float *)(a1 + 44) = v6;
        *(float *)(a1 + 48) = v7;
        return result;
    }

    //----- (10074450) --------------------------------------------------------
    void __cdecl sub_10074450(float *a1, float *a2) {
        double v3;  // st6
        double v4;  // st1
        double v5;  // st3
        double v6;  // rt2
        double v7;  // rt0
        double v8;  // st5
        double v9;  // rt1
        double v10; // st2
        double v11; // st0
        double v12; // st6
        double v13; // rt2
        double v14; // st1
        double v15; // st0
        double v16; // rt0
        double v17; // st0
        double v18; // st3
        float v19;  // [esp+0h] [ebp-1Ch]
        float v20;  // [esp+0h] [ebp-1Ch]
        float v21;  // [esp+0h] [ebp-1Ch]
        float v22;  // [esp+4h] [ebp-18h]
        float v23;  // [esp+4h] [ebp-18h]
        float v24;  // [esp+8h] [ebp-14h]
        float v25;  // [esp+Ch] [ebp-10h]
        float v26;  // [esp+10h] [ebp-Ch]
        float v27;  // [esp+14h] [ebp-8h]
        float v28;  // [esp+18h] [ebp-4h]
        float v29;  // [esp+24h] [ebp+8h]

        v22 = a2[6] * a2[6];
        v3 = a2[8] * a2[7];
        v19 = a2[7] * a2[7];
        v4 = a2[9];
        v5 = v4 * a2[6];
        v6 = a2[8] * a2[6];
        v7 = v4 * a2[8];
        v29 = a2[8] * a2[8];
        v8 = v4 * a2[7];
        v9 = v5 + v5;
        v28 = v22 - v19;
        v10 = v19 + v22 - v29;
        v11 = v3 + v3;
        v12 = v6 + v6;
        v23 = v11;
        v13 = a2[7] * a2[6];
        v14 = v7 + v7;
        v20 = v9;
        v15 = v8 + v8;
        v25 = v15;
        v16 = v15;
        v24 = v12;
        v26 = v14;
        v17 = v13 + v13;
        v27 = v17;
        v18 = v23 - v20;
        v21 = a2[9] * a2[9];
        a1[1] = v9 + v23;
        *a1 = v10 - v21;
        a1[2] = v16 - v24;
        a1[3] = 0.0;
        a1[7] = 0.0;
        a1[4] = v18;
        a1[5] = v29 + v28 - v21;
        a1[6] = v17 + v26;
        a1[8] = v24 + v25;
        a1[11] = 0.0;
        a1[9] = v26 - v27;
        a1[10] = v28 - v29 + v21;
        a1[12] = *a2;
        a1[13] = a2[1];
        a1[14] = a2[2];
        a1[15] = 1.0;
        debugPrint(a1);
    }

    //----- (100745F0) --------------------------------------------------------
    int __cdecl sub_100745F0(int a1, int a2, float a3) {
        double v3;  // st6
        double v4;  // st7
        double v5;  // st7
        double v6;  // st5
        int result; // eax
        float v8;   // [esp+4h] [ebp-Ch]
        float v9;   // [esp+8h] [ebp-8h]
        float v10;  // [esp+Ch] [ebp-4h]

        v3 = a3 * *(float *)(a2 + 16);
        v4 = a3 * *(float *)(a2 + 20);
        *(float *)a1 = a3 * *(float *)(a2 + 12) + *(float *)a2;
        v9 = v4;
        *(float *)(a1 + 4) = *(float *)(a2 + 4) + v3;
        *(float *)(a1 + 8) = *(float *)(a2 + 8) + v9;
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
        v5 = a3 * *(float *)(a2 + 60);
        v8 = a3 * *(float *)(a2 + 56);
        v6 = a3 * *(float *)(a2 + 64);
        *(float *)(a1 + 24) = a3 * *(float *)(a2 + 52) + *(float *)(a2 + 24);
        v10 = v6;
        *(float *)(a1 + 28) = *(float *)(a2 + 28) + v8;
        *(float *)(a1 + 32) = *(float *)(a2 + 32) + v5;
        *(float *)(a1 + 36) = *(float *)(a2 + 36) + v10;
        sub_100741B0((float *)(a1 + 24));
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
        *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
        *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
        *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
        result = *(_DWORD *)(a2 + 64);
        *(_DWORD *)(a1 + 64) = result;
        return result;
    }

    //----- (100746E0) --------------------------------------------------------
    _DWORD *__cdecl sub_100746E0(
        _DWORD * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
        _DWORD *result; // eax

        result = a1;
        a1[1] = a8;
        a1[2] = a2;
        a1[3] = a3;
        a1[4] = a4;
        a1[5] = a5;
        a1[6] = a6;
        a1[7] = a7;
        return result;
    }

    //----- (10074720) --------------------------------------------------------
    float *__cdecl sub_10074720(float *a1, float *a2, float *a3) {
        float *result; // eax
        int v5;        // ebp
        float *v6;     // edx
        float *v7;     // ecx
        int v8;        // esi
        double v9;     // st7

        result = a1;
        v5 = 3;
        do {
            *result = 0.0;
            v6 = a3;
            v7 = a2;
            v8 = 3;
            do {
                v9 = *v7++ * *v6++;
                --v8;
                *result = v9 + *result;
            } while (v8);
            ++result;
            a2 += 4;
            --v5;
        } while (v5);
        return result;
    }

    //----- (10074770) --------------------------------------------------------
    float *__cdecl sub_10074770(float *a1, int a2, float *a3) {
        float *result; // eax
        int v4;        // ebp
        float *v5;     // edx
        float *v6;     // ecx
        int v7;        // esi
        double v8;     // st7

        result = a1;
        v4 = 3;
        do {
            *result = 0.0;
            v5 = a3;
            v6 = (float *)((char *)result + a2 - (_DWORD)a1);
            v7 = 3;
            do {
                v8 = *v6 * *v5;
                v6 += 4;
                ++v5;
                --v7;
                *result = v8 + *result;
            } while (v7);
            ++result;
            --v4;
        } while (v4);
        return result;
    }

    //----- (100747C0) --------------------------------------------------------
    float *__cdecl sub_100747C0(float *a1, float *a2, float *a3) {
        float *v3;     // eax
        int v4;        // ebp
        float *v5;     // edx
        float *v6;     // ecx
        int v7;        // esi
        double v8;     // st7
        float *result; // eax

        v3 = a1;
        v4 = 3;
        do {
            *v3 = 0.0;
            v5 = a3;
            v6 = (float *)((char *)v3 + (char *)a2 - (char *)a1);
            v7 = 3;
            do {
                v8 = *v5 * *v6;
                v6 += 4;
                ++v5;
                --v7;
                *v3 = v8 + *v3;
            } while (v7);
            ++v3;
            --v4;
        } while (v4);
        result = a1;
        *a1 = a2[12] + *a1;
        a1[1] = a2[13] + a1[1];
        a1[2] = a2[14] + a1[2];
        return result;
    }

    //----- (10074830) --------------------------------------------------------
    float *__cdecl sub_10074830(float *a1, float *a2, float *a3) {
        float *result; // eax
        int v5;        // ebx
        float *v6;     // edx
        int v7;        // esi
        double v8;     // st7

        result = a1;
        v5 = 3;
        do {
            *result = 0.0;
            v6 = a3;
            v7 = 3;
            do {
                v8 = *a2++ * *v6++;
                --v7;
                *result = v8 + *result;
            } while (v7);
            ++result;
            --v5;
        } while (v5);
        return result;
    }

    //----- (10074870) --------------------------------------------------------
    void __cdecl sub_10074870(int a1) {
        int v1;     // ecx
        int v3;     // edx
        int i;      // eax
        int v5;     // ebx
        int v6;     // eax
        double v7;  // st7
        double v8;  // st6
        double v9;  // st5
        double v10; // rt1
        double v11; // st5
        double v12; // st6
        double v13; // st7
        float v14;  // [esp+18h] [ebp+4h]
        float v15;  // [esp+18h] [ebp+4h]

        v1 = 12;
        v3 = 0;
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 436) = 0;
        *(_DWORD *)(a1 + 412) = 0;
        *(_DWORD *)(a1 + 452) = 0;
        *(_DWORD *)(a1 + 448) = 1043475726;
        *(_DWORD *)(a1 + 460) = 0;
        *(_DWORD *)(a1 + 464) = 0;
        *(_DWORD *)(a1 + 456) = 1056964608;
        do {
            for (i = 0; i < 3; ++i) {
                v5 = i + v1;
                if (v3 == i)
                    *(_DWORD *)(a1 + 4 * v5) = 1065353216;
                else
                    *(_DWORD *)(a1 + 4 * v5) = 0;
            }
            v1 += 3;
            ++v3;
        } while (v1 < 21);
        v6 = *(_DWORD *)(a1 + 28);
        if (v6 >= 0 && v6 <= 1) {
            v7 = *(float *)(a1 + 32) * *(float *)(a1 + 32);
            v14 = *(float *)(a1 + 40) * *(float *)(a1 + 40);
            v8 = v14;
            v9 = v7 + v14;
            v15 = *(float *)(a1 + 36) * *(float *)(a1 + 36);
            v10 = v9;
            v11 = (v8 + v15) * *(float *)(a1 + 44);
            v12 = v10 * *(float *)(a1 + 44) * 0.083333336;
            v13 = (v7 + v15) * *(float *)(a1 + 44) * 0.083333336;
            *(float *)(a1 + 48) = v11 * 0.083333336;
            *(float *)(a1 + 64) = v12;
            *(float *)(a1 + 80) = v13;
            nullsub_2();
        }
        if (*(_DWORD *)(a1 + 28) != 2) {
            *(float *)(a1 + 84) = 1.0 / *(float *)(a1 + 48);
            *(float *)(a1 + 100) = 1.0 / *(float *)(a1 + 64);
            *(float *)(a1 + 116) = 1.0 / *(float *)(a1 + 80);
        }
        *(_DWORD *)(a1 + 468) = 0;
        *(_DWORD *)(a1 + 472) = 0;
    }

    //----- (100749D0) --------------------------------------------------------
    int __cdecl sub_100749D0(int a1, int a2) {
        int result; // eax

        result = a1;
        *(_DWORD *)(a1 + 32) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)a1 = 0;
        *(float *)(a1 + 4) = -*(float *)(a2 + 8);
        *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
        *(float *)(a1 + 20) = -*(float *)a2;
        *(float *)(a1 + 24) = -*(float *)(a2 + 4);
        *(_DWORD *)(a1 + 28) = *(_DWORD *)a2;
        return result;
    }

    //----- (10074A10) --------------------------------------------------------
    int __cdecl sub_10074A10(float *a1, int a2, float *a3) {
        int result; // eax
        int v6;     // ebp
        float *v7;  // ecx
        float *v8;  // edx
        int v9;     // esi
        double v10; // st7

        result = a2;
        v6 = 3;
        do {
            v7 = a3;
            v8 = a1;
            v9 = 3;
            do {
                v10 = *v7++;
                result += 4;
                *v8 = v10;
                *(float *)(result - 4) = v10;
                v8 += 3;
                --v9;
            } while (v9);
            a3 += 4;
            ++a1;
            --v6;
        } while (v6);
        return result;
    }

    //----- (10074A50) --------------------------------------------------------
    int *__cdecl sub_10074A50(_DWORD * a1, int *a2) {
        int v4;      // ebx
        int *result; // eax
        _DWORD *v6;  // ecx
        int v7;      // edx
        int v8;      // ebp

        v4 = 3;
        do {
            result = a2;
            v6 = a1;
            v7 = 3;
            do {
                v8 = *result++;
                *v6 = v8;
                v6 += 3;
                --v7;
            } while (v7);
            a2 += 4;
            ++a1;
            --v4;
        } while (v4);
        return result;
    }

    //----- (10074A90) --------------------------------------------------------
    _DWORD *__cdecl sub_10074A90(_DWORD * a1, int *a2) {
        _DWORD *result; // eax
        int v4;         // edi
        int *v5;        // ecx
        int v6;         // edx
        int v7;         // ebx

        result = a1;
        v4 = 3;
        do {
            v5 = a2;
            v6 = 3;
            do {
                v7 = *v5++;
                *result++ = v7;
                --v6;
            } while (v6);
            a2 += 4;
            --v4;
        } while (v4);
        return result;
    }

    //----- (10074AC0) --------------------------------------------------------
    float *__cdecl sub_10074AC0(int a1, int a2, int a3) {
        float *v4;     // ecx
        int v5;        // ebx
        float *result; // eax
        int v7;        // esi
        double v8;     // st6
        double v9;     // st7

        v4 = (float *)(a2 + 4);
        v5 = 3;
        do {
            result = (float *)(a3 + 12);
            v7 = 3;
            do {
                v8 = result[3] * v4[1];
                v9 = *v4 * *result + *(result - 3) * *(v4 - 1);
                ++result;
                a1 += 4;
                --v7;
                *(float *)(a1 - 4) = v9 + v8;
            } while (v7);
            v4 += 3;
            --v5;
        } while (v5);
        return result;
    }

    //----- (10074B20) --------------------------------------------------------
    float *__cdecl sub_10074B20(int a1, int a2, float *a3) {
        float *result; // eax
        int v5;        // esi
        double v6;     // st7
        int v7;        // [esp+1Ch] [ebp+Ch]

        v7 = 3;
        result = a3;
        do {
            v5 = 3;
            do {
                v6 = *(float *)((char *)result + a2 - (_DWORD)a3) - *result;
                ++result;
                --v5;
                *(float *)((char *)result + a1 - (_DWORD)a3 - 4) = v6;
            } while (v5);
            --v7;
        } while (v7);
        return result;
    }

    //----- (10074B70) --------------------------------------------------------
    float *__cdecl sub_10074B70(float *a1, int a2, int a3) {
        float *v3;    // ebx
        int v4;       // edi
        int v5;       // edx
        float *v6;    // eax
        float *v7;    // ecx
        int v8;       // esi
        double v9;    // st7
        int v11;      // [esp+10h] [ebp-10h]
        float v12[3]; // [esp+14h] [ebp-Ch] BYREF

        v3 = a1;
        v4 = a2;
        v11 = 3;
        do {
            v5 = a3;
            v6 = (float *)v4;
            v7 = v3;
            v8 = 3;
            do {
                v9 = *v7;
                v7 += 4;
                v5 += 4;
                *v6++ = v9;
                --v8;
                *(v6 - 1) = *(float *)(v5 - 4) * v9;
            } while (v8);
            *(_DWORD *)(v4 + 12) = 0;
            ++v3;
            v4 += 16;
            --v11;
        } while (v11);
        *(_DWORD *)(a2 + 60) = 1065353216;
        v12[0] = -a1[12];
        v12[1] = -a1[13];
        v12[2] = -a1[14];
        return sub_10074770((float *)(a2 + 48), a2, v12);
    }

    //----- (10074C10) --------------------------------------------------------
    float *__cdecl sub_10074C10(float *a1, float *a2, float *a3) {
        float *result; // eax
        double v4;     // st7
        double v5;     // st6
        double v6;     // st5
        double v7;     // rt0
        double v8;     // st3
        double v9;     // st4
        double v10;    // st7
        float v11;     // [esp+0h] [ebp-10h]
        float v12;     // [esp+4h] [ebp-Ch]
        float v13;     // [esp+8h] [ebp-8h]
        float v14;     // [esp+Ch] [ebp-4h]
        float v15;     // [esp+18h] [ebp+8h]
        float v16;     // [esp+18h] [ebp+8h]

        result = a2;
        v4 = a2[7] * a2[5];
        v5 = a2[1] * a2[8];
        v6 = a2[2];
        v15 = a2[4] * a2[8];
        v7 = v4 - v15;
        v16 = v5;
        v11 = v7;
        v8 = v6 * result[7];
        v12 = v8;
        v13 = result[1] * result[5];
        v9 = result[2] * result[4];
        v14 = v9;
        v10 = 1.0 /
              (v5 * result[3] + *result * v11 - v8 * result[3] - v13 * result[6] + v9 * result[6]);
        *a1 = (*a3 * v11 + v16 * a3[1] - v12 * a3[1] - v13 * a3[2] + v14 * a3[2]) * v10;
        a1[1] = -(((result[6] * result[5] - result[3] * result[8]) * *a3 +
                   *result * result[8] * a3[1] - result[6] * result[2] * a3[1] -
                   *result * result[5] * a3[2] + result[3] * result[2] * a3[2]) *
                  v10);
        a1[2] = ((result[6] * result[4] - result[3] * result[7]) * *a3 +
                 *result * result[7] * a3[1] - result[6] * result[1] * a3[1] -
                 *result * result[4] * a3[2] + result[3] * result[1] * a3[2]) *
                v10;
        return result;
    }

    //----- (10074DC0) --------------------------------------------------------
    int __cdecl sub_10074DC0(int a1) {
        int result; // eax

        result = a1;
        dword_118AA088 = a1;
        return result;
    }
    // 118AA088: using guessed type int dword_118AA088;

    //----- (10074DD0) --------------------------------------------------------
    int sub_10074DD0() {
        int v0;     // ecx
        _BYTE *v1;  // eax
        int result; // eax

        sub_100737E0();
        sub_10073820();
        sub_10073950();
        sub_10073980();
        sub_100739B0();
        sub_100739E0();
        dword_11829100[0] = dword_118AA0B0(&unk_104B3DE8, 0, 64, 64, 1, 4, 0, 0, 1, 1, 0, 0, 1, 0);
        dword_11829104 = dword_118AA0B0(&unk_104B7DE8, 0, 64, 64, 1, 4, 0, 0, 1, 1, 0, 0, 1, 0);
        v0 = 0;
        v1 = &unk_11829331;
        do {
            *(v1 - 1) = -1;
            *v1 = -1;
            v1[1] = -1;
            v1[2] = v0 | (16 * v0);
            v1 += 4;
            ++v0;
        } while ((int)v1 < (int)dword_11829370 + 1);
        result = (int)sub_100098A0(byte_11829118, (unsigned __int8 *)&unk_11829330, 64, 2) / 16;
        dword_11829318 = result;
        return result;
    }
    // 11829100: using guessed type int dword_11829100[];
    // 11829104: using guessed type int dword_11829104;
    // 11829318: using guessed type int dword_11829318;
    // 11829370: using guessed type int dword_11829370[];
    // 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

    //----- (10074E00) --------------------------------------------------------
    int sub_10074E00() {
        int result; // eax

        result = 0;
        memset(dword_11829850, 0, sizeof(dword_11829850));
        return result;
    }

    //----- (10074E20) --------------------------------------------------------
    _DWORD *__cdecl sub_10074E20(_DWORD * a1) {
        _DWORD *result; // eax
        int v2;         // edx

        result = a1;
        v2 = 8;
        do {
            *result = *(_DWORD *)((char *)result + (char *)dword_11829850 - (char *)a1);
            ++result;
            --v2;
        } while (v2);
        return result;
    }

    //----- (10074E40) --------------------------------------------------------
    int __cdecl sub_10074E40(int a1, int a2, int a3) {
        int result; // eax
        int v4;     // esi
        int v5;     // ecx
        int v6;     // eax
        int v7[3];  // [esp+8h] [ebp-Ch]

        result = a1;
        if (a1 >= 0 && a1 < 8) {
            v4 = 0;
            if (*(int *)(a3 + 4 * a1) < 3) {
                v7[0] = a1;
                v4 = 1;
            }
            v5 = a1 - 1 + (a1 - 1 < 0 ? 8 : 0);
            if (*(int *)(a3 + 4 * v5) < 3)
                v7[v4++] = v5;
            result = a1 + 1;
            if (a1 + 1 >= 8)
                result = a1 - 7;
            if (*(int *)(a3 + 4 * result) < 3)
                v7[v4++] = result;
            if (v4) {
                v6 = rand();
                result = sub_10074ED0(v7[v4 * v6 / 0x8000], a2, a3);
            }
        }
        return result;
    }

    //----- (10074ED0) --------------------------------------------------------
    int __cdecl sub_10074ED0(int a1, int a2, int a3) {
        int result; // eax
        int v4;     // eax

        result = a1;
        if (a1 >= 0 && a1 < 8) {
            result = *(_DWORD *)(a3 + 4 * a1);
            if (result < 3) {
                v4 = result + 1;
                *(_DWORD *)(a3 + 4 * a1) = v4;
                sub_10025800(*(_DWORD *)(a2 + 4 * a1), v4);
                result = dword_118AA0C0(*(_DWORD *)(a2 + 4 * a1));
            }
        }
        return result;
    }
    // 118AA0C0: using guessed type int (__cdecl *dword_118AA0C0)(_DWORD);

    //----- (10074F20) --------------------------------------------------------
    HANDLE sub_10074F20() {
        HANDLE result; // eax

        dword_118A9878 = 0;
        dword_118AA098 = 0;
        result = CreateMutexA(0, 0, 0);
        dword_118AA0A0 = result;
        return result;
    }
    // 118A9878: using guessed type int dword_118A9878;
    // 118AA098: using guessed type int dword_118AA098;

    //----- (10074F40) --------------------------------------------------------
    BOOL sub_10074F40() {
        BOOL result; // eax

        dword_118A9878 = 0;
        dword_118AA098 = 0;
        result = CloseHandle(dword_118AA0A0);
        dword_118AA0A0 = 0;
        return result;
    }
    // 118A9878: using guessed type int dword_118A9878;
    // 118AA098: using guessed type int dword_118AA098;

    //----- (10074F70) --------------------------------------------------------
    BOOL __cdecl sub_10074F70(int a1, int a2) {
        int v2; // eax

        WaitForSingleObject(dword_118AA0A0, 0xFFFFFFFF);
        v2 = dword_118A9878;
        *(&dword_118A9880 + 2 * dword_118A9878) = a1;
        dword_118A9884[2 * v2] = a2;
        dword_118A9878 = v2 + 1;
        if (v2 + 1 >= 256)
            dword_118A9878 = 0;
        return ReleaseMutex(dword_118AA0A0);
    }
    // 118A9878: using guessed type int dword_118A9878;

    //----- (10074FC0) --------------------------------------------------------
    BOOL sub_10074FC0() {
        WaitForSingleObject(dword_118AA0A0, 0xFFFFFFFF);
        if (dword_118AA098 != dword_118A9878) {
            dword_118AA0B8(*(&dword_118A9880 + 2 * dword_118AA098),
                           dword_118A9884[2 * dword_118AA098]);
            if (++dword_118AA098 >= 256)
                dword_118AA098 = 0;
        }
        return ReleaseMutex(dword_118AA0A0);
    }
    // 118A9878: using guessed type int dword_118A9878;
    // 118AA098: using guessed type int dword_118AA098;
    // 118AA0B8: using guessed type int (__cdecl *dword_118AA0B8)(_DWORD, _DWORD);

    //----- (10075020) --------------------------------------------------------
    DWORD getTicks() {
        DWORD result;                   // eax
        LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

        if (needToCheckSupportHRPC) {
            supportsHRPerformanceCounter = QueryPerformanceFrequency(&Frequency);
            QueryPerformanceCounter(&PerformanceCount);
            performanceSomething = (1000 * PerformanceCount.QuadPart + 500) / Frequency.QuadPart;
            needToCheckSupportHRPC = 0;
        }
        if (supportsHRPerformanceCounter && QueryPerformanceCounter(&PerformanceCount))
            result = (1000 * PerformanceCount.QuadPart + 500) / Frequency.QuadPart -
                     performanceSomething;
        else
            result = timeGetTime();
        return result;
    }
    // 100BBAD4: using guessed type int needToCheckSupportHRPC;
    // 118AB128: using guessed type int supportsHRPerformanceCounter;
    // 118AB130: using guessed type int performanceSomething;

    //----- (100750F0) --------------------------------------------------------
    int sub_100750F0() {
        return dword_118AB118;
    }
    // 118AB118: using guessed type int dword_118AB118;

    //----- (10075100) --------------------------------------------------------
    unsigned int sub_10075100() {
        DWORD v0;            // eax
        unsigned int v1;     // esi
        unsigned int result; // eax

        v0 = getTicks();
        dword_118AB12C = 0;
        dword_118AB118 = v0;
        v1 = v0 % 0x64 / 0x21;
        result = 3 * (v0 / 0x64);
        dword_118AB134 = result + v1;
        return result;
    }
    // 118AB118: using guessed type int dword_118AB118;
    // 118AB12C: using guessed type int dword_118AB12C;
    // 118AB134: using guessed type int dword_118AB134;

    //----- (10075150) --------------------------------------------------------
    int sub_10075150() {
        int v0;     // eax
        int v1;     // ecx
        int result; // eax

        v0 = ++dword_118AB12C;
        if (dword_118AB12C > 2) {
            v0 = 0;
            dword_118AB12C = 0;
        }
        v1 = dword_100BBAC8[v0] + dword_118AB118;
        result = dword_118AB134 + 1;
        dword_118AB118 = v1;
        ++dword_118AB134;
        return result;
    }
    // 118AB118: using guessed type int dword_118AB118;
    // 118AB12C: using guessed type int dword_118AB12C;
    // 118AB134: using guessed type int dword_118AB134;

    //----- (10075190) --------------------------------------------------------
    DWORD __thiscall meth_10075190(int this) {
        DWORD result; // eax
        int v3;       // edx

        if (dword_118AB144) {
            result = QueryPerformanceCounter((LARGE_INTEGER *)(this + 8));
            v3 = *(_DWORD *)(this + 4);
            *(_DWORD *)(this + 16) = *(_DWORD *)this;
            *(_DWORD *)(this + 20) = v3;
        } else {
            *(_DWORD *)(this + 28) = getTicks();
            result = *(_DWORD *)(this + 24);
            *(_DWORD *)(this + 32) = result;
        }
        return result;
    }
    // 118AB144: using guessed type int dword_118AB144;

    //----- (10075260) --------------------------------------------------------
    int __cdecl sub_10075260(__int16 a1, int a2, int a3, int a4, int a5) {
        int v5;     // eax
        int result; // eax

        v5 = 6 * a1;
        dword_118AC720[v5] = a2;
        dword_118AC730[v5] = 0;
        dword_118AC734[v5] = a5;
        result = sub_100725C0(a2, a1);
        if (result) {
            sub_10072640(a1, a4);
            sub_100727C0(a1, a5);
            result = sub_10072910(a2, a1, a4);
        }
        return result;
    }
    // 118AC720: using guessed type int dword_118AC720[];
    // 118AC730: using guessed type int dword_118AC730[];
    // 118AC734: using guessed type int dword_118AC734[];

    //----- (100752D0) --------------------------------------------------------
    int __cdecl sub_100752D0(__int16 a1, int a2, int a3, int a4) {
        return sub_10075260(a1, a2, a3, a4, 2097184);
    }

    //----- (10075340) --------------------------------------------------------
    int __thiscall meth_10075340(_DWORD * this) {
        int result; // eax

        result = 0;
        this[15] = 1065353216;
        this[11] = 0;
        this[7] = 0;
        this[3] = 0;
        return result;
    }

    //----- (10075360) --------------------------------------------------------
    int __thiscall meth_10075360(int this) {
        int v1;              // edi
        float *v2;           // ebx
        unsigned __int8 v3;  // cl
        unsigned __int8 v4;  // dl
        int v5;              // eax
        int v6;              // eax
        int v7;              // ebp
        int v8;              // edi
        int v9;              // ebx
        int v10;             // edx
        int v11;             // ecx
        int v12;             // edi
        int v13;             // ebp
        float *v14;          // esi
        double v15;          // st6
        double v16;          // st4
        double v17;          // rt2
        double v18;          // st4
        double v19;          // rtt
        double v20;          // rt0
        double v21;          // st6
        double v22;          // st7
        float *v23;          // esi
        double v24;          // st7
        float v25;           // edx
        unsigned __int8 v27; // [esp+12h] [ebp-46h]
        unsigned __int8 v28; // [esp+13h] [ebp-45h]
        float v29;           // [esp+14h] [ebp-44h]
        float v30;           // [esp+14h] [ebp-44h]
        float v31;           // [esp+14h] [ebp-44h]
        float v32;           // [esp+14h] [ebp-44h]
        int v33;             // [esp+18h] [ebp-40h]
        int v34;             // [esp+1Ch] [ebp-3Ch]
        float v35;           // [esp+1Ch] [ebp-3Ch]
        float v36;           // [esp+20h] [ebp-38h]
        float v37;           // [esp+24h] [ebp-34h]
        int v38;             // [esp+28h] [ebp-30h]
        float *v39;          // [esp+2Ch] [ebp-2Ch]
        float v41;           // [esp+34h] [ebp-24h]
        float v42;           // [esp+38h] [ebp-20h]
        float v43;           // [esp+3Ch] [ebp-1Ch]
        float v44;           // [esp+40h] [ebp-18h] BYREF
        float v45;           // [esp+44h] [ebp-14h]
        int v46;             // [esp+48h] [ebp-10h]
        float v47[3];        // [esp+4Ch] [ebp-Ch] BYREF

        v1 = this;
        v34 = -1;
        v2 = (float *)(this + 48);
        v41 = *(float *)(this + 48);
        v42 = *(float *)(this + 52);
        v3 = *(_BYTE *)(this + 10684);
        v43 = *(float *)(this + 56);
        v4 = *(_BYTE *)(this + 10685);
        v38 = 0;
        v39 = (float *)(this + 48);
        v33 = 1;
        v27 = v3;
        v28 = v4;
        if ((g_chosenTrack == 3 || g_chosenTrack == 9) && v3 >= 0x38u && v3 <= 0x3Au &&
            v4 >= 0x17u && v4 <= 0x1Bu) {
            v27 = 57;
            v28 = 25;
            v33 = 0;
        }
        v36 =
            *(float *)(v1 + 4084) - (double)*(int *)(v1 + 4012) * *(float *)(dword_106C7CB8 + 100);
        if (!v33 ||
            (v5 = *(_DWORD *)(v1 + 3980) + 40 * *(_DWORD *)(v1 + 3984),
             sub_1003BC90((float *)(v5 + 64),
                          (float *)(v5 + 88),
                          (float *)(v1 + 3968),
                          (float *)(this + 48))) ||
            (v6 = *(_DWORD *)(v1 + 3980) + 40 * *(_DWORD *)(v1 + 3984),
             sub_1003BC90((float *)(v6 + 104), (float *)(v6 + 128), (float *)(v1 + 3968), v2)) ||
            sub_1003B0E0(
                v2, (float *)(*(_DWORD *)(v1 + 3980) + 40 * *(_DWORD *)(v1 + 3984) + 76)) >= 64.0) {
            v9 = 0;
            v37 = (flt_106C7C74 - flt_106C7C70) * (flt_106C7C74 - flt_106C7C70);
            if (dword_106C7CC4 > 0) {
                v10 = dword_106C7CB8;
                do {
                    if (*(_DWORD *)(v1 + 320) < dword_100B4050 || g_GameMode == 2 ||
                        (*(_BYTE *)(*(_DWORD *)(dword_106C7CC0 + 4 * v9) + 22) & 1) == 0) {
                        v11 = *(_DWORD *)(dword_106C7CC0 + 4 * v9);
                        if (v27 >= *(_BYTE *)(v11 + 16) && v27 <= *(_BYTE *)(v11 + 18) &&
                            v28 >= *(_BYTE *)(v11 + 17) && v28 <= *(_BYTE *)(v11 + 19) &&
                            (!v33 ||
                             *(float *)(v10 + 100) - *(float *)(v11 + 100) - v36 <= 1000.0 &&
                                 v36 - (*(float *)(v10 + 100) -
                                        *(float *)(v11 + 40 * *(unsigned __int16 *)(v11 + 20) +
                                                   100)) <=
                                     1000.0)) {
                            v12 = 0;
                            v13 = *(unsigned __int16 *)(v11 + 20);
                            if ((_WORD)v13) {
                                v14 = (float *)(v11 + 84);
                                do {
                                    v15 = *v14 - v43;
                                    v16 = *(v14 - 2) - v41;
                                    v17 = v16 * v16;
                                    v18 = *(v14 - 1) - v42;
                                    v29 = v18;
                                    v19 = v18 * v29;
                                    v30 = v15;
                                    v20 = v15 * v30;
                                    v31 = v19 + v17;
                                    v21 = v20 + v31;
                                    if (v21 < v37) {
                                        v22 = *(v14 - 4) - v14[2];
                                        v46 = 0;
                                        v44 = v22;
                                        v45 = v14[1] - *(v14 - 5);
                                        sub_1003AEE0(v47, v39, v14 - 2);
                                        if (sub_1003AC90(&v44, v47) >= 0.0) {
                                            v34 = v12;
                                            v32 = v21;
                                            v37 = v32;
                                            v38 = v9;
                                        }
                                    }
                                    ++v12;
                                    v14 += 10;
                                } while (v12 < v13);
                                v10 = dword_106C7CB8;
                            }
                            v1 = this;
                        }
                    }
                    ++v9;
                } while (v9 < dword_106C7CC4);
            }
            if (v34 == -1)
                return 0;
            v8 = v34;
            v7 = *(_DWORD *)(dword_106C7CC0 + 4 * v38);
        } else {
            v7 = *(_DWORD *)(v1 + 3980);
            v8 = *(_DWORD *)(v1 + 3984);
        }
        v23 = (float *)(v7 + 40 * v8);
        v44 = v23[17] - v23[23];
        v24 = v23[22] - v23[16];
        v46 = 0;
        v45 = v24;
        sub_1003AE50(&v44);
        sub_1003AEE0(v47, v39, v23 + 19);
        v35 = (double)(*(_DWORD *)(this + 4012) + 1) * *(float *)(dword_106C7CB8 + 100) - v23[25] +
              sub_1003AC90(&v44, v47) - *(float *)(this + 4084);
        if (!v33 || v35 > -1000.0 && v35 < 1000.0)
            *(float *)(this + 4084) = v35 + *(float *)(this + 4084);
        v25 = v45;
        *(float *)(this + 3988) = v44;
        *(_DWORD *)(this + 3996) = v46;
        *(_DWORD *)(this + 3980) = v7;
        *(_DWORD *)(this + 3984) = v8;
        *(float *)(this + 3992) = v25;
        return 1;
    }
    // 100AA010: using guessed type int g_GameMode;
    // 100B380C: using guessed type int g_chosenTrack;
    // 100B4050: using guessed type int dword_100B4050;
    // 106C7C70: using guessed type float flt_106C7C70;
    // 106C7C74: using guessed type float flt_106C7C74;
    // 106C7CC0: using guessed type int dword_106C7CC0;
    // 106C7CC4: using guessed type int dword_106C7CC4;

    //----- (10075780) --------------------------------------------------------
    void __thiscall meth_10075780(int this) {
        double v1; // st7
        char v3;   // c0

        if ((*(_BYTE *)(*(_DWORD *)(this + 3840) + 104) & 3) == 0) {
            v1 = *(float *)&dword_106C2CFC;
            if (g_GameMode == 3) {
                *(float *)(this + 4016) = v1 + *(float *)(this + 4016);
            } else {
                *(float *)(this + 4076) = v1 + *(float *)(this + 4076);
                *(float *)(this + 4016) = *(float *)&dword_106C2CFC + *(float *)(this + 4016);
                if (g_GameMode == 1 || g_GameMode == 6) {
                    *(float *)(this + 4080) = *(float *)(this + 4080) - *(float *)&dword_106C2CFC;
                    if (v3)
                        *(_DWORD *)(this + 4080) = 0;
                }
            }
        }
    }
    // 100757F7: variable 'v3' is possibly undefined
    // 100AA010: using guessed type int g_GameMode;
    // 106C2CFC: using guessed type int dword_106C2CFC;

    //----- (10075810) --------------------------------------------------------
    void __thiscall meth_10075810(int this) {
        unsigned __int8 v2; // c0
        unsigned __int8 v3; // c3
        unsigned __int8 v5; // c0
        unsigned __int8 v6; // c3

        if (*(float *)(this + 4096) == 0.0) {
            if (*(float *)(this + 4104) != 0.0) {
                *(float *)(this + 4104) = *(float *)(this + 4104) - *(float *)&dword_106C2CFC;
                if (v5 | v6) {
                    *(_DWORD *)(this + 4104) = 0;
                    *(_DWORD *)(this + 4100) = 0;
                }
            }
        } else {
            *(float *)(this + 4096) = *(float *)(this + 4096) - *(float *)&dword_106C2CFC;
            if (v2 | v3) {
                *(_DWORD *)(this + 4096) = 0;
                *(_DWORD *)(this + 4092) = 0;
            }
        }
    }
    // 1007583D: variable 'v2' is possibly undefined
    // 1007583D: variable 'v3' is possibly undefined
    // 1007587E: variable 'v5' is possibly undefined
    // 1007587E: variable 'v6' is possibly undefined
    // 106C2CFC: using guessed type int dword_106C2CFC;

    //----- (100758A0) --------------------------------------------------------
    void __thiscall meth_100758A0(_DWORD * this) {
        LPCSTR v2; // eax
        int v3;    // ecx
        bool v4;   // sf

        if (dword_106C7CB8) {
            if (this[1002] >= dword_100BD3E0 || this[991] ||
                sub_1003AC90((float *)this + 997, (float *)this) >= 0.0) {
                this[2670] = 0;
            } else {
                v2 = getCaptionString(0xF3u);
                v3 = this[2670] + 1;
                v4 = this[2670] - 30 < 0;
                this[2670] = v3;
                if (v4 ^ __OFSUB__(v3, 31) | (v3 == 31) || (v3 & 0x10) != 16) {
                    if ((LPCSTR)this[1023] == v2) {
                        this[1025] = 0;
                        this[1023] = 0;
                    }
                } else if (!this[1023]) {
                    this[1023] = v2;
                    this[1025] = 0;
                    this[1024] = 1048576000;
                }
            }
        }
    }

    //----- (10075960) --------------------------------------------------------
    int __thiscall meth_10075960(int this) {
        int result;         // eax
        char v3;            // al
        double v4;          // st7
        unsigned __int8 v5; // al
        unsigned __int8 v6; // dl
        float v7;           // [esp+0h] [ebp-8h]
        float v8;           // [esp+0h] [ebp-8h]

        result = dword_106C7CB8;
        if (dword_106C7CB8) {
            v7 = *(float *)(this + 48) * 0.03125;
            v3 = sub_1002B920(v7);
            v4 = *(float *)(this + 52) * 0.03125;
            *(_BYTE *)(this + 10684) = v3;
            v8 = v4;
            v5 = sub_1002B920(v8);
            v6 = *(_BYTE *)(this + 10684);
            *(_BYTE *)(this + 10685) = v5;
            if (v6 >= 0x40u)
                *(_BYTE *)(this + 10684) = 63;
            if (v5 >= 0x40u)
                *(_BYTE *)(this + 10685) = 63;
            result = meth_10075360(this);
        }
        return result;
    }

    //----- (100759D0) --------------------------------------------------------
    int __cdecl sub_100759D0(
        int a1, int a2, int a3, int a4, int a5, float a6, int a7, int a8, int a9) {
        double v9;            // st6
        double v10;           // st5
        double v11;           // st7
        int v12;              // edi
        float v13;            // ecx
        __int16 v14;          // ax
        char *v16;            // esi
        char *i;              // ebp
        double v18;           // st7
        double v19;           // st7
        int j;                // eax
        int v21;              // edx
        int v22;              // eax
        _WORD *v23;           // ecx
        double v24;           // st7
        int v25;              // eax
        int v26;              // ecx
        int v27;              // eax
        int v28;              // esi
        _WORD *v29;           // ecx
        float v31;            // [esp-14h] [ebp-80h]
        float v32;            // [esp-10h] [ebp-7Ch]
        int v33;              // [esp+4h] [ebp-68h]
        int v34;              // [esp+8h] [ebp-64h]
        float v35;            // [esp+Ch] [ebp-60h]
        float v36;            // [esp+10h] [ebp-5Ch]
        __int16 v37;          // [esp+10h] [ebp-5Ch]
        float v38;            // [esp+14h] [ebp-58h]
        float v39;            // [esp+18h] [ebp-54h]
        unsigned __int16 v40; // [esp+1Ch] [ebp-50h]
        float v41;            // [esp+20h] [ebp-4Ch]
        float v42;            // [esp+24h] [ebp-48h] BYREF
        int v43;              // [esp+28h] [ebp-44h]
        int v44;              // [esp+2Ch] [ebp-40h]
        float v45;            // [esp+30h] [ebp-3Ch] BYREF
        int v46;              // [esp+34h] [ebp-38h]
        int v47;              // [esp+38h] [ebp-34h]
        float v48;            // [esp+3Ch] [ebp-30h] BYREF
        float v49;            // [esp+40h] [ebp-2Ch]
        int v50;              // [esp+44h] [ebp-28h]
        int v51[3];           // [esp+48h] [ebp-24h] BYREF
        int v52[2];           // [esp+54h] [ebp-18h] BYREF
        float v53;            // [esp+5Ch] [ebp-10h]
        float v54[3];         // [esp+60h] [ebp-Ch] BYREF
        float v55;            // [esp+84h] [ebp+18h]
        float v56;            // [esp+84h] [ebp+18h]
        float v57;            // [esp+84h] [ebp+18h]
        float v58;            // [esp+84h] [ebp+18h]

        v9 = *(float *)(a3 + 4);
        v10 = flt_106C7C84 - flt_106C7C80;
        v11 = *(float *)a3;
        v36 = v10;
        v12 = 0;
        v45 = 0.0;
        v46 = 0;
        v47 = 1065353216;
        v42 = 0.0;
        v35 = v10 * v36 - -1.0;
        v43 = 0;
        v49 = v9;
        v38 = v35;
        v13 = *(float *)(a3 + 8);
        v32 = v49;
        v48 = v11;
        v41 = v13;
        v39 = v13;
        v31 = v48;
        v37 = 0;
        v44 = 1065353216;
        v51[0] = 0;
        v51[1] = 0;
        v51[2] = 1065353216;
        v50 = 1065353216;
        v40 = 0;
        v34 = 0;
        *(_DWORD *)a9 = 0;
        v33 = 0;
        v14 = sub_1006F720(v31, v32);
        v16 = (char *)&unk_11750338 + 4800 * v14;
        for (i = &v16[32 * *((unsigned __int16 *)&dword_117554A0 + v14)]; v16 != i; v16 += 32) {
            if (*((float *)v16 + 2) >= 0.0) {
                v18 = sub_1003AC90((float *)v51, (float *)v16);
                if (v18 != 0.0) {
                    sub_1003AEE0(v54, *((float **)v16 + 4), &v48);
                    v55 = v18;
                    v56 = sub_1003AC90(v54, (float *)v16) / v55;
                    sub_1003AFE0((int)v52, (int)&v48, (int)v51, v56);
                    if (sub_1003B940((float *)v52,
                                     *((float **)v16 + 4),
                                     *((float **)v16 + 5),
                                     *((float **)v16 + 6),
                                     (int)v16)) {
                        v19 = *(float *)(a3 + 8) - -1.5 - v53;
                        v57 = v19;
                        if (v19 >= 0.0) {
                            ++v34;
                            if (v57 >= (double)v35) {
                                if (v33 < 32) {
                                    *(_WORD *)(a4 + 2 * v33++) =
                                        *(_WORD *)(dword_106C7C54 + 8 * *((__int16 *)v16 + 14) +
                                                   6) +
                                        1;
                                    if (v57 < 5.0) {
                                        v21 = dword_106C7CD4;
                                        v22 = 2 * *(unsigned __int16 *)(dword_106C7CD8 +
                                                                        2 * *((__int16 *)v16 + 14));
                                        if (*(_WORD *)(dword_106C7CD4 + v22)) {
                                            v23 = (_WORD *)(LODWORD(a6) + 2 * v12);
                                            do {
                                                if (v12 < 32) {
                                                    ++v12;
                                                    *v23 = *(_WORD *)(v21 + v22);
                                                    v21 = dword_106C7CD4;
                                                    ++v23;
                                                }
                                                v22 += 2;
                                            } while (*(_WORD *)(v21 + v22));
                                        }
                                    }
                                }
                            } else {
                                v35 = v19;
                                v39 = v53;
                                *(_DWORD *)a9 = *((__int16 *)v16 + 14);
                                if (*((float *)v16 + 2) >= 0.0) {
                                    v42 = *(float *)v16;
                                    v43 = *((_DWORD *)v16 + 1);
                                    v44 = *((_DWORD *)v16 + 2);
                                } else {
                                    sub_1003ACC0(&v42, (float *)v16);
                                }
                                if (v33 < 32)
                                    *(_WORD *)(a4 + 2 * v33++) = *(_WORD *)a4;
                                *(_WORD *)a4 =
                                    *(_WORD *)(dword_106C7C54 + 8 * *((__int16 *)v16 + 14) + 6) + 1;
                                if (v57 < 5.0) {
                                    for (j = 2 * *(unsigned __int16 *)(dword_106C7CD8 +
                                                                       2 * *((__int16 *)v16 + 14));
                                         *(_WORD *)(dword_106C7CD4 + j);
                                         *(_WORD *)LODWORD(a6) =
                                             *(_WORD *)(dword_106C7CD4 + j - 2)) {
                                        if (v12 < 32)
                                            *(_WORD *)(LODWORD(a6) + 2 * v12++) =
                                                *(_WORD *)LODWORD(a6);
                                        j += 2;
                                    }
                                }
                            }
                        }
                        v24 = v57 - 1.5;
                        v58 = v24;
                        if (v24 <= 0.0 && v58 < (double)v38) {
                            v37 = *(_WORD *)(dword_106C7C54 + 8 * *((__int16 *)v16 + 14) + 6) + 1;
                            if (v58 > -1.0) {
                                v38 = v24;
                                v41 = v53;
                                v40 = *((_WORD *)v16 + 14);
                                if (*((float *)v16 + 2) >= 0.0) {
                                    v45 = *(float *)v16;
                                    v46 = *((_DWORD *)v16 + 1);
                                    v47 = *((_DWORD *)v16 + 2);
                                } else {
                                    sub_1003ACC0(&v45, (float *)v16);
                                }
                            }
                        }
                    }
                }
            }
        }
        if (v34) {
            if (a1) {
                *(float *)(a1 + 8) = v39;
                *(float *)a8 = v35 - 1.5;
            }
            v25 = a2;
            if (a2) {
                *(float *)a2 = v42;
                *(_DWORD *)(a2 + 4) = v43;
                v26 = v44;
            LABEL_50:
                *(_DWORD *)(v25 + 8) = v26;
                goto LABEL_51;
            }
        } else {
            v27 = *(unsigned __int16 *)(dword_106C7CD8 + 2 * v40);
            v28 = dword_106C7CD4;
            if (*(_WORD *)(dword_106C7CD4 + 2 * (unsigned __int16)v27)) {
                v29 = (_WORD *)(LODWORD(a6) + 2 * v12);
                while (v12 < 32) {
                    ++v12;
                    *v29 = *(_WORD *)(v28 + 2 * v27);
                    v28 = dword_106C7CD4;
                    ++v29;
                    ++v27;
                    if (!*(_WORD *)(dword_106C7CD4 + 2 * v27))
                        goto LABEL_43;
                }
                *(_WORD *)(LODWORD(a6) + 62) = *(_WORD *)(v28 + 2 * v27);
            }
        LABEL_43:
            if (v33 >= 32)
                *(_WORD *)(a4 + 62) = v37;
            else
                *(_WORD *)(a4 + 2 * v33) = v37;
            if (a1)
                *(float *)(a1 + 8) = v41;
            v25 = a2;
            if (a2) {
                *(float *)a2 = v45;
                *(_DWORD *)(a2 + 4) = v46;
                v26 = v47;
                goto LABEL_50;
            }
        }
    LABEL_51:
        *(_DWORD *)a5 = 1;
        *(_DWORD *)a7 = v12;
        return v34;
    }
    // 106C7C54: using guessed type int dword_106C7C54;
    // 106C7C80: using guessed type float flt_106C7C80;
    // 106C7C84: using guessed type float flt_106C7C84;
    // 106C7CD4: using guessed type int dword_106C7CD4;
    // 106C7CD8: using guessed type int dword_106C7CD8;
    // 117554A0: using guessed type int dword_117554A0;

    //----- (10075F10) --------------------------------------------------------
    void __thiscall meth_10075F10(int this) {
        double v2;  // st7
        double v3;  // st7
        int v4;     // eax
        int v5;     // edx
        double v6;  // st7
        int v7;     // ecx
        char v9;    // c0
        int v10;    // eax
        int *i;     // ecx
        float v12;  // [esp+0h] [ebp-30h]
        float v13;  // [esp+4h] [ebp-2Ch]
        float v14;  // [esp+8h] [ebp-28h]
        float v15;  // [esp+8h] [ebp-28h]
        float v16;  // [esp+8h] [ebp-28h]
        int v17[3]; // [esp+24h] [ebp-Ch] BYREF

        if (*(_DWORD *)(this + 3964)) {
            v14 = *(float *)(this + 10024) * *(float *)&dword_106C2CFC * 100.0;
            sub_1003ACE0((int)v17, this, v14);
            sub_1003AF70((float *)(this + 48), (float *)v17);
            meth_10076420((float *)this,
                          *(_DWORD *)(this + 48),
                          *(_DWORD *)(this + 52),
                          *(_DWORD *)(this + 56));
            meth_100767A0((_DWORD *)this, 0, 0, 0);
            meth_100769A0((_DWORD *)this, 0, 0, 0);
            v2 = *(float *)(this + 10028);
            *(_DWORD *)(this + 3620) = 0;
            v15 = v2 * *(float *)&dword_106C2CFC * 1.2566371;
            v13 = *(float *)(this + 10020) * *(float *)&dword_106C2CFC * 1.2566371;
            v3 = *(float *)(this + 10016) * *(float *)&dword_106C2CFC * 1.2566371;
            v12 = v3;
            meth_10076820((_DWORD *)this, v12, v13, v15);
            if ((**(_BYTE **)(this + 10688) & 0x10) != 0) {
                *(_DWORD *)(this + 32) = 0;
                *(_DWORD *)(this + 36) = 0;
                *(_DWORD *)(this + 40) = 1065353216;
                sub_1003AC30((float *)(this + 16), (float *)(this + 32), (float *)this);
                sub_1003AC30((float *)(this + 32), (float *)this, (float *)(this + 16));
                meth_10035FA0(*(int **)(this + 10688), 16);
            }
        } else {
            v4 = sub_100759D0(this + 48,
                              this + 32,
                              this + 48,
                              this + 10508,
                              this + 10572,
                              COERCE_FLOAT(this + 10576),
                              this + 10640,
                              this + 10644,
                              this + 10648);
            v5 = *(_DWORD *)(this + 364);
            *(_DWORD *)(this + 4128) = v4;
            *(_DWORD *)(v5 + 448) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 360) + 448) = 0;
            meth_10061F70((_DWORD *)this);
            *(_DWORD *)(*(_DWORD *)(this + 372) + 448) = *(_DWORD *)(this + 3616);
            *(_DWORD *)(*(_DWORD *)(this + 368) + 448) = *(_DWORD *)(*(_DWORD *)(this + 372) + 448);
            *(_DWORD *)(*(_DWORD *)(this + 360) + 460) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 364) + 460) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 368) + 460) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 372) + 460) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 360) + 464) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 364) + 464) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 368) + 464) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 372) + 464) = 0;
            if (*(float *)(this + 3688) > 0.0) {
                if ((**(_DWORD **)(this + 10688) & 0x20000) != 0)
                    *(float *)(this + 3688) = -*(float *)(this + 3688);
                if (*(_BYTE *)(*(_DWORD *)(this + 10692) + 217)) {
                    v6 = *(float *)(this + 3688);
                    if (*(_BYTE *)(*(_DWORD *)(this + 10692) + 217) == 1) {
                        *(float *)(*(_DWORD *)(this + 360) + 460) = v6 * -2.0;
                        *(float *)(*(_DWORD *)(this + 364) + 460) = *(float *)(this + 3688) * -2.0;
                        *(_DWORD *)(*(_DWORD *)(this + 368) + 460) = 0;
                        *(_DWORD *)(*(_DWORD *)(this + 372) + 460) = 0;
                    } else {
                        *(float *)(*(_DWORD *)(this + 360) + 460) = -v6;
                        *(float *)(*(_DWORD *)(this + 364) + 460) = -*(float *)(this + 3688);
                        *(float *)(*(_DWORD *)(this + 368) + 460) = -*(float *)(this + 3688);
                        *(float *)(*(_DWORD *)(this + 372) + 460) = -*(float *)(this + 3688);
                    }
                } else {
                    *(float *)(*(_DWORD *)(this + 360) + 460) = *(float *)(this + 3688) * 0.1;
                    *(float *)(*(_DWORD *)(this + 364) + 460) = *(float *)(this + 3688) * 0.1;
                    *(float *)(*(_DWORD *)(this + 368) + 460) =
                        *(float *)(this + 3688) * -2.0999999;
                    *(float *)(*(_DWORD *)(this + 372) + 460) =
                        *(float *)(this + 3688) * -2.0999999;
                }
            }
            v3 = *(float *)(this + 3692);
            if (v3 < 0.0) {
                *(float *)(*(_DWORD *)(this + 360) + 464) = -*(float *)(this + 3692);
                *(float *)(*(_DWORD *)(this + 364) + 464) = -*(float *)(this + 3692);
                *(_DWORD *)(*(_DWORD *)(this + 360) + 460) = 0;
                *(_DWORD *)(*(_DWORD *)(this + 364) + 460) = 0;
                v7 = *(_DWORD *)(this + 368);
                v3 = *(float *)(v7 + 460);
                if (v9)
                    v3 = -v3;
                if (v3 < 0.000099999997) {
                    *(float *)(v7 + 464) = -*(float *)(this + 3692);
                    v3 = -*(float *)(this + 3692);
                    *(float *)(*(_DWORD *)(this + 372) + 464) = v3;
                }
            }
            if (!dword_106909E0 && (g_GameMode != 2 || *(_DWORD *)(this + 320) != 1 ||
                                    !*(_DWORD *)(*(_DWORD *)(this + 10688) + 68))) {
                if (g_GameMode != 4)
                    goto LABEL_27;
                if (!*(_DWORD *)(this + 320) && *(_DWORD *)(*(_DWORD *)(this + 10688) + 68))
                    goto LABEL_29;
                if (g_GameMode != 4) {
                LABEL_27:
                    if (g_GameMode != 5 && !g_usingGameMode4 && *(int *)(this + 1840) > 90)
                        goto LABEL_29;
                }
                meth_10061720((_DWORD *)this);
                goto LABEL_29;
            }
        }
    LABEL_29:
        if (g_NetworkPlay) {
            if (*(void(__cdecl **)(int))(this + 3848) == sub_10063FE0 && !dword_106909E0)
                sub_100609E0(this);
        } else if (!dword_106909E0) {
            sub_10061C60(this, v3);
        }
        if (*(_DWORD *)(this + 1840)) {
            v16 = *(float *)(this + 488) * *(float *)(this + 488) +
                  *(float *)(this + 492) * *(float *)(this + 492) +
                  *(float *)(this + 496) * *(float *)(this + 496);
            *(float *)(this + 4144) = sqrt_(v16) * 2.24;
        }
        if (!g_NetworkPlay) {
            v10 = 0;
            if (dword_100AA8B4 > 0) {
                for (i = &dword_106C1638; *(_DWORD *)(this + 320) != *i; i += 22) {
                    if (++v10 >= dword_100AA8B4)
                        return;
                }
                meth_100019D0((#479 *)this);
            }
        }
    }
    // 100762BC: variable 'v9' is possibly undefined
    // 100AA010: using guessed type int g_GameMode;
    // 100AA8B4: using guessed type int dword_100AA8B4;
    // 1022AF14: using guessed type int g_usingGameMode4;
    // 1022AF18: using guessed type int g_NetworkPlay;
    // 106909E0: using guessed type int dword_106909E0;
    // 106C1638: using guessed type int dword_106C1638;
    // 106C2CFC: using guessed type int dword_106C2CFC;

    //----- (10076420) --------------------------------------------------------
    void __thiscall meth_10076420(float *this, int a2, int a3, int a4) {
        float *v4; // eax
        float *v5; // ecx

        *((_DWORD *)this + 12) = a2;
        *((_DWORD *)this + 13) = a3;
        *((_DWORD *)this + 14) = a4;
        *((_DWORD *)this + 2482) = a2;
        *((_DWORD *)this + 2483) = a3;
        *((_DWORD *)this + 2484) = a4;
        v4 = this + 119;
        v5 = this + 136;
        *(_DWORD *)v4 = a2;
        *((_DWORD *)v5 - 16) = a3;
        *((_DWORD *)v5 - 15) = a4;
        *((_DWORD *)v5 + 39) = a2;
        *((_DWORD *)v5 + 40) = a3;
        *((_DWORD *)v5 + 41) = a4;
        *((_DWORD *)v5 + 22) = a2;
        *((_DWORD *)v5 + 23) = a3;
        *((_DWORD *)v5 + 24) = a4;
        sub_10074450(v5, v4);
    }

    //----- (100764C0) --------------------------------------------------------
    void __thiscall meth_100764C0(float *this, float a2) {
        float v3;       // edi
        long double v4; // st7
        long double v5; // st7
        int v6;         // eax
        int v7;         // ecx
        int v8;         // edx
        float v9;       // [esp+Ch] [ebp-Ch]
        float v10;      // [esp+Ch] [ebp-Ch]
        float v11;      // [esp+10h] [ebp-8h]
        float v12;      // [esp+14h] [ebp-4h]
        float v13;      // [esp+1Ch] [ebp+4h]

        v11 = cos_(a2);
        v12 = sin_(a2);
        v9 = a2 - -1.5707964;
        v3 = v9;
        v10 = cos_(v9);
        v4 = sin_(v3);
        *this = v11;
        this[1] = v12;
        this[2] = 0.0;
        this[5] = v4;
        this[4] = v10;
        this[6] = 0.0;
        this[8] = 0.0;
        this[9] = 0.0;
        v13 = a2 * 0.5;
        this[10] = 1.0;
        this[125] = cos_(v13);
        this[126] = 0.0;
        this[127] = 0.0;
        v5 = sin_(v13);
        v6 = *((_DWORD *)this + 125);
        v7 = *((_DWORD *)this + 126);
        v8 = *((_DWORD *)this + 127);
        this[128] = v5;
        this[184] = v5;
        this[167] = v5;
        *((_DWORD *)this + 181) = v6;
        *((_DWORD *)this + 164) = v6;
        *((_DWORD *)this + 182) = v7;
        *((_DWORD *)this + 183) = v8;
        *((_DWORD *)this + 165) = v7;
        *((_DWORD *)this + 166) = v8;
        sub_10074450(this + 136, this + 119);
    }

    //----- (100765E0) --------------------------------------------------------
    void __cdecl sub_100765E0(float *a1, float *a2) {
        double v3; // st7
        char v4;   // c0
        double v5; // st7

        v3 = a1[5];
        if (v4) {
            if (v3 - a1[10] < 0.0) {
                *a2 = a1[1] - a1[4];
                a2[1] = a1[8] + a1[2];
                a2[2] = a1[9] + a1[6];
                a2[3] = a1[10] - (*a1 + a1[5] - 1.0);
            } else {
                *a2 = a1[8] - a1[2];
                a2[1] = a1[1] + a1[4];
                a2[2] = a1[5] - (*a1 - 1.0) - a1[10];
                a2[3] = a1[9] + a1[6];
            }
        } else {
            v5 = v3 + a1[10];
            if (v5 < 0.0) {
                *a2 = a1[6] - a1[9];
                a2[1] = *a1 - -1.0 - a1[5] - a1[10];
                a2[2] = a1[1] + a1[4];
                a2[3] = a1[8] + a1[2];
            } else {
                *a2 = *a1 + v5 - -1.0;
                a2[1] = a1[6] - a1[9];
                a2[2] = a1[8] - a1[2];
                a2[3] = a1[1] - a1[4];
            }
        }
        sub_100741B0(a2);
    }
    // 100765F4: variable 'v4' is possibly undefined

    //----- (10076700) --------------------------------------------------------
    void __thiscall meth_10076700(int this, void *a2) {
        _DWORD *v3; // esi
        int v4;     // ecx
        int v5;     // edx
        int v6;     // eax
        int v7;     // ecx
        int v8;     // edx
        int v9;     // eax
        int v10;    // ecx

        qmemcpy((void *)this, a2, 0x40u);
        v3 = (_DWORD *)(this + 500);
        sub_100765E0((float *)a2, (float *)(this + 500));
        v4 = *(_DWORD *)(this + 504);
        v5 = *(_DWORD *)(this + 508);
        *(_DWORD *)(this + 724) = *v3;
        v6 = *(_DWORD *)(this + 512);
        *(_DWORD *)(this + 728) = v4;
        v7 = *v3;
        *(_DWORD *)(this + 732) = v5;
        v8 = *(_DWORD *)(this + 504);
        *(_DWORD *)(this + 736) = v6;
        v9 = *(_DWORD *)(this + 508);
        *(_DWORD *)(this + 656) = v7;
        v10 = *(_DWORD *)(this + 512);
        *(_DWORD *)(this + 660) = v8;
        *(_DWORD *)(this + 664) = v9;
        *(_DWORD *)(this + 668) = v10;
        sub_10074450((float *)(this + 544), (float *)(this + 476));
    }

    //----- (100767A0) --------------------------------------------------------
    int __thiscall meth_100767A0(_DWORD * this, int a2, int a3, int a4) {
        int result; // eax

        this[122] = a2;
        this[123] = a3;
        this[124] = a4;
        this[178] = a2;
        this[179] = a3;
        this[180] = a4;
        this[161] = a2;
        this[162] = a3;
        this[163] = a4;
        result = a3;
        this[1033] = a2;
        this[1034] = a3;
        this[1035] = a4;
        return result;
    }

    //----- (10076820) --------------------------------------------------------
    int __thiscall meth_10076820(_DWORD * this, float a2, float a3, float a4) {
        float v5;   // edi
        int v6;     // ecx
        int v7;     // edx
        int v8;     // eax
        int v9;     // ecx
        int v10;    // edx
        int result; // eax
        int v12;    // ecx
        float v13;  // [esp+0h] [ebp-10h] BYREF
        float v14;  // [esp+4h] [ebp-Ch]
        float v15;  // [esp+8h] [ebp-8h]
        float v16;  // [esp+Ch] [ebp-4h]
        float v17;  // [esp+14h] [ebp+4h]
        float v18;  // [esp+14h] [ebp+4h]
        float v19;  // [esp+14h] [ebp+4h]
        float v20;  // [esp+14h] [ebp+4h]
        float v21;  // [esp+18h] [ebp+8h]
        float v22;  // [esp+1Ch] [ebp+Ch]

        v17 = a2 * 0.5;
        v5 = v17;
        v21 = a3 * 0.5;
        v22 = a4 * 0.5;
        v18 = sin_(v17);
        v13 = cos_(v5);
        v14 = 0.0;
        v15 = 0.0;
        v16 = v18;
        sub_10074090((float *)this + 125, (float *)this + 125, &v13);
        v19 = sin_(v21);
        v13 = cos_(v21);
        v14 = 0.0;
        v15 = v19;
        v16 = 0.0;
        sub_10074090((float *)this + 125, (float *)this + 125, &v13);
        v20 = sin_(v22);
        v13 = cos_(v22);
        v14 = v20;
        v15 = 0.0;
        v16 = 0.0;
        sub_10074090((float *)this + 125, (float *)this + 125, &v13);
        sub_100741B0((float *)this + 125);
        v6 = this[126];
        v7 = this[127];
        this[181] = this[125];
        v8 = this[128];
        this[182] = v6;
        this[183] = v7;
        v9 = this[125];
        v10 = this[126];
        this[184] = v8;
        result = this[127];
        this[164] = v9;
        v12 = this[128];
        this[165] = v10;
        this[166] = result;
        this[167] = v12;
        return result;
    }

    //----- (100769A0) --------------------------------------------------------
    int __thiscall meth_100769A0(_DWORD * this, int a2, int a3, int a4) {
        int result; // eax

        this[129] = a2;
        this[130] = a3;
        this[131] = a4;
        this[185] = a2;
        this[186] = a3;
        this[187] = a4;
        this[168] = a2;
        result = a4;
        this[169] = a3;
        this[170] = a4;
        return result;
    }

    //----- (10076A00) --------------------------------------------------------
    void __thiscall meth_10076A00(int this) {
        sub_100350EE(*(_WORD **)(this + 10692),
                     *(_DWORD *)(this + 10692),
                     *(unsigned __int8 *)(this + 10668) >> 3,
                     *(unsigned __int8 *)(this + 10669) >> 3,
                     *(unsigned __int8 *)(this + 10670) >> 3);
        meth_10062C50((_DWORD *)this);
    }

    //----- (10076A40) --------------------------------------------------------
    void __thiscall meth_10076A40(_DWORD * this, int a2) {
        this[2673] = (char *)&unk_100C12A0 + 89992 * a2;
        meth_10076A00((int)this);
    }

    //----- (10076A70) --------------------------------------------------------
    void __thiscall meth_10076A70(unsigned __int8 *this, int a2, int a3) {
        sub_10061460(this[10668], this[10669], this[10670]);
        LoadCar(a2, a3, 0);
        sub_10074E20((_DWORD *)this + 2716);
        memset(this + 10896, 0, 0x20u);
        meth_10076A40(this, a2);
    }

    //----- (10076AE0) --------------------------------------------------------
    int __thiscall meth_10076AE0(_DWORD * this, int chosenCar) {
        int result; // eax

        result = chosenCar;
        if (chosenCar < 16) {
            this[2669] = 0;
        } else {
            result = chosenCar - 16;
            this[2669] = 1;
        }
        this[2666] = result;
        return result;
    }

    //----- (10076B20) --------------------------------------------------------
    int __thiscall meth_10076B20(_DWORD * this) {
        int v2;     // eax
        int v3;     // ecx
        int result; // eax

        meth_10075340(this);
        meth_10075340(this + 2511);
        this[2527] = 0x3F060A92;
        meth_10075340(this + 2528);
        this[2544] = 0x3F060A92;
        meth_10075340(this + 2545);
        this[2561] = 0x3F060A92;
        meth_10075340(this + 2562);
        this[2578] = 0x3F060A92;
        meth_10075340(this + 2596);
        this[2612] = 0x3F060A92;
        this[2509] = this + 2511;
        meth_10075340(this + 16);
        meth_10075340(this + 32);
        meth_10075340(this + 48);
        meth_10075340(this + 64);
        meth_100767A0(this, 0, 0, 0);
        v2 = this[2673];
        this[995] = 0;
        this[996] = 0;
        this[2510] = 0;
        qmemcpy(this + 906, (const void *)(v2 + 152), 0x30u);
        v3 = this[935];
        this[918] = *(char *)(v2 + 216);
        this[920] = v3;
        this[919] = *(char *)(v2 + 150);
        this[208] = *(_DWORD *)(v2 + 200);
        this[209] = *(_DWORD *)(v2 + 204);
        this[210] = *(_DWORD *)(v2 + 208);
        this[211] = *(_DWORD *)(v2 + 212);
        result = *(char *)(v2 + 151);
        this[2673] = 0;
        this[921] = result;
        return result;
    }

    //----- (10076C90) --------------------------------------------------------
    _DWORD *__thiscall meth_10076C90(char *this) {
        *((_DWORD *)this + 2672) =
            (char *)&unk_106C6678 + 348 * ((this - (char *)dword_10ACDEA8) / 11112);
        return sub_100307D0((_DWORD *)this + 2485);
    }

    //----- (10076CE0) --------------------------------------------------------
    MMRESULT __cdecl sub_10076CE0(LPSTR pszFileName, int a2, int a3, LPMMCKINFO pmmcki) {
        CHAR *v4;             // ecx
        HMMIO v5;             // eax
        HMMIO v6;             // edi
        MMRESULT v7;          // esi
        LPMMCKINFO v8;        // ebx
        unsigned __int16 v9;  // ax
        _DWORD *v10;          // eax
        int v11;              // ecx
        LONG v12;             // eax
        _DWORD *v14;          // ebx
        char pch[4];          // [esp+10h] [ebp-24h] BYREF
        int v16;              // [esp+14h] [ebp-20h]
        int v17;              // [esp+18h] [ebp-1Ch]
        int v18;              // [esp+1Ch] [ebp-18h]
        struct _MMCKINFO v19; // [esp+20h] [ebp-14h] BYREF

        v4 = pszFileName;
        *(_DWORD *)a3 = 0;
        v5 = mmioOpenA(v4, 0, 0x10000u);
        v6 = v5;
        if (v5) {
            v8 = pmmcki;
            v7 = mmioDescend(v5, pmmcki, 0, 0);
            if (!v7) {
                if (v8->ckid != 1179011410 || v8->fccType != 1163280727)
                    goto LABEL_21;
                v19.ckid = 544501094;
                v7 = mmioDescend(v6, &v19, v8, 0x10u);
                if (v7)
                    goto LABEL_22;
                if (v19.cksize < 0x10)
                    goto LABEL_21;
                if (mmioRead(v6, pch, 16) != 16) {
                    v7 = 57602;
                    goto LABEL_22;
                }
                if (*(_WORD *)pch == 1) {
                    v9 = 0;
                    pszFileName = 0;
                } else {
                    if (mmioRead(v6, (HPSTR)&pszFileName, 2) != 2) {
                        v7 = 57602;
                        goto LABEL_22;
                    }
                    v9 = (unsigned __int16)pszFileName;
                }
                v10 = GlobalAlloc(0, v9 + 18);
                v11 = a3;
                *(_DWORD *)a3 = v10;
                if (!v10) {
                    v7 = 57344;
                    goto LABEL_22;
                }
                *v10 = *(_DWORD *)pch;
                v10[1] = v16;
                v10[2] = v17;
                v10[3] = v18;
                *(_WORD *)(*(_DWORD *)v11 + 16) = (_WORD)pszFileName;
                if ((_WORD)pszFileName) {
                    v12 = mmioRead(v6, (HPSTR)(*(_DWORD *)v11 + 18), (unsigned __int16)pszFileName);
                    if (v12 != (unsigned __int16)pszFileName) {
                    LABEL_21:
                        v7 = 57601;
                        goto LABEL_22;
                    }
                }
                v7 = mmioAscend(v6, &v19, 0);
                if (!v7) {
                    *(_DWORD *)a2 = v6;
                    return 0;
                }
            }
        } else {
            v7 = 57600;
        }
    LABEL_22:
        v14 = (_DWORD *)a3;
        if (*(_DWORD *)a3) {
            GlobalFree(*(HGLOBAL *)a3);
            *v14 = 0;
        }
        if (v6) {
            mmioClose(v6, 0);
            v6 = 0;
        }
        *(_DWORD *)a2 = v6;
        return v7;
    }

    //----- (10076E90) --------------------------------------------------------
    MMRESULT __cdecl sub_10076E90(int a1, LPMMCKINFO pmmcki, MMCKINFO *pmmckiParent) {
        mmioSeek(*(HMMIO *)a1, pmmckiParent->dwDataOffset + 4, 0);
        pmmcki->ckid = 1635017060;
        return mmioDescend(*(HMMIO *)a1, pmmcki, pmmckiParent, 0x10u);
    }

    //----- (10076ED0) --------------------------------------------------------
    int __cdecl sub_10076ED0(HMMIO hmmio, int a2, int a3, int a4, int a5) {
        int result;                 // eax
        unsigned int v6;            // edi
        unsigned int v7;            // eax
        unsigned int v8;            // esi
        HPSTR v9;                   // ecx
        char *v10;                  // eax
        char v11;                   // dl
        struct _MMIOINFO pmmioinfo; // [esp+10h] [ebp-48h] BYREF

        result = mmioGetInfo(hmmio, &pmmioinfo, 0) != 0;
        if (result)
            goto LABEL_11;
        v6 = a2;
        v7 = *(_DWORD *)(a4 + 4);
        if (a2 > v7)
            v6 = *(_DWORD *)(a4 + 4);
        v8 = 0;
        *(_DWORD *)(a4 + 4) = v7 - v6;
        if (!v6) {
        LABEL_10:
            result = mmioSetInfo(hmmio, &pmmioinfo, 0);
            if (!result) {
                *(_DWORD *)a5 = v6;
                return result;
            }
        LABEL_11:
            *(_DWORD *)a5 = 0;
            return result;
        }
        v9 = pmmioinfo.pchEndRead;
        v10 = pmmioinfo.pchNext;
        while (1) {
            if (v10 == v9) {
                result = mmioAdvance(hmmio, &pmmioinfo, 0);
                if (result)
                    goto LABEL_11;
                v10 = pmmioinfo.pchNext;
                v9 = pmmioinfo.pchEndRead;
                if (pmmioinfo.pchNext == pmmioinfo.pchEndRead)
                    break;
            }
            v11 = *v10++;
            *(_BYTE *)(v8 + a3) = v11;
            ++v8;
            pmmioinfo.pchNext = v10;
            if (v8 >= v6)
                goto LABEL_10;
        }
        result = 57603;
        *(_DWORD *)a5 = 0;
        return result;
    }

    //----- (10076FA0) --------------------------------------------------------
    MMRESULT __cdecl sub_10076FA0(LPSTR pszFileName, int a2, int a3, int a4, HMMIO hmmio) {
        HGLOBAL *v5;             // ebx
        HGLOBAL *v6;             // esi
        MMRESULT v7;             // edi
        HGLOBAL v8;              // eax
        int v10;                 // [esp-8h] [ebp-40h]
        struct _MMCKINFO v11;    // [esp+10h] [ebp-28h] BYREF
        struct _MMCKINFO pmmcki; // [esp+24h] [ebp-14h] BYREF

        v5 = (HGLOBAL *)a4;
        v6 = (HGLOBAL *)hmmio;
        v10 = a4;
        *(_DWORD *)hmmio = 0;
        *v5 = 0;
        *(_DWORD *)a2 = 0;
        v7 = sub_10076CE0(pszFileName, (int)&hmmio, v10, &pmmcki);
        if (!v7) {
            v7 = sub_10076E90((int)&hmmio, &v11, &pmmcki);
            if (!v7) {
                v8 = GlobalAlloc(0, v11.cksize);
                *v6 = v8;
                if (v8) {
                    v7 = sub_10076ED0(hmmio, v11.cksize, (int)v8, (int)&v11, (int)&a4);
                    if (!v7) {
                        *(_DWORD *)a2 = a4;
                        goto LABEL_11;
                    }
                } else {
                    v7 = 57344;
                }
            }
        }
        if (*v6) {
            GlobalFree(*v6);
            *v6 = 0;
        }
        if (*v5) {
            GlobalFree(*v5);
            *v5 = 0;
        }
    LABEL_11:
        if (hmmio)
            mmioClose(hmmio, 0);
        return v7;
    }

    //----- (10077090) --------------------------------------------------------
    void __cdecl sub_10077090(unsigned int a1) {
        dword_10680598 = a1;
        dword_1068059C = (unsigned __int16)a1;
        dword_106805A0 = HIWORD(a1);
        if (!(_WORD)a1 || HIWORD(a1))
            debugPrint((void *)(unsigned __int16)a1);
    }
    // 10680598: using guessed type int dword_10680598;
    // 1068059C: using guessed type int dword_1068059C;
    // 106805A0: using guessed type int dword_106805A0;

    //----- (100770C0) --------------------------------------------------------
    int sub_100770C0() {
        int result; // eax

        result = 0;
        memset(dword_118ABD38, 0, 0x38u);
        dword_118ABAD4 = 0;
        dword_118ABD80 = 1;
        return result;
    }
    // 118ABAD4: using guessed type int dword_118ABAD4;
    // 118ABD38: using guessed type int dword_118ABD38[];
    // 118ABD80: using guessed type int dword_118ABD80;

    //----- (100770F0) --------------------------------------------------------
    int sub_100770F0() {
        int v0; // eax

        v0 = ++dword_118ABDD8;
        if (dword_118ABDD8 == 1) {
            dword_118ABAD8 = v0;
            memset(byte_118AB8B8, 0, 0x200u);
            memset(dword_118ABAE0, 0, 0x220u);
            MEMORY[0x118AB8B4] = 0;
            dword_118ABD7C = 0;
            dword_118ABAB8 = 1;
            sub_100770C0();
            if (g_DirectInputA->lpVtbl->CreateDevice(
                    g_DirectInputA, &CLSID_GUID_SysKeyboard, &g_lpDirectInputDeviceA, 0) < 0)
                return 0;
            if (g_lpDirectInputDeviceA->lpVtbl->SetDataFormat(g_lpDirectInputDeviceA,
                                                              &g_lpcDiDataFormat) < 0)
                return 0;
            if (g_lpDirectInputDeviceA->lpVtbl->SetCooperativeLevel(
                    g_lpDirectInputDeviceA, g_HWND, 6) < 0)
                return 0;
            if (g_lpDirectInputDeviceA)
                g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA);
        }
        return 1;
    }
    // 118AB8B4: using guessed type int dword_118AB8B4;
    // 118ABAB8: using guessed type int dword_118ABAB8;
    // 118ABAD8: using guessed type int dword_118ABAD8;
    // 118ABAE0: using guessed type int dword_118ABAE0[];
    // 118ABD7C: using guessed type int dword_118ABD7C;
    // 118ABDD8: using guessed type int dword_118ABDD8;

    //----- (100771B0) --------------------------------------------------------
    HRESULT __cdecl sub_100771B0(void *a1) {
        HRESULT result; // eax

        if (!g_lpDirectInputDeviceA)
            return 1;
        result = g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(g_lpDirectInputDeviceA, 256, a1);
        if (result < 0 && result == -2147024866) {
            result = g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA);
            if (result >= 0)
                result =
                    g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(g_lpDirectInputDeviceA, 256, a1);
        }
        return result;
    }

    //----- (10077200) --------------------------------------------------------
    int __cdecl sub_10077200(_DWORD * a1) {
        IDirectInputDevice2A *v1; // eax
        int result;               // eax
        HRESULT v3;               // eax
        int v4;                   // [esp+10h] [ebp-110h] BYREF
        int v5;                   // [esp+14h] [ebp-10Ch]
        char v6[224];             // [esp+40h] [ebp-E0h]

        v1 = g_DirectInputDevice2A;
        if (!g_DirectInputDevice2A) {
            g_ConfigJoystickIndex = 2;
            g_ConfigJoystickPtr = (int)&MEMORY[0x10B4E080];
            sub_100791D0();
            v1 = g_DirectInputDevice2A;
            if (!g_DirectInputDevice2A)
                return 1;
        }
        v1->lpVtbl->Poll(v1);
        v3 = g_DirectInputDevice2A->lpVtbl->GetDeviceState(g_DirectInputDevice2A, 272, &v4);
        if (v3 && v3 == -2147024866)
            sub_100773D0();
        for (result = 0; result < 128; ++result) {
            if ((v6[result] & 0x80) != 0) {
                *a1 = 256;
                return result;
            }
        }
        if (v4 >= -50) {
            if (v4 <= 50) {
                if (v5 >= -50) {
                    if (v5 <= 50) {
                        result = -1;
                    } else {
                        *a1 = 33536;
                        result = 0;
                    }
                } else {
                    result = 0;
                    *a1 = 33280;
                }
            } else {
                result = 0;
                *a1 = 33024;
            }
        } else {
            *a1 = 0x8000;
            result = 0;
        }
        return result;
    }
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1D4: using guessed type int dword_10B4E1D4;

    //----- (10077310) --------------------------------------------------------
    int sub_10077310() {
        int v0;      // eax
        int result;  // eax
        int *v2;     // ecx
        char v3[16]; // [esp+4h] [ebp-10h] BYREF

        if (!g_unk54Ptr || !*((_DWORD *)g_unk54Ptr + 20))
            return -1;
        dword_10AA33C0[0] = 0;
        dword_10AA33C4 = 0;
        dword_10AA33C8 = 0;
        dword_10AA33CC = 0;
        v0 = (*(int(__stdcall **)(_DWORD, int, char *))(**((_DWORD **)g_unk54Ptr + 20) + 36))(
            *((_DWORD *)g_unk54Ptr + 20), 16, v3);
        if (v0 && v0 == -2147024866)
            (*(void(__stdcall **)(_DWORD))(**((_DWORD **)g_unk54Ptr + 20) + 28))(
                *((_DWORD *)g_unk54Ptr + 20));
        if (v3[12] < 0)
            dword_10AA33C0[0] = 1;
        if ((v3[13] & 0x80) != 0)
            dword_10AA33C4 = 1;
        if ((v3[14] & 0x80) != 0)
            dword_10AA33C8 = 1;
        if ((v3[15] & 0x80) != 0)
            dword_10AA33CC = 1;
        sub_1005FFF0();
        result = 0;
        v2 = dword_10AA33D0;
        while (!*v2) {
            ++v2;
            ++result;
            if ((int)v2 >= (int)&dword_10AA33E0)
                return -1;
        }
        return result;
    }
    // 10AA33C0: using guessed type int dword_10AA33C0[];
    // 10AA33C4: using guessed type int dword_10AA33C4;
    // 10AA33C8: using guessed type int dword_10AA33C8;
    // 10AA33CC: using guessed type int dword_10AA33CC;
    // 10AA33D0: using guessed type int dword_10AA33D0[];
    // 10AA33E0: using guessed type int dword_10AA33E0;

    //----- (100773D0) --------------------------------------------------------
    BOOL sub_100773D0() {
        BOOL result; // eax

        if (g_DirectInputDevice2A)
            result = g_DirectInputDevice2A->lpVtbl->Acquire(g_DirectInputDevice2A) >= 0;
        else
            result = 0;
        return result;
    }

    //----- (100773F0) --------------------------------------------------------
    int __cdecl sub_100773F0(int *a1, int *a2) {
        int v2;                      // ebp
        IDirectInputDeviceAVtbl *v3; // edx
        int v4;                      // eax
        int result;                  // eax
        int v6;                      // eax
        bool v7;                     // zf
        HRESULT v8;                  // eax
        int v9;                      // edx
        int v10;                     // ecx
        int v11;                     // eax
        int *v12;                    // eax
        int v13;                     // ecx
        int v14;                     // esi
        int v15;                     // eax
        bool v16;                    // sf
        int v17;                     // esi
        int v18;                     // eax
        int v19;                     // eax
        int v20;                     // eax
        __int16 v21;                 // kr18_2
        char v22;                    // al
        int v23;                     // esi
        int v24;                     // ecx
        unsigned int v25;            // eax
        int v26;                     // eax
        int v27;                     // ecx
        int v28;                     // eax
        int v29;                     // ecx
        int v30;                     // ecx
        int v31;                     // ecx
        int v32;                     // ecx
        int v33;                     // eax
        int v34;                     // edx
        int v35;                     // eax
        int v36;                     // edx
        int v37;                     // edx
        int v38;                     // eax
        __int16 v39;                 // dx
        int v40;                     // edx
        int v41;                     // ecx
        int v42;                     // eax
        int v43;                     // eax
        int v44;                     // eax
        int v45;                     // eax
        int v46;                     // eax
        int v47;                     // eax
        int v48;                     // eax
        __int16 v49;                 // ax
        int v50;                     // eax
        int v51;                     // ecx
        int v52;                     // eax
        int v53;                     // eax
        int v54;                     // eax
        int v55;                     // eax
        int v56;                     // eax
        int v57;                     // eax
        int v58;                     // eax
        DWORD v59;                   // eax
        int v60;                     // esi
        int v61;                     // eax
        int v62;                     // [esp+34h] [ebp-110h] BYREF
        int v63;                     // [esp+38h] [ebp-10Ch]
        int v64;                     // [esp+3Ch] [ebp-108h]
        int v65;                     // [esp+40h] [ebp-104h]
        char Buffer[256];            // [esp+44h] [ebp-100h] BYREF

        if (dword_118ABDDC < 0x7FFF)
            ++dword_118ABDDC;
        v2 = 0;
        MEMORY[0x118AB8B4] = dword_118ABAD8;
        v3 = g_lpDirectInputDeviceA->lpVtbl;
        dword_118ABAD8 = ((_BYTE)dword_118ABAD8 - 1) & 1;
        v4 = v3->GetDeviceState(g_lpDirectInputDeviceA, 256, &byte_118AB8B8[256 * dword_118ABAD8]);
        if (v4 < 0) {
            if (v4 != -2147024866) {
                dword_118ABAD0 = 0;
                return 0;
            }
            if (g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA) < 0) {
                dword_118ABAD0 = 0;
                return 0;
            }
            if (g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(
                    g_lpDirectInputDeviceA, 256, &byte_118AB8B8[256 * dword_118ABAD8]) < 0) {
                dword_118ABAD0 = 0;
                return 0;
            }
        }
        v6 = g_ConfigJoystickIndex;
        v7 = g_ConfigJoystickIndex == 1;
        byte_118AB8B8[256 * dword_118ABAD8] = 0;
        if (v7 || v6 == 2) {
            dword_118ABD7C = dword_118ABAB8;
            dword_118ABAB8 = ((_BYTE)dword_118ABAB8 - 1) & 1;
            g_DirectInputDevice2A->lpVtbl->Poll(g_DirectInputDevice2A);
            v8 = g_DirectInputDevice2A->lpVtbl->GetDeviceState(
                g_DirectInputDevice2A, 272, &dword_118ABAE0[68 * dword_118ABAB8]);
            if (v8) {
                if (v8 == -2147024866)
                    sub_100773D0();
                memset(&byte_118ABB10[272 * dword_118ABAB8], 0, 0x80u);
            }
        }
        dword_118ABAD4 = dword_118ABD80;
        v9 = ((_BYTE)dword_118ABD80 - 1) & 1;
        dword_118ABD80 = v9;
        if (g_unk54Ptr && (v10 = *((_DWORD *)g_unk54Ptr + 20)) != 0) {
            v11 = (*(int(__stdcall **)(_DWORD, int, int *))(*(_DWORD *)v10 + 36))(
                *((_DWORD *)g_unk54Ptr + 20), 16, &v62);
            if (!v11) {
                v12 = &dword_118ABD44[7 * dword_118ABAD4];
                v13 = 7 * dword_118ABD80;
                dword_118ABD44[v13] = *v12 + v62;
                dword_118ABD48[v13] = *v12 + v63;
                v14 = *v12;
                v15 = dword_10ACED40;
                v16 = dword_10ACED40 < 0;
                dword_118ABD4C[v13] = v14 + v64;
                if (v16) {
                    v15 = 0;
                } else if (v15 > 7) {
                    v15 = 7;
                }
                v17 = dword_100BD400[v15];
                dword_118ABD38[v13] = (dword_118ABD44[v13] << 7) / v17;
                dword_118ABD3C[v13] = (dword_118ABD48[v13] << 7) / v17;
                dword_118ABD40[v13] = (dword_118ABD4C[v13] << 7) / v17;
                v18 = dword_118ABD38[v13];
                if (v18 >= -128) {
                    if (v18 > 128) {
                        dword_118ABD38[v13] = 128;
                        dword_118ABD44[v13] = v17;
                    }
                } else {
                    dword_118ABD38[v13] = -128;
                    dword_118ABD44[v13] = -v17;
                }
                v19 = dword_118ABD3C[v13];
                if (v19 >= -128) {
                    if (v19 > 128) {
                        dword_118ABD3C[v13] = 128;
                        dword_118ABD48[v13] = v17;
                    }
                } else {
                    dword_118ABD3C[v13] = -128;
                    dword_118ABD48[v13] = -v17;
                }
                v20 = dword_118ABD40[v13];
                if (v20 >= -128) {
                    if (v20 <= 128) {
                    LABEL_36:
                        v21 = *(_WORD *)((char *)&v65 + 1);
                        byte_118ABD50[v13 * 4] = v65;
                        v22 = HIBYTE(v65);
                        byte_118ABD51[v13 * 4] = v21;
                        byte_118ABD52[v13 * 4] = HIBYTE(v21);
                        byte_118ABD53[v13 * 4] = v22;
                        goto LABEL_41;
                    }
                    dword_118ABD40[v13] = 128;
                } else {
                    dword_118ABD40[v13] = -128;
                    v17 = -v17;
                }
                dword_118ABD4C[v13] = v17;
                goto LABEL_36;
            }
            if (v11 == -2147024866)
                (*(void(__stdcall **)(_DWORD))(**((_DWORD **)g_unk54Ptr + 20) + 28))(
                    *((_DWORD *)g_unk54Ptr + 20));
            *(_DWORD *)&byte_118ABD50[28 * dword_118ABD80] = 0;
        } else {
            memset(&dword_118ABD38[7 * v9], 0, 0x1Cu);
        }
    LABEL_41:
        if (!sub_100786E0(15)) {
        LABEL_47:
            v23 = MEMORY[0x118AB8B4];
            v24 = dword_118ABAD8;
            if (byte_118AB8F7[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB8F7[256 * dword_118ABAD8] < 0)
                dword_100BD3E8 = dword_100BD3E8 == 0;
            if (byte_118AB8F8[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB8F8[256 * dword_118ABAD8] < 0)
                dword_100BD3EC = dword_100BD3EC == 0;
            if (byte_118AB8F9[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB8F9[256 * dword_118ABAD8] < 0)
                dword_100BD3F0 = dword_100BD3F0 == 0;
            if (byte_118AB8FA[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB8FA[256 * dword_118ABAD8] < 0)
                dword_100BD3F4 = dword_100BD3F4 == 0;
            if (byte_118AB8FB[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB8FB[256 * dword_118ABAD8] < 0)
                dword_100BD3F8 = dword_100BD3F8 == 0;
            if (byte_118AB8FC[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB8FC[256 * dword_118ABAD8] < 0)
                dword_100BD3FC = dword_100BD3FC == 0;
            if (byte_118AB90F[256 * MEMORY[0x118AB8B4]] >= 0 &&
                byte_118AB90F[256 * dword_118ABAD8] < 0) {
                pm_sub_10002930();
                v23 = MEMORY[0x118AB8B4];
                v24 = dword_118ABAD8;
            }
            if (byte_118AB910[256 * v23] >= 0 && byte_118AB910[256 * v24] < 0)
                pm_sub_10002970();
            if ((GetAsyncKeyState(70) & 1) != 0 && dword_118ABDDC > 15)
                dword_10B501D8 = dword_10B501D8 == 0;
            if ((GetAsyncKeyState(80) & 1) != 0 && dword_118ABDDC > 15)
                dword_118ABDC8 = dword_118ABDC8 == 0;
            if (dword_106909E0) {
                if (dword_106909E0 == 2) {
                    if (sub_100786E0(8))
                        v2 = 256;
                    if (sub_100786E0(9))
                        v2 |= 0x200u;
                    if (sub_100786E0(10))
                        v2 |= 0x400u;
                }
                if (sub_100786E0(11))
                    v2 |= 0x800u;
                if (sub_100786E0(21))
                    v2 |= 0x100400u;
                if (sub_10078420(22))
                    v2 |= 0x200000u;
                if (sub_10078420(23))
                    v2 |= 0x400000u;
                if (sub_10078420(24))
                    v2 |= 0x800000u;
                if (sub_10078420(25))
                    v2 |= 0x1000000u;
                if (sub_100786E0(26))
                    v2 |= 0x200000u;
                if (sub_100786E0(27)) {
                    dword_118ABAD0 = v2 | 0x400000;
                    return v2 | 0x400000;
                }
            LABEL_298:
                dword_118ABAD0 = v2;
                return v2;
            }
            if (sub_100786E0(16)) {
                if (!dword_106909B4 && g_GameMode != 4 && g_GameMode != 5)
                    dword_118ABDCC = 1;
                if (g_NetworkPlay) {
                    if (!dword_118ABDC0) {
                        atomic_sub_10004BB0();
                        dword_118ABDC0 = 1;
                    }
                } else {
                    g_usingGameMode4 = 1;
                    if (g_GameMode == 2)
                        __setargv_0();
                }
            }
            if (sub_100786E0(14))
                v2 = 0x8000;
            *a1 = 0;
            if (g_GameMode == 4 || g_GameMode == 5)
                goto LABEL_203;
            if ((HIBYTE(*(_WORD *)g_ConfigJoystickPtr) & 0x80u) == 0)
                goto LABEL_158;
            v25 = *(_WORD *)g_ConfigJoystickPtr & 0xFF00;
            if (v25 <= 0x8100) {
                if (v25 != 33024) {
                    if (v25 == 0x8000) {
                        v26 = dword_118ABAB8;
                        v27 = dword_118ABAE0[68 * dword_118ABAB8];
                        if (v27 < 0) {
                            v28 = 5 * v27;
                        LABEL_154:
                            *a1 = 16 * v28 / 128;
                            v26 = dword_118ABAB8;
                            v32 = dword_118ABD80;
                            goto LABEL_160;
                        }
                        goto LABEL_157;
                    }
                    goto LABEL_158;
                }
                v26 = dword_118ABAB8;
                v29 = dword_118ABAE0[68 * dword_118ABAB8];
                goto LABEL_134;
            }
            if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) <= 0x8300) {
                if (v25 != 33536) {
                    if (v25 == 33280) {
                        v26 = dword_118ABAB8;
                        v30 = dword_118ABAE4[68 * dword_118ABAB8];
                        if (v30 < 0) {
                            v28 = 5 * v30;
                            goto LABEL_154;
                        }
                        goto LABEL_157;
                    }
                    goto LABEL_158;
                }
                v26 = dword_118ABAB8;
                v29 = dword_118ABAE4[68 * dword_118ABAB8];
            LABEL_134:
                if (v29 > 0) {
                    v28 = -5 * v29;
                    goto LABEL_154;
                }
                goto LABEL_157;
            }
            if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) <= 0x8500) {
                if (v25 == 34048) {
                    v26 = dword_118ABAB8;
                    v29 = dword_118ABAE8[68 * dword_118ABAB8];
                    goto LABEL_134;
                }
                if (v25 == 33792) {
                    v26 = dword_118ABAB8;
                    v31 = dword_118ABAE8[68 * dword_118ABAB8];
                    if (v31 < 0) {
                        v28 = 5 * v31;
                        goto LABEL_154;
                    }
                    goto LABEL_157;
                }
            LABEL_158:
                v26 = dword_118ABAB8;
                v32 = dword_118ABD80;
                goto LABEL_160;
            }
            if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) > 0x8700) {
                if ((*(_WORD *)g_ConfigJoystickPtr & 0xFF00u) > 0x8900) {
                    if (v25 == 35328) {
                        v32 = dword_118ABD80;
                        v38 = dword_118ABD40[7 * dword_118ABD80];
                        if (v38 < 0) {
                            *a1 = 80 * v38 / 128;
                            v26 = dword_118ABAB8;
                        LABEL_157:
                            v32 = dword_118ABD80;
                            goto LABEL_160;
                        }
                    } else {
                        if (v25 != 35584)
                            goto LABEL_158;
                        v32 = dword_118ABD80;
                        v37 = dword_118ABD40[7 * dword_118ABD80];
                        if (v37 > 0) {
                            v28 = -5 * v37;
                            goto LABEL_154;
                        }
                    }
                } else if (v25 == 35072) {
                    v32 = dword_118ABD80;
                    v36 = dword_118ABD3C[7 * dword_118ABD80];
                    if (v36 > 0) {
                        *a1 = -80 * v36 / 128;
                        v26 = dword_118ABAB8;
                        v32 = dword_118ABD80;
                        goto LABEL_160;
                    }
                } else {
                    if (v25 != 34816)
                        goto LABEL_158;
                    v32 = dword_118ABD80;
                    v35 = dword_118ABD3C[7 * dword_118ABD80];
                    if (v35 < 0) {
                        v28 = 5 * v35;
                        goto LABEL_154;
                    }
                }
            } else if (v25 == 34560) {
                v32 = dword_118ABD80;
                v34 = dword_118ABD38[7 * dword_118ABD80];
                if (v34 > 0) {
                    *a1 = -80 * v34 / 128;
                    v26 = dword_118ABAB8;
                    v32 = dword_118ABD80;
                    goto LABEL_160;
                }
            } else {
                if (v25 != 34304)
                    goto LABEL_158;
                v32 = dword_118ABD80;
                v33 = dword_118ABD38[7 * dword_118ABD80];
                if (v33 < 0) {
                    v28 = 5 * v33;
                    goto LABEL_154;
                }
            }
            v26 = dword_118ABAB8;
        LABEL_160:
            v39 = *(_WORD *)(g_ConfigJoystickPtr + 6);
            if (v39 >= 0)
                goto LABEL_203;
            v40 = v39 & 0xFF00;
            if (v40 <= 33024) {
                if (v40 == 33024) {
                    v42 = dword_118ABAE0[68 * v26];
                    if (v42 <= 0)
                        goto LABEL_203;
                    v43 = 5 * v42;
                    goto LABEL_202;
                }
                if (v40 == 0x8000) {
                    v41 = dword_118ABAE0[68 * v26];
                    if (v41 < 0)
                        goto LABEL_201;
                }
            LABEL_203:
                if (dword_106909B4) {
                    if (sub_100786E0(12))
                        v2 |= 0x1000u;
                    if (sub_100786E0(13))
                        v2 |= 0x2000u;
                    if (sub_100786E0(0))
                        v2 |= 1u;
                    if (sub_100786E0(1))
                        v2 |= 2u;
                    if (sub_100786E0(2)) {
                        dword_118ABAD0 = v2 | 4;
                        return v2 | 4;
                    }
                    goto LABEL_298;
                }
                *a2 = 0;
                if (sub_10078420(2)) {
                    v2 |= 4u;
                    if (*(char *)(g_ConfigJoystickPtr + 13) >= 0)
                        *a2 = 80;
                }
                v49 = *(_WORD *)(g_ConfigJoystickPtr + 12);
                if (v49 >= 0)
                    goto LABEL_260;
                v50 = v49 & 0xFF00;
                if (v50 <= 33024) {
                    if (v50 == 33024) {
                        v52 = dword_118ABAE0[68 * dword_118ABAB8];
                        if (v52 <= 0)
                            goto LABEL_260;
                        v53 = 5 * v52;
                        goto LABEL_259;
                    }
                    if (v50 == 0x8000) {
                        v51 = dword_118ABAE0[68 * dword_118ABAB8];
                        if (v51 < 0)
                            goto LABEL_258;
                    }
                LABEL_260:
                    if (sub_10078420(3))
                        v2 |= 8u;
                    if (sub_10078420(4)) {
                        v2 |= 0x10u;
                        *a2 = -80;
                    }
                    if (g_GameMode != 4 && g_GameMode != 5) {
                        if (sub_10078420(0))
                            v2 |= 1u;
                        if (sub_10078420(1))
                            v2 |= 2u;
                    }
                    if (sub_10078420(5))
                        v2 |= 0x20u;
                    if (sub_10078420(6))
                        v2 |= 0x40u;
                    if (sub_100786E0(8))
                        v2 |= 0x100u;
                    if (sub_100786E0(9))
                        v2 |= 0x200u;
                    if (sub_100786E0(10))
                        v2 |= 0x400u;
                    if (sub_100786E0(17))
                        v2 |= 0x10000u;
                    if (sub_100786E0(18))
                        v2 |= 0x20000u;
                    if (sub_100786E0(19))
                        v2 |= 0x40000u;
                    if (sub_100786E0(20))
                        v2 |= 0x80000u;
                    if (sub_10078420(7))
                        v2 |= 0x80u;
                    if (g_Runbenchmark) {
                        if (dword_118ABDDC == 1) {
                            dword_118ABD00 = getTicks();
                            dword_118ABD74 = sub_10016A50();
                        }
                        if (dword_118ABDDC == 441) {
                            v59 = getTicks();
                            v60 = v59 - dword_118ABD00;
                            dword_118ABD00 = v59;
                            v61 = sub_10016A50();
                            v63 = 0;
                            v62 = v60;
                            sprintf(Buffer,
                                    "fps = %0.2f",
                                    (double)(v61 - dword_118ABD74) * 1000.0 / (double)v60);
                            exit(1);
                        }
                        GetAsyncKeyState(27);
                        if (dword_118ABDDC == 1) {
                            dword_10B501D8 = 1;
                            dword_118ABAD0 = 1024;
                            return 1024;
                        }
                        v2 = dword_118ABDDC >= 60 ? 4 : 0;
                    }
                    goto LABEL_298;
                }
                if (v50 > 33536) {
                    if (v50 > 34048) {
                        if (v50 > 34560) {
                            if (v50 > 35072) {
                                if (v50 != 35328) {
                                    if (v50 == 35584) {
                                        v58 = dword_118ABD40[7 * dword_118ABD80];
                                        if (v58 > 0) {
                                            v53 = 5 * v58;
                                        LABEL_259:
                                            *a2 = 16 * v53 / 128;
                                            goto LABEL_260;
                                        }
                                    }
                                    goto LABEL_260;
                                }
                                v51 = dword_118ABD40[7 * dword_118ABD80];
                                if (v51 >= 0)
                                    goto LABEL_260;
                            } else {
                                if (v50 == 35072) {
                                    v57 = dword_118ABD3C[7 * dword_118ABD80];
                                    if (v57 <= 0)
                                        goto LABEL_260;
                                    v53 = 5 * v57;
                                    goto LABEL_259;
                                }
                                if (v50 != 34816)
                                    goto LABEL_260;
                                v51 = dword_118ABD3C[7 * dword_118ABD80];
                                if (v51 >= 0)
                                    goto LABEL_260;
                            }
                        } else {
                            if (v50 == 34560) {
                                v56 = dword_118ABD38[7 * dword_118ABD80];
                                if (v56 <= 0)
                                    goto LABEL_260;
                                v53 = 5 * v56;
                                goto LABEL_259;
                            }
                            if (v50 != 34304)
                                goto LABEL_260;
                            v51 = dword_118ABD38[7 * dword_118ABD80];
                            if (v51 >= 0)
                                goto LABEL_260;
                        }
                    } else {
                        if (v50 == 34048) {
                            v55 = dword_118ABAE8[68 * dword_118ABAB8];
                            if (v55 <= 0)
                                goto LABEL_260;
                            v53 = 5 * v55;
                            goto LABEL_259;
                        }
                        if (v50 != 33792)
                            goto LABEL_260;
                        v51 = dword_118ABAE8[68 * dword_118ABAB8];
                        if (v51 >= 0)
                            goto LABEL_260;
                    }
                } else {
                    if (v50 == 33536) {
                        v54 = dword_118ABAE4[68 * dword_118ABAB8];
                        if (v54 <= 0)
                            goto LABEL_260;
                        v53 = 5 * v54;
                        goto LABEL_259;
                    }
                    if (v50 != 33280)
                        goto LABEL_260;
                    v51 = dword_118ABAE4[68 * dword_118ABAB8];
                    if (v51 >= 0)
                        goto LABEL_260;
                }
            LABEL_258:
                v53 = -5 * v51;
                goto LABEL_259;
            }
            if (v40 > 33536) {
                if (v40 > 34048) {
                    if (v40 > 34560) {
                        if (v40 > 35072) {
                            if (v40 != 35328) {
                                if (v40 == 35584) {
                                    v48 = dword_118ABD40[7 * v32];
                                    if (v48 > 0) {
                                        v43 = 5 * v48;
                                    LABEL_202:
                                        *a1 = 16 * v43 / 128;
                                        goto LABEL_203;
                                    }
                                }
                                goto LABEL_203;
                            }
                            v41 = dword_118ABD40[7 * v32];
                            if (v41 >= 0)
                                goto LABEL_203;
                        } else {
                            if (v40 == 35072) {
                                v47 = dword_118ABD3C[7 * v32];
                                if (v47 <= 0)
                                    goto LABEL_203;
                                v43 = 5 * v47;
                                goto LABEL_202;
                            }
                            if (v40 != 34816)
                                goto LABEL_203;
                            v41 = dword_118ABD3C[7 * v32];
                            if (v41 >= 0)
                                goto LABEL_203;
                        }
                    } else {
                        if (v40 == 34560) {
                            v46 = dword_118ABD38[7 * v32];
                            if (v46 <= 0)
                                goto LABEL_203;
                            v43 = 5 * v46;
                            goto LABEL_202;
                        }
                        if (v40 != 34304)
                            goto LABEL_203;
                        v41 = dword_118ABD38[7 * v32];
                        if (v41 >= 0)
                            goto LABEL_203;
                    }
                } else {
                    if (v40 == 34048) {
                        v45 = dword_118ABAE8[68 * v26];
                        if (v45 <= 0)
                            goto LABEL_203;
                        v43 = 5 * v45;
                        goto LABEL_202;
                    }
                    if (v40 != 33792)
                        goto LABEL_203;
                    v41 = dword_118ABAE8[68 * v26];
                    if (v41 >= 0)
                        goto LABEL_203;
                }
            } else {
                if (v40 == 33536) {
                    v44 = dword_118ABAE4[68 * v26];
                    if (v44 <= 0)
                        goto LABEL_203;
                    v43 = 5 * v44;
                    goto LABEL_202;
                }
                if (v40 != 33280)
                    goto LABEL_203;
                v41 = dword_118ABAE4[68 * v26];
                if (v41 >= 0)
                    goto LABEL_203;
            }
        LABEL_201:
            v43 = -5 * v41;
            goto LABEL_202;
        }
        if (g_NetworkPlay && g_usingGameMode4 && !dword_106909E0 &&
            dword_10ACEE50 < dword_100BD3E0) {
            atomic_sub_10004BE0();
            goto LABEL_47;
        }
        result = 0x4000;
        dword_1022AF20 = 1;
        dword_118ABAD0 = 0x4000;
        return result;
    }
    // 1006AA90: using guessed type int __setargv_0(void);
    // 100AA010: using guessed type int g_GameMode;
    // 100BD3E8: using guessed type int dword_100BD3E8;
    // 100BD3EC: using guessed type int dword_100BD3EC;
    // 100BD3F0: using guessed type int dword_100BD3F0;
    // 100BD3F4: using guessed type int dword_100BD3F4;
    // 100BD3F8: using guessed type int dword_100BD3F8;
    // 100BD3FC: using guessed type int dword_100BD3FC;
    // 1022AF14: using guessed type int g_usingGameMode4;
    // 1022AF18: using guessed type int g_NetworkPlay;
    // 1022AF20: using guessed type int dword_1022AF20;
    // 106909B4: using guessed type int dword_106909B4;
    // 106909E0: using guessed type int dword_106909E0;
    // 10ACED40: using guessed type int dword_10ACED40;
    // 10ACEE50: using guessed type int dword_10ACEE50;
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1D4: using guessed type int dword_10B4E1D4;
    // 10B501D8: using guessed type int dword_10B501D8;
    // 118AB8B4: using guessed type int dword_118AB8B4;
    // 118ABAB8: using guessed type int dword_118ABAB8;
    // 118ABAD0: using guessed type int dword_118ABAD0;
    // 118ABAD4: using guessed type int dword_118ABAD4;
    // 118ABAD8: using guessed type int dword_118ABAD8;
    // 118ABAE0: using guessed type int dword_118ABAE0[];
    // 118ABAE4: using guessed type int dword_118ABAE4[];
    // 118ABAE8: using guessed type int dword_118ABAE8[];
    // 118ABD00: using guessed type int dword_118ABD00;
    // 118ABD38: using guessed type int dword_118ABD38[];
    // 118ABD3C: using guessed type int dword_118ABD3C[];
    // 118ABD40: using guessed type int dword_118ABD40[];
    // 118ABD44: using guessed type int dword_118ABD44[];
    // 118ABD48: using guessed type int dword_118ABD48[];
    // 118ABD4C: using guessed type int dword_118ABD4C[];
    // 118ABD74: using guessed type int dword_118ABD74;
    // 118ABD7C: using guessed type int dword_118ABD7C;
    // 118ABD80: using guessed type int dword_118ABD80;
    // 118ABDC0: using guessed type int dword_118ABDC0;
    // 118ABDC4: using guessed type int g_Runbenchmark;
    // 118ABDC8: using guessed type int dword_118ABDC8;
    // 118ABDCC: using guessed type int dword_118ABDCC;
    // 118ABDDC: using guessed type int dword_118ABDDC;

    //----- (10078420) --------------------------------------------------------
    char __cdecl sub_10078420(int a1) {
        char result;         // al
        unsigned __int8 *v2; // edx
        unsigned int v3;     // ecx

        result = 0;
        v2 = (unsigned __int8 *)(g_ConfigJoystickPtr + 6 * a1);
        v3 = *(_WORD *)v2 & 0xFF00;
        if (v3 <= 0x100) {
            if (v3 == 256) {
                result = byte_118ABB10[272 * dword_118ABAB8 + *v2] & 0x80;
            } else if ((*(_WORD *)v2 & 0xFF00) == 0) {
                result = byte_118AB8B8[256 * dword_118ABAD8 + *v2] & 0x80;
            }
            goto LABEL_49;
        }
        if ((*(_WORD *)v2 & 0xFF00u) > 0x8000) {
            if ((*(_WORD *)v2 & 0xFF00u) > 0x8200) {
                if ((*(_WORD *)v2 & 0xFF00u) > 0x8400) {
                    if ((*(_WORD *)v2 & 0xFF00u) > 0x8600) {
                        if ((*(_WORD *)v2 & 0xFF00u) > 0x8800) {
                            if (v3 == 35072) {
                                if (dword_118ABD3C[7 * dword_118ABD80] <= 50)
                                    goto LABEL_49;
                            } else if (v3 == 35328) {
                                if (dword_118ABD40[7 * dword_118ABD80] >= -50)
                                    goto LABEL_49;
                            } else if (v3 != 35584 || dword_118ABD40[7 * dword_118ABD80] <= 50) {
                                goto LABEL_49;
                            }
                        } else if (v3 == 34816) {
                            if (dword_118ABD3C[7 * dword_118ABD80] >= -50)
                                goto LABEL_49;
                        } else if (v3 != 34560 || dword_118ABD38[7 * dword_118ABD80] <= 50) {
                            goto LABEL_49;
                        }
                    } else if (v3 == 34304) {
                        if (dword_118ABD38[7 * dword_118ABD80] >= -50)
                            goto LABEL_49;
                    } else if (v3 != 34048 || dword_118ABAE8[68 * dword_118ABAB8] <= 50) {
                        goto LABEL_49;
                    }
                } else if (v3 == 33792) {
                    if (dword_118ABAE8[68 * dword_118ABAB8] >= -50)
                        goto LABEL_49;
                } else if (v3 != 33536 || dword_118ABAE4[68 * dword_118ABAB8] <= 50) {
                    goto LABEL_49;
                }
            } else if (v3 == 33280) {
                if (dword_118ABAE4[68 * dword_118ABAB8] >= -50)
                    goto LABEL_49;
            } else if (v3 != 33024 || dword_118ABAE0[68 * dword_118ABAB8] <= 50) {
                goto LABEL_49;
            }
        LABEL_48:
            result = 0x80;
            goto LABEL_49;
        }
        if (v3 == 0x8000) {
            if (dword_118ABAE0[68 * dword_118ABAB8] >= -50)
                goto LABEL_49;
            goto LABEL_48;
        }
        if (v3 == 768)
            result = byte_118ABD50[28 * dword_118ABD80 + *v2] & 0x80;
    LABEL_49:
        if (!v2[3])
            result |= byte_118AB8B8[256 * dword_118ABAD8 + v2[2]] & 0x80;
        if (!v2[5])
            result |= byte_118AB8B8[256 * dword_118ABAD8 + v2[4]] & 0x80;
        return result;
    }
    // 10B4E1D4: using guessed type int dword_10B4E1D4;
    // 118ABAB8: using guessed type int dword_118ABAB8;
    // 118ABAD8: using guessed type int dword_118ABAD8;
    // 118ABAE0: using guessed type int dword_118ABAE0[];
    // 118ABAE4: using guessed type int dword_118ABAE4[];
    // 118ABAE8: using guessed type int dword_118ABAE8[];
    // 118ABD38: using guessed type int dword_118ABD38[];
    // 118ABD3C: using guessed type int dword_118ABD3C[];
    // 118ABD40: using guessed type int dword_118ABD40[];
    // 118ABD80: using guessed type int dword_118ABD80;

    //----- (100786E0) --------------------------------------------------------
    char __cdecl sub_100786E0(int a1) {
        char result;         // al
        unsigned __int8 *v2; // esi
        unsigned int v3;     // ecx
        int v4;              // eax
        bool v5;             // zf
        int v6;              // ecx
        int v7;              // ecx
        int v8;              // ebp
        int v9;              // ecx
        int v10;             // ecx

        result = 0;
        v2 = (unsigned __int8 *)(g_ConfigJoystickPtr + 6 * a1);
        v3 = *(_WORD *)v2 & 0xFF00;
        if (v3 <= 0x100) {
            if (v3 == 256) {
                v6 = *v2;
                if ((byte_118ABB10[272 * dword_118ABD7C + v6] & 0x80) == 0 &&
                    (byte_118ABB10[272 * dword_118ABAB8 + v6] & 0x80) != 0) {
                    result = 1;
                    goto LABEL_68;
                }
            } else {
                if ((*(_WORD *)v2 & 0xFF00) != 0)
                    goto LABEL_68;
                v4 = *v2;
                if ((byte_118AB8B8[256 * MEMORY[0x118AB8B4] + v4] & 0x80) == 0) {
                    v5 = byte_118AB8B8[256 * dword_118ABAD8 + v4] >= 0;
                    goto LABEL_14;
                }
            }
            goto LABEL_16;
        }
        if ((*(_WORD *)v2 & 0xFF00u) > 0x8000) {
            if ((*(_WORD *)v2 & 0xFF00u) > 0x8200) {
                if ((*(_WORD *)v2 & 0xFF00u) > 0x8400) {
                    if ((*(_WORD *)v2 & 0xFF00u) > 0x8600) {
                        if ((*(_WORD *)v2 & 0xFF00u) > 0x8800) {
                            if (v3 == 35072) {
                                if (dword_118ABD3C[7 * dword_118ABAD4] > 50 ||
                                    dword_118ABD3C[7 * dword_118ABD80] <= 50)
                                    goto LABEL_68;
                            } else if (v3 == 35328) {
                                if (dword_118ABD40[7 * dword_118ABAD4] < -50 ||
                                    dword_118ABD40[7 * dword_118ABD80] >= -50)
                                    goto LABEL_68;
                            } else if (v3 != 35584 || dword_118ABD40[7 * dword_118ABAD4] > 50 ||
                                       dword_118ABD40[7 * dword_118ABD80] <= 50) {
                                goto LABEL_68;
                            }
                        } else if (v3 == 34816) {
                            if (dword_118ABD3C[7 * dword_118ABAD4] < -50 ||
                                dword_118ABD3C[7 * dword_118ABD80] >= -50)
                                goto LABEL_68;
                        } else if (v3 != 34560 || dword_118ABD38[7 * dword_118ABAD4] > 50 ||
                                   dword_118ABD38[7 * dword_118ABD80] <= 50) {
                            goto LABEL_68;
                        }
                    } else if (v3 == 34304) {
                        if (dword_118ABD38[7 * dword_118ABAD4] < -50 ||
                            dword_118ABD38[7 * dword_118ABD80] >= -50)
                            goto LABEL_68;
                    } else if (v3 != 34048 || dword_118ABAE8[68 * dword_118ABD7C] > 50 ||
                               dword_118ABAE8[68 * dword_118ABAB8] <= 50) {
                        goto LABEL_68;
                    }
                } else if (v3 == 33792) {
                    if (dword_118ABAE8[68 * dword_118ABD7C] < -50 ||
                        dword_118ABAE8[68 * dword_118ABAB8] >= -50)
                        goto LABEL_68;
                } else if (v3 != 33536 || dword_118ABAE4[68 * dword_118ABD7C] > 50 ||
                           dword_118ABAE4[68 * dword_118ABAB8] <= 50) {
                    goto LABEL_68;
                }
            } else if (v3 == 33280) {
                if (dword_118ABAE4[68 * dword_118ABD7C] < -50 ||
                    dword_118ABAE4[68 * dword_118ABAB8] >= -50)
                    goto LABEL_68;
            } else if (v3 != 33024 || dword_118ABAE0[68 * dword_118ABD7C] > 50 ||
                       dword_118ABAE0[68 * dword_118ABAB8] <= 50) {
                goto LABEL_68;
            }
        LABEL_67:
            result = 0x80;
            goto LABEL_68;
        }
        if (v3 != 0x8000) {
            if (v3 != 768)
                goto LABEL_68;
            v7 = *v2;
            if ((byte_118ABD50[28 * dword_118ABAD4 + v7] & 0x80) == 0) {
                v5 = byte_118ABD50[28 * dword_118ABD80 + v7] >= 0;
            LABEL_14:
                if (!v5) {
                    result = 1;
                    goto LABEL_68;
                }
            }
        LABEL_16:
            result = 0;
            goto LABEL_68;
        }
        if (dword_118ABAE0[68 * dword_118ABD7C] >= -50 && dword_118ABAE0[68 * dword_118ABAB8] < -50)
            goto LABEL_67;
    LABEL_68:
        if (v2[3]) {
            v8 = dword_118ABAD8;
        } else {
            v8 = dword_118ABAD8;
            v9 = v2[2];
            if ((byte_118AB8B8[256 * MEMORY[0x118AB8B4] + v9] & 0x80) == 0 &&
                (byte_118AB8B8[256 * dword_118ABAD8 + v9] & 0x80) != 0) {
                result |= 1u;
            }
        }
        if (!v2[5]) {
            v10 = v2[4];
            if ((byte_118AB8B8[256 * MEMORY[0x118AB8B4] + v10] & 0x80) == 0 &&
                (byte_118AB8B8[256 * v8 + v10] & 0x80) != 0)
                result |= 1u;
        }
        return result;
    }
    // 10B4E1D4: using guessed type int dword_10B4E1D4;
    // 118AB8B4: using guessed type int dword_118AB8B4;
    // 118ABAB8: using guessed type int dword_118ABAB8;
    // 118ABAD4: using guessed type int dword_118ABAD4;
    // 118ABAD8: using guessed type int dword_118ABAD8;
    // 118ABAE0: using guessed type int dword_118ABAE0[];
    // 118ABAE4: using guessed type int dword_118ABAE4[];
    // 118ABAE8: using guessed type int dword_118ABAE8[];
    // 118ABD38: using guessed type int dword_118ABD38[];
    // 118ABD3C: using guessed type int dword_118ABD3C[];
    // 118ABD40: using guessed type int dword_118ABD40[];
    // 118ABD7C: using guessed type int dword_118ABD7C;
    // 118ABD80: using guessed type int dword_118ABD80;

    //----- (10078BC0) --------------------------------------------------------
    LPDIRECTINPUTDEVICEA sub_10078BC0() {
        LPDIRECTINPUTDEVICEA result; // eax

        result = (LPDIRECTINPUTDEVICEA)--dword_118ABDD8;
        if (dword_118ABDD8 >= 0) {
            result = (LPDIRECTINPUTDEVICEA)dword_118ABDD8;
            if (!dword_118ABDD8) {
                result = g_lpDirectInputDeviceA;
                if (g_lpDirectInputDeviceA) {
                    g_lpDirectInputDeviceA->lpVtbl->Unacquire(g_lpDirectInputDeviceA);
                    result = (LPDIRECTINPUTDEVICEA)g_lpDirectInputDeviceA->lpVtbl->Release(
                        g_lpDirectInputDeviceA);
                    g_lpDirectInputDeviceA = 0;
                }
            }
        } else {
            dword_118ABDD8 = 0;
        }
        return result;
    }
    // 118ABDD8: using guessed type int dword_118ABDD8;

    //----- (10078C10) --------------------------------------------------------
    __int64 sub_10078C10() {
        __int64 result; // rax

        result = qword_118ABDE0 + 1562500;
        qword_118ABDE0 += 1562500i64;
        return result;
    }
    // 118ABDE0: using guessed type __int64 qword_118ABDE0;

    //----- (10078C30) --------------------------------------------------------
    int __cdecl sub_10078C30(
        IDirectInputDevice2A * diDevice2A, GUID * guid, int dwObj, int dwHow, int a5, int a6) {
        IDirectInputDevice2AVtbl *idevLPVtbl; // ecx
        DIPROPHEADER diPropHeader;            // [esp+0h] [ebp-18h] BYREF
        int v9;                               // [esp+10h] [ebp-8h]
        int v10;                              // [esp+14h] [ebp-4h]

        diPropHeader.dwObj = dwObj;
        v9 = a5;
        v10 = a6;
        diPropHeader.dwHow = dwHow;
        idevLPVtbl = diDevice2A->lpVtbl;
        diPropHeader.dwSize = 24;
        diPropHeader.dwHeaderSize = 16;
        return idevLPVtbl->SetProperty(diDevice2A, guid, &diPropHeader);
    }

    //----- (10078C80) --------------------------------------------------------
    int __cdecl sub_10078C80(int *a1, int a2, int a3, int a4, int a5) {
        int v5;    // ecx
        int v7[5]; // [esp+0h] [ebp-14h] BYREF

        v7[4] = a5;
        v7[2] = a3;
        v7[3] = a4;
        v5 = *a1;
        v7[0] = 20;
        v7[1] = 16;
        return (*(int(__stdcall **)(int *, int, int *))(v5 + 24))(a1, a2, v7);
    }

    //----- (10078CD0) --------------------------------------------------------
    int sub_10078CD0() {
        const CHAR *text;    // eax
        unk54 *u54_1;        // eax
        unk54 *u54;          // eax
        const CHAR *caption; // [esp-8h] [ebp-18h]

        if (++mouseCreated == 1) {
            if (DirectInputCreateA(hInst, DIRECTINPUT_VERSION, &g_DirectInputA, 0) < 0) {
                caption = getCaptionString(0x126u);
                text = getCaptionString(0x127u);
                MessageBoxA(g_HWND, text, caption, MB_ICONERROR);
                return 0;
            }
            u54_1 = (unk54 *)malloc(0x54u);
            if (u54_1)
                u54 = meth_unk54_init(u54_1);
            else
                u54 = 0;
            g_unk54Ptr = u54;
            meth_DICreateMouseDevice(u54, g_HWND);
        }
        return 1;
    }
    // 118ABDE8: using guessed type int mouseCreated;

    //----- (10078DB0) --------------------------------------------------------
    int sub_10078DB0() {
        LPDIRECTINPUTA dida;         // eax
        void *v1;                    // esi
        IDirectInputAVtbl *didaVtbl; // ecx

        if (!--mouseCreated) {
            dida = g_DirectInputA;
            if (g_DirectInputA) {
                v1 = g_unk54Ptr;
                if (g_unk54Ptr) {
                    meth_100602B0(g_unk54Ptr);
                    free(v1);
                    dida = g_DirectInputA;
                }
                didaVtbl = dida->lpVtbl;
                g_unk54Ptr = 0;
                didaVtbl->Release(dida);
                g_DirectInputA = 0;
            }
        }
        return 1;
    }
    // 100602B0: using guessed type int __thiscall sub_100602B0(_DWORD);
    // 118ABDE8: using guessed type int mouseCreated;

    //----- (10078E10) --------------------------------------------------------
    int __cdecl sub_10078E10(int a1) {
        int result; // eax

        result = g_ConfigJoystickIndex;
        if (g_ConfigJoystickIndex == 1 || g_ConfigJoystickIndex == 2) {
            result = dword_10B4E1E0;
            if (dword_10B4E1E0) {
                result = MEMORY[0x118ABDBC];
                if (MEMORY[0x118ABDBC]) {
                    result = dword_106909E0;
                    if (!dword_106909E0) {
                        result = a1;
                        diEffectRglDirection_0 = a1;
                    }
                }
            }
        }
        return result;
    }
    // 100BD430: using guessed type int dword_100BD430;
    // 106909E0: using guessed type int dword_106909E0;
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;
    // 118ABDBC: using guessed type int dword_118ABDBC;

    //----- (10078E50) --------------------------------------------------------
    int sub_10078E50() {
        int result; // eax

        result = g_ConfigJoystickIndex;
        if (g_ConfigJoystickIndex == 1 || g_ConfigJoystickIndex == 2) {
            result = dword_10B4E1E0;
            if (dword_10B4E1E0) {
                result = MEMORY[0x118ABDBC];
                if (MEMORY[0x118ABDBC]) {
                    result = dword_106909E0;
                    if (!dword_106909E0)
                        dword_100BD438 = 250000;
                }
            }
        }
        return result;
    }
    // 100BD438: using guessed type int dword_100BD438;
    // 106909E0: using guessed type int dword_106909E0;
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;
    // 118ABDBC: using guessed type int dword_118ABDBC;

    //----- (10078E90) --------------------------------------------------------
    int sub_10078E90() {
        int result; // eax

        result = g_ConfigJoystickIndex;
        if (g_ConfigJoystickIndex == 1 || g_ConfigJoystickIndex == 2) {
            result = dword_10B4E1E0;
            if (dword_10B4E1E0) {
                result = MEMORY[0x118ABDBC];
                if (MEMORY[0x118ABDBC]) {
                    result = dword_106909E0;
                    if (!dword_106909E0)
                        dword_100BD438 = 125000;
                }
            }
        }
        return result;
    }
    // 100BD438: using guessed type int dword_100BD438;
    // 106909E0: using guessed type int dword_106909E0;
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;
    // 118ABDBC: using guessed type int dword_118ABDBC;

    //----- (10078ED0) --------------------------------------------------------
    int sub_10078ED0() {
        int result; // eax

        result = g_ConfigJoystickIndex;
        if (g_ConfigJoystickIndex == 1 || g_ConfigJoystickIndex == 2) {
            result = dword_10B4E1E0;
            if (dword_10B4E1E0) {
                result = MEMORY[0x118ABDBC];
                if (MEMORY[0x118ABDBC]) {
                    result = dword_106909E0;
                    if (!dword_106909E0) {
                        MEMORY[0x118ABD90] = dword_100BD438;
                        result = g_DirectInputEffect;
                        if (g_DirectInputEffect)
                            result = (*(int(__stdcall **)(int, int *, int))(
                                *(_DWORD *)g_DirectInputEffect + 24))(
                                g_DirectInputEffect, &diEffect, 536870977);
                    }
                }
            }
        }
        return result;
    }
    // 100BD438: using guessed type int dword_100BD438;
    // 106909E0: using guessed type int dword_106909E0;
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;
    // 118ABD88: using guessed type int dword_118ABD88;
    // 118ABD90: using guessed type int dword_118ABD90;
    // 118ABDBC: using guessed type int dword_118ABDBC;
    // 118ABDFC: using guessed type int dword_118ABDFC;

    //----- (10078F20) --------------------------------------------------------
    int __cdecl sub_10078F20(int a1, int a2, int a3) {
        int result; // eax
        int v4;     // ecx
        int v5;     // edi
        int v6;     // ebx
        int v7;     // esi
        int v8;     // edx

        result = g_ConfigJoystickIndex;
        if (g_ConfigJoystickIndex != 1 && g_ConfigJoystickIndex != 2)
            return result;
        result = dword_10B4E1E0;
        if (!dword_10B4E1E0)
            return result;
        result = MEMORY[0x118ABDBC];
        if (!MEMORY[0x118ABDBC])
            return result;
        result = dword_106909E0;
        if (dword_106909E0)
            return result;
        v4 = dword_100BD424;
        v5 = 1000 * dword_100BD424 * (a3 + 8) / 10000;
        result = dword_118ABDF8;
        dword_100BD42C = v5;
        if (!a2) {
            if (!dword_118ABDF8) {
                result = g_DirectInputEffect_0;
                if (g_DirectInputEffect_0)
                    result = (*(int(__stdcall **)(int))(*(_DWORD *)g_DirectInputEffect_0 + 32))(
                        g_DirectInputEffect_0);
                dword_118ABDF8 = 1;
            }
            return result;
        }
        if (dword_118ABDF8) {
            if (g_DirectInputEffect_0)
                (*(void(__stdcall **)(int, int, _DWORD))(*(_DWORD *)g_DirectInputEffect_0 + 28))(
                    g_DirectInputEffect_0, 1, 0);
            sub_10078E50();
            v5 = dword_100BD42C;
            v4 = dword_100BD424;
            dword_118ABDF8 = 0;
        }
        v6 = dword_118ABD78;
        if (a1) {
            v7 = -1000 * v4 / 10000 + dword_118ABD78;
            result = 1759218605 * v4 * dword_100BD428;
            dword_118ABD78 = v7;
            v8 = v4 * dword_100BD428 / 10000;
            if (v7 >= v8)
                goto LABEL_20;
        } else {
            v7 = 1000 * v4 / 10000 + dword_118ABD78;
            result = 1759218605 * v4 * v5;
            dword_118ABD78 = v7;
            v8 = v4 * v5 / 10000;
            if (v7 <= v8)
                goto LABEL_20;
        }
        v7 = v8;
        dword_118ABD78 = v8;
    LABEL_20:
        if (v7 != v6)
            result = sub_100790B0(v7);
        return result;
    }
    // 100BD424: using guessed type int dword_100BD424;
    // 100BD428: using guessed type int dword_100BD428;
    // 100BD42C: using guessed type int dword_100BD42C;
    // 106909E0: using guessed type int dword_106909E0;
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;
    // 118ABD78: using guessed type int dword_118ABD78;
    // 118ABDBC: using guessed type int dword_118ABDBC;
    // 118ABDEC: using guessed type int dword_118ABDEC;
    // 118ABDF8: using guessed type int dword_118ABDF8;

    //----- (100790B0) --------------------------------------------------------
    int __cdecl sub_100790B0(int a1) {
        int result; // eax

        dword_118ABD0C = a1;
        dword_118ABD10 = a1;
        result = g_DirectInputEffect_0;
        if (g_DirectInputEffect_0)
            result = (*(int(__stdcall **)(int, int *, int))(*(_DWORD *)g_DirectInputEffect_0 + 24))(
                g_DirectInputEffect_0, &diEffect_0, 256);
        return result;
    }
    // 118AB880: using guessed type int dword_118AB880;
    // 118ABD0C: using guessed type int dword_118ABD0C;
    // 118ABD10: using guessed type int dword_118ABD10;
    // 118ABDEC: using guessed type int dword_118ABDEC;

    //----- (100790E0) --------------------------------------------------------
    HRESULT __stdcall diEnumDevicesCallback(LPDIRECTINPUTDEVICEA deviceInstance, LPVOID userData) {
        int HRESULT; // esi
        GUID guid;   // [esp+8h] [ebp-10h] BYREF
            // The real type passed in is LPDIDEVICEINSTANCEA, and guid is assigned to deviceInstance->guidInstance. The pointer is then overwritten below with CreateDevice
        guid.Data1 = (unsigned int)deviceInstance[1].lpVtbl;
        *(IDirectInputDeviceA *)&guid.Data2 = deviceInstance[2];
        *(IDirectInputDeviceA *)guid.Data4 = deviceInstance[3];
        *(IDirectInputDeviceA *)&guid.Data4[4] = deviceInstance[4];
        if (g_DirectInputA->lpVtbl->CreateDevice(g_DirectInputA, &guid, &deviceInstance, 0) < 0) {
            OutputDebugStringA(aErrorFailedToC_0);
        } else {
            HRESULT = deviceInstance->lpVtbl->QueryInterface(
                deviceInstance, &CLSID_IDirectInputDevice2A, (LPVOID *)&g_DirectInputDevice2A);
            deviceInstance->lpVtbl->Release(deviceInstance);
            if (HRESULT < 0) {
                OutputDebugStringA(aErrorFailedToO);
                return 0;
            }
            if (g_DirectInputDevice2A->lpVtbl->SetCooperativeLevel(
                    g_DirectInputDevice2A, g_HWND, (DWORD)userData) < 0) {
                OutputDebugStringA(aErrorFailedToS);
            LABEL_8:
                g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
                g_DirectInputDevice2A = 0;
                return 0;
            }
            if (g_DirectInputDevice2A->lpVtbl->SetDataFormat(g_DirectInputDevice2A,
                                                             &g_diDataFormat) < 0) {
                OutputDebugStringA(aErrorFailedToS_0);
                goto LABEL_8;
            }
        }
        return 0;
    }

    //----- (100791D0) --------------------------------------------------------
    int sub_100791D0() {
        int result;                               // eax
        IDirectInputDevice2AVtbl *diDevice2AVtbl; // edx
        int v2[5];                                // [esp+14h] [ebp-14h] BYREF

        result = g_ConfigJoystickIndex;
        if (g_ConfigJoystickIndex) {
            if (++dword_118ABE00 == 1) {
                if (dword_10B4E1E0 &&
                    !g_DirectInputA->lpVtbl->EnumDevices(
                        g_DirectInputA,
                        4,
                        (LPDIENUMDEVICESCALLBACKA)diEnumDevicesCallback,
                        (LPVOID)5,
                        257) &&
                    g_DirectInputDevice2A) {
                    diDevice2AVtbl = g_DirectInputDevice2A->lpVtbl;
                    diEffect.dwStartDelay = 1;
                    v2[0] = 20;
                    v2[1] = 16;
                    v2[2] = 0;
                    v2[3] = 0;
                    v2[4] = 0;
                    if (diDevice2AVtbl->SetProperty(
                            g_DirectInputDevice2A, (const GUID *const)9, (LPCDIPROPHEADER)v2) < 0)
                        OutputDebugStringA(aErrorFailedToC);
                    sub_100773D0();
                    sub_10079390(1000, 8000);
                } else {
                    g_DirectInputA->lpVtbl->EnumDevices(
                        g_DirectInputA,
                        4,
                        (LPDIENUMDEVICESCALLBACKA)diEnumDevicesCallback,
                        (LPVOID)6,
                        1);
                    sub_100773D0();
                    diEffect.dwStartDelay = 0;
                }
                if (!g_DirectInputDevice2A)
                    return 0;
                if (sub_10078C30(g_DirectInputDevice2A, (GUID *)4, 0, 1, -128, 128) < 0)
                    goto LABEL_15;
                if (sub_10078C80((int *)g_DirectInputDevice2A, 5, 0, 1, 0) < 0)
                    goto LABEL_17;
                if (sub_10078C30(g_DirectInputDevice2A, (GUID *)4, 4, 1, -128, 128) < 0) {
                LABEL_15:
                    OutputDebugStringA(aErrorIdirectin);
                    g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
                    g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
                    g_DirectInputDevice2A = 0;
                    return 0;
                }
                if (sub_10078C80((int *)g_DirectInputDevice2A, 5, 4, 1, 0) >= 0) {
                    result = g_ConfigJoystickIndex;
                } else {
                LABEL_17:
                    OutputDebugStringA(aErrorIdirectin_0);
                    g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
                    g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
                    g_DirectInputDevice2A = 0;
                    result = 0;
                }
            }
        }
        return result;
    }
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;
    // 118ABE00: using guessed type int dword_118ABE00;

    //----- (10079390) --------------------------------------------------------
    HRESULT __cdecl sub_10079390(int a1, int a2) {
        IDirectInputDevice2AVtbl *diDevice2AVtbl_1; // ecx
        IDirectInputDevice2AVtbl *diDevice2AVtbl;   // ecx
        DWORD rgdwAxes[2];                          // [esp+14h] [ebp-8h] BYREF

        dword_118ABD24 = a2;
        dword_118ABD28 = a2;
        diEffect_0.rgdwAxes = rgdwAxes;
        diDevice2AVtbl_1 = g_DirectInputDevice2A->lpVtbl;
        rgdwAxes[0] = 0;
        rgdwAxes[1] = 4;
        diEffectTypeSpecificParams = 0;
        dword_118ABD0C = a1;
        dword_118ABD10 = a1;
        dword_118ABD14 = 10000;
        dword_118ABD18 = 10000;
        dword_118ABD1C = 0;
        dword_118ABD20 = 0;
        dword_118ABD2C = 10000;
        dword_118ABD30 = 10000;
        dword_118ABD34 = 0;
        diEffect_0.dwSize = 52;
        diEffect_0.dwFlags = 18;
        diEffect_0.dwDuration = -1;
        diEffect_0.dwSamplePeriod = 0;
        diEffect_0.dwGain = 10000;
        diEffect_0.dwTriggerButton = -1;
        diEffect_0.dwTriggerRepeatInterval = 0;
        diEffect_0.cAxes = 2;
        diEffect_0.rglDirection = &diEffectRglDirection;
        diEffect_0.lpEnvelope = 0;
        diEffect_0.cbTypeSpecificParams = 48;
        diEffect_0.lpvTypeSpecificParams = &diEffectTypeSpecificParams;
        if (!diDevice2AVtbl_1->CreateEffect(g_DirectInputDevice2A,
                                            &CLSID_GUID_Spring,
                                            &diEffect_0,
                                            &g_DirectInputEffect_0,
                                            0)) {
            dword_118ABD78 = a1;
            dword_118ABDF8 = 1;
        }
        diEffect.rgdwAxes = rgdwAxes;
        diDevice2AVtbl = g_DirectInputDevice2A->lpVtbl;
        diEffectTypeSpecificParams_0 = 10000;
        dword_118ABAC4 = 0;
        dword_118ABAC8 = 0;
        dword_118ABACC = 250000;
        diEffect.dwSize = 52;
        diEffect.dwFlags = 18;
        diEffect.dwDuration = dword_100BD438;
        diEffect.dwSamplePeriod = 0;
        diEffect.dwGain = 10000;
        diEffect.dwTriggerButton = -1;
        diEffect.dwTriggerRepeatInterval = 0;
        diEffect.cAxes = 2;
        diEffect.rglDirection = &diEffectRglDirection_0;
        diEffect.lpEnvelope = 0;
        diEffect.cbTypeSpecificParams = 16;
        diEffect.lpvTypeSpecificParams = &diEffectTypeSpecificParams_0;
        return diDevice2AVtbl->CreateEffect(
            g_DirectInputDevice2A, &CLSID_GUID_Square, &diEffect, &g_DirectInputEffect, 0);
    }
    // 100BD438: using guessed type int dword_100BD438;
    // 118ABAC0: using guessed type int diEffectTypeSpecificParams_0;
    // 118ABAC4: using guessed type int dword_118ABAC4;
    // 118ABAC8: using guessed type int dword_118ABAC8;
    // 118ABACC: using guessed type int dword_118ABACC;
    // 118ABD08: using guessed type int diEffectTypeSpecificParams;
    // 118ABD0C: using guessed type int dword_118ABD0C;
    // 118ABD10: using guessed type int dword_118ABD10;
    // 118ABD14: using guessed type int dword_118ABD14;
    // 118ABD18: using guessed type int dword_118ABD18;
    // 118ABD1C: using guessed type int dword_118ABD1C;
    // 118ABD20: using guessed type int dword_118ABD20;
    // 118ABD24: using guessed type int dword_118ABD24;
    // 118ABD28: using guessed type int dword_118ABD28;
    // 118ABD2C: using guessed type int dword_118ABD2C;
    // 118ABD30: using guessed type int dword_118ABD30;
    // 118ABD34: using guessed type int dword_118ABD34;
    // 118ABD78: using guessed type int dword_118ABD78;
    // 118ABDF8: using guessed type int dword_118ABDF8;

    //----- (10079550) --------------------------------------------------------
    int sub_10079550() {
        int result; // eax

        result = --dword_118ABE00;
        if (dword_118ABE00 >= 0) {
            result = dword_118ABE00;
            if (!dword_118ABE00) {
                if (g_DirectInputEffect) {
                    g_DirectInputEffect->lpVtbl->Release(g_DirectInputEffect);
                    g_DirectInputEffect = 0;
                }
                if (g_DirectInputEffect_0) {
                    g_DirectInputEffect_0->lpVtbl->Release(g_DirectInputEffect_0);
                    g_DirectInputEffect_0 = 0;
                }
                result = (int)g_DirectInputDevice2A;
                if (g_DirectInputDevice2A) {
                    g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
                    result = g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
                    g_DirectInputDevice2A = 0;
                }
            }
        } else {
            dword_118ABE00 = 0;
        }
        return result;
    }
    // 118ABE00: using guessed type int dword_118ABE00;

    //----- (100795D0) --------------------------------------------------------
    int sub_100795D0() {
        int v0;     // esi
        int v1;     // edi
        int result; // eax
        int v3;     // esi
        int v4;     // esi

        v0 = g_ConfigJoystickIndex;
        v1 = dword_10B4E1E0;
        g_ConfigJoystickIndex = 2;
        g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E080];
        dword_10B4E1E0 = 1;
        sub_100791D0();
        result = sub_10079550();
        g_ConfigJoystickIndex = v0;
        v3 = v0 - 1;
        if (v3) {
            v4 = v3 - 1;
            if (v4) {
                if (v4 == 1)
                    g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E128];
                else
                    g_ConfigJoystickPtr = g_Config;
                dword_10B4E1E0 = v1;
            } else {
                g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E080];
                dword_10B4E1E0 = v1;
            }
        } else {
            dword_10B4E1E0 = v1;
            g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4DFD8];
        }
        return result;
    }
    // 10B4E1D0: using guessed type int g_ReadJoystick;
    // 10B4E1E0: using guessed type int dword_10B4E1E0;

    //----- (10079670) --------------------------------------------------------
    int sub_10079670() {
        unknown_libname_11();
        return atexit(unknown_libname_12);
    }

    //----- (100796B0) --------------------------------------------------------
    HINSTANCE sub_100796B0() {
        HINSTANCE result;       // eax
        unsigned int dxVersion; // [esp+0h] [ebp-8h] BYREF
        char unk[4];            // [esp+4h] [ebp-4h] BYREF

        result = GetModuleHandleA(0);
        hInst = result;
        if (result) {
            GetDirectXVersion(&dxVersion, unk);
            if (dxVersion >= 0x600) {
                result = (HINSTANCE)BringWindowToFront();
                if (result)
                    result = (HINSTANCE)(sub_100798F0() != 0);
            } else {
                MessageBoxA(0, Text, Caption, MB_ICONHAND);
                result = 0;
            }
        }
        return result;
    }

    //----- (10079720) --------------------------------------------------------
    BOOL sub_10079720() {
        sub_10079C40();
        return UnregisterClassA(lpClassName, hInst);
    }

    //----- (10079740) --------------------------------------------------------
    HINSTANCE sub_10079740() {
        HINSTANCE result;  // eax
        void *v1;          // ecx
        struct tagMSG Msg; // [esp+0h] [ebp-1Ch] BYREF

        result = hInst;
        if (hInst && g_HWND) {
            hAccTable = LoadAcceleratorsA(hInst, (LPCSTR)0x71);
            while (1) {
                while (1) {
                    result = (HINSTANCE)PeekMessageA(&Msg, 0, 0, 0, 1u);
                    if (result)
                        break;
                    if (dword_10680598 && dword_1068059C && !dword_106805A0) {
                        sub_1002F8F0();
                        debugPrint(v1);
                    }
                }
                if (Msg.message == 18)
                    break;
                if (!hAccTable || !TranslateAcceleratorA(g_HWND, hAccTable, &Msg)) {
                    TranslateMessage(&Msg);
                    DispatchMessageA(&Msg);
                }
            }
            dword_118ABE2C = Msg.wParam;
        }
        return result;
    }
    // 100797FE: variable 'v1' is possibly undefined
    // 10680598: using guessed type int dword_10680598;
    // 1068059C: using guessed type int dword_1068059C;
    // 106805A0: using guessed type int dword_106805A0;
    // 118ABE2C: using guessed type int dword_118ABE2C;

    //----- (10079820) --------------------------------------------------------
    int __cdecl RallyMain(int a1, int a2, char *Str) {
        dword_118ABE2C = 0;
        if (CoInitialize(0) >= 0) {
            setupMemoryStatus();
            ReadInstallDirectory();
            LoadBrstringDll();
            ReadSettings(Str);
            strcpy(g_bossRallyCfgPath, g_InstallPath);
            strcat(g_bossRallyCfgPath, aBossrallyCfg);
            ReadBossRallyCfg(&g_Config, g_bossRallyCfgPath);
            if (sub_100796B0()) {
                sub_1000C6D0();
                if (sub_1005D440()) {
                    sub_1003E220();
                    sub_10079740();
                    sub_10079720();
                }
            }
        }
        CoUninitialize();
        return dword_118ABE2C;
    }
    // 118ABE2C: using guessed type int dword_118ABE2C;

    //----- (100798F0) --------------------------------------------------------
    int sub_100798F0() {
        int result;         // eax
        int v1;             // eax
        HWND wnd;           // [esp+0h] [ebp-3Ch] BYREF
        int v3;             // [esp+4h] [ebp-38h]
        WNDCLASSA WndClass; // [esp+8h] [ebp-34h] BYREF
        int v5;             // [esp+38h] [ebp-4h]

        hCursor = LoadCursorA(0, (LPCSTR)0x7F00); // MAKEINTRESOURCE(...)
        WndClass.style = CS_DBLCLKS;
        WndClass.lpfnWndProc = windowProc;
        WndClass.cbClsExtra = 0;
        WndClass.cbWndExtra = 4; // for storing a pointer after this
        WndClass.hInstance = hInst;
        WndClass.hIcon = LoadIconA(hInst, (LPCSTR)0x65); // MAKEINTRESOURCE(...)
        WndClass.hCursor = hCursor;
        WndClass.hbrBackground = (HBRUSH)GetStockObject(0);
        WndClass.lpszMenuName = (LPCSTR)102; // MAKEINTRESOURCE(...)
        WndClass.lpszClassName = lpClassName;
        if (!RegisterClassA(&WndClass))
            return 0;
        if (RallyCreateWindow(
                WS_EX_APPWINDOW,
                lpClassName,
                lpWindowName,
                0x80C20000, // dwStyle, WS_EX_STATICEDGE | WS_EX_NOACTIVATE | WS_CAPTION
                0,
                0,
                640,
                480,
                0,
                0,
                hInst,
                0,
                (int)&dword_10B4E6F8,
                1,
                &wnd,
                (unk334 *)&g_gsu0) < 0)
            return 0;
        g_HWND = wnd;
        v1 = malloc(4u);
        v3 = v1;
        v5 = 0;
        if (v1)
            result = unknown_libname_1(v1);
        else
            result = 0;
        v5 = -1;
        dword_118ABE08 = result;
        if (result) {
            ShowStaticImage(g_gsu0, aSplashImg, 0x2AC7E58B);
            result = meth_1000B280((int)g_gsu0, (_DWORD *)dword_118ABE08) >= 0;
        }
        return result;
    }
    // 10001130: using guessed type int __thiscall unknown_libname_1(_DWORD);
    // 10B4E6F8: using guessed type int dword_10B4E6F8;
    // 118ABE08: using guessed type int dword_118ABE08;

    //----- (10079A90) --------------------------------------------------------
    int __cdecl RallyCreateWindow(DWORD dwExStyle,
                                  LPCSTR lpClassName,
                                  LPCSTR lpWindowName,
                                  DWORD dwStyle,
                                  int X,
                                  int Y,
                                  int nWidth,
                                  int nHeight,
                                  HWND hWndParent,
                                  HMENU hMenu,
                                  HINSTANCE hInstance,
                                  LPVOID lpParam,
                                  int a3,
                                  int a14,
                                  HWND *a15,
                                  unk334 *a16) {
        unk8C *gsu0_1;   // edi
        int result;      // eax
        HINSTANCE hInst; // ebx
        HWND wnd1;       // esi
        unk8C *gsu0;     // eax
        HWND wnd;        // eax
        HWND wnd0;       // esi
        int v23;         // ebx

        gsu0_1 = 0;
        if (!lpClassName)
            return -2147024809;
        hInst = hInstance;
        if (!hInstance)
            hInst = GetModuleHandleA(0);
        wnd1 = hWndParent;
        if (!hWndParent)
            wnd1 = GetDesktopWindow();
        gsu0 = (unk8C *)malloc(0x8Cu);
        if (gsu0)
            gsu0_1 = initUnk(gsu0);
        if (!gsu0_1)
            return -2147024882;
        wnd = CreateWindowExA(dwExStyle,
                              lpClassName,
                              lpWindowName,
                              dwStyle,
                              X,
                              Y,
                              nWidth,
                              nHeight,
                              wnd1,
                              hMenu,
                              hInst,
                              lpParam);
        wnd0 = wnd;
        if (wnd) {
            ShowWindow(wnd, 10);
            UpdateWindow(wnd0);
            if (g_Playmusic == PLAYMUSIC_EAR)
                setupEAR(wnd0);
            v23 = meth_1000A1E0(gsu0_1, wnd0, a3, 0, 0, 0, 0, 0, 1);
            if (v23 >= 0) {
                if (a15)
                    *a15 = wnd0;
                if (a16)
                    a16->field_27 = gsu0_1;
                result = 0;
            } else {
                meth_1000A1C0((unk334 *)gsu0_1);
                free(gsu0_1);
                MessageBoxA(wnd0, aUnableToInitia, Caption, MB_ICONSTOP);
                DestroyWindow(wnd0);
                result = v23;
            }
        } else {
            meth_1000A1C0((unk334 *)gsu0_1);
            free(gsu0_1);
            result = -2147467259;
        }
        return result;
    }
    // 100940A4: using guessed type int g_Playmusic;

    //----- (10079C40) --------------------------------------------------------
    int sub_10079C40() {
        unk334 *v0; // esi

        if (g_HWND && IsWindow(g_HWND)) {
            DestroyWindow(g_HWND);
            g_HWND = 0;
        }
        v0 = g_gsu0;
        if (g_gsu0) {
            meth_1000A1C0(g_gsu0);
            free(v0);
            g_gsu0 = 0;
        }
        return 0;
    }

    //----- (10079CA0) --------------------------------------------------------
    LONG __stdcall windowProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
        LONG result; // eax
        LONG v5;     // eax

        if (g_unkC8Ptr1) {
            if (*((_DWORD *)g_unkC8Ptr1 + 26)) {
                sub_10060060((int)dword_10AA2900, hWnd, Msg, wParam, lParam);
                if (dword_10A9CFFC)
                    sub_1003C3A0((int)hWnd, Msg, wParam, (LPCVOID)lParam);
            }
        }
        if (g_Playmusic == 2) {
            if (Msg == aEarInteractiveMessageID) {
                if (lParam == g_Playmusic && wParam == getWPARAM()) {
                    pm_sub_100029B0();
                    return 0;
                }
                return 0;
            }
            if (Msg == WM_DEVICECHANGE) {
                if (wParam == DBT_DEVICEARRIVAL) {
                    pm_sub_10002260();
                    pm_sub_100027C0(1);
                }
                if (wParam == DBT_DEVICEQUERYREMOVE || wParam == DBT_DEVICEREMOVEPENDING ||
                    wParam == DBT_DEVICEREMOVECOMPLETE) {
                    pm_sub_10002C30();
                    pm_sub_10002440();
                }
                return 1;
            }
        }
        if (Msg <= WM_CLOSE) {
            if (Msg != WM_CLOSE) // != WM_CLOSE
            {
                switch (Msg) {
                case 1u: // WM_CREATE
                    goto exit0;
                case 2u:
                    sub_1007A1D0(); // WM_DESTROY
                case 3u:            // WM_MOVE
                    return handle_WM_MOVE(hWnd, wParam, lParam);
                case 5u: // WM_SIZE
                    return handle_WM_SIZE(hWnd, wParam, lParam);
                case 6u: // WM_ACTIVATE
                    sub_10077090(wParam);
                    return handle_WM_ACTIVATE_justReturn(hWnd, wParam, lParam);
                default:
                    return DefWindowProcA(hWnd, Msg, wParam, lParam);
                }
            }
            return DestroyWindowWrapper(hWnd);
        }
        if (Msg <= WM_ACTIVATEAPP) // <= WM_ACTIVATEAPP
        {
            if (Msg == WM_ACTIVATEAPP) // // WM_ACTIVATEAPP
                return handle_WM_ACTIVATEAPP(hWnd, wParam, lParam);
            if (Msg == WM_ERASEBKGND) // WM_ERASEBKGND
                return handle_WM_ERASEBKGND(hWnd, wParam, lParam);
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        if (Msg <= WM_GETMINMAXINFO) // <= WM_GETMINMAXINFO
        {
            if (Msg == WM_GETMINMAXINFO) // WM_GETMINMAXINFO
                return handle_WM_GETMINMAXINFO(hWnd, wParam, lParam);
            if (Msg == WM_SETCURSOR) // WM_SETCURSOR
                return handle_WM_SETCURSOR(hWnd, wParam, lParam);
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        if (Msg <= WM_DISPLAYCHANGE) // <= WM_DISPLAYCHANGE
        {
            if (Msg == WM_DISPLAYCHANGE) // WM_DISPLAYCHANGE
                return handle_WM_DISPLAYCHANGE_returnZero(hWnd);
            if (Msg == WM_WINDOWPOSCHANGING) // WM_WINDOWPOSCHANGING
                return handle_WM_WINDOWPOSCHANGING(hWnd, wParam, lParam);
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        if (Msg <= WM_COMMAND) // <= WM_COMMAND
        {
            if (Msg == WM_COMMAND) // WM_COMMAND
                return handle_WM_COMMAND_justReturn(hWnd, wParam, lParam);
            if (Msg == WM_NCPAINT) // WM_NCPAINT
                return handle_WM_NCPAINT(hWnd, wParam, lParam);
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        if (Msg <= WM_ENTERMENULOOP) // <= WM_ENTERMENULOOP
        {
            if (Msg == WM_ENTERMENULOOP) // WM_ENTERMENULOOP
                return handle_WM_ENTERMENULOOP(hWnd, wParam, lParam);
            if (Msg == WM_SYSCOMMAND) // WM_SYSCOMMAND
                return handle_WM_SYSCOMMAND(hWnd, wParam, lParam);
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        if (Msg <= 0x3B9) {
            if (Msg == 0x3B9) {
                if (g_Playmusic == 1) {
                    if (lParam == mciId && wParam == 1 && !dword_106909B4) {
                        pm_sub_10002510();
                        return 0;
                    }
                    return 0;
                }
            } else if (Msg == WM_EXITMENULOOP) // WM_EXITMENULOOP
            {
                return handle_WM_EXITMENULOOP(hWnd, wParam, lParam);
            }
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        if (Msg > 0xBD0) {
            switch (Msg) {
            case 0xBD1u:
                result = resetWindowLong_USERDATA(hWnd);
                break;
            case 0xBD2u:
            case 0xBD3u:
            case 0xBD4u:
            exit0:
                result = returnZero();
                break;
            default:
                return DefWindowProcA(hWnd, Msg, wParam, lParam);
            }
        } else {
            switch (Msg) {
            case 0xBD0u:
                return sub_1007A6A0(hWnd, lParam);
            case 0x7E8u: // UM_GETUSERSELA
                v5 = GetWindowLongA(hWnd, GWL_USERDATA);
                if (!v5)
                    return 0;
                result = (*(_BYTE *)(v5 + 28) & 0x1F) == 31;
                break;
            case 0x7E9u: // UM_GETUSERSELA
                return GetWindowLongA(hWnd, GWL_USERDATA);
            case 0x7EAu: // UM_GETUSERSELW
                result = GetWindowLongA(hWnd, GWL_USERDATA);
                if (result)
                    result = *(_DWORD *)(result + 88);
                break;
            default:
                return DefWindowProcA(hWnd, Msg, wParam, lParam);
            }
        }
        return result;
    }
    // 100940A4: using guessed type int g_Playmusic;
    // 10575478: using guessed type int aEarInteractiveMessageID;
    // 106909B4: using guessed type int dword_106909B4;
    // 10A9CFFC: using guessed type int dword_10A9CFFC;

    //----- (1007A070) --------------------------------------------------------
    LRESULT __cdecl handle_WM_ACTIVATE_justReturn(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        return DefWindowProcA(hWnd, 6u, wParam, lParam);
    }

    //----- (1007A090) --------------------------------------------------------
    LRESULT __cdecl handle_WM_ACTIVATEAPP(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        void *v3;   // ecx
        void *v4;   // ecx
        unk334 *v5; // esi
        int v6;     // eax
        int v7;     // eax

        dword_10680598 = wParam;
        if (!wParam) {
            if (!dword_106909B4 && !dword_106909E0) {
                sub_10067980();
                pm_sub_10002B70();
                sub_10072E00();
                dword_10680734 = 0;
                if (g_NetworkPlay && g_usingGameMode4 && !dword_106909E0 &&
                    (v3 = (void *)dword_100BD3E0, dword_10ACEE50 < dword_100BD3E0)) {
                    atomic_sub_10004BE0();
                    np_sub_10004FC0();
                } else {
                    dword_106909B4 = 1;
                }
            }
            debugPrint(v3);
        }
        if (sub_1006A980() == 1) {
            v5 = (unk334 *)GetWindowLongA(hWnd, -21);
            if (dword_10680598) {
                if (v5) {
                    v6 = v5->unkMeth1;
                    LOBYTE(v6) = v6 | 8;
                    v5->unkMeth1 = v6;
                    meth_1000B2C0(v5);
                    meth_1000B150(v5);
                }
            } else if (v5) {
                v7 = v5->unkMeth1;
                LOBYTE(v7) = v7 & 0xF7;
                v5->unkMeth1 = v7;
                InvalidateRect(hWnd, 0, 0);
            }
        }
        if (dword_10680598) {
            debugPrint(v4);
            sub_1002C4D0();
        }
        return DefWindowProcA(hWnd, 0x1Cu, wParam, lParam);
    }
    // 1007A108: variable 'v3' is possibly undefined
    // 1007A16B: variable 'v4' is possibly undefined
    // 1022AF14: using guessed type int g_usingGameMode4;
    // 1022AF18: using guessed type int g_NetworkPlay;
    // 10680598: using guessed type int dword_10680598;
    // 10680734: using guessed type int dword_10680734;
    // 106909B4: using guessed type int dword_106909B4;
    // 106909E0: using guessed type int dword_106909E0;
    // 10ACEE50: using guessed type int dword_10ACEE50;

    //----- (1007A190) --------------------------------------------------------
    int __cdecl DestroyWindowWrapper(HWND hWnd) {
        DestroyWindow(hWnd);
        return 0;
    }

    //----- (1007A1A0) --------------------------------------------------------
    LRESULT __cdecl handle_WM_COMMAND_justReturn(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        return DefWindowProcA(hWnd, 0x111u, wParam, lParam);
    }

    //----- (1007A1C0) --------------------------------------------------------
    int returnZero() {
        return 0;
    }

    //----- (1007A1D0) --------------------------------------------------------
    void __noreturn sub_1007A1D0() {
        cleanUpAndExitWithCode(0);
    }

    //----- (1007A1F0) --------------------------------------------------------
    int __cdecl handle_WM_DISPLAYCHANGE_returnZero(HWND hWnd) {
        if (GetWindowLongA(hWnd, GWL_USERDATA))
            returnZero();
        return 0;
    }

    //----- (1007A210) --------------------------------------------------------
    LRESULT __cdecl handle_WM_ERASEBKGND(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        LONG v3;        // eax
        LRESULT result; // eax

        v3 = GetWindowLongA(hWnd, -21);
        if (v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31 && (*(_BYTE *)(v3 + 20) & 8) != 0 &&
            !*(_DWORD *)(v3 + 36))
            result = 1;
        else
            result = DefWindowProcA(hWnd, 0x14u, wParam, lParam);
        return result;
    }

    //----- (1007A260) --------------------------------------------------------
    LRESULT __cdecl handle_WM_ENTERMENULOOP(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        LONG v3; // eax

        v3 = GetWindowLongA(hWnd, -21);
        if (v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31) {
            meth_1000B220((unk334 *)v3, 1);
            SetCursor(hCursor);
        }
        return DefWindowProcA(hWnd, 0x211u, wParam, lParam);
    }

    //----- (1007A2B0) --------------------------------------------------------
    LRESULT __cdecl handle_WM_EXITMENULOOP(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        LONG v3;    // eax
        unk334 *v4; // esi

        v3 = GetWindowLongA(hWnd, -21);
        v4 = (unk334 *)v3;
        if (v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31) {
            SetCursor(0);
            meth_1000B220(v4, 0);
        }
        return DefWindowProcA(hWnd, 0x212u, wParam, lParam);
    }

    //----- (1007A300) --------------------------------------------------------
    LRESULT __cdecl handle_WM_GETMINMAXINFO(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        LONG v3;         // eax
        unsigned int v4; // ecx
        unsigned int v5; // eax
        int v7[4];       // [esp+4h] [ebp-10h] BYREF

        v3 = GetWindowLongA(hWnd, -21);
        if (!v3 || (*(_BYTE *)(v3 + 28) & 2) == 0 || dword_118AC230)
            return DefWindowProcA(hWnd, 0x24u, wParam, lParam);
        meth_1000B350((unk334 *)v3, v7);
        v4 = abs32(v7[2] - v7[0]);
        v5 = abs32(v7[3] - v7[1]);
        *(_DWORD *)(lParam + 36) = v5;
        *(_DWORD *)(lParam + 28) = v5;
        *(_DWORD *)(lParam + 32) = v4;
        *(_DWORD *)(lParam + 24) = v4;
        return 0;
    }
    // 118AC230: using guessed type int dword_118AC230;

    //----- (1007A380) --------------------------------------------------------
    LRESULT __cdecl handle_WM_MOVE(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        return DefWindowProcA(hWnd, 3u, wParam, lParam);
    }

    //----- (1007A3A0) --------------------------------------------------------
    LRESULT __cdecl handle_WM_NCPAINT(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        LONG v3;        // eax
        LRESULT result; // eax

        v3 = GetWindowLongA(hWnd, -21);
        if (v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31 && (*(_BYTE *)(v3 + 20) & 8) != 0 &&
            !*(_DWORD *)(v3 + 36) && !dword_118AC230) {
            result = 0;
        } else {
            result = DefWindowProcA(hWnd, 0x85u, wParam, lParam);
        }
        return result;
    }
    // 118AC230: using guessed type int dword_118AC230;

    //----- (1007A3F0) --------------------------------------------------------
    LRESULT __cdecl handle_WM_SETCURSOR(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        LONG v3;        // eax
        LRESULT result; // eax

        v3 = GetWindowLongA(hWnd, -21);
        if (!v3 || (*(_BYTE *)(v3 + 28) & 2) == 0)
            return DefWindowProcA(hWnd, 0x20u, wParam, lParam);
        if (*(_DWORD *)(v3 + 36) || (*(_BYTE *)(v3 + 20) & 8) == 0) {
            SetCursor(hCursor);
            result = 1;
        } else {
            SetCursor(0);
            result = 1;
        }
        return result;
    }

    //----- (1007A450) --------------------------------------------------------
    int __cdecl handle_WM_SIZE(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        unk334 *v3; // eax
        int result; // eax

        v3 = (unk334 *)GetWindowLongA(hWnd, -21);
        if (wParam) {
            if (wParam == 1) {
                dword_118AC230 = 1;
                dword_118AC234 = 0;
            } else if (wParam == 2) {
                dword_118AC234 = 1;
                dword_118AC230 = 0;
                return DefWindowProcA(hWnd, 5u, 2u, lParam);
            }
            result = DefWindowProcA(hWnd, 5u, wParam, lParam);
        } else {
            if (dword_118AC230) {
                if (v3)
                    meth_1000B2C0(v3);
                dword_118AC234 = 0;
                dword_118AC230 = 0;
            }
            result = 0;
        }
        return result;
    }
    // 118AC230: using guessed type int dword_118AC230;
    // 118AC234: using guessed type int dword_118AC234;

    //----- (1007A4E0) --------------------------------------------------------
    LRESULT __cdecl handle_WM_SYSCOMMAND(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        unk334 *v3; // eax

        v3 = (unk334 *)GetWindowLongA(hWnd, -21);
        if (wParam <= 0xF010) {
            if (wParam != 61456) {
                if (wParam == 61440)
                    return 0;
                return DefWindowProcA(hWnd, 0x112u, wParam, lParam);
            }
            return 0;
        }
        switch (wParam) {
        case 0xF020u:
            dword_118AC230 = 1;
        LABEL_15:
            dword_118AC234 = 0;
            return DefWindowProcA(hWnd, 0x112u, wParam, lParam);
        case 0xF030u:
            dword_118AC234 = 1;
            dword_118AC230 = 0;
            return 0;
        case 0xF120u:
            if (dword_118AC230) {
                if (v3)
                    meth_1000B2C0(v3);
            }
            dword_118AC230 = 0;
            goto LABEL_15;
        }
        return DefWindowProcA(hWnd, 0x112u, wParam, lParam);
    }
    // 118AC230: using guessed type int dword_118AC230;
    // 118AC234: using guessed type int dword_118AC234;

    //----- (1007A590) --------------------------------------------------------
    LRESULT __cdecl handle_WM_WINDOWPOSCHANGING(HWND hWnd, WPARAM wParam, LPARAM lParam) {
        HWND v3;             // esi
        LONG v4;             // eax
        unk334 *v5;          // ebp
        unsigned int v6;     // esi
        unsigned int v7;     // edi
        int v8;              // ebp
        unsigned int v9;     // ecx
        unsigned int v10;    // eax
        int v11;             // eax
        int v12;             // edx
        int v14;             // [esp+10h] [ebp-20h] BYREF
        int v15;             // [esp+14h] [ebp-1Ch]
        int v16;             // [esp+18h] [ebp-18h]
        int v17;             // [esp+1Ch] [ebp-14h]
        struct tagRECT Rect; // [esp+20h] [ebp-10h] BYREF

        v3 = hWnd;
        v4 = GetWindowLongA(hWnd, GWL_USERDATA);
        v5 = (unk334 *)v4;
        if (v4 && (*(_BYTE *)(v4 + 28) & 2) != 0 && !dword_118AC230 && lParam) {
            if (IsIconic(hWnd)) {
                dword_118AC230 = 1;
            } else {
                GetWindowRect(hWnd, &Rect);
                v6 = abs32(Rect.right - Rect.left);
                v7 = abs32(Rect.bottom - Rect.top);
                meth_1000B350(v5, &v14);
                v8 = v14;
                v9 = abs32(v16 - v14);
                v10 = abs32(v17 - v15);
                if (v9 < 0x140)
                    v9 = 320;
                if (v10 < 0xC8)
                    v10 = 200;
                if (v9 == v6 && v10 == v7) {
                    v11 = *(_DWORD *)(lParam + 24);
                    LOBYTE(v11) = v11 | 3;
                } else {
                    v12 = v15;
                    *(_DWORD *)(lParam + 20) = v10;
                    v11 = *(_DWORD *)(lParam + 24);
                    *(_DWORD *)(lParam + 8) = v8;
                    *(_DWORD *)(lParam + 12) = v12;
                    *(_DWORD *)(lParam + 16) = v9;
                    LOBYTE(v11) = v11 & 0xFC;
                }
                v3 = hWnd;
                *(_DWORD *)(lParam + 24) = v11;
            }
        }
        return DefWindowProcA(v3, 0x46u, wParam, lParam);
    }
    // 118AC230: using guessed type int dword_118AC230;

    //----- (1007A6A0) --------------------------------------------------------
    int __cdecl sub_1007A6A0(HWND hWnd, intptr_t dwNewLong) {
        bool isActiveWindow; // zf
        LONG v3;             // eax

        if (dwNewLong && (*(_BYTE *)(dwNewLong + 28) & 0x1F) == 31) {
            SetWindowLongA(hWnd, -21, dwNewLong); // GWL_USERDATA
            isActiveWindow = GetActiveWindow() == hWnd;
            v3 = *(_DWORD *)(dwNewLong + 20);
            if (isActiveWindow) {
                LOBYTE(v3) = v3 | 8;
                *(_DWORD *)(dwNewLong + 20) = v3;
                return 0;
            }
            LOBYTE(v3) = v3 & 0xF7;
            *(_DWORD *)(dwNewLong + 20) = v3;
        }
        return 0;
    }

    //----- (1007A6F0) --------------------------------------------------------
    int __cdecl resetWindowLong_USERDATA(HWND hWnd) {
        SetWindowLongA(hWnd, -21, 0);
        return 0;
    }

    //----- (1007A710) --------------------------------------------------------
    int __cdecl sub_1007A710(const void *a1, const void *a2) {
        unk1 *v2;        // esi
        int v3;          // edi
        unsigned int v5; // [esp+8h] [ebp-18h] BYREF
        unsigned int v6; // [esp+Ch] [ebp-14h] BYREF
        unsigned int v7; // [esp+10h] [ebp-10h] BYREF
        unsigned int v8; // [esp+14h] [ebp-Ch] BYREF
        char v9[4];      // [esp+18h] [ebp-8h] BYREF
        char v10[4];     // [esp+1Ch] [ebp-4h] BYREF

        v2 = *(unk1 **)a2;
        v3 = 0;
        if (*(_DWORD *)a1) {
            if (!v2)
                return -1;
        } else if (!v2) {
            return 0;
        }
        meth_1001AC80(*(unk1 **)a1, &v5, &v7, &a1, v9);
        meth_1001AC80(v2, &v6, &v8, &a2, v10);
        if (a1 < a2)
            return -1;
        if (a1 > a2)
            return 1;
        if (v5 < v6)
            return -1;
        if (v5 > v6)
            return 1;
        if (v7 < v8)
            return -1;
        if (v7 > v8)
            return 1;
        return v3;
    }
    // 1007A735: conditional instruction was optimized away because of 'ecx.4==0'

    //----- (1007A7D0) --------------------------------------------------------
    gameSpecificUnk1 *__cdecl sub_1007A7D0(const void *a1) {
        gameSpecificUnk1 *v1; // ebx
        int v2;               // ebp
        int v3;               // edx

        v1 = gameSpecificUnk1_instance0;
        v2 = 0;
        if (!gameSpecificUnk1_instance0)
            return gameSpecificUnk1_instance0;
        while (1) {
            v3 = *(_DWORD *)&v1[816];
            if (!memcmp(a1, &v1[4], 0x10u))
                break;
            ++v2;
            v1 = *(gameSpecificUnk1 **)&v1[816];
            if (!v3)
                return gameSpecificUnk1_instance0;
        }
        dword_118AC238 = sub_1001A550((gameSpecificUnk1 *)a1);
        if (!dword_118AC238)
            return gameSpecificUnk1_instance0;
        dword_10AA2860 = v2;
        dword_10AA2A2C = v2;
        return v1;
    }
    // 10AA2860: using guessed type int dword_10AA2860;
    // 10AA2A2C: using guessed type int dword_10AA2A2C;

    //----- (1007A840) --------------------------------------------------------
    int sub_1007A840() {
        GUID *v0;             // eax
        int result;           // eax
        gameSpecificUnk1 *v2; // esi
        int v3;               // edi
        gameSpecificUnk1 *v4; // ebx
        CHAR v5[80];          // [esp+10h] [ebp-50h] BYREF

        if (dword_118AC238)
            v0 = getDirectDrawLPGUID((gameSpecificUnk1 *)dword_118AC238);
        else
            v0 = 0;
        result = (int)sub_1001A550((gameSpecificUnk1 *)v0);
        dword_118AC238 = (_BYTE *)result;
        if (result) {
            v2 = gameSpecificUnk1_instance0;
            v3 = 0;
            if (gameSpecificUnk1_instance0) {
                do {
                    v4 = *(gameSpecificUnk1 **)&v2[816];
                    if ((*(_BYTE *)v2 & 2) != 0) {
                        wsprintfA(v5, "%s (Primary)", *(const char **)&v2[20]);
                        dword_10AA2860 = v3;
                        dword_10AA2A2C = v3;
                    } else {
                        wsprintfA(v5, "%s", *(const char **)&v2[20]);
                    }
                    if (dword_10AA29F0) {
                        (*(void(__thiscall **)(int, CHAR *, _DWORD, int, void *, int))(
                            *(_DWORD *)(dword_10AA29F0 + 14392) + 16))(
                            dword_10AA29F0 + 14392, v5, 0, 1, &unk_100AB528, 1);
                        (*(void(__thiscall **)(int, gameSpecificUnk1 *, int, int))(
                            *(_DWORD *)(dword_10AA29F0 + 14392) + 40))(
                            dword_10AA29F0 + 14392, v2 + 4, 16, v3);
                    }
                    ++v3;
                    v2 = v4;
                } while (v4);
            }
            dword_118AC238 = sub_1007A7D0(&dword_10B4E6F8);
            result = 1;
        }
        return result;
    }
    // 10AA2860: using guessed type int dword_10AA2860;
    // 10AA29F0: using guessed type int dword_10AA29F0;
    // 10AA2A2C: using guessed type int dword_10AA2A2C;
    // 10B4E6F8: using guessed type int dword_10B4E6F8;

    //----- (1007A940) --------------------------------------------------------
    int sub_1007A940() {
        _DWORD *v0;                                   // ecx
        int v1;                                       // edi
        IID **__attribute__((__org_arrdim(0, 3))) v3; // eax
        int v4;                                       // esi
        size_t v5;                                    // ebp
        void *v6;                                     // eax
        int v7;                                       // ecx
        int v8;                                       // edx
        int v9;                                       // esi
        unsigned int v10;                             // eax
        unk1 *v11;                                    // ecx
        int v12;                                      // eax
        unsigned int i;                               // [esp+20h] [ebp-64h] BYREF
        int v14;                                      // [esp+24h] [ebp-60h] BYREF
        int v15;                                      // [esp+28h] [ebp-5Ch] BYREF
        int v16;                                      // [esp+2Ch] [ebp-58h] BYREF
        int v17;                                      // [esp+30h] [ebp-54h] BYREF
        CHAR v18[80];                                 // [esp+34h] [ebp-50h] BYREF

        v0 = dword_118AC238;
        v1 = 0;
        if (!dword_118AC238)
            return 0;
        v3 = (IID **)dword_118AC23C;
        if (!dword_118AC23C) {
            v3 = sub_1001A5D0(dword_118AC238, 0, 0);
            dword_118AC23C = (int)v3;
            if (!v3)
                return 0;
            v0 = dword_118AC238;
        }
        v4 = v0[198];
        if (!v4)
            return 0;
        v5 = v0[197];
        if (!v5)
            return 0;
        if (!dword_118AC240)
            dword_118AC240 = (int)meth_1001A570(v0, 640, 480, 16, 0, (IID *)v3);
        if (Base) {
            free(Base);
            Base = 0;
        }
        v6 = (void *)malloc(4 * v5);
        Base = v6;
        if (!v6)
            return 0;
        i = 0;
        v7 = v4;
        while (1) {
            v8 = *(_DWORD *)(v7 + 112);
            *((_DWORD *)v6 + i++) = v7;
            v7 = v8;
            if (!v8)
                break;
            v6 = Base;
        }
        qsort(Base, v5, 4u, sub_1007A710);
        v9 = 0;
        v10 = 0;
        for (i = 0; i < v5; ++i) {
            v11 = (unk1 *)*((_DWORD *)Base + v10);
            if (!v11 || !meth_1001ACF0(v11, (IID **)dword_118AC23C))
                goto LABEL_41;
            meth_1001AC80(*((unk1 **)Base + i), &v16, &v14, &v15, &v17);
            if (v17) {
                wsprintfA(v18, "%4d x %4d x %2d (%4d Hz)", v16, v14, v15, v17);
                v12 = v16;
                if (dword_10B4E6E8 != v16 || dword_10B4E6EC != v14 || dword_10B4E6F0 != v15 ||
                    dword_10B4E6F4 != v17)
                    goto LABEL_33;
            } else {
                wsprintfA(v18, "%4d x %4d x %2d", v16, v14, v15);
                v12 = v16;
                if (dword_10B4E6E8 != v16 || dword_10B4E6EC != v14 || dword_10B4E6F0 != v15)
                    goto LABEL_33;
            }
            dword_10AA2864 = v9;
            dword_10AA2A30 = v9;
            v1 = 1;
        LABEL_33:
            if (!v1 && v12 == 640 && v14 == 480 && v15 == 16) {
                dword_10AA2864 = v9;
                dword_10AA2A30 = v9;
            }
            if (dword_10AA29EC) {
                (*(void(__thiscall **)(int, CHAR *, _DWORD, int, void *, int))(
                    *(_DWORD *)(dword_10AA29EC + 14392) + 16))(
                    dword_10AA29EC + 14392, v18, 0, 1, &unk_100AB528, 1);
                (*(void(__thiscall **)(int, unsigned int *, int, int))(
                    *(_DWORD *)(dword_10AA29EC + 14392) + 40))(dword_10AA29EC + 14392, &i, 4, v9);
            }
            ++v9;
        LABEL_41:
            v10 = i + 1;
        }
        return 1;
    }
    // 1007AA5D: conditional instruction was optimized away because of 'ebp.4!=0'
    // 10AA2864: using guessed type int dword_10AA2864;
    // 10AA29EC: using guessed type int dword_10AA29EC;
    // 10AA2A30: using guessed type int dword_10AA2A30;
    // 10B4E6E8: using guessed type int dword_10B4E6E8;
    // 10B4E6EC: using guessed type int dword_10B4E6EC;
    // 10B4E6F0: using guessed type int dword_10B4E6F0;
    // 10B4E6F4: using guessed type int dword_10B4E6F4;
    // 118AC23C: using guessed type int dword_118AC23C;
    // 118AC240: using guessed type int dword_118AC240;

    //----- (1007AC00) --------------------------------------------------------
    int sub_1007AC00() {
        int result; // eax

        result = sub_1007A840();
        if (result)
            result = sub_1007A940() != 0;
        return result;
    }

    //----- (1007AC20) --------------------------------------------------------
    BOOL __cdecl sub_1007AC20(int a1, int a2, int a3, int a4) {
        LONG v4;     // eax
        LPARAM v5;   // edi
        _DWORD *v6;  // esi
        _DWORD *v7;  // eax
        int v8;      // esi
        unk1 *v9;    // eax
        BOOL result; // eax

        v4 = GetWindowLongA(g_HWND, -21);
        v5 = v4;
        result = 0;
        if (v4) {
            v6 = *(_DWORD **)(v4 + 44);
            v7 = (_DWORD *)sub_1007A7D0(&dword_10B4E6F8);
            if (v6 != v7) {
                if (v7) {
                    v8 = *(_DWORD *)(v5 + 52);
                    if (v8) {
                        v9 = meth_1001A570(v7, a1, a2, a3, (unk1 *)a4, *(IID **)(v5 + 52));
                        if (!meth_1000B390(v5, (int)&dword_10B4E6F8, v8, (int)v9))
                            result = 1;
                    }
                }
            }
        }
        return result;
    }
    // 10B4E6F8: using guessed type int dword_10B4E6F8;

    //----- (1007CF10) --------------------------------------------------------
    size_t __cdecl freadLock(void *buffer, size_t elementSize, size_t elementCount, FILE *fp) {
        size_t v4; // edi

        _lock_file(fp);
        v4 = fread(buffer, elementSize, elementCount, fp);
        _unlock_file(fp);
        return v4;
    }

    //----- (1007D150) --------------------------------------------------------
    size_t __cdecl fwriteLock(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream) {
        size_t v4; // edi

        _lock_file(Stream);
        v4 = fwrite(Buffer, ElementSize, ElementCount, Stream);
        _unlock_file(Stream);
        return v4;
    }
