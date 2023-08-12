#include "types-win32.h"
//----- (1002C500) --------------------------------------------------------
int sub_1002C500() {
    DWORD ticks;               // eax
    int oldTicks;              // esi
    DWORD ticks_1;             // edx
    int v3;                    // eax
    int ticksDiff;             // edx
    int v5;                    // esi
    void *v6;                  // ecx
    int v7;                    // eax
    void *v8;                  // ecx
    void *v9;                  // ecx
    int chosenTrack1;          // eax
    void *v11;                 // ecx
    int v12;                   // eax
    int *v13;                  // eax
    int v14;                   // ecx
    void **v15;                // eax
    _DWORD *v16;               // edx
    int savedRecordingLength;  // ecx
    int v18;                   // eax
    int v19;                   // ecx
    char *v20;                 // ecx
    _DWORD *v21;               // ecx
    int v22;                   // edi
    void **v23;                // eax
    int v24;                   // ecx
    char *v25;                 // esi
    char *v26;                 // edx
    _BYTE *v27;                // edx
    void *v28;                 // ecx
    void *v29;                 // ecx
    int v30;                   // eax
    bool v31;                  // zf
    int chosenTrack;           // eax
    void *v33;                 // ecx
    void *v34;                 // ecx
    int v35;                   // edi
    _BYTE *v36;                // esi
    int v37;                   // ecx
    void *v38;                 // eax
    int v39;                   // ecx
    void *v40;                 // eax
    void *v41;                 // edx
    int v42;                   // edx
    int *v43;                  // eax
    int v44;                   // edx
    int v45;                   // eax
    int v46;                   // edi
    void(__cdecl * *v47)(int); // esi
    enum MACRO_GAME_MODE v48;  // eax
    bool v49;                  // cc
    char *v50;                 // esi
    char *v51;                 // ebx
    char v52;                  // al
    _DWORD *v53;               // ebp
    _WORD *v54;                // edi
    char v55;                  // al
    unsigned __int16 v56;      // ax
    char *v57;                 // ebp
    char *v58;                 // edi
    int v59;                   // eax
    char *v60;                 // eax
    char *v61;                 // eax
    int v62;                   // eax
    double v63;                // st7
    int v64;                   // edx
    int v65;                   // edi
    _DWORD *v66;               // esi
    enum MACRO_GAME_MODE v67;  // eax
    int v68;                   // edx
    void *v69;                 // ecx
    int v70;                   // eax
    int v71;                   // edi
    unk00144 *v72;             // esi
    _DWORD *v73;               // ecx
    int v74;                   // edx
    int *v75;                  // eax
    int v76;                   // edi
    int *v77;                  // esi
    LPCSTR v78;                // eax
    int v79;                   // edi
    int *v80;                  // esi
    LPCSTR v81;                // eax
    int v82;                   // edi
    char *v83;                 // esi
    __int16 v84;               // dx
    char *v85;                 // eax
    int v86;                   // edi
    double v87;                // st7
    enum MACRO_GAME_MODE v88;  // esi
    int j;                     // edi
    int v90;                   // eax
    int v91;                   // edx
    int v92;                   // edx
    int v93;                   // eax
    double v94;                // st7
    int v95;                   // esi
    unk00144 *v96;             // edi
    int v97;                   // eax
    int v98;                   // esi
    _DWORD *v99;               // edi
    int v100;                  // esi
    char *v101;                // edi
    int v102;                  // esi
    _DWORD *v103;              // edi
    int v104;                  // edi
    unk00144 *v105;            // esi
    void *v106;                // ecx
    void *v107;                // ecx
    void *v108;                // ecx
    int v109;                  // edx
    int *v110;                 // esi
    int v111;                  // eax
    int v112;                  // ebx
    int v113;                  // ecx
    float *v114;               // edi
    double v115;               // st7
    double v117;               // st7
    unsigned __int8 v118;      // c0
    unsigned __int8 v119;      // c3
    int v120;                  // edi
    unk00144 *v121;            // esi
    int *v122;                 // ebx
    void *v123;                // ecx
    int v124;                  // edi
    int v125;                  // ebp
    int *v126;                 // esi
    void *v127;                // ecx
    int v128;                  // ebx
    int v129;                  // ebp
    unsigned int k;            // eax
    int v131;                  // ecx
    int v132;                  // edx
    char *v133;                // ecx
    char *v134;                // ecx
    int v135;                  // ebx
    _DWORD *v136;              // ebp
    int v137;                  // eax
    int v138;                  // edi
    int v139;                  // edx
    int **v140;                // esi
    int v141;                  // ecx
    int v142;                  // eax
    int *v143;                 // esi
    double v144;               // st7
    int v145;                  // ecx
    void **v146;               // esi
    int v147;                  // edx
    int v148;                  // eax
    int v149;                  // edi
    int *v150;                 // esi
    int v151;                  // eax
    int v152;                  // ecx
    int v153;                  // edi
    int v154;                  // esi
    int *v155;                 // ebx
    int v156;                  // edx
    int v157;                  // ecx
    void **v158;               // esi
    int v159;                  // ebx
    char *v160;                // edx
    int v161;                  // ebp
    void **v162;               // ebx
    int v163;                  // esi
    int v164;                  // edi
    int v165;                  // eax
    void **v166;               // eax
    _DWORD *v167;              // ecx
    int v168;                  // edx
    int v169;                  // eax
    int result;                // eax
    int v171;                  // esi
    DWORD v172;                // eax
    int v173;                  // ecx
    int v174;                  // [esp+0h] [ebp-48h]
    float v175;                // [esp+0h] [ebp-48h]
    float v176;                // [esp+0h] [ebp-48h]
    float v177;                // [esp+0h] [ebp-48h]
    _DWORD *v178;              // [esp+14h] [ebp-34h]
    int v179;                  // [esp+14h] [ebp-34h]
    int v180;                  // [esp+18h] [ebp-30h]
    int v181;                  // [esp+18h] [ebp-30h]
    float v182;                // [esp+18h] [ebp-30h]
    int *v183;                 // [esp+18h] [ebp-30h]
    int v184;                  // [esp+1Ch] [ebp-2Ch]
    int i;                     // [esp+1Ch] [ebp-2Ch]
    int v186;                  // [esp+1Ch] [ebp-2Ch]
    int *v187;                 // [esp+20h] [ebp-28h]
    int v188;                  // [esp+20h] [ebp-28h]
    int v189;                  // [esp+20h] [ebp-28h]
    int v190;                  // [esp+20h] [ebp-28h]
    int v191;                  // [esp+20h] [ebp-28h]
    int v192[3];               // [esp+24h] [ebp-24h] BYREF
    int v193[3];               // [esp+30h] [ebp-18h] BYREF
    float v194[3];             // [esp+3Ch] [ebp-Ch] BYREF

    ticks = GetTicks();
    oldTicks = gTicks;
    ticks_1 = ticks;
    gTicks = ticks;
    v3 = dword_100AA00C;
    ticksDiff = ticks_1 - oldTicks;
    v5 = dword_100AA008;
    if (dword_100AA00C < 0) {
        v3 = 0;
        if (dword_100AA008 > 0) {
            memset32(dword_10680758, ticksDiff, dword_100AA008);
            v3 = v5;
        }
    }
    v6 = (void *)++dword_1068093C;
    if (dword_1068093C)
        dword_106909D4 += ticksDiff;
    else
        dword_106909D4 = 0;
    v7 = v3 + 1;
    dword_100AA00C = v7;
    if (v7 >= v5) {
        v7 = 0;
        dword_100AA00C = 0;
    }
    dword_10680758[v7] = ticksDiff;
    if (dword_106909EC) {
        if (gNetworkPlay) {
            v70 = atomic_sub_10005D90();
            if (v70 >= 0 && !dword_106909E0)
                sub_1002F230(v70);
        }
        goto LABEL_177;
    }
    *(_DWORD *)&gUnk06594.gap1C8[12460] = 1;
    meth_DebugPrint(v6);
    sub_1000F620();
    if (!dword_106909E0) {
        meth_DebugPrint(v8);
        meth_DebugPrint(v9);
        dword_10B501CC();
        dword_118AA0D0();
        off_100B8C94();
        chosenTrack1 = 12;
        if (gGameMode != GAME_MODE_5)
            chosenTrack1 = gChosenTrack;
        ParseHNDFileFromIndex(chosenTrack1);
        graphics_10074DD0();
        dword_10B501C8();
        sub_1002B950();
    }
    sub_10032873(dword_106C1628);
    meth_DebugPrint(v11);
    sub_10032873(dword_106C1628);
    sub_1003BD40(123);
    dword_106909E4 = 0;
    if (gGameMode != GAME_MODE_1 && gGameMode != GAME_MODE_6 && gGameMode != GAME_MODE_2)
        dword_100BD3E0 = 3;
    dword_117554E8 = 0;
    switch (gGameMode) {
    case GAME_MODE_0:
        dword_100B36F8 = 20;
        dword_100B36FC = 3;
        meth_10076AE0(&stru_10ACDEA8, gChosenCar);
        goto LABEL_31;
    case GAME_MODE_1:
        dword_100B36F8 = 2;
        dword_100B36FC = 2;
        meth_10076AE0(&stru_10ACDEA8, gChosenCar);
        meth_10076AE0(dword_10AD0A10, gChosenCar);
        dword_10AD33C4 = 0;
        goto LABEL_31;
    case GAME_MODE_2:
        meth_10076AE0(&stru_10ACDEA8, gChosenCar);
        dword_106909E4 = 0;
        dword_10680610 = 1;
        dword_100B36F8 = dword_100B4050 + 1;
        dword_100B36FC = dword_100B4050 + 1;
        savedRecordingLength = 1389 * dword_100B4050;
        *((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17) = &unk_117554F0;
        meth_DebugPrint((void *)savedRecordingLength);
        qmemcpy(*((void **)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17),
                dword_10680738,
                ElementCount);
        v18 = 2778 * dword_100B4050;
        v19 = *(char *)(*((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17) + 1);
        dword_10AD084C[v18] = v19;
        meth_10076AE0(&stru_10ACDEA8.gap0[v18 * 4], v19);
        sub_1006ABB0();
        v20 = (char *)*((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17);
        if (*v20 == gChosenTrack && (v20 = (char *)v20[7], v20 == (char *)gChosenWeather0)) {
            meth_DebugPrint(v20);
            v21 = *(&dword_10AD0868 + 2778 * dword_100B4050);
            v21[18] = 8;
            meth_DebugPrint(v21);
            *((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 19) = ElementCount;
        } else {
            meth_DebugPrint(v20); // wrong track
            *((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17) = 0;
            dword_100B36FC = 1;
            dword_100B36F8 = 1;
        }
        v22 = 0;
        if (dword_100B4050 > 0) {
            v23 = &dword_10AD0868;
            v24 = 44;
            v25 = (char *)&unk_117644F0;
            do {
                v26 = (char *)*v23;
                ++v22;
                v23 += 2778;
                *(_DWORD *)&v26[v24] = v25;
                v25 += 61440;
                v27 = *(_BYTE **)((char *)*(v23 - 2778) + v24);
                v24 += 4;
                *v27 = gChosenTrack;
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 1) =
                    *((_BYTE *)v23 - 11136);
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 2) =
                    *((_BYTE *)*(v23 - 4519) + 248);
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 3) =
                    *((_BYTE *)*(v23 - 4519) + 252);
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 4) =
                    *((_BYTE *)*(v23 - 4519) + 256);
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 5) =
                    *((_BYTE *)*(v23 - 4519) + 260);
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 6) =
                    *((_BYTE *)*(v23 - 4519) + 264);
                *(_BYTE *)(*(_DWORD *)((char *)*(v23 - 2778) + v24 - 4) + 7) = gChosenWeather0;
                *(_DWORD *)((char *)*(v23 - 2778) + v24 + 4) = 8;
                *(_DWORD *)((char *)*(v23 - 2778) + v24 + 12) = 56924;
            } while (v22 < dword_100B4050);
        }
        goto LABEL_61;
    case GAME_MODE_4:
        gChosenWeather1 = 1;
        dword_100B4050 = 1;
        dword_100B36F8 = 1;
        dword_100B36FC = 1;
        dword_106909E4 = 0;
        dword_10ACED30 = 0;
        *((_DWORD *)dword_10AD0868 + 17) = dword_10680738;
        if (dword_106805B8) {
            if (dword_106805B8 == 1) {
                sub_10070AF0(aRallycreditsDa, 0);
            } else {
                if (dword_106805B8 != 2)
                    goto LABEL_51;
                sub_1002C3C0();
                sub_10070AF0(kRallyOutroDat, 0);
            }
        } else {
            if (gNeedToPlayIntro2)
                sub_10070AF0(kRallyIntro2Dat, 0);
            else
                sub_10070AF0(kRallyIntro1Dat, 0);
            if (++gNeedToPlayIntro2 > 1)
                gNeedToPlayIntro2 = 0;
        }
        sub_1006ABB0();
        dword_10680938 = 0;
    LABEL_51:
        *((_DWORD *)dword_10AD0868 + 11) = 0;
        *((_DWORD *)dword_10AD0868 + 12) = 0;
        byte_10AD0854[0] = -1;
        byte_10AD0855[0] = -1;
        byte_10AD0856[0] = -1;
        gChosenTrack = **((char **)dword_10AD0868 + 17);
        dword_10AD084C[0] = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 1);
        meth_10076AE0(&stru_10ACDEA8, dword_10AD084C[0]);
        dword_10ACED40 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 2);
        dword_10ACED44 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 3);
        dword_10ACED38 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 4);
        dword_10ACED3C[0] = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 5);
        *((_BYTE *)dword_10AD0868 + 37) = *(_BYTE *)(*((_DWORD *)dword_10AD0868 + 17) + 6);
        gChosenWeather0 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 7);
        gChosenWeather1 = gChosenWeather0;
    LABEL_61:
        if (gGameMode == GAME_MODE_5)
            dword_106C3364 = 0;
        else
            dword_106C3364 = ((unsigned int)gTrackData[gChosenTrack]->field_4 >> 4) & 1;
        sub_10069740(gChosenWeather1);
        if (gGameMode != GAME_MODE_4 && !dword_106909E0) {
            meth_DebugPrint(v28);
            meth_DebugPrint(v29);
        }
        car_MakeEnemyCarColorPanels();
        v30 = dword_106909E0;
        v31 = dword_106909E0 == 0;
        if (!dword_106909E0) {
            chosenTrack = 12;
            if (gGameMode != GAME_MODE_5)
                chosenTrack = gChosenTrack;
            LoadTrack(chosenTrack);
            v30 = dword_106909E0;
            v31 = dword_106909E0 == 0;
            if (!dword_106909E0) {
                dword_10680624 = 0;
                dword_1068061C = 0;
                dword_10680618 = 0;
                dword_10680638 = 0;
                dword_10680634 = 0;
                dword_1068063C = 0;
                dword_10680640 = 0;
                dword_10680628 = 0;
                dword_1068062C = 0;
                meth_DebugPrint(v33);
                v35 = 0;
                dword_10680940 = 0;
                if (*(int *)&gUnk06594.gap4A2C[192] > 0) {
                    v36 = gUnk06594.gap4A2C;
                    do {
                        switch (v36[8]) {
                        case 3:
                            dword_10680618 = *(void **)v36;
                            goto LABEL_79;
                        case 4:
                            dword_1068062C = *((_DWORD *)v36 + 1);
                            dword_10680634 = *(_DWORD *)v36;
                            goto LABEL_79;
                        case 5:
                            dword_10680638 = *(_DWORD *)v36;
                            goto LABEL_79;
                        case 6:
                            dword_1068061C = *(_DWORD *)v36;
                            goto LABEL_79;
                        case 7:
                            v37 = dword_10680940;
                            dword_106805D0[dword_10680940] = *(_DWORD *)v36;
                            v34 = (void *)(v37 + 1);
                            dword_10680940 = (int)v34;
                        LABEL_79:
                            meth_DebugPrint(v34);
                            break;
                        default:
                            break;
                        }
                        ++v35;
                        v36 += 12;
                    } while (v35 < *(int *)&gUnk06594.gap4A2C[192]);
                }
                if (dword_1068061C && dword_10680634 && dword_10680638) {
                    v38 = dword_10680618;
                } else {
                    v38 = 0;
                    dword_10680618 = 0;
                }
                if (v38) {
                    v193[0] = 1065353216;
                    v193[1] = 0;
                    v193[2] = 0;
                    sub_1003B1F0((float *)v193,
                                 (float *)v193,
                                 (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)v38));
                    flt_10680630 = sub_1003B170((float *)v193);
                }
                v30 = dword_106909E0;
                v31 = dword_106909E0 == 0;
                dword_10680620 = dword_100BD3E0 - 1;
            }
        }
        dword_100AA8B4 = 1;
        if (v31)
            dword_100AA8B4 = dword_100B4050;
        dword_106C1638 = v30 != 0 ? dword_10680668 : 0;
        dword_106C1690 = dword_106C1638 == 0;
        if (gGameMode == GAME_MODE_4) {
            dword_10AD05DC[0] = (int)&unk_10AD0628;
            dword_10AF9BB0 = 180;
            goto LABEL_108;
        }
        v39 = 0;
        if (dword_100B4050 <= 0)
            goto LABEL_102;
        v40 = &dword_10ACED34;
        break;
    case GAME_MODE_5:
        dword_100B4050 = 1;
        dword_100B36F8 = 1;
        dword_100B36FC = 1;
        dword_106909E4 = 0;
        dword_106909E0 = 0;
        dword_10ACED30 = 0;
        dword_10AD05DC[0] = (int)&unk_10AD0628;
        dword_10AF9BB0 = 0;
        goto LABEL_61;
    case GAME_MODE_6:
        if (dword_106909E0)
            goto LABEL_32;
        dword_100B4050 = 1;
        if (dword_1022AF1C) {
            dword_100B36F8 = 0;
            dword_100B36FC = 0;
        } else {
            dword_100B36F8 = 1;
            dword_100B36FC = 1;
        }
        meth_10076AE0(&stru_10ACDEA8, gChosenCar);
        if (gNetworkPlay) {
            atomic_sub_10005960();
            atomic_sub_10006090();
            np_sub_10004A90();
            dword_10ACDFEC[0] = sub_10005D30();
            strcpy(byte_10ACDFF0, dplay4aShortName);
            np_sub_10005EE0(dword_10ACDFEC[0], dplay4aShortName);
        }
        while (dword_100B36FC < (unsigned int)sub_1000C670()) {
            v12 = atomic_sub_10005D40();
            if (v12 >= 0)
                sub_1002F130(v12);
        }
    LABEL_31:
        if (dword_106909E0) {
        LABEL_32:
            sub_10067960((int)&unk_1020AB98 - 89992 * dword_10680668);
            v13 = dword_118AC730;
            do {
                v13[1] = 0;
                *v13 = 0;
                v13 += 6;
            } while ((int)v13 < (int)&unk_118AC898);
        } else {
            v14 = 0;
            if (dword_100B4050 > 0) {
                v15 = &dword_10AD0868;
                do {
                    v16 = *v15;
                    ++v14;
                    v15 += 2778;
                    v16[17] = 0;
                    *((_DWORD *)*(v15 - 2778) + 11) = 0;
                    *((_DWORD *)*(v15 - 2778) + 12) = 0;
                } while (v14 < dword_100B4050);
            }
        }
        dword_106909E4 = dword_106909E0 == 0;
        goto LABEL_61;
    default:
        meth_10076AE0(&stru_10ACDEA8, gChosenCar);
        dword_106909E4 = 0;
        dword_100B36F8 = dword_100B4050;
        dword_100B36FC = dword_100B4050;
        goto LABEL_61;
    }
    do {
        *((_DWORD *)v40 + 4) = *(_DWORD *)(*(_DWORD *)v40 + 252);
        *((_DWORD *)v40 + 2) = *(_DWORD *)(*(_DWORD *)v40 + 260);
        *((_DWORD *)v40 + 1) = *(_DWORD *)(*(_DWORD *)v40 + 256);
        *((_DWORD *)v40 + 3) = *(_DWORD *)(*(_DWORD *)v40 + 248);
        if (gConfigJoystickIndex == 1 || gConfigJoystickIndex == 2) {
            v41 = (void *)*((_DWORD *)v40 + 1741);
        } else {
            v41 = (void *)*((_DWORD *)v40 + 1741);
            if (gConfigJoystickIndex != 3) {
                *((_BYTE *)v41 + 37) = 2;
                goto LABEL_101;
            }
        }
        *((_BYTE *)v41 + 37) = 5;
    LABEL_101:
        ++v39;
        v40 = (char *)v40 + 11112;
    } while (v39 < dword_100B4050);
LABEL_102:
    if (gGameMode == GAME_MODE_2 && (v42 = *(_DWORD *)(dword_10AD33D0 + 68)) != 0) {
        dword_10AD18A8 = *(char *)(v42 + 2);
        dword_10AD18AC = *(char *)(*(_DWORD *)(dword_10AD33D0 + 68) + 3);
        dword_10AD18A0 = *(char *)(*(_DWORD *)(dword_10AD33D0 + 68) + 4);
        dword_10AD18A4 = *(char *)(*(_DWORD *)(dword_10AD33D0 + 68) + 5);
        *(_BYTE *)(dword_10AD33D0 + 37) = *(_BYTE *)(*(_DWORD *)(dword_10AD33D0 + 68) + 6);
    } else if (v39 < dword_100B36FC) {
        v43 = &dword_10ACED3C[2778 * v39];
        do {
            v43[2] = 1;
            *v43 = 1;
            *(v43 - 1) = 2;
            v43[1] = 0;
            v44 = v43[1739];
            ++v39;
            v43 += 2778;
            *(_BYTE *)(v44 + 37) = 0;
        } while (v39 < dword_100B36FC);
    }
LABEL_108:
    if (!dword_106909E0) {
        v45 = dword_100B36FC;
        v46 = 0;
        dword_106909B8 = 0;
        if (dword_100B36FC > 0) {
            v47 = (void(__cdecl **)(int)) & unk_10ACEDB0;
            while (1) {
                v48 = gGameMode;
                v49 = v46 < dword_100B4050;
                v47[1706] = (void(__cdecl *)(int))1065353216;
                if (v49)
                    break;
                if (v48 != GAME_MODE_2) {
                    if (v48 == GAME_MODE_6) {
                        *v47 = math_1002C430;
                    } else {
                        meth_10063420(v47 - 962);
                        *v47 = sub_10065620;
                    }
                    goto LABEL_118;
                }
                *v47 = sub_10063FE0;
                *((_BYTE *)v47 + 6823) = 2;
                v47[1706] = (void(__cdecl *)(int))1052770304;
            LABEL_119:
                if (!*(v47 - 32))
                    meth_10076A70((unsigned __int8 *)v47 - 3848, v46, (int)v47[1704]);
                meth_10065740(v47 - 962);
                v45 = dword_100B36FC;
                v47[29] = 0;
                v47[61] = 0;
                v47[63] = 0;
                ++v46;
                v47 += 2778;
                if (v46 >= v45)
                    goto LABEL_122;
            }
            *v47 = sub_10063FE0;
        LABEL_118:
            *((_BYTE *)v47 + 6823) = 0;
            goto LABEL_119;
        }
    LABEL_122:
        if (!v45) {
            memset(byte_100C12A0, 0, sizeof(byte_100C12A0));
            meth_10076A40(&stru_10ACDEA8, 0);
            meth_10065740(&stru_10ACDEA8);
            meth_100019D0(&stru_10ACDEA8);
            flt_10AD061C = flt_10AD061C - -1.0;
        }
        v180 = 0;
        if (dword_100AA8B4 > 0) {
            v187 = dword_100A73A8;
            v178 = &unk_106C163C;
            do {
                v50 = &byte_100C12A0[89992 * *(v178 - 1)];
                v51 = v50 + 768;
                if (gChosenWeather1 != 4)
                    v51 = v50 + 256;
                *v178 = graphics_dword_118AA0AC(
                    v50 + 1280, v51, v50[228], v50[229], v50[228], 1, 2, 0, 0, 1, 1, 0, 0, 0, 0);
                v52 = v50[219];
                if (v52 == 1 || v52 == 2) {
                    v53 = v178 + 1;
                    dword_118AA09C = 1;
                    v54 = v51 + 510;
                    v184 = 15;
                    do {
                        v55 = v50[219];
                        if (v55 == 1) {
                            v56 = *v54 & 0x3000;
                            HIBYTE(v56) |= 8u;
                            *v54 = (unsigned __int8)((unsigned __int16)((32 * (*v54 & 0xC6)) |
                                                                        (v56 >> 11)) >>
                                                     8);
                        } else if (v55 == 2) {
                            *v54 &= 0xFEFFu;
                        }
                        *v53++ = graphics_dword_118AA0AC(v50 + 1280,
                                                         v51,
                                                         v50[228],
                                                         v50[229],
                                                         v50[228],
                                                         1,
                                                         2,
                                                         0,
                                                         0,
                                                         1,
                                                         1,
                                                         0,
                                                         0,
                                                         0,
                                                         0);
                        --v54;
                        --v184;
                    } while (v184);
                    dword_118AA09C = 0;
                }
                v57 = v50 + 1280;
                v178[16] = graphics_dword_118AA0AC(&v50[v50[229] * v50[228] + 1280],
                                                   v51,
                                                   v50[232],
                                                   v50[233],
                                                   v50[232],
                                                   1,
                                                   2,
                                                   0,
                                                   0,
                                                   1,
                                                   1,
                                                   0,
                                                   0,
                                                   1,
                                                   0);
                v58 = &v50[-(v50[233] * v50[232] * (v50[216] + 2)) + 0x8000];
                memcpy(v58, &v50[v50[229] * v50[228] + 1280], v50[233] * v50[232] * (v50[216] + 2));
                for (i = 0; i < v50[216] + 2; ++i) {
                    v59 = dword_118AA0A8(v57, v58, v51, v50[232], v50[233], v50[232], 1, 2);
                    v57 += v59;
                    *((_DWORD *)v50 + 63) = v59;
                    if (v57 > v58) {
                        v60 = (char *)text_GetStringWithIndex(0x12Cu);
                        s_noreturn_10008CF0(v60);
                    }
                    v58 += v50[233] * v50[232];
                    if (v57 - v50 > 0x8000) {
                        v61 = (char *)text_GetStringWithIndex(0x12Du);
                        s_noreturn_10008CF0(v61);
                    }
                }
                *v187++ = -1;
                ++v180;
                v178 += 22;
            } while (v180 < dword_100AA8B4);
        }
    }
    if (dword_106909E0)
        v62 = 4;
    else
        v62 = gGameMode != GAME_MODE_5 ? 0 : 4;
    v63 = flt_100AA22C[2 * v62];
    v64 = dword_100AA228[2 * v62];
    dword_106805A8 = v62;
    flt_106806D8 = v63;
    dword_10680750 = v64;
    if (!dword_106909E0) {
        v65 = 0;
        dword_118AB470 = 0;
        if (dword_100B36F8 > 0) {
            v66 = &unk_10ACD498;
            do {
                meth_100662A0(v66);
                ++v65;
                v66 += 32;
            } while (v65 < dword_100B36F8);
        }
    }
    sub_100697C0(gChosenWeather1);
    if (!*(_DWORD *)&gUnk06594.gap1C8[12500] && (!gChosenTrack || gChosenTrack == 6))
        dword_10680618 = 0;
    sub_1002B130(1.0, 0.2);
    sub_1002B1C0(1.0, 0.2);
    sub_1002B220(1.0, 0.2);
    dword_106909EC = 1;
    if (!dword_106909E0) {
        C = (unsigned int)&unk_10680950;
        sub_10036BD0((int)&unk_10680950, (int)aMiscModellight);
        _ismbbkprint(C);
    }
    sub_1003A4D0();
    sub_1006AE20();
    dword_106909B4 = 0;
    dword_106909F0 = 0;
    dword_106806E0 = -1;
    dword_106806DC = 0;
    dword_106805C0 = 0;
    *(_DWORD *)&gUnk06594.gap1C8[12544] = 1;
    if (!dword_106909E0) {
        _cfltcvt_init();
        sub_10067DC0();
    }
    *(_DWORD *)&gUnk06594.gap1C8[12460] = 0;
    if (dword_106909E0) {
        sub_1006ABB0();
    } else {
        sub_1006AA50();
        v67 = gGameMode;
        if (gGameMode == GAME_MODE_4) {
            __setargv_0();
            v67 = gGameMode;
        }
        if (byte_100BBAD8) {
            if (v67 == GAME_MODE_4 && dword_106805B8 == 2) {
                pm_sub_100027C0(12);
            } else if (v67 == GAME_MODE_4 && dword_106805B8 == 1) {
                pm_sub_100027C0(13);
            } else {
                v174 = pm_sub_100028D0();
                pm_sub_100027C0(v174);
            }
            LOBYTE(v68) = byte_100BBAD8;
            pm_sub_100029F0(v68);
        }
    }
    sub_10016910();
    meth_DebugPrint(v69);
    sub_1002C4D0();
LABEL_177:
    word_11782BC0 = 0;
    if (dword_10680750 == 4) {
        v71 = 0;
        if (dword_100B4050 > 0) {
            v72 = &stru_10ACDEA8;
            do {
                meth_100679C0(v72);
                ++v71;
                v72 = (unk00144 *)((char *)v72 + 11112);
            } while (v71 < dword_100B4050);
        }
    }
    if (gGameMode != GAME_MODE_4 && !dword_106909B4)
        dword_117554E8 ^= 1u;
    sub_10034AD5();
    dword_106909B0 = 0;
    v179 = dword_106909B4;
    dword_106909D0 = 0;
    if (dword_10680750 < 3) {
        if (gIsGameMode4) {
            v74 = dword_100B4050;
            if (dword_100B4050 > 0) {
                v75 = &dword_10ACEEB0;
                v73 = (_DWORD *)dword_100B4050;
                do {
                    *(v75 - 1) = 0;
                    *v75 = 1008981770;
                    v75 += 2778;
                    v73 = (_DWORD *)((char *)v73 - 1);
                } while (v73);
            }
        } else if (gNetworkPlay && dword_118ABDC0) {
            v74 = dword_100B4050;
            v76 = 0;
            if (dword_100B4050 > 0) {
                v77 = &dword_10ACEEB0;
                do {
                    v78 = text_GetStringWithIndex(0xEDu);
                    v74 = dword_100B4050;
                    *(v77 - 1) = (int)v78;
                    *v77 = 1008981770;
                    ++v76;
                    v77 += 2778;
                } while (v76 < v74);
            }
        } else {
            v74 = dword_100B4050;
            v79 = 0;
            if (dword_100B4050 > 0) {
                v80 = &dword_10ACEEB0;
                do {
                    v81 = text_GetStringWithIndex(0xEEu);
                    v74 = dword_100B4050;
                    *(v80 - 1) = (int)v81;
                    *v80 = 1008981770;
                    ++v79;
                    v80 += 2778;
                } while (v79 < v74);
            }
        }
        v82 = 0;
        dword_106909D0 = 1;
        if (dword_100B36F8 > 0) {
            v83 = byte_10ACD500;
            while (1) {
                *(_DWORD *)v83 |= 1u;
                v73 = (_DWORD *)*((_DWORD *)v83 - 2);
                if (v73 && v73[80] < v74) {
                    if (gGameMode == GAME_MODE_1 || gGameMode == GAME_MODE_6) {
                        v84 = gChosenWeather1 - 1;
                        if ((__int16)(gChosenWeather1 - 1) > 2 || v84 < 0)
                            v84 = 0;
                        v73[1020] = *(_DWORD *)&gTrackData[gChosenTrack]
                                         ->last[84 * v73[921] + 24 + 28 * v84];
                    }
                    v73[1024] = 1065353216;
                    if (dword_10680750) {
                        if (dword_10680750 == 2) {
                            v73 = (_DWORD *)dword_106909CC;
                            dword_106909B0 = 1;
                            if (flt_100AA1F8[dword_106909CC] > (double)flt_106806D8) {
                                if (++dword_106909CC == 4)
                                    sub_10067D90();
                                else
                                    sub_10067D80();
                            }
                        }
                    } else {
                        dword_106909B0 = -1;
                        dword_106909CC = 0;
                    }
                }
                ++v82;
                v83 += 128;
                if (v82 >= dword_100B36F8)
                    break;
                v74 = dword_100B4050;
            }
        }
        dword_106805BC = 0;
        goto LABEL_263;
    }
    switch (dword_10680750) {
    case 3:
        v73 = (_DWORD *)dword_100B36F8;
        dword_106909B0 = 1;
        dword_106909D0 = 1;
        if (dword_100B36F8 > 0) {
            v85 = byte_10ACD500;
            do {
                v86 = *(_DWORD *)v85;
                v85 += 128;
                v73 = (_DWORD *)((char *)v73 - 1);
                *((_DWORD *)v85 - 32) = v86 & 0xFFFFFFFE;
            } while (v73);
        }
        v87 = (flt_100AA22C[2 * dword_106805A8] - flt_106806D8) / flt_100AA22C[2 * dword_106805A8];
        *(float *)&dword_106805BC = v87 * v87 * 15.0;
    LABEL_263:
        if (!dword_106909B4) {
            v94 = flt_106806D8 - *(float *)&dword_106C2CFC;
            flt_106806D8 = v94;
            if (v94 < 0.0) {
            LABEL_265:
                if (gIsGameMode4) {
                    ++dword_106805A8;
                    v73 = (_DWORD *)dword_100AA228[2 * dword_106805A8];
                    flt_106806D8 = flt_100AA22C[2 * dword_106805A8];
                    dword_10680750 = (int)v73;
                }
            }
        }
        goto LABEL_272;
    case 4:
        v88 = gGameMode;
        v181 = 1;
        if (gGameMode == GAME_MODE_4) {
            if (dword_106805B8 == 2) {
                if (flt_10ACEE94 <= 140.0)
                    goto LABEL_230;
            LABEL_232:
                if (!sub_1002B2A0()) {
                    sub_1002B130(0.0, 0.2);
                    sub_1002B1C0(0.0, 0.2);
                    dword_106909F0 = 1;
                    dword_106909E0 = 0;
                    dword_106909E4 = 0;
                    v181 = 0;
                }
                v88 = gGameMode;
            LABEL_235:
                v73 = (_DWORD *)dword_100B4050;
                for (j = 0; j < (int)v73; ++j) {
                    if ((byte_10ACD500[128 * j] & 2) != 0) {
                        if (v88 == GAME_MODE_2 &&
                            *((_DWORD *)*(&dword_10AD0868 + 2778 * j) + j + 11)) {
                            if (!j &&
                                (!dword_10ACEEA0 || SLOBYTE(dword_10680738[0]) != gChosenTrack ||
                                 (int)ElementCount <= 8)) {
                                meth_DebugPrint(
                                    (void *)(*((_DWORD *)dword_10AD0868 + 13) < (int)ElementCount));
                                ElementCount = 16;
                                v90 = *((_DWORD *)dword_10AD0868 + 11);
                                dword_10680738[0] = *(int **)v90;
                                v91 = *(_DWORD *)(v90 + 4);
                                dword_10680740 = 0;
                                dword_1068073C = v91;
                                dword_10680744 = 0;
                                dword_10ACEEA4 = (int)text_GetStringWithIndex(0xEFu);
                                dword_10ACEEA8 = 1065353216;
                                CreateMinuteSecondsString(byte_10ACEEB4, flt_10ACEE94);
                                dword_10ACEEAC = (int)byte_10ACEEB4;
                                dword_10ACEEB0 = 1065353216;
                                dword_10680610 = 1;
                            }
                            *((_DWORD *)*(&dword_10AD0868 + 2778 * j) + j + 11) = 0;
                            v88 = gGameMode;
                            v73 = (_DWORD *)dword_100B4050;
                        } else if (v88 == GAME_MODE_1 || v88 == GAME_MODE_6) {
                            v92 = 0;
                            if ((int)v73 > 0) {
                                v93 = 60;
                                do {
                                    ++v92;
                                    *(_DWORD *)((char *)*(&dword_10AD0868 + 2778 * j) + v93) = *(
                                        _DWORD *)((char *)*(&dword_10AD0868 + 2778 * j) + v93 - 8);
                                    v73 = (_DWORD *)dword_100B4050;
                                    v93 += 4;
                                } while (v92 < dword_100B4050);
                                v88 = gGameMode;
                            }
                        }
                    } else {
                        v181 = 0;
                    }
                }
                if (v181)
                    goto LABEL_265;
                goto LABEL_272;
            }
            if (flt_10ACEE94 > 39.599998)
                goto LABEL_232;
        }
    LABEL_230:
        if (gGameMode == GAME_MODE_5 && flt_10ACEE94 > 16.0)
            goto LABEL_232;
        goto LABEL_235;
    case 5:
        if ((gGameMode == GAME_MODE_2 || gGameMode == GAME_MODE_1 || gGameMode == GAME_MODE_0 ||
             gGameMode == GAME_MODE_6) &&
            !dword_106909E0) {
            sub_1002F2A0();
        }
        goto LABEL_265;
    case 6:
        goto LABEL_263;
    }
    if (dword_10680750 == 7 && !dword_106909F0) {
        sub_1002B1C0(0.0, 0.2);
        if (!dword_106909E4)
            sub_1002B220(0.0, 0.2);
        sub_1002B130(0.0, 0.2);
        dword_106909F0 = 1;
    }
LABEL_272:
    meth_DebugPrint(v73);
    sub_100633E0();
    v95 = 0;
    if (dword_100B36FC > 0) {
        v96 = &stru_10ACDEA8;
        do {
            meth_100683C0(v96);
            ++v95;
            v96 = (unk00144 *)((char *)v96 + 11112);
        } while (v95 < dword_100B36FC);
    }
    v97 = dword_100B36F8;
    v98 = 0;
    if (dword_100B36F8 > 0) {
        v99 = &unk_10ACD498;
        do {
            meth_10068EF0(v99);
            v97 = dword_100B36F8;
            ++v98;
            v99 += 32;
        } while (v98 < dword_100B36F8);
    }
    if (gNetworkPlay || dword_106909E0) {
        v100 = 0;
        if (v97 > 0) {
            v101 = (char *)&unk_10ACD498;
            do {
                sub_10069330((int)v101);
                v97 = dword_100B36F8;
                ++v100;
                v101 += 128;
            } while (v100 < dword_100B36F8);
        }
    }
    v102 = 0;
    if (v97 > 0) {
        v103 = &unk_10ACD498;
        do {
            meth_10069370(v103);
            ++v102;
            v103 += 32;
        } while (v102 < dword_100B36F8);
    }
    if (gGameMode == GAME_MODE_0) {
        v104 = 0;
        if (dword_100B4050 > 0) {
            v105 = &stru_10ACDEA8;
            do {
                meth_10066650(v105);
                ++v104;
                v105 = (unk00144 *)((char *)v105 + 11112);
            } while (v104 < dword_100B4050);
        }
    }
    sub_10066510();
    if (!dword_106909B4 && dword_106909E0 != 2) {
        meth_DebugPrint(v106);
        sub_1003A530();
        meth_DebugPrint(v107);
        meth_100196D0(v108);
        if (dword_10680618 && !dword_10680624 &&
            (!*(_DWORD *)&gUnk06594.gap1C8[12508] && !*(_DWORD *)&gUnk06594.gap1C8[12504] &&
                 !*(_DWORD *)&gUnk06594.gap1C8[12500] ||
             gChosenTrack != 2 && gChosenTrack != 8) &&
            dword_100B4050 > 0) {
            v109 = 0;
            v110 = (int *)&unk_10AD07F4;
            v188 = dword_100B4050;
            do {
                v111 = 0;
                if (*v110 > 0) {
                    while (*(v110 - 1641) != dword_10680620 ||
                           (unsigned __int16)word_10AD07B4[v111 + v109] != dword_1068061C) {
                        if (++v111 >= *v110)
                            goto LABEL_307;
                    }
                    dword_10680624 = 1;
                }
            LABEL_307:
                v109 += 5556;
                v110 += 2778;
                --v188;
            } while (v188);
        }
        v112 = 0;
        if (*(int *)&gUnk06594.gap4A2C[192] > 0) {
            v113 = dword_10680628;
            v114 = (float *)gUnk06594.gap4A2C;
            do {
                switch (*((_BYTE *)v114 + 8)) {
                case 0:
                    sub_10030EE0((int)flt_106C08E0, v114[1], 0.0, 0.0, 1.0);
                    goto LABEL_314;
                case 1:
                    sub_10030EE0((int)flt_106C08E0, v114[1], 1.0, 0.0, 0.0);
                    goto LABEL_314;
                case 2:
                    sub_10030EE0((int)flt_106C08E0, v114[1], 0.0, 1.0, 0.0);
                LABEL_314:
                    sub_100306C0(
                        flt_106C08E0,
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * *(_DWORD *)v114),
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * *(_DWORD *)v114));
                    *(_WORD *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * *(_DWORD *)v114 + 76) &=
                        0xDFFFu;
                    goto LABEL_337;
                case 3:
                    if (!dword_10680618 || !dword_10680624)
                        goto LABEL_338;
                    if (gChosenTrack == 1 || gChosenTrack == 7)
                        v115 = *(float *)&dword_106C2CFC * -18.0;
                    else
                        v115 = *(float *)&dword_106C2CFC * -50.0;
                    *(float *)&dword_1068063C = *(float *)&dword_1068063C - v115;
                    if (*(float *)&dword_1068063C <= (double)*(float *)&dword_10680640)
                        goto LABEL_332;
                    break;
                default:
                    goto LABEL_338;
                }
                while (1) {
                    dword_10680628 = ++v113;
                    *(float *)&dword_1068063C =
                        *(float *)&dword_1068063C - *(float *)&dword_10680640;
                    if (v113 >= dword_1068062C)
                        break;
                    sub_1003B050((float *)v193,
                                 (float *)(dword_10680634 + 12 * v113 - 12),
                                 (float *)(dword_10680638 + 12 * v113 - 12));
                    sub_1003B050((float *)v192,
                                 (float *)(12 * dword_10680628 + dword_10680634),
                                 (float *)(12 * dword_10680628 + dword_10680638));
                    *(float *)&dword_10680640 = sub_1003B0E0((float *)v193, (float *)v192);
                    sub_1003AEE0((float *)&dword_10680650, (float *)v192, (float *)v193);
                    sub_1003AE50((float *)&dword_10680650);
                    v113 = dword_10680628;
                    if (dword_10680628 >= 2) {
                        sub_1003B050(v194,
                                     (float *)(12 * (dword_10680628 - 2) + dword_10680634),
                                     (float *)(12 * (dword_10680628 - 2) + dword_10680638));
                        sub_1003AEE0((float *)&dword_10680644, (float *)v193, v194);
                        sub_1003AE50((float *)&dword_10680644);
                        v113 = dword_10680628;
                    } else {
                        dword_10680644 = dword_10680650;
                        dword_10680648 = dword_10680654;
                        dword_1068064C = dword_10680658;
                    }
                    if (v113 + 1 == dword_1068062C) {
                        dword_1068065C = dword_10680650;
                        dword_10680660 = dword_10680654;
                        dword_10680664 = dword_10680658;
                    } else {
                        sub_1003B050(v194,
                                     (float *)(12 * (v113 + 1) + dword_10680634),
                                     (float *)(12 * (v113 + 1) + dword_10680638));
                        sub_1003AEE0((float *)&dword_1068065C, v194, (float *)v192);
                        sub_1003AE50((float *)&dword_1068065C);
                        v113 = dword_10680628;
                    }
                    if (*(float *)&dword_1068063C <= (double)*(float *)&dword_10680640)
                        goto LABEL_332;
                }
                dword_10680618 = 0;
            LABEL_332:
                if (dword_10680618) {
                    v182 = *(float *)&dword_1068063C / *(float *)&dword_10680640;
                    sub_1003AFA0((int)v193,
                                 dword_10680634 + 12 * v113,
                                 dword_10680634 + 12 * v113 - 12,
                                 v182);
                    sub_1003AFA0((int)v192,
                                 dword_10680638 + 12 * dword_10680628,
                                 dword_10680638 + 12 * dword_10680628 - 12,
                                 v182);
                    sub_1003B050((float *)(*(_DWORD *)&gUnk06594.gap4918[16] +
                                           84 * (_DWORD)dword_10680618 + 48),
                                 (float *)v193,
                                 (float *)v192);
                    v117 = v182;
                    if (v118 | v119) {
                        v176 = v117 - -0.5;
                        sub_1003AFA0(*(_DWORD *)&gUnk06594.gap4918[16] +
                                         84 * (_DWORD)dword_10680618,
                                     (int)&dword_10680650,
                                     (int)&dword_10680644,
                                     v176);
                    } else {
                        v175 = v117 - 0.5;
                        sub_1003AFA0(*(_DWORD *)&gUnk06594.gap4918[16] +
                                         84 * (_DWORD)dword_10680618,
                                     (int)&dword_1068065C,
                                     (int)&dword_10680650,
                                     v175);
                    }
                    sub_1003AE50(
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618));
                    sub_1003AEE0((float *)(*(_DWORD *)&gUnk06594.gap4918[16] +
                                           84 * (_DWORD)dword_10680618 + 32),
                                 (float *)v193,
                                 (float *)v192);
                    sub_1003AC30(
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 +
                                  16),
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618),
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 +
                                  32));
                    sub_1003AE50((float *)(*(_DWORD *)&gUnk06594.gap4918[16] +
                                           84 * (_DWORD)dword_10680618 + 16));
                    sub_1003AC30(
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 +
                                  32),
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 +
                                  16),
                        (float *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618));
                    sub_1003AE50((float *)(*(_DWORD *)&gUnk06594.gap4918[16] +
                                           84 * (_DWORD)dword_10680618 + 32));
                    sub_1003AD10(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618,
                                 flt_10680630);
                    v177 = -flt_10680630;
                    sub_1003AD10(
                        *(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 + 32, v177);
                    sub_1003AD10(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 +
                                     16,
                                 flt_10680630);
                LABEL_337:
                    v113 = dword_10680628;
                }
            LABEL_338:
                ++v112;
                v114 += 3;
            } while (v112 < *(int *)&gUnk06594.gap4A2C[192]);
        }
    }
    v120 = 0;
    if (dword_100B36FC > 0) {
        v121 = &stru_10ACDEA8;
        do {
            meth_10068400(v121);
            ++v120;
            v121 = (unk00144 *)((char *)v121 + 11112);
        } while (v120 < dword_100B36FC);
    }
    sub_10067DA0();
    v189 = 0;
    if (dword_100AA8B4 > 0) {
        v122 = &dword_106C1638;
        do {
            v123 = dword_10680618;
            v124 = dword_10AD05DC[2778 * *v122];
            if (dword_10680618 && dword_10680624) {
                sub_10068180(
                    (int)dword_10680618,
                    (int *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * (_DWORD)dword_10680618 + 48),
                    dword_10AD05DC[2778 * *v122]);
                v123 = dword_10680618;
            }
            v125 = 0;
            if (v124) {
                v126 = dword_106805D0;
                while (v125 < dword_10680940) {
                    sub_10068210((int)v123,
                                 (int *)(*(_DWORD *)&gUnk06594.gap4918[16] + 84 * *v126 + 48),
                                 v124);
                    v123 = dword_10680618;
                    ++v125;
                    ++v126;
                }
            }
            meth_DebugPrint(v123);
            v122 += 22;
            ++v189;
        } while (v189 < dword_100AA8B4);
    }
    sub_10067ED0();
    meth_1002C320(v127);
    v128 = sub_100169B0();
    v129 = 0;
    v186 = v128;
    for (k = 0;; k += 11112) {
    LABEL_353:
        v131 = dword_100B36FC;
        if (!dword_100B36FC)
            v131 = 1;
        if (v129 >= v131)
            break;
        v132 = 188656 * v128 + k;
        qmemcpy((char *)flt_1039C168 + v132, &stru_10ACDEA8.gap0[k], 0x2B68u);
        v133 = (char *)dword_10AD05DC[k / 4];
        if (v133) {
            if (v133 == (char *)&unk_10AD05E4 + k) {
                *(int *)((char *)&dword_1039E89C + v132) = (int)&flt_1039E8A4 + v132;
            } else if (v133 == (char *)&unk_10AD0738 + k) {
                *(int *)((char *)&dword_1039E89C + v132) = (int)&unk_1039E9F8 + v132;
            } else if (v133 == (char *)&unk_10AD0628 + k) {
                *(int *)((char *)&dword_1039E89C + v132) = (int)&flt_1039E8E8 + v132;
            } else if (v133 == (char *)&unk_10AD066C + k) {
                *(int *)((char *)&dword_1039E89C + v132) = (int)&flt_1039E92C + v132;
            } else if (v133 == (char *)&unk_10AD06B0 + k) {
                *(int *)((char *)&dword_1039E89C + v132) = (int)&flt_1039E970 + v132;
            } else {
                *(int *)((char *)&dword_1039E89C + v132) = 0;
            }
        }
        v134 = (char *)dword_10AD05E0[k / 4];
        if (v134) {
            if (v134 == (char *)&unk_10AD05E4 + k) {
                ++v129;
                *(int *)((char *)&dword_1039E8A0 + v132) = (int)&flt_1039E8A4 + v132;
                k += 11112;
                goto LABEL_353;
            }
            if (v134 == (char *)&unk_10AD0738 + k) {
                ++v129;
                *(int *)((char *)&dword_1039E8A0 + v132) = (int)&unk_1039E9F8 + v132;
                k += 11112;
                goto LABEL_353;
            }
            if (v134 == (char *)&unk_10AD0628 + k) {
                ++v129;
                *(int *)((char *)&dword_1039E8A0 + v132) = (int)&flt_1039E8E8 + v132;
                k += 11112;
                goto LABEL_353;
            }
            if (v134 == (char *)&unk_10AD066C + k) {
                ++v129;
                *(int *)((char *)&dword_1039E8A0 + v132) = (int)&flt_1039E92C + v132;
                k += 11112;
                goto LABEL_353;
            }
            if (v134 == (char *)&unk_10AD06B0 + k) {
                ++v129;
                *(int *)((char *)&dword_1039E8A0 + v132) = (int)&flt_1039E970 + v132;
                k += 11112;
                goto LABEL_353;
            }
            *(int *)((char *)&dword_1039E8A0 + v132) = 0;
        }
        ++v129;
    }
    if (dword_100B36F8 > 0) {
        v183 = &dword_10ACD4F8;
        v190 = dword_100B36F8;
        v135 = 47164 * v128;
        v136 = (_DWORD *)((char *)&unk_1039B7C4 + 188656 * v186);
        do {
            v137 = *v183;
            v31 = *v183 == 0;
            qmemcpy(v136 - 24, v183 - 24, 0x80u);
            if (!v31)
                *v136 = &flt_1039C168[2778 * ((v137 - (int)&stru_10ACDEA8) / 11112) + v135];
            v136 += 32;
            v31 = v190 == 1;
            v183 += 32;
            --v190;
        } while (!v31);
    }
    qmemcpy((char *)&unk_103C77E8 + 188656 * v186, dword_106C1628, 0x58u);
    sub_1003A610(&word_103C7844[94328 * v186]);
    if (dword_100A66E8) {
        dword_10680948 = GetTicks();
        dword_106805C4 = 0;
        dword_100A66E8 = 0;
        dword_106909F8 = 0;
    } else {
        v171 = 1;
        v49 = dword_106805C4 + 1 <= 2;
        dword_10680948 += dword_100AA268[dword_106805C4++];
        if (!v49)
            dword_106805C4 = 0;
        if (++dword_106909F8 <= 3) {
            v172 = GetTicks();
        LABEL_562:
            v173 = dword_106909FC;
            while ((v172 < dword_10680948 || v172 > v173 + 333) && v171) {
                v171 = sub_10015C70(v173 + 333 < v172);
                v172 = GetTicks();
                if (!v171)
                    goto LABEL_562;
                v173 = v172;
                dword_106909F8 = 0;
                dword_106909FC = v172;
            }
        } else if (sub_10015C70(1)) {
            dword_106909F8 = 0;
            dword_106909FC = GetTicks();
        }
    }
    if (dword_106909B4 != 2) {
        if (!dword_106909B4) {
            if (gGameMode == GAME_MODE_4 || gGameMode == GAME_MODE_5) {
                if (!sub_1002B2A0()) {
                    v143 = (int *)&gUnk06594.gap1C8[12592];
                    do {
                        if ((dword_118ABAD0 & 0x4000) != 0) {
                            meth_10035FA0(v143, 49168);
                            dword_10680938 = 1;
                            dword_106909F0 = 1;
                            dword_106909E4 = 0;
                            sub_1002B1C0(0.0, 0.2);
                            sub_1002B130(0.0, 0.2);
                        }
                        v143 += 87;
                    } while ((int)v143 < (int)&gUnk06594.gap1C8[13288]);
                }
            } else {
                v142 = 0;
                if (dword_100B4050 > 0) {
                    while (!dword_1022AF20) {
                        if (++v142 >= dword_100B4050)
                            goto LABEL_469;
                    }
                    dword_1022AF20 = 0;
                    if (dword_106909E0) {
                        sub_1002B130(0.0, 0.2);
                        dword_106909E4 = 0;
                        dword_106909F0 = 1;
                    } else {
                        v179 = 1;
                        dword_10680734 = 0;
                    }
                    sub_1002B1C0(0.0, 0.2);
                    sub_1002B220(0.0, 0.2);
                    meth_10035FA0((int *)dword_10AD0868, 0x4000);
                    meth_10035FA0((int *)dword_10AD33D0, 0x4000);
                }
            }
            goto LABEL_469;
        }
        v138 = 0;
        if (dword_100B4050 <= 0)
            goto LABEL_451;
        v139 = dword_10680734;
        v140 = (int **)&dword_10AD0868;
        while (1) {
            if ((dword_118ABAD0 & 0x8000) != 0 || !v139 && (dword_118ABAD0 & 4) != 0 &&
                                                      (dword_118ABAD0 & 0x3000) == 0 &&
                                                      (dword_118ABAD0 & 3) == 0) {
                if (v139 || (*(_BYTE *)*v140 & 0x10) == 0) {
                    meth_10035FA0(*v140, 49168);
                    v139 = dword_10680734;
                }
                switch (v139) {
                case 0:
                    if (gNetworkPlay && gIsGameMode4) {
                        atomic_sub_10004C20();
                    } else {
                        sub_1002B1C0(1.0, 0.2);
                        sub_1002B220(1.0, 0.2);
                        dword_106909BC = 2;
                        v179 = 0;
                    }
                    goto LABEL_427;
                case 1:
                    sub_1002B130(0.0, 0.2);
                    dword_106909F0 = 0;
                    dword_106909E4 = 0;
                    dword_106909EC = 0;
                    sub_1002C4A0();
                    gIsGameMode4 = 0;
                    pm_100734F0();
                    sub_10016990();
                    goto LABEL_427;
                case 4:
                    sub_1002B130(0.0, 0.2);
                    sub_1002B1C0(0.0, 0.2);
                    sub_1002B220(0.0, 0.2);
                    dword_106909E4 = 0;
                    dword_106909F0 = 1;
                    if (byte_100BBAD8) {
                        pm_sub_10002BD0();
                        LOBYTE(v141) = byte_100BBAD8;
                        pm_sub_100029F0(v141);
                    }
                    if (gGameMode == GAME_MODE_6) {
                        sub_1003DAE0();
                        atomic_sub_100060C0();
                    }
                LABEL_427:
                    v139 = dword_10680734;
                    break;
                case 5:
                    v139 = 1;
                    v179 = 2;
                    dword_106909B4 = 2;
                    dword_10680734 = 1;
                    break;
                default:
                    break;
                }
            }
            if (dword_106909D8) {
                dword_106909D8 = 0;
                sub_1002B1C0(1.0, 0.2);
                sub_1002B220(1.0, 0.2);
                v139 = dword_10680734;
                dword_106909BC = 2;
                v179 = 0;
            }
            if ((dword_118ABAD0 & 0x1000) != 0) {
                v139 = (v139 + 5) % 6;
                dword_10680734 = v139;
                if (gNetworkPlay) {
                    if (v139 == 1) {
                        v139 = 0;
                        dword_10680734 = 0;
                    }
                }
            }
            if ((dword_118ABAD0 & 0x2000) != 0) {
                v139 = (v139 + 1) % 6;
                dword_10680734 = v139;
                if (gNetworkPlay) {
                    if (v139 == 1) {
                        v139 = 2;
                        dword_10680734 = 2;
                    }
                }
            }
            if ((dword_118ABAD0 & 1) != 0) {
                if (v139 == 2) {
                    sub_10060D70();
                } else {
                    if (v139 != 3)
                        goto LABEL_444;
                    sub_10060DE0();
                }
                v139 = dword_10680734;
            }
        LABEL_444:
            if ((dword_118ABAD0 & 2) != 0) {
                if (v139 == 2) {
                    sub_10060D50();
                    goto LABEL_449;
                }
                if (v139 == 3) {
                    sub_10060DC0();
                LABEL_449:
                    v139 = dword_10680734;
                    goto LABEL_450;
                }
            }
        LABEL_450:
            ++v138;
            v140 += 2778;
            if (v138 >= dword_100B4050)
                goto LABEL_451;
        }
    }
    if ((dword_118ABAD0 & 0x8000) != 0) {
        if (dword_10680734) {
            if (dword_10680734 == 1) {
                if (gNetworkPlay && gIsGameMode4) {
                    atomic_sub_10004C20();
                } else {
                    sub_1002B1C0(1.0, 0.2);
                    sub_1002B220(1.0, 0.2);
                    dword_106909BC = 2;
                    v179 = 0;
                }
            }
        } else {
            sub_1002B130(0.0, 0.2);
            sub_1002B1C0(0.0, 0.2);
            sub_1002B220(0.0, 0.2);
            dword_106909E4 = 0;
            dword_106909F0 = 2;
        }
    }
    if ((dword_118ABAD0 & 0x1000) != 0)
        dword_10680734 = 1 - dword_10680734;
    if ((dword_118ABAD0 & 0x2000) != 0)
        dword_10680734 = 1 - dword_10680734;
    if (dword_106909D8) {
        dword_106909D8 = 0;
        sub_1002B1C0(1.0, 0.2);
        sub_1002B220(1.0, 0.2);
        dword_106909BC = 2;
        v179 = 0;
        if (gNetworkPlay && gIsGameMode4)
            goto LABEL_404;
        goto LABEL_469;
    }
LABEL_451:
    if (gNetworkPlay && gIsGameMode4)
    LABEL_404:
        np_sub_10005090();
LABEL_469:
    if (gGameMode == GAME_MODE_4) {
        if (dword_106805B8 == 2)
            sub_1002C410();
        if (gGameMode == GAME_MODE_4 && dword_106805B8 == 1) {
            if ((&off_100AA018)[8 * dword_106805C0]) {
                v144 = *(float *)&dword_106806DC + *(float *)&dword_106C2CFC;
                *(float *)&dword_106806DC = v144;
                if (v144 > flt_100AA01C[8 * dword_106805C0]) {
                    dword_106806DC = 0;
                    ++dword_106805C0;
                }
            }
        }
    }
    if (!sub_1002B2A0() || !sub_1002B2D0())
        goto LABEL_533;
    v145 = dword_100B4050;
    v146 = &dword_10AD0868;
    do {
        v147 = 0;
        if (v145 > 0) {
            v148 = 60;
            do {
                ++v147;
                *(_DWORD *)((char *)*v146 + v148) = *(_DWORD *)((char *)*v146 + v148 - 8);
                v145 = dword_100B4050;
                v148 += 4;
            } while (v147 < dword_100B4050);
        }
        v146 += 2778;
    } while ((int)v146 < (int)&unk_10AFBEE8);
    dword_118290F4 = 0;
    v149 = 0;
    v150 = dword_118AC730;
    do {
        v150[1] = 0;
        *v150 = 0;
        *(v150 - 2) = 0;
        *(v150 - 1) = 0;
        *(v150 - 4) = (int)&unk_118AC70C;
        sub_10072580(v149);
        v150 += 6;
        ++v149;
    } while ((int)v150 < (int)&unk_118AC898);
    *(_DWORD *)&gUnk06594.gap1C8[12544] = 0;
    if (!dword_106909F0)
        goto LABEL_531;
    if (!dword_106909E4) {
        sub_1003348E();
        dword_106C3364 = 0;
        if (gGameMode == GAME_MODE_5) {
            if (*((_BYTE *)dword_10ACED34 + 4)) {
                gGameMode = GAME_MODE_0;
                sub_1002F460();
                byte_11782DDC = 1;
                sub_10034C66((int)sub_10071120);
            } else {
                sub_1002C390();
            }
            goto LABEL_527;
        }
        if (gGameMode != GAME_MODE_4 || dword_106805B8 != 2) {
            if (dword_106909B8 && (gGameMode == GAME_MODE_2 || gGameMode == GAME_MODE_1 ||
                                   gGameMode == GAME_MODE_0 || gGameMode == GAME_MODE_6)) {
                sub_1002F320();
                sub_10034C66((int)sub_10002140);
            LABEL_527:
                v165 = 0;
                goto LABEL_528;
            }
            if ((gGameMode != GAME_MODE_4 ||
                 dword_106805B8 != 1 && (dword_106805B8 || dword_10680938)) &&
                dword_106909F0 == 2) {
                if (*(_DWORD *)&gUnk06594.gap1C8[8584] != dword_10B4E708 ||
                    dword_106C29A4 != dword_10B4E70C)
                    meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
                cleanUpAndExitWithCode(0);
            }
        }
        sub_10034C66((int)sub_10039000);
        goto LABEL_527;
    }
    if (!dword_106909E0) {
        v151 = dword_100B4050;
        v152 = 1;
        v153 = *((_DWORD *)dword_10AD0868 + 13);
        dword_106909C8 = v153;
        dword_10680668 = 0;
        if (dword_100B4050 > 1) {
            v154 = 56;
            v155 = &dword_10AD33D0;
            do {
                v156 = *(_DWORD *)(*v155 + v154);
                if (v153 > v156) {
                    v153 = *(_DWORD *)(*v155 + v154);
                    dword_10680668 = v152;
                    dword_106909C8 = v156;
                }
                ++v152;
                v154 += 4;
                v155 += 2778;
            } while (v152 < dword_100B4050);
        }
        v157 = 0;
        if (dword_100B4050 > 0) {
            v158 = &dword_10AD0868;
            v159 = 4 * dword_10680668 + 44;
            v191 = 4 * dword_10680668 + 52;
            do {
                v160 = (char *)*v158;
                ++v157;
                v158 += 2778;
                dword_1068066C[v157] = *(_DWORD *)&v160[v159];
                dword_106806E4[v157] = *(_DWORD *)&v160[v191];
            } while (v157 < v151);
            v161 = 0;
            if (v151 > 0) {
                v162 = &dword_10AD0868;
                do {
                    v163 = 0;
                    if (v151 > 0) {
                        v164 = 44;
                        do {
                            meth_DebugPrint((void *)v157);
                            v157 = (int)*v162;
                            ++v163;
                            *(_DWORD *)((char *)*v162 + v164) = 0;
                            v151 = dword_100B4050;
                            v164 += 4;
                        } while (v163 < dword_100B4050);
                    }
                    ++v161;
                    v162 += 2778;
                } while (v161 < v151);
            }
        }
        meth_DebugPrint((void *)v157);
    }
    v165 = 1;
LABEL_528:
    dword_106909E0 = v165;
    dword_106909EC = 0;
    if (!v165)
        sub_1002C4A0();
    sub_10016990();
LABEL_531:
    word_11782BC0 = 1;
    v166 = &dword_10AD0868;
    do {
        v167 = *v166;
        v166 += 2778;
        v167[17] = 0;
    } while ((int)v166 < (int)&unk_10AFBEE8);
LABEL_533:
    if (dword_106909B4 != v179) {
        if (v179) {
            sub_10067980();
            pm_sub_10002B70();
            sound_10072E00();
            sub_100683D0();
        } else {
            sub_100679A0();
            if (byte_100BBAD8) {
                pm_sub_10002BD0();
                LOBYTE(v168) = byte_100BBAD8;
                pm_sub_100029F0(v168);
            }
        }
        dword_106909B4 = v179;
    }
    if (gGameMode == GAME_MODE_6)
        atomic_sub_100060F0();
    v169 = *(_DWORD *)(dword_10ACE010 + 436) || *(_DWORD *)(dword_10ACE014 + 436);
    input_10078F20((unsigned __int8)byte_10ACE215, v169, dword_10ACED38);
    if (gPlaysfx && !dword_106909B4)
        sub_10072E60();
    if (dword_106909E0)
        sub_1006AD10();
    else
        sub_1006AB20();
    sub_10017740();
    result = sub_10075150();
    if (!gIsGameMode4) {
        if (gNetworkPlay)
            np_sub_10006160();
        result = sub_10075100();
    }
    return result;
}
// 1002C5AA: variable 'v8' is possibly undefined
// 1002C5AF: variable 'v9' is possibly undefined
// 1002C601: variable 'v11' is possibly undefined
// 1002CCF9: variable 'v28' is possibly undefined
// 1002CCFE: variable 'v29' is possibly undefined
// 1002CD88: variable 'v33' is possibly undefined
// 1002CE1D: variable 'v34' is possibly undefined
// 1002D5DD: variable 'v68' is possibly undefined
// 1002D5EA: variable 'v69' is possibly undefined
// 1002DC0D: variable 'v73' is possibly undefined
// 1002DD1A: variable 'v106' is possibly undefined
// 1002DD38: variable 'v107' is possibly undefined
// 1002DD40: variable 'v108' is possibly undefined
// 1002E168: variable 'v118' is possibly undefined
// 1002E168: variable 'v119' is possibly undefined
// 1002E40B: variable 'v127' is possibly undefined
// 1002E951: variable 'v141' is possibly undefined
// 1002EF64: variable 'v168' is possibly undefined
// 100A66E8: using guessed type int dword_100A66E8;
// 100A73A8: using guessed type int dword_100A73A8[];
// 100AA008: using guessed type int dword_100AA008;
// 100AA00C: using guessed type int dword_100AA00C;
// 100AA018: using guessed type char (*off_100AA018)[8];
// 100AA01C: using guessed type float flt_100AA01C[];
// 100AA228: using guessed type int dword_100AA228[];
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int gChosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100B5DE8: using guessed type int gPlaysfx;
// 100B8C94: using guessed type int (*off_100B8C94)(void);
// 100BBAD8: using guessed type char byte_100BBAD8;
// 1022AF14: using guessed type int gIsGameMode4;
// 1022AF18: using guessed type int gNetworkPlay;
// 1022AF1C: using guessed type int dword_1022AF1C;
// 1022AF20: using guessed type int dword_1022AF20;
// 1022B34C: using guessed type int gChosenCar;
// 1022B350: using guessed type int gChosenWeather0;
// 1039C168: using guessed type float flt_1039C168[];
// 1039E89C: using guessed type int dword_1039E89C;
// 1039E8A0: using guessed type int dword_1039E8A0;
// 1039E8A4: using guessed type float flt_1039E8A4;
// 1039E8E8: using guessed type float flt_1039E8E8;
// 1039E92C: using guessed type float flt_1039E92C;
// 1039E970: using guessed type float flt_1039E970;
// 104BBE08: using guessed type int gChosenWeather1;
// 106805A8: using guessed type int dword_106805A8;
// 106805B8: using guessed type int dword_106805B8;
// 106805BC: using guessed type int dword_106805BC;
// 106805C0: using guessed type int dword_106805C0;
// 106805C4: using guessed type int dword_106805C4;
// 10680610: using guessed type int dword_10680610;
// 1068061C: using guessed type int dword_1068061C;
// 10680620: using guessed type int dword_10680620;
// 10680624: using guessed type int dword_10680624;
// 10680628: using guessed type int dword_10680628;
// 1068062C: using guessed type int dword_1068062C;
// 10680634: using guessed type int dword_10680634;
// 10680638: using guessed type int dword_10680638;
// 1068063C: using guessed type int dword_1068063C;
// 10680640: using guessed type int dword_10680640;
// 10680644: using guessed type int dword_10680644;
// 10680648: using guessed type int dword_10680648;
// 1068064C: using guessed type int dword_1068064C;
// 10680650: using guessed type int dword_10680650;
// 10680654: using guessed type int dword_10680654;
// 10680658: using guessed type int dword_10680658;
// 1068065C: using guessed type int dword_1068065C;
// 10680660: using guessed type int dword_10680660;
// 10680664: using guessed type int dword_10680664;
// 10680668: using guessed type int dword_10680668;
// 106806D8: using guessed type float flt_106806D8;
// 106806DC: using guessed type int dword_106806DC;
// 106806E0: using guessed type int dword_106806E0;
// 10680734: using guessed type int dword_10680734;
// 1068073C: using guessed type int dword_1068073C;
// 10680740: using guessed type int dword_10680740;
// 10680744: using guessed type int dword_10680744;
// 10680750: using guessed type int dword_10680750;
// 10680938: using guessed type int dword_10680938;
// 1068093C: using guessed type int dword_1068093C;
// 10680940: using guessed type int dword_10680940;
// 10680948: using guessed type int dword_10680948;
// 106909B0: using guessed type int dword_106909B0;
// 106909B4: using guessed type int dword_106909B4;
// 106909B8: using guessed type int dword_106909B8;
// 106909BC: using guessed type int dword_106909BC;
// 106909C8: using guessed type int dword_106909C8;
// 106909CC: using guessed type int dword_106909CC;
// 106909D0: using guessed type int dword_106909D0;
// 106909D4: using guessed type int dword_106909D4;
// 106909D8: using guessed type int dword_106909D8;
// 106909E0: using guessed type int dword_106909E0;
// 106909E4: using guessed type int dword_106909E4;
// 106909E8: using guessed type int gTicks;
// 106909EC: using guessed type int dword_106909EC;
// 106909F0: using guessed type int dword_106909F0;
// 106909F4: using guessed type int gNeedToPlayIntro2;
// 106909F8: using guessed type int dword_106909F8;
// 106909FC: using guessed type int dword_106909FC;
// 106C1638: using guessed type int dword_106C1638;
// 106C1690: using guessed type int dword_106C1690;
// 106C29A4: using guessed type int dword_106C29A4;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 106C3364: using guessed type int dword_106C3364;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
// 10ACDFEC: using guessed type int dword_10ACDFEC[];
// 10ACE010: using guessed type int dword_10ACE010;
// 10ACE014: using guessed type int dword_10ACE014;
// 10ACE215: using guessed type char byte_10ACE215;
// 10ACED30: using guessed type int dword_10ACED30;
// 10ACED38: using guessed type int dword_10ACED38;
// 10ACED3C: using guessed type int dword_10ACED3C[];
// 10ACED40: using guessed type int dword_10ACED40;
// 10ACED44: using guessed type int dword_10ACED44;
// 10ACEEA0: using guessed type int dword_10ACEEA0;
// 10ACEEA4: using guessed type int dword_10ACEEA4;
// 10ACEEA8: using guessed type int dword_10ACEEA8;
// 10ACEEAC: using guessed type int dword_10ACEEAC;
// 10ACEEB0: using guessed type int dword_10ACEEB0;
// 10AD05DC: using guessed type int dword_10AD05DC[];
// 10AD05E0: using guessed type int dword_10AD05E0[];
// 10AD061C: using guessed type float flt_10AD061C;
// 10AD084C: using guessed type int dword_10AD084C[];
// 10AD18A0: using guessed type int dword_10AD18A0;
// 10AD18A4: using guessed type int dword_10AD18A4;
// 10AD18A8: using guessed type int dword_10AD18A8;
// 10AD18AC: using guessed type int dword_10AD18AC;
// 10AD33C4: using guessed type int dword_10AD33C4;
// 10AD33D0: using guessed type int dword_10AD33D0;
// 10AF9BB0: using guessed type int dword_10AF9BB0;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
// 10B501C8: using guessed type int (*dword_10B501C8)(void);
// 10B501CC: using guessed type int (*dword_10B501CC)(void);
// 117554E8: using guessed type int dword_117554E8;
// 11782BC0: using guessed type __int16 word_11782BC0;
// 11782DDC: using guessed type char byte_11782DDC;
// 118290F4: using guessed type int dword_118290F4;
// 118AA09C: using guessed type int dword_118AA09C;
// 118AA0A8: using guessed type int (__cdecl *dword_118AA0A8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 118AA0AC: using guessed type int (__cdecl *graphics_dword_118AA0AC)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 118AA0D0: using guessed type int (*dword_118AA0D0)(void);
// 118AB470: using guessed type int dword_118AB470;
// 118ABAD0: using guessed type int dword_118ABAD0;
// 118ABDC0: using guessed type int dword_118ABDC0;
// 118AC730: using guessed type int dword_118AC730[];
