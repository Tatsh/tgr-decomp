#include "types-win32.h"
//----- (10003580) --------------------------------------------------------
void __cdecl np_sub_10003580(int a1, int a2, int a3, int a4) {
    int v4;                                                   // esi
    char v5;                                                  // bl
    int v6;                                                   // eax
    int v7;                                                   // ebx
    int v8;                                                   // esi
    unsigned int v9;                                          // edi
    DWORD(__stdcall * waitForSingleObjectRef)(HANDLE, DWORD); // esi
    int v11;                                                  // ebp
    float *v12;                                               // esi
    int *v13;                                                 // edx
    unsigned int v14;                                         // eax
    int *v15;                                                 // edi
    unsigned __int8 v16;                                      // al
    int v17;                                                  // esi
    int v18;                                                  // eax
    unsigned int v19;                                         // ebx
    int v20;                                                  // ecx
    int *v21;                                                 // edi
    int v22;                                                  // ecx
    int v23;                                                  // esi
    int v24;                                                  // eax
    unsigned int v25;                                         // edi
    int *v26;                                                 // edx
    int v27;                                                  // edx
    unsigned int v28;                                         // ebx
    int v29;                                                  // eax
    int *v30;                                                 // ecx
    int v31;                                                  // ecx
    int v32;                                                  // eax
    int *v33;                                                 // edi
    int v34;                                                  // edi
    int v35;                                                  // ecx
    int v36;                                                  // ebp
    float *v37;                                               // edi
    int v38;                                                  // esi
    unsigned int v39;                                         // ebp
    unsigned __int16 v40;                                     // dx
    int v41;                                                  // ecx
    int v42;                                                  // ebx
    int *v43;                                                 // edi
    int v44;                                                  // esi
    const char *v45;                                          // esi
    unsigned int v46;                                         // ebx
    char *v47;                                                // edi
    int *v48;                                                 // esi
    int *v49;                                                 // esi
    int v50;                                                  // ebx
    int *v51;                                                 // edi
    int v52;                                                  // esi
    int v53;                                                  // edi
    int *v54;                                                 // ebx
    int v55;                                                  // esi
    int v56;                                                  // ebx
    int *v57;                                                 // edi
    int v58;                                                  // esi
    int *v59;                                                 // ebp
    int v60;                                                  // ebx
    int *v61;                                                 // esi
    int v62;                                                  // edi
    int v63;                                                  // eax
    const char *v64;                                          // eax
    HANDLE v65;                                               // [esp-4h] [ebp-7B4h]
    const char *v66;                                          // [esp-4h] [ebp-7B4h]
    int v67;                                                  // [esp+10h] [ebp-7A0h]
    int v68;                                                  // [esp+14h] [ebp-79Ch]
    int v69;                                                  // [esp+18h] [ebp-798h]
    unsigned int v70;                                         // [esp+18h] [ebp-798h]
    int v71;                                                  // [esp+1Ch] [ebp-794h]
    int v72;                                                  // [esp+1Ch] [ebp-794h]
    int v73;                                                  // [esp+20h] [ebp-790h]
    char v74;                                                 // [esp+24h] [ebp-78Ch]
    int v75;                                                  // [esp+28h] [ebp-788h]
    char v76;                                                 // [esp+2Ch] [ebp-784h]
    float v77;                                                // [esp+30h] [ebp-780h]
    char v78;                                                 // [esp+34h] [ebp-77Ch]
    int v79;                                                  // [esp+38h] [ebp-778h]
    int v80[133];                                             // [esp+50h] [ebp-760h] BYREF
    char Buffer[1024];                                        // [esp+264h] [ebp-54Ch] BYREF
    float v82[40];                                            // [esp+664h] [ebp-14Ch] BYREF
    char v83[160];                                            // [esp+704h] [ebp-ACh] BYREF
    int v84;                                                  // [esp+7ACh] [ebp-4h]

    meth_10073B60(v80, a2, a3);
    v84 = 0;
    WaitForSingleObject(gMutex7, 0xFFFFFFFF);
    v4 = dword_10220DD0;
    ReleaseMutex(gMutex7);
    if (v4) {
        Concurrency::details::StructuredWorkStealingQueue<
            Concurrency::details::_UnrealizedChore,
            Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(v80);
        v67 = meth_10073C10(v80);
        WaitForSingleObject(gMutex4, 0xFFFFFFFF);
        dword_10221310 = sub_10003460();
        ReleaseMutex(gMutex4);
        if (!meth_10073D40(v80)) {
            while (2) {
                v5 = meth_10073BC0(v80);
                v6 = v5 & 0xE0;
                v7 = v5 & 0xF;
                switch (v6) {
                case 0:
                    if (a4 != 1)
                        goto LABEL_122;
                    v68 = (unsigned __int8)meth_10073BC0(v80);
                    v69 = (unsigned __int8)meth_10073BC0(v80);
                    v74 = meth_10073BC0(v80);
                    v76 = meth_10073BC0(v80);
                    v78 = meth_10073BC0(v80);
                    v8 = 0;
                    v9 = v68 & 0x3F;
                    v71 = meth_10073C40(v80);
                    v79 = 0;
                    if (v9 <= 2) {
                        do
                            Buffer[v8++] = meth_10073BC0(v80);
                        while (v8 < 24);
                        v79 = v8;
                        Buffer[24] = 0;
                    }
                    if (v9 == 4)
                        dword_1022AEFC = meth_10073C10(v80);
                    waitForSingleObjectRef = WaitForSingleObject;
                    v11 = 606 * v7;
                    WaitForSingleObject(gMutexes[606 * v7], INFINITE);
                    if (v7 == dword_10094294)
                        goto LABEL_17;
                    if (unk_10221354[606 * v7] != v68 && v9 == 2) {
                        WaitForSingleObject(gMutex1, INFINITE);
                        dword_10220D90[++dword_10220DD4] = v7;
                        ReleaseMutex(gMutex1);
                        unk_10221330[606 * v7] = 0;
                        v12 = &unk_10221380[v11];
                        memset(&unk_10221334[v11], 0, 0x20u);
                        unk_10221354[606 * v7] = 0;
                        v13 = &dword_10221360[v11];
                        v75 = 8;
                        do {
                            *v13 = 0;
                            memset(v12, 0, 0xA0u);
                            ++v13;
                            v12 += 40;
                            --v75;
                        } while (v75);
                        v9 = v68 & 0x3F;
                        waitForSingleObjectRef = WaitForSingleObject;
                        dword_10221880[606 * v7] = 0;
                        dword_10221884[606 * v7] = 0;
                        dword_10221888[606 * v7] = -1;
                        dword_10221890[606 * v7] = 0;
                        dword_10221894[606 * v7] = 0;
                        dword_1022188C[606 * v7] = 0;
                        dword_10221C9C[606 * v7] = 0;
                    }
                    if (v7 == dword_10094294) {
                    LABEL_17:
                        if (v9 == 3) {
                            waitForSingleObjectRef(gMutex3, INFINITE);
                            gMutexesEnd = 0;
                            ReleaseMutex(gMutex3);
                        }
                        if (v7 == dword_10094294) {
                            if ((v68 & 0x80u) != 0) {
                                waitForSingleObjectRef(gMutex5, INFINITE);
                                dword_1022AAF4 = 0;
                                ReleaseMutex(gMutex5);
                                dword_1022AF20 = 1;
                            }
                            if ((v68 & 0x40) != 0) {
                                if (dword_1022AF20)
                                    dword_1022AF20 = 0;
                                if (dword_106909B4)
                                    dword_106909D8 = 1;
                                waitForSingleObjectRef(gMutex6, INFINITE);
                                dword_10221314 = 0;
                                ReleaseMutex(gMutex6);
                            }
                            if (v7 == dword_10094294 && v9 == 4) {
                                WaitForSingleObject(gMutex8, INFINITE);
                                v14 = sub_10003460() + 90;
                                dword_1022AF00 =
                                    3 * (dword_1022AEFC / 0x64u) + dword_1022AEFC % 0x64u / 0x21;
                                if (dword_1022AF00 > v14)
                                    dword_1022AF00 = v14;
                                ReleaseMutex(gMutex8);
                            }
                        }
                    }
                    unk_10221330[606 * v7] = v67;
                    unk_10221354[606 * v7] = v68;
                    unk_10221358[606 * v7] = v69;
                    unk_1022135C[2424 * v7] = v74;
                    unk_1022135D[2424 * v7] = v76;
                    unk_1022135E[2424 * v7] = v78;
                    unk_1022132C[606 * v7] = v71;
                    if (v79)
                        strcpy(&byte_10221898[v11 * 4], Buffer);
                    sub_10004760((_DWORD *)a1, v7, v69, v74, v76, v78, v71, (int)Buffer, v68, 16);
                    ReleaseMutex(gMutexes[606 * v7]);
                    goto LABEL_73;
                case 32:
                    if (a4 != 1)
                        goto LABEL_122;
                    WaitForSingleObject(gMutex0, INFINITE);
                    v15 = dword_102212D0;
                    do {
                        v16 = meth_10073BC0(v80);
                        v15 += 2;
                        *(v15 - 1) = v16 >> 4;
                        *(v15 - 2) = v16 & 0xF;
                    } while ((int)v15 < (int)&dword_10221310);
                    ReleaseMutex(gMutex0);
                    goto LABEL_73;
                case 64:
                    v17 = 606 * v7;
                    WaitForSingleObject(gMutexes[606 * v7], INFINITE);
                    if ((unk_10221354[606 * v7] & 0x3Fu) < 2) {
                        math_10006EC0((int)v83, v80);
                        ReleaseMutex(gMutexes[606 * v7]);
                    } else {
                        v18 = 0;
                        v19 = -1;
                        v20 = 0;
                        v21 = &unk_10221334[v17];
                        do {
                            if (*v21 <= v19) {
                                v18 = v20;
                                v19 = *v21;
                            }
                            ++v20;
                            ++v21;
                        } while (v20 < 8);
                        v22 = dword_10221880[v17] + 1;
                        dword_10221884[v17] = v18;
                        dword_10221880[v17] = v22;
                        unk_10221334[v18 + v17] = v67;
                        dword_10221360[dword_10221884[v17] + v17] = 64;
                        math_10006EC0((int)&unk_10221380[40 * dword_10221884[v17] + v17], v80);
                        dword_10221C9C[v17] = 33 * (2 * (dword_10221310 - v67) % 3) +
                                              100 * (2 * (dword_10221310 - v67) / 3);
                        ReleaseMutex(gMutexes[v17]);
                    }
                    goto LABEL_73;
                case 96:
                    LOBYTE(v40) = BYTE2(v67);
                    v41 = (unsigned __int8)v67;
                    HIBYTE(v40) = BYTE1(v67);
                    BYTE1(v41) = 96;
                    switch (v40 | (v41 << 16)) {
                    case 0x60000000:
                    case 0x60000001:
                        v42 = 0;
                        Buffer[0] = 0;
                        if (dword_100B36FC <= 0)
                            goto LABEL_82;
                        v43 = dword_10ACDFEC;
                        while (1) {
                            v44 = *v43;
                            if (a4 == atomic_sub_10005CF0(*v43))
                                break;
                            ++v42;
                            v43 += 2778;
                            if (v42 >= dword_100B36FC)
                                goto LABEL_82;
                        }
                        strcpy(Buffer, atomic_sub_10005E70(v44));
                        strcat(Buffer, asc_10094334);
                    LABEL_82:
                        v45 = (const char *)(meth_unk00214_GetField10((unk00214 *)v80) + 1);
                        v46 = strlen(v45) + 1;
                        v47 = &Buffer[strlen(Buffer) + 1];
                        goto LABEL_111;
                    case 0x60000004:
                        v49 = meth_unk00214_GetField10((unk00214 *)v80);
                        if (v49[1] != atomic_sub_10005CF0(dword_10094294))
                            goto LABEL_122;
                        sub_1000C4A0();
                        v50 = 0;
                        dword_10AA2894 = 1;
                        if (dword_100B36FC <= 0)
                            goto LABEL_122;
                        v51 = dword_10ACDFEC;
                        while (1) {
                            v52 = *v51;
                            if (a4 == atomic_sub_10005CF0(*v51))
                                break;
                            ++v50;
                            v51 += 2778;
                            if (v50 >= dword_100B36FC)
                                goto LABEL_122;
                        }
                        strcpy(Buffer, atomic_sub_10005E70(v52));
                        v45 = aBootedYouFromT;
                        v46 = strlen(aBootedYouFromT) + 1;
                        v47 = &Buffer[strlen(Buffer) + 1];
                        goto LABEL_111;
                    case 0x60000005:
                        v48 = meth_unk00214_GetField10((unk00214 *)v80);
                        WaitForSingleObject(gMutex9, INFINITE);
                        switch (v48[1]) {
                        case 4:
                            dword_1022AEF8 = 20;
                            ReleaseMutex(gMutex9);
                            break;
                        case 5:
                            dword_1022AEF8 = 21;
                            ReleaseMutex(gMutex9);
                            break;
                        case 6:
                            dword_1022AEF8 = 22;
                            ReleaseMutex(gMutex9);
                            break;
                        case 7:
                            dword_1022AEF8 = 23;
                            goto LABEL_88;
                        default:
                        LABEL_88:
                            ReleaseMutex(gMutex9);
                            break;
                        }
                        goto LABEL_122;
                    case 0x60000006:
                        if (meth_unk00214_GetField10((unk00214 *)v80)[1] != a4)
                            goto LABEL_122;
                        v53 = 0;
                        if (dword_100B36FC <= 0)
                            goto LABEL_122;
                        v54 = dword_10ACDFEC;
                        while (1) {
                            v55 = *v54;
                            if (a4 == atomic_sub_10005CF0(*v54))
                                break;
                            ++v53;
                            v54 += 2778;
                            if (v53 >= dword_100B36FC)
                                goto LABEL_122;
                        }
                        if ((atomic_sub_10004A10(v55) & 0x3F) == 0)
                            goto LABEL_122;
                        WaitForSingleObject(gMutex2, INFINITE);
                        v65 = gMutex2;
                        dword_10221288[++dword_10221318] = v55;
                        ReleaseMutex(v65);
                        atomic_sub_10004A50(v53, 0);
                        strcpy(Buffer, atomic_sub_10005E70(v55));
                        v45 = aLeftTheRace;
                        v46 = strlen(aLeftTheRace) + 1;
                        v47 = &Buffer[strlen(Buffer) + 1];
                        goto LABEL_111;
                    case 0x60000007:
                        if (meth_unk00214_GetField10((unk00214 *)v80)[1] != a4)
                            goto LABEL_122;
                        v56 = 0;
                        if (dword_100B36FC <= 0)
                            goto LABEL_122;
                        v57 = dword_10ACDFEC;
                        while (1) {
                            v58 = *v57;
                            if (a4 == atomic_sub_10005CF0(*v57))
                                break;
                            ++v56;
                            v57 += 2778;
                            if (v56 >= dword_100B36FC)
                                goto LABEL_122;
                        }
                        strcpy(Buffer, atomic_sub_10005E70(v58));
                        v45 = aReturnedToRace;
                        v46 = strlen(aReturnedToRace) + 1;
                        v47 = &Buffer[strlen(Buffer) + 1];
                    LABEL_111:
                        qmemcpy(v47 - 1, v45, v46);
                        np_sub_10003530(Buffer);
                        goto LABEL_122;
                    case 0x60000008:
                        v59 = meth_unk00214_GetField10((unk00214 *)v80);
                        if (a4 != 1)
                            goto LABEL_122;
                        v60 = 0;
                        if (dword_100B36FC <= 0)
                            goto LABEL_122;
                        v61 = dword_10ACDFEC;
                        break;
                    default:
                        goto LABEL_122;
                    }
                    break;
                case 128:
                    v23 = 606 * v7;
                    WaitForSingleObject(gMutexes[606 * v7], INFINITE);
                    if ((unk_10221354[606 * v7] & 0x3Fu) < 2) {
                        math_100073E0(v82, v82, v80);
                        ReleaseMutex(gMutexes[606 * v7]);
                    } else {
                        v24 = 0;
                        v72 = 0;
                        v25 = -1;
                        v26 = &unk_10221334[v23];
                        do {
                            if (*v26 <= v25) {
                                v72 = v24;
                                v25 = *v26;
                            }
                            ++v24;
                            ++v26;
                        } while (v24 < 8);
                        v27 = 0;
                        v28 = 0;
                        v29 = 0;
                        v30 = &unk_10221334[v23];
                        do {
                            if (v30[11] == 64 && *v30 > v28) {
                                v27 = v29;
                                v28 = *v30;
                            }
                            ++v29;
                            ++v30;
                        } while (v29 < 8);
                        v31 = 0;
                        v32 = 0;
                        v70 = 0;
                        v33 = &unk_10221334[v23];
                        do {
                            if (v33[11] == 64 && *v33 > v70 && v31 != v27) {
                                v32 = v31;
                                v70 = *v33;
                            }
                            ++v31;
                            ++v33;
                        } while (v31 < 8);
                        v34 = unk_10221334[v32 + v23];
                        v35 = unk_10221334[v27 + v23] - v34;
                        if (v35)
                            v77 = (double)(unsigned int)(v67 - v34) / (double)v35;
                        else
                            v77 = 1.0;
                        v36 = dword_10221880[v23] + 1;
                        dword_10221884[v23] = v72;
                        dword_10221880[v23] = v36;
                        unk_10221334[v72 + v23] = v67;
                        dword_10221360[dword_10221884[v23] + v23] = 128;
                        v37 = &unk_10221380[40 * v27 + v23];
                        math_100079E0((int)&unk_10221380[40 * dword_10221884[v23] + v23],
                                      v77,
                                      (int)&unk_10221380[40 * v32 + v23],
                                      (int)v37);
                        math_100073E0(&unk_10221380[40 * dword_10221884[v23] + v23], v37, v80);
                        dword_10221C9C[v23] = 33 * (2 * (dword_10221310 - v67) % 3) +
                                              100 * (2 * (dword_10221310 - v67) / 3);
                        ReleaseMutex(gMutexes[v23]);
                    }
                    goto LABEL_73;
                case 192:
                    if (a4 != 1)
                        goto LABEL_122;
                    v73 = GetTicks();
                    v38 = meth_10073C10(v80);
                    v39 = (unsigned __int16)meth_10073BE0(v80);
                    WaitForSingleObject(gMutexes[0x25E * v7], INFINITE);
                    dword_10221C98[0x25E * v7] = v38;
                    dword_10221C9C[0x25E * v7] = v39;
                    ReleaseMutex(gMutexes[0x25E * v7]);
                    if (v7 == dword_10094294) {
                        sub_10004910((_DWORD *)a1, v67);
                        sub_100034A0(v67, v73, v38, v39);
                    }
                    goto LABEL_73;
                case 224:
                    if (a4 != 1)
                        goto LABEL_122;
                    dword_10094294 = v7;
                    sub_100049C0();
                    LOBYTE(gCPlayers) = meth_10073BC0(v80);
                    gCPlayers = (unsigned __int8)gCPlayers;
                    LOBYTE(gChosenTrack) = meth_10073BC0(v80);
                    gChosenTrack = (unsigned __int8)gChosenTrack;
                    LOBYTE(gChosenWeather0) = meth_10073BC0(v80);
                    gChosenWeather0 = (unsigned __int8)gChosenWeather0;
                    LOWORD(gBcar) = meth_10073BE0(v80);
                    gBcar = (unsigned __int16)gBcar;
                    LOBYTE(dword_10221280) = meth_10073BC0(v80);
                    dword_10221280 = (unsigned __int8)dword_10221280;
                    LOBYTE(gBtire) = meth_10073BC0(v80);
                    gBtire = (unsigned __int8)gBtire;
                    LOBYTE(gBsuspension) = meth_10073BC0(v80);
                    gBsuspension = (unsigned __int8)gBsuspension;
                    sub_10004590(a1,
                                 v7,
                                 byte_10AD0854[0],
                                 byte_10AD0855[0],
                                 byte_10AD0856[0],
                                 (int)dplay4aShortName,
                                 16);
                    atomic_sub_10004A50(v7, 2);
                LABEL_73:
                    if (meth_10073D40(v80))
                        goto LABEL_122;
                    continue;
                default:
                    fprintf(&Stream,
                            "Error: unknown command %02X received from server (player %d).\n",
                            v6,
                            v7);
                    goto LABEL_122;
                }
                break;
            }
            while (1) {
                v62 = *v61;
                if (v59[1] == atomic_sub_10005CF0(*v61))
                    break;
                ++v60;
                v61 += 2778;
                if (v60 >= dword_100B36FC)
                    goto LABEL_122;
            }
            v63 = v59[2];
            if (v63 >= 0 && v63 < 8) {
                v66 = gPositionStrings[v63];
                v64 = atomic_sub_10005E70(v62);
                sprintf(Buffer, "%s finished %s", v64, v66);
                np_sub_10003530(Buffer);
            }
        }
    }
LABEL_122:
    v84 = -1;
    meth_DebugPrint(v80);
}
// 10073B90: using guessed type int __thiscall Concurrency::details::StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(_DWORD);
// 10094294: using guessed type int dword_10094294;
// 100AAC48: using guessed type char *gPositionStrings[20];
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int gChosenTrack;
// 10220DD0: using guessed type int dword_10220DD0;
// 10220DD4: using guessed type int dword_10220DD4;
// 10221280: using guessed type int dword_10221280;
// 102212C8: using guessed type int gCPlayers;
// 10221310: using guessed type int dword_10221310;
// 10221314: using guessed type int dword_10221314;
// 10221318: using guessed type int dword_10221318;
// 10221320: using guessed type int gBcar;
// 10221880: using guessed type int dword_10221880[];
// 10221884: using guessed type int dword_10221884[];
// 10221888: using guessed type int dword_10221888[];
// 1022188C: using guessed type int dword_1022188C[];
// 10221890: using guessed type int dword_10221890[];
// 10221894: using guessed type int dword_10221894[];
// 10221C98: using guessed type int dword_10221C98[];
// 1022AAF4: using guessed type int dword_1022AAF4;
// 1022AEF8: using guessed type int dword_1022AEF8;
// 1022AF00: using guessed type int dword_1022AF00;
// 1022AF0C: using guessed type int gBsuspension;
// 1022AF10: using guessed type int gBtire;
// 1022AF20: using guessed type int dword_1022AF20;
// 1022B350: using guessed type int gChosenWeather0;
// 106909B4: using guessed type int dword_106909B4;
// 106909D8: using guessed type int dword_106909D8;
// 10AA2894: using guessed type int dword_10AA2894;
// 10ACDFEC: using guessed type int dword_10ACDFEC[];
