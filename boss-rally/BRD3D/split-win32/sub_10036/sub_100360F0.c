#include "../types-win32.h"
//----- (100360F0) --------------------------------------------------------
void __cdecl sub_100360F0(int a1, int a2, int a3, void *a4) {
    void(__stdcall * v4)(HANDLE, DWORD); // edi
    void(__stdcall * v5)(HANDLE);        // ebx
    char v6;                             // al
    int v7;                              // ebx
    int v8;                              // esi
    int v9;                              // ebx
    int v10;                             // edi
    int v11;                             // edi
    int v12;                             // ebp
    int v13;                             // edx
    int v14;                             // ecx
    int v15;                             // esi
    int v16;                             // ecx
    unsigned int v17;                    // ebp
    int v18;                             // eax
    int *v19;                            // edi
    int v20;                             // eax
    unsigned int v21;                    // edi
    int *v22;                            // edx
    int v23;                             // ebp
    unsigned int v24;                    // edi
    int v25;                             // eax
    int *v26;                            // ecx
    int v27;                             // eax
    int v28;                             // ecx
    int *v29;                            // edx
    int v30;                             // edx
    int v31;                             // eax
    int v32;                             // eax
    int v33;                             // edi
    int v34;                             // ebp
    int i;                               // edi
    int v36;                             // eax
    int v37;                             // esi
    HANDLE *v38;                         // ebp
    char *v39;                           // ebx
    _DWORD *v40;                         // edx
    int v41;                             // ebx
    int *v42;                            // esi
    int *v43;                            // esi
    int v44;                             // eax
    int *v45;                            // esi
    int v46;                             // eax
    char v47;                            // [esp+11h] [ebp-79Bh]
    char v48;                            // [esp+11h] [ebp-79Bh]
    char v49;                            // [esp+12h] [ebp-79Ah]
    char v50;                            // [esp+12h] [ebp-79Ah]
    char v51;                            // [esp+13h] [ebp-799h]
    char v52;                            // [esp+13h] [ebp-799h]
    int v53;                             // [esp+14h] [ebp-798h]
    unsigned int v54;                    // [esp+14h] [ebp-798h]
    int v55;                             // [esp+14h] [ebp-798h]
    unsigned int v56;                    // [esp+18h] [ebp-794h]
    int v57;                             // [esp+1Ch] [ebp-790h]
    int v58;                             // [esp+1Ch] [ebp-790h]
    int v59;                             // [esp+1Ch] [ebp-790h]
    int v60;                             // [esp+20h] [ebp-78Ch]
    int v61;                             // [esp+20h] [ebp-78Ch]
    int v62;                             // [esp+24h] [ebp-788h]
    int v63;                             // [esp+28h] [ebp-784h]
    float v64;                           // [esp+2Ch] [ebp-780h]
    int v65;                             // [esp+30h] [ebp-77Ch]
    int v66;                             // [esp+34h] [ebp-778h]
    int v67[133];                        // [esp+4Ch] [ebp-760h] BYREF
    float v68[40];                       // [esp+260h] [ebp-54Ch] BYREF
    char v69[160];                       // [esp+300h] [ebp-4ACh] BYREF
    char v70[24];                        // [esp+3A0h] [ebp-40Ch] BYREF
    char v71;                            // [esp+3B8h] [ebp-3F4h]
    int v72;                             // [esp+7A8h] [ebp-4h]

    v63 = 0;
    v62 = 0;
    meth_10073B60(v67, a2, a3);
    v72 = 0;
    Concurrency::details::StructuredWorkStealingQueue<
        Concurrency::details::_UnrealizedChore,
        Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(v67);
    v56 = meth_10073C10(v67);
    v4 = (void(__stdcall *)(HANDLE, DWORD))WaitForSingleObject;
    v5 = (void(__stdcall *)(HANDLE))ReleaseMutex;
    if (meth_10073D40(v67))
        goto LABEL_88;
    while (2) {
        v6 = meth_10073BC0(v67);
        v7 = v6 & 0x10;
        v8 = v6 & 0xF;
        v65 = v7;
        switch (v6 & 0xE0) {
        case 0:
            v60 = (unsigned __int8)meth_10073BC0(v67);
            v9 = (unsigned __int8)meth_10073BC0(v67);
            v57 = (unsigned __int8)meth_10073BC0(v67);
            v51 = meth_10073BC0(v67);
            v47 = meth_10073BC0(v67);
            v49 = meth_10073BC0(v67);
            v10 = 0;
            v66 = meth_10073C40(v67);
            v53 = 0;
            if ((v9 & 0x3Fu) <= 2) {
                do
                    v70[v10++] = meth_10073BC0(v67);
                while (v10 < 24);
                v53 = v10;
                v71 = 0;
            }
            if ((v9 & 0x3F) == 4)
                meth_10073C10(v67);
            v11 = 2412 * v8;
            WaitForSingleObject(*(&dword_11786828 + 603 * v8), 0xFFFFFFFF);
            if ((dword_11786854[603 * v8] & 0x3F) == 0 || a4 != (void *)dword_1178682C[603 * v8])
                goto LABEL_29;
            if (v65) {
                v12 = 603 * (v60 + 16 * v8);
                WaitForSingleObject((HANDLE)dword_1178FEF8[v12], 0xFFFFFFFF);
                if (v56 >= dword_1178FF00[v12]) {
                    if (v8 == v60) {
                        if ((v9 & 0x40) != 0) {
                            v13 = dword_11786854[603 * v8];
                            LOBYTE(v13) = v13 & 0x3F;
                            LOBYTE(v9) = v9 & 0x3F;
                            dword_11786854[603 * v8] = v13;
                        }
                        if (v8 == v60 && (v9 & 0x80u) != 0) {
                            v14 = dword_11786854[603 * v8];
                            LOBYTE(v14) = v14 & 0x3F;
                            LOBYTE(v9) = v9 & 0x3F;
                            dword_11786854[603 * v8] = v14;
                        }
                    }
                    dword_1178FF00[v12] = v56;
                    dword_1178FF24[v12] = v9;
                    dword_1178FF28[v12] = v57;
                    byte_1178FF2C[v12 * 4] = v51;
                    byte_1178FF2D[v12 * 4] = v47;
                    byte_1178FF2E[v12 * 4] = v49;
                    dword_1178FEFC[v12] = v66;
                    if (v53) {
                        strcpy(&byte_11790454[v12 * 4], v70);
                        v11 = 2412 * v8;
                    }
                }
                ReleaseMutex((HANDLE)dword_1178FEF8[v12]);
                ReleaseMutex(*(HANDLE *)((char *)&dword_11786828 + v11));
                goto LABEL_86;
            }
            if (v8 == v60) {
                if ((v9 & 0x40) != 0)
                    v62 = 1;
                if ((v9 & 0x80u) != 0)
                    v63 = 1;
                dword_11786854[603 * v8] = v9;
            }
            goto LABEL_29;
        case 0x40:
            v15 = 603 * v8;
            v4(*(HANDLE *)((char *)&dword_11786828 + v15 * 4), 0xFFFFFFFF);
            if ((dword_11786854[v15] & 0x3Fu) < 2 || a4 != (void *)dword_1178682C[v15])
                goto LABEL_70;
            if (v56 <= dword_11786834[dword_11786D80[v15] + v15]) {
                sub_10006EC0((int)v69, v67);
                ReleaseMutex(*(HANDLE *)((char *)&dword_11786828 + v15 * 4));
            } else {
                v16 = 0;
                v17 = -1;
                v18 = 0;
                v19 = &dword_11786834[v15];
                do {
                    if (*v19 <= v17) {
                        v16 = v18;
                        v17 = *v19;
                    }
                    ++v18;
                    ++v19;
                } while (v18 < 8);
                dword_11786D80[v15] = v16;
                dword_11786834[v16 + v15] = v56;
                dword_11786860[dword_11786D80[v15] + v15] = 64;
                sub_10006EC0((int)&unk_11786880 + 160 * dword_11786D80[v15] + v15 * 4, v67);
                if (dword_11787190[v15] ||
                    flt_117868F8[40 * dword_11786D80[v15] + v15] < 4188888.0) {
                LABEL_70:
                    ReleaseMutex(*(HANDLE *)((char *)&dword_11786828 + v15 * 4));
                } else {
                    dword_11787190[v15] = sub_100713A0();
                    ReleaseMutex(*(HANDLE *)((char *)&dword_11786828 + v15 * 4));
                }
            }
        LABEL_86:
            if (!meth_10073D40(v67)) {
                v4 = (void(__stdcall *)(HANDLE, DWORD))WaitForSingleObject;
                continue;
            }
            v4 = (void(__stdcall *)(HANDLE, DWORD))WaitForSingleObject;
            v5 = (void(__stdcall *)(HANDLE))ReleaseMutex;
        LABEL_88:
            if (v63) {
                v43 = dword_11786854;
                do {
                    v4((HANDLE) * (v43 - 11), 0xFFFFFFFF);
                    v44 = *v43;
                    if ((*v43 & 0x3Fu) >= 2 && (*v43 & 0x3Fu) <= 4) {
                        LOBYTE(v44) = v44 & 0xBF | 0x80;
                        *v43 = v44;
                    }
                    v5((HANDLE) * (v43 - 11));
                    v43 += 603;
                } while ((int)v43 < (int)&unk_1178FF14);
            }
            if (v62) {
                v45 = dword_11786854;
                do {
                    v4((HANDLE) * (v45 - 11), 0xFFFFFFFF);
                    v46 = *v45;
                    if ((*v45 & 0x3Fu) >= 2 && (*v45 & 0x3Fu) <= 4) {
                        LOBYTE(v46) = v46 & 0x7F | 0x40;
                        *v45 = v46;
                    }
                    v5((HANDLE) * (v45 - 11));
                    v45 += 603;
                } while ((int)v45 < (int)&unk_1178FF14);
            }
            if (a4 != (void *)1 && ((*(_BYTE *)(meth_10073F50(v67) + 3) & 0xE0) == 64 ||
                                    (*(_BYTE *)(meth_10073F50(v67) + 3) & 0xE0) == 0x80 ||
                                    (*(_BYTE *)(meth_10073F50(v67) + 3) & 0xE0) == 96)) {
                np_sub_10003580(a1, a2, a3, (int)a4);
            }
        LABEL_105:
            v72 = -1;
            debugPrint(v67);
            return;
        case 0x60:
            Concurrency::details::StructuredWorkStealingQueue<
                Concurrency::details::_UnrealizedChore,
                Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(v67);
            v32 = meth_10073F40(v67);
            meth_10073BA0(v67, v32);
            goto LABEL_86;
        case 0x80:
            v15 = 603 * v8;
            v4(*(HANDLE *)((char *)&dword_11786828 + v15 * 4), 0xFFFFFFFF);
            if ((dword_11786854[v15] & 0x3Fu) >= 2 && a4 == (void *)dword_1178682C[v15]) {
                if (v56 <= dword_11786834[dword_11786D80[v15] + v15]) {
                    sub_100073E0(v68, v68, v67);
                } else {
                    v20 = 0;
                    v58 = 0;
                    v21 = -1;
                    v22 = &dword_11786834[v15];
                    do {
                        if (*v22 <= v21) {
                            v58 = v20;
                            v21 = *v22;
                        }
                        ++v20;
                        ++v22;
                    } while (v20 < 8);
                    v23 = 0;
                    v24 = 0;
                    v25 = 0;
                    v26 = &dword_11786834[v15];
                    do {
                        if (v26[11] == 64 && *v26 > v24) {
                            v23 = v25;
                            v24 = *v26;
                        }
                        ++v25;
                        ++v26;
                    } while (v25 < 8);
                    v27 = 0;
                    v28 = 0;
                    v54 = 0;
                    v29 = &dword_11786834[v15];
                    do {
                        if (v29[11] == 64 && *v29 > v54 && v27 != v23) {
                            v28 = v27;
                            v54 = *v29;
                        }
                        ++v27;
                        ++v29;
                    } while (v27 < 8);
                    v30 = dword_11786834[v28 + v15];
                    v31 = dword_11786834[v23 + v15] - v30;
                    if (v31)
                        v64 = (double)(v56 - v30) / (double)v31;
                    else
                        v64 = 1.0;
                    dword_11786D80[v15] = v58;
                    dword_11786834[v58 + v15] = v56;
                    dword_11786860[dword_11786D80[v15] + v15] = 128;
                    sub_100079E0((int)&unk_11786880 + 160 * dword_11786D80[v15] + v15 * 4,
                                 v64,
                                 (int)&unk_11786880 + 160 * v28 + v15 * 4,
                                 (int)&unk_11786880 + 160 * v23 + v15 * 4);
                    sub_100073E0(
                        (float *)((char *)&unk_11786880 + 160 * dword_11786D80[v15] + v15 * 4),
                        (float *)((char *)&unk_11786880 + 160 * v23 + v15 * 4),
                        v67);
                }
            }
            goto LABEL_70;
        case 0xC0:
            v33 = meth_10073C10(v67);
            v34 = sub_100713A0() - v33;
            v15 = 603 * v8;
            WaitForSingleObject(*(HANDLE *)((char *)&dword_11786828 + v15 * 4), 0xFFFFFFFF);
            if ((dword_11786854[v15] & 0x3F) != 0 && a4 == (void *)dword_1178682C[v15] && v7) {
                dword_11787188[v15] = v33;
                dword_1178718C[v15] = v34;
            }
            goto LABEL_70;
        case 0xE0:
            v61 = (unsigned __int8)meth_10073BC0(v67);
            v59 = (unsigned __int8)meth_10073BC0(v67);
            v52 = meth_10073BC0(v67);
            v48 = meth_10073BC0(v67);
            v50 = meth_10073BC0(v67);
            for (i = 0; i < 24; ++i)
                v70[i] = meth_10073BC0(v67);
            v71 = 0;
            if (v7) {
                WaitForSingleObject(*(&dword_11786828 + 603 * v8), 0xFFFFFFFF);
                if ((dword_11786854[603 * v8] & 0x3F) != 0 &&
                    a4 == (void *)dword_1178682C[603 * v8] && v8 == v61) {
                    dword_11786858[603 * v8] = v59;
                    byte_1178685C[2412 * v8] = v52;
                    byte_1178685D[2412 * v8] = v48;
                    byte_1178685E[2412 * v8] = v50;
                    strcpy((char *)&unk_11786D84 + 2412 * v8, v70);
                    dword_11786854[603 * v8] = 2;
                }
            LABEL_29:
                ReleaseMutex(*(&dword_11786828 + 603 * v8));
            } else if (!dword_1178FEF0) {
                v36 = sub_10036030(a4);
                v37 = v36;
                if (v36 != -1) {
                    v38 = &dword_11786828 + 603 * v36;
                    WaitForSingleObject(*v38, 0xFFFFFFFF);
                    v39 = (char *)(v38 + 22);
                    v38[1] = a4;
                    v40 = v38 + 14;
                    v55 = 8;
                    do {
                        *(v40 - 11) = 0;
                        *v40++ = 0;
                        memset(v39, 0, 0xA0u);
                        v39 += 160;
                        --v55;
                    } while (v55);
                    v38[11] = HANDLE_FLAG_INHERIT;
                    v38[342] = 0;
                    v38[599] = (HANDLE)sub_100713A0();
                    v41 = 16;
                    v42 = &dword_1178FEF8[9648 * v37];
                    do {
                        WaitForSingleObject((HANDLE)*v42, 0xFFFFFFFF);
                        v42[2] = 0;
                        v42[11] = 0;
                        ReleaseMutex((HANDLE)*v42);
                        v42 += 603;
                        --v41;
                    } while (v41);
                    ReleaseMutex(*v38);
                }
            }
            goto LABEL_86;
        default:
            goto LABEL_105;
        }
    }
}
// 10073B90: using guessed type int __thiscall Concurrency::details::StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(_DWORD);
// 1178682C: using guessed type int dword_1178682C[];
// 11786854: using guessed type int dword_11786854[];
// 11786858: using guessed type int dword_11786858[];
// 11786860: using guessed type int dword_11786860[];
// 11786D80: using guessed type int dword_11786D80[];
// 11787188: using guessed type int dword_11787188[];
// 1178718C: using guessed type int dword_1178718C[];
// 11787190: using guessed type int dword_11787190[];
// 1178FEF0: using guessed type int dword_1178FEF0;
// 1178FEF8: using guessed type int dword_1178FEF8[];
// 1178FEFC: using guessed type int dword_1178FEFC[];
// 1178FF00: using guessed type int dword_1178FF00[];
// 1178FF24: using guessed type int dword_1178FF24[];
// 1178FF28: using guessed type int dword_1178FF28[];
