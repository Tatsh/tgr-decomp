#include "../../types-win32.h"
//----- (1000CBE0) --------------------------------------------------------
int __cdecl sub_1000CBE0(float a1, int a2) {
    int result;            // eax
    int v4;                // edi
    double v5;             // st7
    _DWORD *v6;            // esi
    unsigned __int16 v7;   // dx
    int v8;                // eax
    int v9;                // esi
    int v10;               // esi
    double v11;            // st7
    int v12;               // edx
    int v13;               // esi
    unsigned __int16 v14;  // cx
    int v15;               // edi
    int v16;               // edx
    unsigned __int16 v17;  // dx
    _DWORD *v18;           // eax
    _DWORD *v19;           // eax
    double v20;            // st7
    double v21;            // st7
    _DWORD *v22;           // eax
    _DWORD *v23;           // eax
    _DWORD *v24;           // eax
    _DWORD *v25;           // eax
    int v26;               // esi
    __int64 v27;           // rax
    _DWORD *v28;           // eax
    _DWORD *v29;           // eax
    _DWORD *v30;           // eax
    _DWORD *v31;           // eax
    _DWORD *v32;           // eax
    _DWORD *v33;           // eax
    _DWORD *v34;           // eax
    _DWORD *v35;           // eax
    _DWORD *v36;           // eax
    _DWORD *v37;           // eax
    _DWORD *v38;           // eax
    _DWORD *v39;           // eax
    _DWORD *v40;           // eax
    _DWORD *v41;           // eax
    _DWORD *v42;           // eax
    _DWORD *v43;           // eax
    _DWORD *v44;           // eax
    _DWORD *v45;           // eax
    _DWORD *v46;           // eax
    _DWORD *v47;           // eax
    _DWORD *v48;           // eax
    _DWORD *v49;           // eax
    _DWORD *v50;           // eax
    _DWORD *v51;           // eax
    _DWORD *v52;           // eax
    _DWORD *v53;           // eax
    _DWORD *v54;           // eax
    _DWORD *v55;           // eax
    _DWORD *v56;           // eax
    _DWORD *v57;           // eax
    _DWORD *v58;           // eax
    _DWORD *v59;           // eax
    _DWORD *v60;           // eax
    _DWORD *v61;           // eax
    _DWORD *v62;           // eax
    _DWORD *v63;           // eax
    unsigned int *v64;     // ecx
    _DWORD *v65;           // eax
    _DWORD *v66;           // eax
    _DWORD *v67;           // eax
    _DWORD *v68;           // eax
    _DWORD *v69;           // eax
    _DWORD *v70;           // eax
    _DWORD *v71;           // ecx
    _DWORD *v72;           // eax
    _DWORD *v73;           // eax
    _DWORD *v74;           // eax
    _DWORD *v75;           // eax
    _DWORD *v76;           // eax
    _DWORD *v77;           // eax
    int v78;               // edx
    _DWORD *v79;           // eax
    _DWORD *v80;           // eax
    _DWORD *v81;           // eax
    _DWORD *v82;           // eax
    _DWORD *v83;           // eax
    _DWORD *v84;           // eax
    _DWORD *v85;           // eax
    _DWORD *v86;           // eax
    _DWORD *v87;           // eax
    _DWORD *v88;           // eax
    _DWORD *v89;           // eax
    _DWORD *v90;           // eax
    _DWORD *v91;           // eax
    _DWORD *v92;           // eax
    _DWORD *v93;           // eax
    _DWORD *v94;           // eax
    _DWORD *v95;           // ecx
    _DWORD *v96;           // eax
    _DWORD *v97;           // eax
    _DWORD *v98;           // eax
    _DWORD *v99;           // eax
    _DWORD *v100;          // eax
    _DWORD *v101;          // eax
    _DWORD *v102;          // eax
    _DWORD *v103;          // eax
    _DWORD *v104;          // eax
    _DWORD *v105;          // eax
    _DWORD *v106;          // eax
    _DWORD *v107;          // eax
    _DWORD *v108;          // eax
    _DWORD *v109;          // eax
    _DWORD *v110;          // eax
    _DWORD *v111;          // eax
    _DWORD *v112;          // eax
    _DWORD *v113;          // eax
    _DWORD *v114;          // eax
    _DWORD *v115;          // eax
    _DWORD *v116;          // eax
    unsigned int *v117;    // ecx
    int v118;              // eax
    _DWORD *v119;          // eax
    _DWORD *v120;          // ecx
    _DWORD *v121;          // eax
    _DWORD *v122;          // eax
    _DWORD *v123;          // eax
    _DWORD *v124;          // eax
    _DWORD *v125;          // eax
    _DWORD *v126;          // eax
    _DWORD *v127;          // eax
    unsigned __int16 v128; // dx
    int v129;              // ecx
    int v130;              // edx
    unsigned __int16 v131; // dx
    _DWORD *v132;          // eax
    _DWORD *v133;          // eax
    _DWORD *v134;          // eax
    _DWORD *v135;          // eax
    unsigned int *v136;    // eax
    int v137;              // edx
    _DWORD *v138;          // eax
    int v139;              // ecx
    unsigned int *v140;    // eax
    _DWORD *v141;          // eax
    _DWORD *v142;          // eax
    _DWORD *v143;          // eax
    _DWORD *v144;          // eax
    int v145;              // ecx
    _DWORD *v146;          // eax
    _DWORD *v147;          // eax
    _DWORD *v148;          // eax
    _DWORD *v149;          // eax
    _DWORD *v150;          // eax
    _DWORD *v151;          // eax
    _DWORD *v152;          // eax
    _DWORD *v153;          // eax
    _DWORD *v154;          // eax
    _DWORD *v155;          // eax
    _DWORD *v156;          // eax
    _DWORD *v157;          // eax
    unsigned int *v158;    // [esp-Ch] [ebp-A0h]
    unsigned int *v159;    // [esp-Ch] [ebp-A0h]
    unsigned int *v160;    // [esp-Ch] [ebp-A0h]
    unsigned int *v161;    // [esp-Ch] [ebp-A0h]
    unsigned int *v162;    // [esp-Ch] [ebp-A0h]
    unsigned int *v163;    // [esp-Ch] [ebp-A0h]
    unsigned int *v164;    // [esp-Ch] [ebp-A0h]
    float v165;            // [esp+0h] [ebp-94h]
    float v166;            // [esp+8h] [ebp-8Ch]
    int v167;              // [esp+4Ch] [ebp-48h]
    int v168;              // [esp+50h] [ebp-44h]
    float v169;            // [esp+54h] [ebp-40h]
    float v170;            // [esp+58h] [ebp-3Ch]
    BOOL v171;             // [esp+5Ch] [ebp-38h]
    char *v172;            // [esp+60h] [ebp-34h]
    char *v173;            // [esp+64h] [ebp-30h]
    char *v174;            // [esp+68h] [ebp-2Ch]
    unsigned __int8 v175;  // [esp+69h] [ebp-2Bh]
    unsigned __int8 v176;  // [esp+6Ah] [ebp-2Ah]
    float v177;            // [esp+70h] [ebp-24h]
    float v178;            // [esp+74h] [ebp-20h]
    int v179[3];           // [esp+7Ch] [ebp-18h] BYREF
    float v180[3];         // [esp+88h] [ebp-Ch] BYREF
    float v181;            // [esp+98h] [ebp+4h]
    float v182;            // [esp+98h] [ebp+4h]
    float v183;            // [esp+98h] [ebp+4h]
    int v184;              // [esp+98h] [ebp+4h]
    int v185;              // [esp+9Ch] [ebp+8h]
    unsigned int *v186;    // [esp+9Ch] [ebp+8h]

    result = *(_DWORD *)(LODWORD(a1) + 3848);
    if (result) {
        if (*(_DWORD *)(LODWORD(a1) + 360)) {
            if (*(_DWORD *)(LODWORD(a1) + 368)) {
                if (*(_DWORD *)(LODWORD(a1) + 364)) {
                    if (*(_DWORD *)(LODWORD(a1) + 372)) {
                        result = *(_DWORD *)(LODWORD(a1) + 320);
                        v4 = 0;
                        v168 = 0;
                        if (dword_10277B68[result]) {
                            v5 = sub_1003B0E0((float *)(LODWORD(a1) + 48),
                                              (float *)dword_106C6490 + 12);
                            v170 = v5;
                            if (*(_BYTE *)(LODWORD(a1) + 10671) == 2) {
                                dword_10277E14 = (__int64)(*(float *)(LODWORD(a1) + 10672) * 255.0);
                                v6 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v6 = -134217728;
                                HIBYTE(v7) = byte_106C0260;
                                LOBYTE(v7) = byte_106C1614;
                                v6[1] = (unsigned __int8)dword_10277E14 |
                                        (((unsigned __int8)byte_106C0200 | (v7 << 8)) << 8);
                            }
                            v8 = *(_DWORD *)(LODWORD(a1) + 10572);
                            *(_DWORD *)(LODWORD(a1) + 10004) = 0;
                            if (v8 &&
                                (*(_BYTE *)(dword_106C7CA8 +
                                            84 * *(unsigned __int16 *)(LODWORD(a1) + 10508) + 76) &
                                 0x10) != 0) {
                                v4 = 1;
                                *(_DWORD *)(LODWORD(a1) + 10004) = 1;
                                v168 = 1;
                            }
                            dword_106C3308 = *(_DWORD *)(LODWORD(a1) + 10692);
                            if (dword_100AA8B4 == 2) {
                                if (v5 >= 40.0) {
                                    v9 = 1;
                                    if (v5 >= 80.0)
                                        v9 = 2;
                                } else {
                                    v9 = 0;
                                }
                                if (v9 < dword_106C6630)
                                    v9 = dword_106C6630;
                            } else {
                                v9 = dword_106C6630;
                            }
                            v10 = a2 + v9;
                            v185 = v10;
                            if (v10 > 2) {
                                v10 = 2;
                                v185 = 2;
                            }
                            v171 = v5 < 100.0;
                            sub_100310F0((int)&flt_106C08A0, 0.0039215689, 998277249, 998277249);
                            sub_100306C0(&flt_106C08A0, (float *)LODWORD(a1), flt_10277D88);
                            dword_10277DC8[*(_DWORD *)(LODWORD(a1) + 320)] = (int)sub_10069490();
                            sub_100307A0((int)flt_10277D88,
                                         (_DWORD *)dword_10277DC8[*(_DWORD *)(LODWORD(a1) + 320)]);
                            sub_100306C0(flt_10277D88, &flt_106C29A8, &flt_106C0860);
                            sub_10031342();
                            dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] = (int)sub_10069490();
                            sub_100307A0((int)&flt_106C0860,
                                         (_DWORD *)dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)]);
                            if (LODWORD(a1) != dword_106C2CF8)
                                goto LABEL_26;
                            result = *(_DWORD *)(LODWORD(a1) + 10036);
                            if (result != LODWORD(a1) + 10044 && result != LODWORD(a1) + 10384)
                                goto LABEL_26;
                            if (dword_106C6614) {
                            LABEL_26:
                                dword_10277D38[*(_DWORD *)(LODWORD(a1) + 320)] = v10;
                                if (dword_106C661C) {
                                    v11 = v170 * 0.1;
                                    if (v11 < 1.0)
                                        v11 = 1.0;
                                    LOBYTE(v12) = 0;
                                    BYTE1(v12) =
                                        (__int64)((double)(unsigned __int8)byte_106C1580 / v11);
                                    v12 = (unsigned __int16)v12;
                                    LOBYTE(v12) =
                                        (__int64)((double)(unsigned __int8)byte_106C335C / v11);
                                    v13 = ((unsigned __int8)(__int64)((double)(unsigned __int8)
                                                                          byte_106C0968 /
                                                                      v11) |
                                           (v12 << 8))
                                          << 8;
                                    LOBYTE(v14) = 0;
                                    HIBYTE(v14) = byte_10690BF0;
                                    v167 = v13;
                                    v15 = ((unsigned __int8)byte_106C65BC |
                                           (((unsigned __int8)byte_106C0960 | v14) << 8))
                                          << 8;
                                } else {
                                    if (v4) {
                                        v13 = 0;
                                        v167 = 0;
                                        v175 = (char)(4 * byte_106C0960) / 5;
                                        v176 = (char)(4 * byte_106C65BC) / 5;
                                        v16 = 0;
                                        BYTE1(v16) = 4 * (unsigned __int8)byte_10690BF0 / 5;
                                    } else {
                                        LOBYTE(v17) = 0;
                                        HIBYTE(v17) = byte_106C1580;
                                        v13 = ((unsigned __int8)byte_106C0968 |
                                               (((unsigned __int8)byte_106C335C | v17) << 8))
                                              << 8;
                                        v175 = byte_106C0960;
                                        v16 = 0;
                                        v167 = v13;
                                        v176 = byte_106C65BC;
                                        BYTE1(v16) = byte_10690BF0;
                                    }
                                    v15 = (v176 | ((v175 | v16) << 8)) << 8;
                                }
                                v18 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v18 = 17170496;
                                v18[1] = dword_10277DC8[*(_DWORD *)(LODWORD(a1) + 320)];
                                v19 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v19 = 16973888;
                                v19[1] = dword_106C32D0;
                                if (dword_106C661C) {
                                    if (dword_106C6490 == (void *)(dword_106C2CF8 + 10248))
                                        sub_1003ACC0((float *)&dword_10277BA8,
                                                     (float *)dword_106C6490);
                                    else
                                        sub_1003ACC0((float *)&dword_10277BA8,
                                                     (float *)dword_106C2CF8);
                                } else {
                                    flt_10277BAC = *(float *)&dword_106C0674;
                                    dword_10277BA8 = dword_106C0670;
                                    flt_10277BB0 = *(float *)&dword_106C0678;
                                }
                                sub_1003AE50((float *)&dword_10277BA8);
                                LODWORD(dword_10277D78) = dword_10277BA8;
                                dword_10277D80 = flt_10277BB0;
                                dword_10277D7C = flt_10277BAC;
                                sub_1003AEE0((float *)v179,
                                             (float *)dword_106C6490 + 12,
                                             (float *)(LODWORD(a1) + 48));
                                v20 = sub_1003B170((float *)v179);
                                if (v20 == 0.0) {
                                    sub_1003ACC0((float *)v179, (float *)dword_106C6490);
                                } else {
                                    v181 = v20;
                                    sub_1003AD70((int)v179, v181);
                                }
                                sub_1003B050(&dword_10277D78, (float *)v179, &dword_10277D78);
                                v21 = sub_1003B170(&dword_10277D78);
                                if (v21 == 0.0) {
                                    dword_10277D78 = *((float *)dword_106C6490 + 8);
                                    dword_10277D7C = *((float *)dword_106C6490 + 9);
                                    dword_10277D80 = *((float *)dword_106C6490 + 10);
                                } else {
                                    v182 = v21;
                                    sub_1003AD70((int)&dword_10277D78, v182);
                                }
                                sub_10069490();
                                v173 = sub_100694E0();
                                v174 = sub_10069530();
                                v172 = sub_10069530();
                                v183 = 0.0;
                                v169 = 0.0;
                                if (*((float *)dword_106C6490 + 12) ==
                                        *(float *)(LODWORD(a1) + 48) &&
                                    *((float *)dword_106C6490 + 13) ==
                                        *(float *)(LODWORD(a1) + 52)) {
                                    if (*((float *)dword_106C6490 + 14) ==
                                        *(float *)(LODWORD(a1) + 56))
                                        v183 = 1.0;
                                    else
                                        v169 = 0.1;
                                }
                                v177 = *(float *)dword_106C6490;
                                v178 = *((float *)dword_106C6490 + 1);
                                if (v177 == 0.0 && v178 == 0.0)
                                    v177 = 0.000099999997;
                                sub_10030E20((int)&flt_106C0860,
                                             (int)v174,
                                             v177,
                                             v178,
                                             0.0,
                                             0.0,
                                             0.0,
                                             0.0,
                                             0.0,
                                             0.0,
                                             1.0);
                                v166 = *(float *)(LODWORD(a1) + 56) + v183;
                                v165 = v169 + *(float *)(LODWORD(a1) + 48);
                                sub_10030B50((int)&flt_106C0860,
                                             (int)v172,
                                             (int)v173,
                                             *((float *)dword_106C6490 + 12),
                                             *((float *)dword_106C6490 + 13),
                                             *((float *)dword_106C6490 + 14),
                                             v165,
                                             *(float *)(LODWORD(a1) + 52),
                                             v166,
                                             0.0,
                                             0.0,
                                             1.0,
                                             dword_10277D78,
                                             dword_10277D7C,
                                             dword_10277D80,
                                             dword_10277D78,
                                             dword_10277D7C,
                                             dword_10277D80,
                                             64,
                                             64);
                                v22 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v22 = 100663296;
                                if (v170 <= 10.0)
                                    v22[1] = &unk_100AA770;
                                else
                                    v22[1] = &unk_100AA838;
                                if (dword_106C661C || dword_106C6624) {
                                    qmemcpy((char *)&unk_10277BB8 +
                                                24 * *(_DWORD *)(LODWORD(a1) + 320),
                                            &unk_100AA860,
                                            0x18u);
                                    v26 = dword_106C2CF8;
                                    byte_10277BC8[24 * *(_DWORD *)(LODWORD(a1) + 320)] =
                                        (__int64)(*(float *)dword_106C2CF8 * -120.0);
                                    byte_10277BC9[24 * *(_DWORD *)(LODWORD(a1) + 320)] =
                                        (__int64)(*(float *)(v26 + 4) * -120.0);
                                    v27 = (__int64)(*(float *)(v26 + 8) * -120.0);
                                    v13 = v167;
                                    byte_10277BCA[24 * *(_DWORD *)(LODWORD(a1) + 320)] = v27;
                                    LODWORD(v27) = dword_106C0680;
                                    dword_106C0680 += 8;
                                    *(_DWORD *)v27 = -1140850686;
                                    *(_DWORD *)(v27 + 4) = -2147483584;
                                    LODWORD(v27) = dword_106C0680;
                                    dword_106C0680 += 8;
                                    *(_DWORD *)v27 = 59113488;
                                    *(_DWORD *)(v27 + 4) =
                                        (char *)&unk_10277BC0 + 24 * *(_DWORD *)(LODWORD(a1) + 320);
                                    LODWORD(v27) = dword_106C0680;
                                    dword_106C0680 += 8;
                                    *(_DWORD *)v27 = 59244560;
                                    *(_DWORD *)(v27 + 4) =
                                        (char *)&unk_10277BB8 + 24 * *(_DWORD *)(LODWORD(a1) + 320);
                                } else {
                                    v23 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v23 = -1140850686;
                                    v23[1] = -2147483584;
                                    v24 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v24 = 59113488;
                                    v24[1] = &unk_100AA868;
                                    v25 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v25 = 59244560;
                                    v25[1] = &unk_100AA860;
                                }
                                v28 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v28 = -419430400;
                                v28[1] = 0;
                                v29 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v29 = -1174401023;
                                v29[1] = 0x10000;
                                v30 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v30 = -1224736768;
                                v30[1] = 131589;
                                if (dword_106C6618) {
                                    v31 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v31 = -1224736768;
                                    v31[1] = 0x10000;
                                    dword_10277E5C = *(_BYTE *)(LODWORD(a1) + 10671) != 2 ?
                                                         -939524096 :
                                                         201850880;
                                } else {
                                    dword_10277E5C = 201850880;
                                }
                                v32 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v32 = -1224736768;
                                v32[1] = dword_106C1174 != dword_106C3364 ? 4096 : 0x2000;
                                v33 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v33 = -1241513984;
                                v33[1] = dword_106C1174 != dword_106C3364 ? 0x2000 : 4096;
                                if (*(_BYTE *)(LODWORD(a1) + 10671) == 2) {
                                    dword_10277E58 = 17844696;
                                    v34 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v34 = -100663296;
                                    v34[1] = (unsigned __int8)dword_10277E14;
                                } else if (v171) {
                                    dword_10277E58 =
                                        dword_106C2CF8 != LODWORD(a1) ? 1122360 : 1122424;
                                } else {
                                    dword_10277E58 = 1122864;
                                }
                                v35 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v35 = -1174399998;
                                v35[1] = 0x100000;
                                v36 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v36 = -1191181539;
                                v36[1] = dword_10277E5C | dword_10277E58;
                                v158 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                sub_1002F900(v158,
                                             1001,
                                             0,
                                             1004,
                                             0,
                                             0,
                                             0,
                                             0,
                                             1001,
                                             0,
                                             0,
                                             0,
                                             1000,
                                             0,
                                             0,
                                             0,
                                             1000);
                                v37 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v37 = -1174402046;
                                v37[1] = dword_106C0258;
                                v38 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v38 = -1174401023;
                                v38[1] = 0;
                                v39 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v39 = -1241513984;
                                v39[1] = 786432;
                                v40 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v40 = -1140850678;
                                v40[1] = v13;
                                v41 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v41 = -1140849654;
                                v41[1] = v13;
                                v42 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v42 = -1140842486;
                                v42[1] = v15;
                                v43 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v43 = -1140841462;
                                v43[1] = v15;
                                if (*(_BYTE *)(LODWORD(a1) + 10671) == 2)
                                    sub_1000C6E0(SLODWORD(a1));
                                v44 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v44 = 60686352;
                                v44[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)];
                                v45 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v45 = 60293136;
                                v45[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] + 16;
                                v46 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v46 = 60424208;
                                v46[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] + 32;
                                v47 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v47 = 60555280;
                                v47[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] + 48;
                                v48 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v48 = -49283072;
                                v48[1] = &off_100A64C8;
                                v49 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v49 = -402653184;
                                v49[1] = 0;
                                v50 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v50 = -184548896;
                                v50[1] = 117440512;
                                v51 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v51 = -436207616;
                                v51[1] = 0;
                                v52 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v52 = -268435456;
                                v52[1] = 117686272;
                                v53 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v53 = -419430400;
                                v53[1] = 0;
                                v54 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v54 = 58982416;
                                v54[1] = v172;
                                v55 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v55 = 58851344;
                                v55[1] = v172 + 16;
                                if (!dword_10277B1C && !*(_DWORD *)(LODWORD(a1) + 10676)) {
                                    v56 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v56 = -1157627903;
                                    v56[1] = -1;
                                    v57 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v57 = -1241513984;
                                    v57[1] = 786432;
                                    v58 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v58 = -402653184;
                                    v58[1] = 0;
                                    v59 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v59 = -183500800;
                                    v59[1] = 117440512;
                                    v60 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v60 = -184548880;
                                    v60[1] = 100663296;
                                    v61 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v61 = -184549120;
                                    v61[1] = 83886080;
                                    v62 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v62 = -1191181539;
                                    v62[1] = dword_10277E5C | dword_10277E58;
                                    v159 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    sub_1002F900(v159,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0,
                                                 0,
                                                 0,
                                                 0,
                                                 1001,
                                                 0,
                                                 0,
                                                 0,
                                                 1000,
                                                 0,
                                                 0,
                                                 0,
                                                 1000);
                                    v63 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v63 = -1174401534;
                                    v63[1] = 0;
                                    v64 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    sub_1002F900(v64,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0,
                                                 0,
                                                 0,
                                                 0,
                                                 1000,
                                                 0,
                                                 0,
                                                 0,
                                                 1000);
                                    v65 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v65 = -1241513984;
                                    v65[1] = 0x40000;
                                    v66 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v66 = -1140850678;
                                    v66[1] = v13;
                                    v67 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v67 = -1140849654;
                                    v67[1] = v13;
                                    v68 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v68 = -1140842486;
                                    v68[1] = v15;
                                    v69 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v69 = -1140841462;
                                    v69[1] = v15;
                                    v70 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v70 = -1174402046;
                                    v70[1] = dword_106C0258;
                                    if (*(_DWORD *)(dword_106C3308 + 40 * v185 + 32824)) {
                                        v71 = (_DWORD *)dword_106C0680;
                                        dword_106C0680 += 8;
                                        *v71 = 100663296;
                                        v71[1] = *(_DWORD *)(dword_106C3308 + 40 * v185 + 32824);
                                    }
                                    v72 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v72 = -1157627903;
                                    v72[1] = -1;
                                    v73 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v73 = -1241513984;
                                    v73[1] = 786432;
                                    v74 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v74 = -402653184;
                                    v74[1] = 0;
                                    v75 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v75 = -183500800;
                                    v75[1] = 117440512;
                                    v76 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v76 = -184548880;
                                    v76[1] = 100663296;
                                    v77 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v77 = -184549120;
                                    v77[1] = 83886080;
                                }
                                if (!*(_DWORD *)(*(_DWORD *)(dword_106C3308 + 32788) +
                                                 36 * *(unsigned __int8 *)(dword_106C3308 + 33051) +
                                                 4) ||
                                    dword_100AC300) {
                                    goto LABEL_85;
                                }
                                if ((**(_DWORD **)(LODWORD(a1) + 10688) & 0xC0000) != 0) {
                                    if (*(float *)(LODWORD(a1) + 3688) < 0.0) {
                                        dword_118AA0A4(*(_DWORD *)(dword_106C3308 + 128),
                                                       *(_DWORD *)(dword_106C3308 + 144));
                                        goto LABEL_85;
                                    }
                                    v78 = *(_DWORD *)(dword_106C3308 + 136);
                                } else if (*(float *)(LODWORD(a1) + 3688) >= 0.0) {
                                    v78 = *(_DWORD *)(dword_106C3308 + 132);
                                } else {
                                    v78 = *(_DWORD *)(dword_106C3308 + 140);
                                }
                                dword_118AA0A4(*(_DWORD *)(dword_106C3308 + 128), v78);
                            LABEL_85:
                                v79 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v79 = -1174401023;
                                v79[1] = 0x10000;
                                v80 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v80 = -1157627903;
                                v80[1] = -1;
                                v81 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v81 = -183500800;
                                v81[1] = 117440512;
                                v82 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v82 = -184548880;
                                v82[1] = 100663296;
                                v83 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v83 = -184549120;
                                v83[1] = 83886080;
                                sub_1003AEE0(v180,
                                             (float *)(LODWORD(a1) + 48),
                                             (float *)dword_106C6490 + 12);
                                if (sub_1003AC90((float *)(LODWORD(a1) + 32), v180) > 0.0) {
                                    sub_10031481(6, *(_DWORD *)(dword_106C3308 + 32788));
                                    v84 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v84 = -419430400;
                                    v84[1] = 0;
                                    v85 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v85 = -1174399998;
                                    v85[1] = 0x100000;
                                    v86 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v86 = -1191181539;
                                    v86[1] = dword_10277E5C | dword_10277E58;
                                    v160 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    sub_1002F900(v160,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0,
                                                 1001,
                                                 0,
                                                 1004,
                                                 0);
                                    v87 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v87 = -1140850678;
                                    v87[1] = v13;
                                    v88 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v88 = -1140849654;
                                    v88[1] = v13;
                                    v89 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v89 = -1140842486;
                                    v89[1] = v15;
                                    v90 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v90 = -1140841462;
                                    v90[1] = v15;
                                    v91 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v91 = -1157627903;
                                    v91[1] = -1;
                                    v92 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v92 = -183500800;
                                    v92[1] = 117440512;
                                    v93 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v93 = -184548880;
                                    v93[1] = 100663296;
                                    v94 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v94 = -184549120;
                                    v94[1] = 83886080;
                                    if (*(_DWORD *)(dword_106C3308 + 40 * v185 + 32816)) {
                                        v95 = (_DWORD *)dword_106C0680;
                                        dword_106C0680 += 8;
                                        *v95 = 100663296;
                                        v95[1] = *(_DWORD *)(dword_106C3308 + 40 * v185 + 32816);
                                    }
                                }
                                sub_10031481(3, *(_DWORD *)(dword_106C3308 + 32788));
                                v96 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v96 = -419430400;
                                v96[1] = 0;
                                v97 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v97 = -1174399998;
                                v97[1] = 0x100000;
                                v98 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v98 = -1191181539;
                                v98[1] = dword_10277E5C | dword_10277E58;
                                v161 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                sub_1002F900(v161,
                                             1001,
                                             0,
                                             1004,
                                             0,
                                             0,
                                             0,
                                             0,
                                             1004,
                                             0,
                                             0,
                                             0,
                                             1000,
                                             0,
                                             0,
                                             0,
                                             1000);
                                v99 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v99 = -1140850678;
                                v99[1] = v13;
                                v100 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v100 = -1140849654;
                                v100[1] = v13;
                                v101 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v101 = -1140842486;
                                v101[1] = v15;
                                v102 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v102 = -1140841462;
                                v102[1] = v15;
                                v103 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v103 = -1157627903;
                                v103[1] = -1;
                                v104 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v104 = -183500800;
                                v104[1] = 117440512;
                                v105 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v105 = -184548880;
                                v105[1] = 100663296;
                                v106 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v106 = -184549120;
                                v106[1] = 83886080;
                                v184 = 40 * v185;
                                if (*(_DWORD *)(dword_106C3308 + 40 * v185 + 32804)) {
                                    v107 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v107 = 100663296;
                                    v107[1] = *(_DWORD *)(dword_106C3308 + v184 + 32804);
                                }
                                if (dword_10B4E1DC && !dword_106C6620 && !dword_106C6624 &&
                                    (!v168 || dword_106C661C) &&
                                    (!dword_106C661C || LODWORD(a1) != dword_106C2CF8) &&
                                    !dword_10277B1C && !*(_DWORD *)(LODWORD(a1) + 10676)) {
                                    v108 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v108 = -419430400;
                                    v108[1] = 0;
                                    v109 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v109 = -1174399998;
                                    v109[1] = 0;
                                    v110 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v110 = -1224736768;
                                    v110[1] = 0x40000;
                                    v111 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v111 = -1157627903;
                                    v111[1] = 260050816;
                                    v112 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v112 = -1174402046;
                                    v112[1] = dword_106C0258;
                                    v113 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v113 = -100663296;
                                    v113[1] = -13057;
                                    v162 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    sub_1002F900(v162,
                                                 0,
                                                 0,
                                                 0,
                                                 1003,
                                                 0,
                                                 0,
                                                 0,
                                                 1001,
                                                 0,
                                                 0,
                                                 0,
                                                 1003,
                                                 0,
                                                 0,
                                                 0,
                                                 1001);
                                    v114 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v114 = -1191181539;
                                    v114[1] = 4;
                                    v115 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v115 = -402653184;
                                    v115[1] = 0;
                                    v116 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v116 = -1174401534;
                                    v116[1] = 0;
                                    v117 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    v118 = dword_11829314;
                                    if (!dword_106C661C)
                                        v118 = dword_11829324;
                                    v117[1] = 1;
                                    *v117 = v118 & 0xFFFFFF | 0xDC000000;
                                    v119 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v119 = -1174403582;
                                    v119[1] = 192;
                                    v186 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v186 = *((_DWORD *)v173 + 1) & 0xFFF |
                                            ((*(_DWORD *)v173 & 0xFFF | 0xFFFF2000) << 12);
                                    v186[1] =
                                        ((unsigned __int16)*((_DWORD *)v173 + 1) + 252) & 0xFFF |
                                        ((*(_DWORD *)v173 + 252) << 12) & 0xFFF000;
                                    if (*(_DWORD *)(dword_106C3308 + v184 + 32828)) {
                                        v120 = (_DWORD *)dword_106C0680;
                                        dword_106C0680 += 8;
                                        *v120 = 100663296;
                                        v120[1] = *(_DWORD *)(dword_106C3308 + v184 + 32828);
                                    }
                                    v121 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v121 = -1174403582;
                                    v121[1] = dword_106C0688;
                                }
                                v122 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v122 = -419430400;
                                v122[1] = 0;
                                v123 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v123 = -1174399998;
                                v123[1] = 0x100000;
                                v124 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v124 = -1224736768;
                                v124[1] = (dword_100A6380 != 0 ? 0x80000 : 0) | 0x40000;
                                v125 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v125 = -1157627903;
                                v125[1] = 134221824;
                                v126 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v126 = -1174402046;
                                v126[1] = dword_106C0258;
                                v163 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                sub_1002F900(v163,
                                             1001,
                                             1005,
                                             1012,
                                             1005,
                                             0,
                                             0,
                                             0,
                                             1001,
                                             1001,
                                             1005,
                                             1012,
                                             1005,
                                             0,
                                             0,
                                             0,
                                             1001);
                                if (dword_106C6618) {
                                    v127 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v127 = -83886080;
                                    HIBYTE(v128) = byte_106C0260;
                                    LOBYTE(v128) = byte_106C1614;
                                    if (v168)
                                        v129 = (unsigned __int8)(((unsigned __int8)byte_10690BE8 >>
                                                                  3) -
                                                                 33);
                                    else
                                        v129 = (unsigned __int8)(((unsigned __int8)byte_10690BE8 >>
                                                                  1) +
                                                                 127);
                                    v130 = v129 |
                                           (((unsigned __int8)byte_106C0200 | (v128 << 8)) << 8);
                                } else {
                                    v127 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v127 = -83886080;
                                    HIBYTE(v131) = byte_106C0260;
                                    LOBYTE(v131) = byte_106C1614;
                                    v130 = ((unsigned __int8)byte_106C0200 | (v131 << 8)) << 8;
                                    LOBYTE(v130) = -1;
                                }
                                v127[1] = v130;
                                v132 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v132 = -1191181539;
                                v132[1] = 0;
                                v133 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v133 = -1191181539;
                                v133[1] = dword_10277E5C | dword_10277E58;
                                v134 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v134 = -402653184;
                                v134[1] = 0;
                                v135 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v135 = -1174401534;
                                v135[1] = 0;
                                v136 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                v137 = (int)*(&off_100A6498 +
                                              byte_100A64B8[2 * dword_10277EA0 +
                                                            *(_DWORD *)(LODWORD(a1) + 10004)]);
                                v136[1] = 1;
                                *v136 = v137 & 0xFFFFFF | 0xDC000000;
                                v138 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v138 = -1174401534;
                                v138[1] = 0x8000;
                                v139 = -33 -
                                       (__int64)(*(float *)(dword_106C2CF8 + 10008) * -20.371832);
                                v140 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v140 = ((v139 + 2) << 12) & 0xFFF000 | 0xF2000002;
                                v140[1] = ((v139 + 126) << 12) & 0xFFF000 | 0x1FE;
                                v141 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v141 = -419430400;
                                v141[1] = 0;
                                v142 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v142 = 58982416;
                                v142[1] = v174;
                                v143 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v143 = 58851344;
                                v143[1] = v174 + 16;
                                if (*(_DWORD *)(dword_106C3308 + v184 + 32808)) {
                                    v144 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    v145 = v184;
                                    *v144 = 100663296;
                                    v144[1] = *(_DWORD *)(dword_106C3308 + v184 + 32808);
                                } else {
                                    v145 = v184;
                                }
                                if ((dword_10277B1C || *(_DWORD *)(LODWORD(a1) + 10676)) &&
                                    *(_DWORD *)(dword_106C3308 + v145 + 32828)) {
                                    v146 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v146 = 100663296;
                                    v146[1] = *(_DWORD *)(dword_106C3308 + v145 + 32828);
                                }
                                v147 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v147 = -1124073472;
                                v147[1] = 0;
                                v148 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v148 = -1241513984;
                                v148[1] = 0x40000;
                                v149 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v149 = -1140850678;
                                v149[1] = v13;
                                v150 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v150 = -1140849654;
                                v150[1] = v13;
                                v151 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v151 = -1140842486;
                                v151[1] = v15;
                                v152 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v152 = -1140841462;
                                v152[1] = v15;
                                v153 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v153 = -1174402046;
                                v153[1] = dword_106C0258;
                                v154 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v154 = -1174401534;
                                v154[1] = 0;
                                if (*(_BYTE *)(LODWORD(a1) + 10671) != 2)
                                    sub_1000C6E0(SLODWORD(a1));
                                v155 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v155 = -419430400;
                                v155[1] = 0;
                                v156 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v156 = -1174399998;
                                v156[1] = 0;
                                v164 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                sub_1002F900(v164,
                                             1001,
                                             0,
                                             1004,
                                             0,
                                             1001,
                                             0,
                                             1004,
                                             0,
                                             1001,
                                             0,
                                             1004,
                                             0,
                                             1001,
                                             0,
                                             1004,
                                             0);
                                v157 = (_DWORD *)dword_106C0680;
                                dword_106C0680 += 8;
                                *v157 = -1191181539;
                                v157[1] = 3;
                                result = *(_DWORD *)(dword_106C3308 + 0x8000) + dword_106C161C;
                                dword_106C161C = result;
                                return result;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
// 100A6380: using guessed type int dword_100A6380;
// 100A6498: using guessed type void *off_100A6498;
// 100A64C8: using guessed type void *off_100A64C8;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100AC300: using guessed type int dword_100AC300;
// 10277B1C: using guessed type int dword_10277B1C;
// 10277BA8: using guessed type int dword_10277BA8;
// 10277BAC: using guessed type float flt_10277BAC;
// 10277BB0: using guessed type float flt_10277BB0;
// 10277E14: using guessed type int dword_10277E14;
// 10277E58: using guessed type int dword_10277E58;
// 10277E5C: using guessed type int dword_10277E5C;
// 10277EA0: using guessed type int dword_10277EA0;
// 10690BE8: using guessed type char byte_10690BE8;
// 10690BF0: using guessed type char byte_10690BF0;
// 106C0200: using guessed type char byte_106C0200;
// 106C0258: using guessed type int dword_106C0258;
// 106C0260: using guessed type char byte_106C0260;
// 106C0670: using guessed type int dword_106C0670;
// 106C0674: using guessed type int dword_106C0674;
// 106C0678: using guessed type int dword_106C0678;
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C0860: using guessed type float flt_106C0860;
// 106C08A0: using guessed type float flt_106C08A0;
// 106C0960: using guessed type char byte_106C0960;
// 106C0968: using guessed type char byte_106C0968;
// 106C1174: using guessed type int dword_106C1174;
// 106C1580: using guessed type char byte_106C1580;
// 106C1614: using guessed type char byte_106C1614;
// 106C161C: using guessed type int dword_106C161C;
// 106C29A8: using guessed type float flt_106C29A8;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C32D0: using guessed type int dword_106C32D0;
// 106C3308: using guessed type int dword_106C3308;
// 106C335C: using guessed type char byte_106C335C;
// 106C3364: using guessed type int dword_106C3364;
// 106C65BC: using guessed type char byte_106C65BC;
// 106C6614: using guessed type int dword_106C6614;
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C6630: using guessed type int dword_106C6630;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 10B4E1DC: using guessed type int dword_10B4E1DC;
// 11829314: using guessed type int dword_11829314;
// 11829324: using guessed type int dword_11829324;
// 118AA0A4: using guessed type int (__cdecl *dword_118AA0A4)(_DWORD, _DWORD);
