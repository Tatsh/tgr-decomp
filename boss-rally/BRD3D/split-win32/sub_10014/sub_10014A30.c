#include "types-win32.h"
//----- (10014A30) --------------------------------------------------------
int __cdecl sub_10014A30(int a1) {
    int *v1;         // ebp
    void *v2;        // ecx
    void *v3;        // ecx
    int v4;          // eax
    void *v5;        // ecx
    int v6;          // edi
    int *v7;         // esi
    int v8;          // eax
    void *v9;        // ecx
    int v10;         // edi
    int v11;         // ebx
    void *v12;       // ecx
    void *v13;       // ecx
    void *v14;       // ecx
    int v15;         // edi
    float *v16;      // ebx
    float v17;       // eax
    void *v18;       // ecx
    void *v19;       // ecx
    void *v20;       // ecx
    int v21;         // edi
    float *v22;      // ebx
    float v23;       // eax
    void *v24;       // ecx
    int v25;         // edi
    float *v26;      // ebx
    float *v27;      // ecx
    int v28;         // edi
    float *v29;      // ebx
    float v30;       // eax
    void *v31;       // ecx
    void *v32;       // ecx
    int v33;         // ecx
    int v34;         // edi
    int v35;         // ecx
    int v36;         // ebp
    void *v37;       // ecx
    void *v38;       // ecx
    int v39;         // ebx
    void *v40;       // ecx
    void *v41;       // ecx
    int v42;         // ebx
    float v43;       // eax
    void *v44;       // ecx
    void *v45;       // ecx
    int v46;         // ebx
    float v47;       // eax
    void *v48;       // ecx
    int v49;         // ebx
    int v50;         // ebx
    float v51;       // eax
    void *v52;       // ecx
    char *v53;       // eax
    char *v54;       // eax
    void *v55;       // ecx
    void *v56;       // ecx
    int v57;         // esi
    char *v58;       // eax
    int v59;         // edi
    char *v60;       // eax
    int v61;         // edi
    char *v62;       // eax
    int v63;         // edi
    char *v64;       // eax
    char *v65;       // eax
    int v66;         // edi
    char *v67;       // eax
    int v68;         // edi
    char *v69;       // eax
    int v70;         // edi
    char *v71;       // eax
    const char *v72; // eax
    int v73;         // edi
    char *v74;       // eax
    const char *v75; // eax
    int v76;         // edi
    char *v77;       // eax
    int v78;         // esi
    char(**v79)[8];  // eax
    int v80;         // ebx
    int v81;         // esi
    int v82;         // edi
    void *v83;       // ecx
    void *v84;       // ecx
    void *v85;       // ecx
    float v87;       // [esp+0h] [ebp-40h]
    float v88;       // [esp+0h] [ebp-40h]
    float v89;       // [esp+4h] [ebp-3Ch]
    float v90;       // [esp+4h] [ebp-3Ch]
    float v91;       // [esp+4h] [ebp-3Ch]
    float v92;       // [esp+4h] [ebp-3Ch]
    float v93;       // [esp+8h] [ebp-38h]
    float v94;       // [esp+8h] [ebp-38h]
    float v95;       // [esp+8h] [ebp-38h]
    float v96;       // [esp+8h] [ebp-38h]
    int v97;         // [esp+8h] [ebp-38h]
    char *v98;       // [esp+8h] [ebp-38h]
    char *v99;       // [esp+8h] [ebp-38h]
    _WORD *v100;     // [esp+Ch] [ebp-34h]
    float v101;      // [esp+Ch] [ebp-34h]
    float v102;      // [esp+Ch] [ebp-34h]
    float v103;      // [esp+Ch] [ebp-34h]
    float v104;      // [esp+Ch] [ebp-34h]
    float v105;      // [esp+Ch] [ebp-34h]
    float v106;      // [esp+Ch] [ebp-34h]
    int v107;        // [esp+Ch] [ebp-34h]
    int v108;        // [esp+Ch] [ebp-34h]
    int v109;        // [esp+Ch] [ebp-34h]
    int v110;        // [esp+Ch] [ebp-34h]
    int v111;        // [esp+Ch] [ebp-34h]
    float *v112;     // [esp+20h] [ebp-20h]
    int v113;        // [esp+24h] [ebp-1Ch]
    float v114;      // [esp+28h] [ebp-18h]
    int v115;        // [esp+28h] [ebp-18h]
    float *v116;     // [esp+28h] [ebp-18h]
    float *v117;     // [esp+28h] [ebp-18h]
    float *v118;     // [esp+28h] [ebp-18h]
    float *v119;     // [esp+28h] [ebp-18h]
    __int16 v120;    // [esp+30h] [ebp-10h]
    int v121;        // [esp+34h] [ebp-Ch]
    float v122;      // [esp+38h] [ebp-8h]
    int v123;        // [esp+3Ch] [ebp-4h]
    float *v124;     // [esp+44h] [ebp+4h]

    v1 = (int *)((char *)&unk_103C77E8 + 188656 * a1);
    v100 = &word_103C7844[94328 * a1];
    v112 = &flt_1039C168[47164 * a1];
    v124 = (float *)((char *)&unk_1039B764 + 188656 * a1);
    v113 = (int)v1;
    sub_10013A10(v100);
    sub_1002B670();
    sub_10032873(v1);
    meth_DebugPrint(v2);
    sub_1000F5C0();
    meth_DebugPrint(v3);
    if (dword_100A6CF8 || *(_DWORD *)&gUnk06594.gap1C8[12480]) {
        sub_100314E8(0, 0, 0);
        if (dword_100A6CF8)
            --dword_100A6CF8;
    } else {
        v4 = v1[2];
        if (v4 < 304)
            sub_10031688(v4 + *v1, 8, 304 - v4, 224, 0, 0, 0);
    }
    v5 = dword_100A6CFC;
    if ((void *)dword_100AA8B4 != dword_100A6CFC) {
        dword_100A6CF8 = 2;
        dword_100A6CFC = (void *)dword_100AA8B4;
    }
    v6 = 0;
    v121 = 0;
    if (dword_100AA8B4 > 0) {
        while (1) {
            meth_DebugPrint(v5);
            v7 = &v1[22 * v6];
            dword_106C2CF8 = (int)&v112[2778 * v7[4]];
            v8 = *(_DWORD *)(dword_106C2CF8 + 10036);
            *(_DWORD *)&gUnk06594.gap1C8[8640] = v6;
            *(_DWORD *)&gUnk06594.gap1C8[12104] = v8;
            sub_100759D0(0,
                         0,
                         v8 + 48,
                         (int)&gUnk06594.gap1C8[12112],
                         (int)&dword_106C1988,
                         COERCE_FLOAT((unk06594 *)&gUnk06594.gap1C8[12216]),
                         (int)&unk_10690A34,
                         (int)&unk_106C01FC,
                         (int)&gUnk06594.gap1C8[8616]);
            sub_10032A42(*v7, v7[1], v7[2], v7[3], 1);
            v101 = (float)v7[3];
            v93 = (float)v7[2];
            if (dword_100AA8B4 <= 1) {
                sub_10033CB1(*(int *)&gUnk06594.gap1C8[12104],
                             *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 64),
                             flt_100AA8B0,
                             v93,
                             v101);
                v103 = (float)v7[3];
                v95 = (float)v7[2];
                sub_10033E83(*(int *)&gUnk06594.gap1C8[12104],
                             *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 64),
                             flt_100AA8B0,
                             v95,
                             v103);
            } else {
                v89 = flt_100AA8B0 * 0.64999998;
                v87 = *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 64) * 0.69999999;
                sub_10033CB1(*(int *)&gUnk06594.gap1C8[12104], v87, v89, v93, v101);
                v102 = (float)v7[3];
                v94 = (float)v7[2];
                v90 = flt_100AA8B0 * 0.64999998;
                v88 = *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 64) * 0.69999999;
                sub_10033E83(*(int *)&gUnk06594.gap1C8[12104], v88, v90, v94, v102);
            }
            sub_10031866();
            sub_10031DCF();
            meth_DebugPrint(v9);
            sub_100180B0((int)v1);
            sub_1002AEF0();
            sub_1003A990();
            v10 = 0;
            dword_10277EA0 = (*(_DWORD *)&gUnk06594.gap1C8[12500] != 0) + 1;
            if (dword_100B36FC > 0) {
                v11 = (int)v112;
                do {
                    sub_1000CA90(v11);
                    ++v10;
                    v11 += 11112;
                } while (v10 < dword_100B36FC);
            }
            sub_10011590((int)v1, 0, (int)v124, (int)v112);
            if (!*(_DWORD *)&gUnk06594.gap1C8[12504] || gChosenTrack == 2 || gChosenTrack == 8) {
                sub_10031866();
                sub_10031DCF();
                meth_DebugPrint(v13);
                v15 = 0;
                if (dword_100B36F8 > 0) {
                    v16 = v124 + 24;
                    do {
                        v17 = *v16;
                        if (*(_DWORD *)v16 && *(_BYTE *)(LODWORD(v17) + 10671) != 2)
                            sub_1000CBE0(v17, 0);
                        ++v15;
                        v16 += 32;
                    } while (v15 < dword_100B36F8);
                }
                meth_DebugPrint(v14);
                nullsub_2();
                sub_100140E0((int)v1);
            }
            meth_DebugPrint(v12);
            sub_100147B0();
            sub_10011590((int)v1, 1, (int)v124, (int)v112);
            if (*(_DWORD *)&gUnk06594.gap1C8[12504] && gChosenTrack != 2 && gChosenTrack != 8) {
                sub_10031866();
                sub_10031DCF();
                meth_DebugPrint(v19);
                v21 = 0;
                if (dword_100B36F8 > 0) {
                    v22 = v124 + 24;
                    do {
                        v23 = *v22;
                        if (*(_DWORD *)v22 && *(_BYTE *)(LODWORD(v23) + 10671) != 2)
                            sub_1000CBE0(v23, 0);
                        ++v21;
                        v22 += 32;
                    } while (v21 < dword_100B36F8);
                }
                meth_DebugPrint(v20);
                nullsub_2();
                sub_100140E0((int)v1);
            }
            meth_DebugPrint(v18);
            v25 = 0;
            if (dword_100B36F8 > 0) {
                v26 = v124 + 24;
                do {
                    if (*(_DWORD *)v26)
                        sub_1000E950(*v26);
                    ++v25;
                    v26 += 32;
                } while (v25 < dword_100B36F8);
            }
            meth_DebugPrint(v24);
            v28 = 0;
            if (dword_100B36F8 > 0) {
                v27 = v124;
                v29 = v124 + 24;
                do {
                    v30 = *v29;
                    if (*(_DWORD *)v29 && *(_BYTE *)(LODWORD(v30) + 10671) == 2)
                        sub_1000CBE0(v30, 0);
                    ++v28;
                    v29 += 32;
                } while (v28 < dword_100B36F8);
            }
            meth_DebugPrint(v27);
            sub_10014450((int)v1, (int)v124);
            meth_DebugPrint(v31);
            sub_10019B50();
            meth_DebugPrint(v32);
            v104 = flt_10575504 - flt_105754F8 * -0.5;
            sub_1002AF10((int)v1, v104);
            v105 = (float)v7[3];
            v96 = (float)v7[2];
            sub_1003407D(v96, v105);
            sub_10032C38(*v7, v7[1], v7[2], v7[3], 1);
            if (*(_DWORD *)&gUnk06594.gap1C8[12104] == dword_106C2CF8 + 10180 &&
                dword_100AA8B4 == 1 && dword_100AA888) {
                if (dword_100AA888 == 1) {
                    v33 = v7[2];
                    v34 = v33 / 4;
                } else {
                    v33 = v7[2];
                    if (dword_100AA888 == 2)
                        v34 = 5 * v33 / 16;
                    else
                        v34 = 3 * v33 / 8 + 2;
                }
                v35 = *v7 + ((v33 - v34) >> 1);
                v36 = v7[1] + v7[3] / 16;
                v123 = *(_DWORD *)&gUnk06594.gap1C8[12104];
                *(_DWORD *)(dword_106C2CF8 + 10036) = dword_106C2CF8 + 10384;
                v120 = v35;
                *(_DWORD *)&gUnk06594.gap1C8[12104] = *(_DWORD *)(dword_106C2CF8 + 10036);
                sub_10032A42(v35, v36, -v34, v34 >> 2, 1);
                sub_100314E3();
                v122 = (float)(v34 >> 2);
                v114 = (float)v34;
                v91 = flt_100AA8B0 * 0.2;
                sub_10033CB1(*(int *)&gUnk06594.gap1C8[12104],
                             *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 64),
                             v91,
                             v114,
                             v122);
                v92 = flt_100AA8B0 * 0.30000001;
                sub_10033E83(*(int *)&gUnk06594.gap1C8[12104],
                             *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 64),
                             v92,
                             v114,
                             v122);
                sub_10031866();
                sub_10031DCF();
                meth_DebugPrint(v37);
                sub_100180B0(v113);
                sub_1002AEF0();
                sub_1003A990();
                meth_DebugPrint(v38);
                v39 = 0;
                if (dword_100B36FC > 0) {
                    v115 = (int)v112;
                    do {
                        sub_1000CA90(v115);
                        ++v39;
                        v115 += 11112;
                    } while (v39 < dword_100B36FC);
                }
                sub_10011590(v113, 0, (int)v124, (int)v112);
                if (!*(_DWORD *)&gUnk06594.gap1C8[12504] || gChosenTrack == 2 ||
                    gChosenTrack == 8) {
                    sub_10031866();
                    sub_10031DCF();
                    meth_DebugPrint(v40);
                    v42 = 0;
                    if (dword_100B36F8 > 0) {
                        v116 = v124 + 24;
                        do {
                            v43 = *v116;
                            if (*(_DWORD *)v116 && *(_BYTE *)(LODWORD(v43) + 10671) != 2)
                                sub_1000CBE0(v43, 0);
                            ++v42;
                            v41 = v116 + 32;
                            v116 += 32;
                        } while (v42 < dword_100B36F8);
                    }
                    meth_DebugPrint(v41);
                    nullsub_2();
                    sub_100140E0(v113);
                }
                sub_10011590(v113, 1, (int)v124, (int)v112);
                if (*(_DWORD *)&gUnk06594.gap1C8[12504]) {
                    if (gChosenTrack != 2 && gChosenTrack != 8) {
                        sub_10031866();
                        sub_10031DCF();
                        meth_DebugPrint(v45);
                        v46 = 0;
                        if (dword_100B36F8 > 0) {
                            v117 = v124 + 24;
                            do {
                                v47 = *v117;
                                if (*(_DWORD *)v117 && *(_BYTE *)(LODWORD(v47) + 10671) != 2)
                                    sub_1000CBE0(v47, 0);
                                ++v46;
                                v44 = v117 + 32;
                                v117 += 32;
                            } while (v46 < dword_100B36F8);
                        }
                    }
                }
                meth_DebugPrint(v44);
                v49 = 0;
                if (dword_100B36F8 > 0) {
                    v118 = v124 + 24;
                    do {
                        if (*(_DWORD *)v118)
                            sub_1000E950(*v118);
                        ++v49;
                        v48 = v118 + 32;
                        v118 += 32;
                    } while (v49 < dword_100B36F8);
                }
                meth_DebugPrint(v48);
                v50 = 0;
                if (dword_100B36F8 > 0) {
                    v119 = v124 + 24;
                    do {
                        v51 = *v119;
                        if (*(_DWORD *)v119 && *(_BYTE *)(LODWORD(v51) + 10671) == 2)
                            sub_1000CBE0(v51, 0);
                        ++v50;
                        v119 += 32;
                    } while (v50 < dword_100B36F8);
                }
                v106 = flt_105754F8 + flt_10575504;
                sub_1002AF10(v113, v106);
                meth_DebugPrint(v52);
                *(_DWORD *)(dword_106C2CF8 + 10036) = v123;
                *(_DWORD *)&gUnk06594.gap1C8[12104] = v123;
                sub_10032A42(*v7, v7[1], v7[2], v7[3], 1);
                sub_10032E5D(v120, v36, v34, v34 >> 2);
                v1 = (int *)v113;
            }
            sub_10014930();
            if (gGameMode == GAME_MODE_5)
                break;
            if (dword_100AA894) {
                if (gGameMode == GAME_MODE_4) {
                    if (!dword_100AA894 || gGameMode != GAME_MODE_4 || dword_106805B8)
                        goto LABEL_109;
                    sub_10019260();
                    sub_100192F0(15);
                } else {
                    if (!dword_106909E0) {
                        if (*(_DWORD *)&gUnk06594.gap1C8[12104] == dword_106C2CF8 + 10248) {
                            if ((*(_BYTE *)(*(_DWORD *)(dword_106C2CF8 + 3840) + 104) & 2) != 0)
                                sub_10017790((int)v1);
                        } else {
                            meth_DebugPrint((void *)(dword_106C2CF8 + 10248));
                            sub_10032C38(*v7, v7[1], v7[2], v7[3], 1);
                            sub_10017D90((int)v1);
                            sub_10017890(v1, (int)v112);
                            meth_DebugPrint(v55);
                            if (*(_DWORD *)&gUnk06594.gap1C8[12104] != dword_106C2CF8 + 10180)
                                meth_DebugPrint(*(void **)&gUnk06594.gap1C8[12104]);
                        }
                        goto LABEL_109;
                    }
                    sub_10019260();
                    Set_byte_104B035C_To0();
                    sub_100192F0(15);
                    v54 = (char *)GetStringWithIndex(0xF2u);
                    text_sub_10019300(v54, 28, 32);
                    if (gGameMode == GAME_MODE_6)
                        sub_10017890(v1, (int)v112);
                }
                Set_byte_104B035C_To1();
                v107 = g_Height1 - 24;
                v97 = g_Width1 - 28;
                v53 = (char *)GetStringWithIndex(0xF4u);
                goto LABEL_108;
            }
        LABEL_109:
            sub_10032E58();
            sub_10017690((int)v1);
            v6 = ++v121;
            if (v121 >= dword_100AA8B4)
                goto LABEL_110;
        }
        sub_10019260();
        Set_byte_104B035C_To2();
        sub_100192F0(40);
        v107 = g_Height1 - 30;
        v97 = g_Width1 / 2;
        if (*(_BYTE *)(*((_DWORD *)v112 + 931) + 4))
            v53 = (char *)GetStringWithIndex(0xF0u);
        else
            v53 = (char *)GetStringWithIndex(0xF1u);
    LABEL_108:
        text_sub_10019300(v53, v97, v107);
        goto LABEL_109;
    }
LABEL_110:
    sub_100314DE();
    sub_1003289F(0, 0, g_Width1, g_Height1);
    if (dword_106909B4 == 2) {
        v57 = *v1 + (v1[2] >> 1);
        meth_DebugPrint(v56);
        sub_10019260();
        Set_byte_104B035C_To2();
        sub_100192F0(40);
        v108 = 5 * g_Height1 / 16;
        v58 = (char *)GetStringWithIndex(0xF5u);
        text_sub_10019300(v58, v57, v108);
        v59 = 5 * g_Height1 / 11;
        sub_100192F0(20);
        v60 = (char *)GetStringWithIndex(0xF6u);
        text_sub_10019300(v60, v57, v59);
        v61 = v59 + 40;
        if (dword_10680734)
            v62 = (char *)GetStringWithIndex(0xF8u);
        else
            v62 = (char *)GetStringWithIndex(0xF7u);
        text_sub_10019300(v62, v57, v61);
        v63 = v61 + 20;
        if (dword_10680734 == 1)
            v64 = (char *)GetStringWithIndex(0xF9u);
        else
            v64 = (char *)GetStringWithIndex(0xFAu);
    LABEL_140:
        text_sub_10019300(v64, v57, v63);
        goto LABEL_141;
    }
    if (dword_106909B4) {
        v57 = *v1 + (v1[2] >> 1);
        meth_DebugPrint(v56);
        sub_10019260();
        Set_byte_104B035C_To2();
        sub_100192F0(40);
        v109 = 5 * g_Height1 / 16;
        v65 = (char *)GetStringWithIndex(0xF5u);
        text_sub_10019300(v65, v57, v109);
        v66 = 5 * g_Height1 / 11;
        sub_100192F0(20);
        if (dword_10680734)
            v67 = (char *)GetStringWithIndex(0xFCu);
        else
            v67 = (char *)GetStringWithIndex(0xFBu);
        text_sub_10019300(v67, v57, v66);
        v68 = v66 + 20;
        if (!gNetworkPlay) {
            if (dword_10680734 == 1)
                v69 = (char *)GetStringWithIndex(0xFFu);
            else
                v69 = (char *)GetStringWithIndex(0x100u);
            text_sub_10019300(v69, v57, v68);
        }
        v70 = v68 + 20;
        v71 = aY1;
        if (dword_10680734 != 2)
            v71 = aRy_0;
        v110 = dword_10B4E70C;
        v98 = v71;
        v72 = GetStringWithIndex(0x101u);
        sprintf(Buffer, v72, v98, v110);
        text_sub_10019300(Buffer, v57, v70);
        v73 = v70 + 20;
        v74 = aY1;
        if (dword_10680734 != 3)
            v74 = aRy_0;
        v111 = dword_10B4E708;
        v99 = v74;
        v75 = GetStringWithIndex(0x102u);
        sprintf(Buffer, v75, v99, v111);
        text_sub_10019300(Buffer, v57, v73);
        v76 = v73 + 20;
        if (gGameMode) {
            if (dword_10680734 == 4)
                v77 = (char *)GetStringWithIndex(0x105u);
            else
                v77 = (char *)GetStringWithIndex(0x106u);
        } else if (dword_10680734 == 4) {
            v77 = (char *)GetStringWithIndex(0x103u);
        } else {
            v77 = (char *)GetStringWithIndex(0x104u);
        }
        text_sub_10019300(v77, v57, v76);
        v63 = v76 + 20;
        if (dword_10680734 == 5)
            v64 = (char *)GetStringWithIndex(0x107u);
        else
            v64 = (char *)GetStringWithIndex(0x108u);
        goto LABEL_140;
    }
LABEL_141:
    if (gGameMode == GAME_MODE_4 && dword_106805B8 == 2) {
        sub_10015BD0(v1);
    } else if (gGameMode == GAME_MODE_4 && dword_106805B8 == 1 &&
               (&off_100AA018)[8 * dword_106805C0] && *(float *)&dword_106806DC > 0.5) {
        sub_10019260();
        Set_byte_104B035C_To2();
        sub_100192A0(255, 255, 255, 255, 255, 255);
        v78 = 0;
        v79 = &(&off_100AA020)[8 * dword_106805C0];
        do {
            if (!*v79)
                break;
            ++v78;
            ++v79;
        } while (v78 < 6);
        v80 = g_Height1 / 2 - 40 * v78 / 4 + 10;
        if (!(*(&off_100AA018)[8 * dword_106805C0])[0])
            v80 = g_Height1 / 2 - 40 * v78 / 4 + 5;
        v81 = v78 - 1;
        if (v81 >= 0) {
            v82 = 40 * v81;
            do {
                if ((*(&off_100AA020)[8 * dword_106805C0 + 4 * v81])[0] == 96) {
                    sub_100192F0(15);
                    text_sub_10019300(&(*(&off_100AA020)[8 * dword_106805C0 + 4 * v81])[1],
                                      g_Width1 / 2,
                                      v80 + v82 / 2);
                } else {
                    sub_100192F0(20);
                    text_sub_10019300((char *)(&off_100AA020)[8 * dword_106805C0 + 4 * v81],
                                      g_Width1 / 2,
                                      v80 + v82 / 2);
                }
                --v81;
                v82 -= 40;
            } while (v81 >= 0);
        }
        sub_100192F0(15);
        text_sub_10019300((char *)(&off_100AA018)[8 * dword_106805C0], g_Width1 / 2, v80 - 20);
    }
    sub_1002B340();
    if (*(int *)&gUnk06594.gap1C8[12516] >= 2) {
        sub_10032A42(0, 0, g_Width1, g_Height1, 1);
        meth_DebugPrint(v84);
    }
    meth_DebugPrint(v83);
    sub_10033498();
    meth_DebugPrint(v85);
    return sub_10033838();
}
// 10014A9B: variable 'v2' is possibly undefined
// 10014AA8: variable 'v3' is possibly undefined
// 10014B44: variable 'v5' is possibly undefined
// 10014CB4: variable 'v9' is possibly undefined
// 10014D5C: variable 'v13' is possibly undefined
// 10014DB3: variable 'v14' is possibly undefined
// 10014DDA: variable 'v12' is possibly undefined
// 10014E40: variable 'v19' is possibly undefined
// 10014E97: variable 'v20' is possibly undefined
// 10014EC7: variable 'v18' is possibly undefined
// 10014F16: variable 'v24' is possibly undefined
// 10014F6D: variable 'v27' is possibly undefined
// 10014F96: variable 'v31' is possibly undefined
// 10014FB3: variable 'v32' is possibly undefined
// 10015174: variable 'v37' is possibly undefined
// 100151A3: variable 'v38' is possibly undefined
// 10015238: variable 'v40' is possibly undefined
// 1001529F: variable 'v41' is possibly undefined
// 10015312: variable 'v45' is possibly undefined
// 1001537C: variable 'v44' is possibly undefined
// 100153DB: variable 'v48' is possibly undefined
// 1001545C: variable 'v52' is possibly undefined
// 100155FC: variable 'v55' is possibly undefined
// 100156F6: variable 'v56' is possibly undefined
// 10015B7A: variable 'v84' is possibly undefined
// 10015B92: variable 'v83' is possibly undefined
// 10015BAF: variable 'v85' is possibly undefined
// 100A6CF8: using guessed type int dword_100A6CF8;
// 100AA018: using guessed type char (*off_100AA018)[8];
// 100AA020: using guessed type char (*off_100AA020)[8];
// 100AA888: using guessed type int dword_100AA888;
// 100AA894: using guessed type int dword_100AA894;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int gChosenTrack;
// 1022AF18: using guessed type int gNetworkPlay;
// 10277EA0: using guessed type int dword_10277EA0;
// 1039C168: using guessed type float flt_1039C168[];
// 105754F8: using guessed type float flt_105754F8;
// 10575504: using guessed type float flt_10575504;
// 106805B8: using guessed type int dword_106805B8;
// 106805C0: using guessed type int dword_106805C0;
// 106806DC: using guessed type int dword_106806DC;
// 10680734: using guessed type int dword_10680734;
// 106909B4: using guessed type int dword_106909B4;
// 106909E0: using guessed type int dword_106909E0;
// 106C0684: using guessed type int g_Width1;
// 106C1988: using guessed type int dword_106C1988;
// 106C299C: using guessed type int g_Height1;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
