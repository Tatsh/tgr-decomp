//----- (10025AB0) --------------------------------------------------------
char __cdecl sub_10025AB0(_DWORD *a1,
                          int a2,
                          int a3,
                          int a4,
                          int a5,
                          int a6,
                          int a7,
                          int a8,
                          int a9,
                          int a10,
                          _DWORD *a11,
                          char a12,
                          int a13,
                          unsigned __int8 a14,
                          unsigned __int8 a15,
                          unsigned __int8 a16,
                          char a17,
                          unsigned __int8 a18,
                          unsigned __int8 a19,
                          unsigned __int8 a20,
                          char a21,
                          int a22) {
    unsigned __int64 v22;  // rax
    int v23;               // edi
    int v25;               // eax
    _BYTE *v26;            // ecx
    int v27;               // ebx
    _BYTE *v28;            // ecx
    int v29;               // edi
    _DWORD *v30;           // esi
    bool v31;              // cc
    _BYTE *v32;            // ecx
    int v33;               // edx
    int v34;               // edi
    _DWORD *v35;           // esi
    int v36;               // ebx
    int v37;               // edi
    _DWORD *v38;           // esi
    int v39;               // ecx
    int v40;               // edi
    _DWORD *v41;           // esi
    _DWORD *v42;           // ebx
    int v43;               // ecx
    int v44;               // edi
    _DWORD *v45;           // esi
    int v46;               // ebx
    int v47;               // ecx
    int v48;               // ecx
    char v49;              // bl
    int v50;               // ecx
    int v51;               // edi
    _DWORD *v52;           // esi
    unsigned __int8 v53;   // bl
    int v54;               // edi
    _DWORD *v55;           // esi
    char v56;              // bl
    int v57;               // edi
    _DWORD *v58;           // esi
    int v59;               // ecx
    int v60;               // edi
    _DWORD *v61;           // esi
    int v62;               // ecx
    int v63;               // edi
    _DWORD *v64;           // esi
    int v65;               // ecx
    int v66;               // ebx
    int v67;               // eax
    int v68;               // ecx
    unsigned __int8 *v69;  // eax
    int v70;               // edx
    _BYTE *v71;            // eax
    int v72;               // ecx
    int v73;               // ebx
    int v74;               // edi
    _DWORD *v75;           // esi
    int v76;               // ecx
    unsigned __int16 v77;  // bx
    _BYTE *v78;            // eax
    int v79;               // ebx
    int v80;               // edi
    _DWORD *v81;           // esi
    unsigned __int16 v82;  // bx
    int v83;               // edx
    int v84;               // edi
    _DWORD *v85;           // esi
    int v86;               // ecx
    int v87;               // edx
    unsigned __int16 v88;  // bx
    unsigned __int16 v89;  // bx
    int v90;               // ecx
    int v91;               // edi
    _DWORD *v92;           // esi
    int v93;               // ecx
    int v94;               // edi
    _DWORD *v95;           // esi
    int v96;               // ebx
    int v97;               // ecx
    int v98;               // ecx
    char v99;              // cl
    int v100;              // edi
    _DWORD *v101;          // esi
    int v102;              // edi
    _DWORD *v103;          // esi
    char v104;             // cl
    char v105;             // cl
    int v106;              // edi
    _DWORD *v107;          // esi
    int v108;              // ecx
    int v109;              // edi
    _DWORD *v110;          // esi
    int v111;              // ecx
    int v112;              // edi
    _DWORD *v113;          // esi
    unsigned __int8 *v114; // ebx
    int v115;              // eax
    int v116;              // ecx
    unsigned __int8 *v117; // ebx
    unsigned __int8 *v118; // ebx
    int v119;              // eax
    int v120;              // ecx
    int v121;              // ebx
    int v122;              // ecx
    int v123;              // ebx
    int v124;              // eax
    int v125;              // ecx
    unsigned __int8 *v126; // eax
    int v127;              // edx
    _BYTE *v128;           // eax
    int v129;              // ecx
    _BYTE *v130;           // eax
    int v131;              // ecx
    int m;                 // ebx
    int v133;              // ecx
    int v134;              // ecx
    int v135;              // ecx
    int v136;              // ecx
    _DWORD *v137;          // ecx
    _DWORD *v138;          // ebx
    int v139;              // ecx
    int v140;              // edx
    _DWORD *v141;          // ecx
    int v142;              // ebx
    int v143;              // eax
    int v144;              // ecx
    int kk;                // ecx
    int ll;                // ecx
    int v147;              // ecx
    int v148;              // ecx
    _WORD *v149;           // ebx
    _WORD *v150;           // ebx
    int v151;              // ecx
    _WORD *v152;           // ebx
    _WORD *v153;           // ebx
    int v154;              // ecx
    int v155;              // ebx
    int v156;              // ecx
    int v158;              // [esp+10h] [ebp-8Ch]
    int i3;                // [esp+10h] [ebp-8Ch]
    int nn;                // [esp+10h] [ebp-8Ch]
    int v161;              // [esp+10h] [ebp-8Ch]
    int i1;                // [esp+10h] [ebp-8Ch]
    int v163;              // [esp+10h] [ebp-8Ch]
    int i;                 // [esp+10h] [ebp-8Ch]
    int j;                 // [esp+10h] [ebp-8Ch]
    int l;                 // [esp+10h] [ebp-8Ch]
    int v167;              // [esp+10h] [ebp-8Ch]
    int n;                 // [esp+10h] [ebp-8Ch]
    int v169;              // [esp+10h] [ebp-8Ch]
    int v170;              // [esp+10h] [ebp-8Ch]
    int v171;              // [esp+10h] [ebp-8Ch]
    int v172;              // [esp+14h] [ebp-88h]
    int k;                 // [esp+14h] [ebp-88h]
    int v174;              // [esp+14h] [ebp-88h]
    int jj;                // [esp+14h] [ebp-88h]
    int v176;              // [esp+14h] [ebp-88h]
    int v177;              // [esp+18h] [ebp-84h]
    int v178;              // [esp+18h] [ebp-84h]
    int v179;              // [esp+18h] [ebp-84h]
    int v180;              // [esp+18h] [ebp-84h]
    char *v181;            // [esp+1Ch] [ebp-80h]
    char *v182;            // [esp+1Ch] [ebp-80h]
    unsigned __int8 *v183; // [esp+1Ch] [ebp-80h]
    int v184;              // [esp+1Ch] [ebp-80h]
    int v185;              // [esp+1Ch] [ebp-80h]
    int v186;              // [esp+1Ch] [ebp-80h]
    int v187;              // [esp+1Ch] [ebp-80h]
    int v188;              // [esp+1Ch] [ebp-80h]
    int v189;              // [esp+1Ch] [ebp-80h]
    int v190;              // [esp+1Ch] [ebp-80h]
    int v191;              // [esp+20h] [ebp-7Ch]
    int v192;              // [esp+20h] [ebp-7Ch]
    int v193;              // [esp+20h] [ebp-7Ch]
    int v194;              // [esp+20h] [ebp-7Ch]
    int v195;              // [esp+20h] [ebp-7Ch]
    int v196;              // [esp+24h] [ebp-78h]
    int v197;              // [esp+24h] [ebp-78h]
    int mm;                // [esp+24h] [ebp-78h]
    int v199;              // [esp+24h] [ebp-78h]
    int v200;              // [esp+24h] [ebp-78h]
    int v201;              // [esp+24h] [ebp-78h]
    int v202;              // [esp+28h] [ebp-74h]
    int v203;              // [esp+28h] [ebp-74h]
    char v204;             // [esp+28h] [ebp-74h]
    int v205;              // [esp+28h] [ebp-74h]
    int v206;              // [esp+28h] [ebp-74h]
    int v207;              // [esp+28h] [ebp-74h]
    int ii;                // [esp+28h] [ebp-74h]
    int v209;              // [esp+28h] [ebp-74h]
    int v210;              // [esp+28h] [ebp-74h]
    int v211;              // [esp+2Ch] [ebp-70h]
    int v212;              // [esp+2Ch] [ebp-70h]
    int v213;              // [esp+2Ch] [ebp-70h]
    int v214;              // [esp+2Ch] [ebp-70h]
    int v215;              // [esp+2Ch] [ebp-70h]
    int v216;              // [esp+2Ch] [ebp-70h]
    int v217;              // [esp+2Ch] [ebp-70h]
    int v218;              // [esp+2Ch] [ebp-70h]
    int v219;              // [esp+2Ch] [ebp-70h]
    int v220;              // [esp+2Ch] [ebp-70h]
    int v221;              // [esp+30h] [ebp-6Ch]
    int v222;              // [esp+30h] [ebp-6Ch]
    signed int v223;       // [esp+30h] [ebp-6Ch]
    unsigned __int8 v224;  // [esp+37h] [ebp-65h]
    unsigned __int8 v225;  // [esp+37h] [ebp-65h]
    unsigned __int8 v226;  // [esp+37h] [ebp-65h]
    int v227;              // [esp+38h] [ebp-64h]
    int v228;              // [esp+38h] [ebp-64h]
    int v229;              // [esp+3Ch] [ebp-60h]
    int v230;              // [esp+3Ch] [ebp-60h]
    int v231;              // [esp+3Ch] [ebp-60h]
    int i2;                // [esp+3Ch] [ebp-60h]
    int v233;              // [esp+3Ch] [ebp-60h]
    int v234;              // [esp+40h] [ebp-5Ch]
    _BYTE *v235;           // [esp+40h] [ebp-5Ch]
    _BYTE *v236;           // [esp+40h] [ebp-5Ch]
    int v237;              // [esp+40h] [ebp-5Ch]
    _BYTE *v238;           // [esp+40h] [ebp-5Ch]
    _BYTE *v239;           // [esp+40h] [ebp-5Ch]
    int v240;              // [esp+44h] [ebp-58h]
    int v241;              // [esp+4Ch] [ebp-50h]
    unsigned __int8 v242;  // [esp+50h] [ebp-4Ch]
    unsigned __int8 v243;  // [esp+68h] [ebp-34h]
    unsigned __int8 v244;  // [esp+70h] [ebp-2Ch]
    unsigned __int8 v245;  // [esp+78h] [ebp-24h]
    unsigned __int8 v246;  // [esp+88h] [ebp-14h]
    unsigned __int8 v247;  // [esp+90h] [ebp-Ch]
    unsigned __int8 v249;  // [esp+98h] [ebp-4h]
    int v250;              // [esp+ACh] [ebp+10h]

    LODWORD(v22) = a9;
    v23 = 0;
    v241 = a9;
    if (a9 >= a10)
        return v22;
    while (1) {
        HIDWORD(v22) = &a11[16 * (_DWORD)v22];
        v227 = HIDWORD(v22);
        v250 = a4 + 8 * *(_DWORD *)(HIDWORD(v22) + 12);
        if (a3) {
            if (a3 == 1) {
                switch (a6) {
                case 2:
                    v194 = 0;
                    v179 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                    v200 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    if (v200 > 0) {
                        do {
                            v114 = (unsigned __int8 *)v250;
                            if ((v194 & a22) != 0) {
                                HIWORD(v115) = HIWORD(v179);
                                v116 = 0;
                                for (i = 0; v116 < v179; v114 = v118 + 4) {
                                    v117 = v114 + 4;
                                    v215 = 0;
                                    do {
                                        if (v116 >= v179)
                                            break;
                                        LOWORD(v115) = *(_WORD *)(a5 + 2 * *v117);
                                        LODWORD(v22) = sub_10027B10(v115);
                                        *a1 = v22;
                                        v23 += 4;
                                        ++a1;
                                        if (v23 >= a2)
                                            return v22;
                                        ++v117;
                                        v116 = i + 1;
                                        v115 = v215 + 1;
                                        ++i;
                                        ++v215;
                                    } while (v215 < 4);
                                    v118 = v117 - 8;
                                    v216 = 0;
                                    do {
                                        if (v116 >= v179)
                                            break;
                                        LOWORD(v115) = *(_WORD *)(a5 + 2 * *v118);
                                        LODWORD(v22) = sub_10027B10(v115);
                                        *a1 = v22;
                                        v23 += 4;
                                        ++a1;
                                        if (v23 >= a2)
                                            return v22;
                                        ++v118;
                                        v116 = i + 1;
                                        v115 = v216 + 1;
                                        ++i;
                                        ++v216;
                                    } while (v216 < 4);
                                    HIWORD(v115) = HIWORD(v179);
                                }
                            } else {
                                HIWORD(v119) = HIWORD(v179);
                                for (j = 0; j < v179; ++j) {
                                    LOWORD(v119) = *(_WORD *)(a5 + 2 * *v114);
                                    LODWORD(v22) = sub_10027B10(v119);
                                    *a1 = v22;
                                    v23 += 4;
                                    ++a1;
                                    if (v23 >= a2)
                                        return v22;
                                    ++v114;
                                    v119 = j + 1;
                                }
                            }
                            if (a7) {
                                v120 = 0;
                                for (LODWORD(v22) = a1 - 1; v120 < v179; ++v120) {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 - 4;
                                    if (v23 >= a2)
                                        return v22;
                                }
                            }
                            v31 = v194 + 1 < v200;
                            v250 += *(_DWORD *)(v227 + 8);
                            ++v194;
                        } while (v31);
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        v195 = 0;
                        if (v200 > 0) {
                            v121 = v179;
                            do {
                                LODWORD(v22) = 2 * v121;
                                if (!a7)
                                    LODWORD(v22) = v121;
                                HIDWORD(v22) -= 4 * v22;
                                v122 = 2 * v121;
                                LODWORD(v22) = HIDWORD(v22);
                                if (!a7)
                                    v122 = v121;
                                if (v122 > 0) {
                                    do {
                                        v23 += 4;
                                        *a1++ = *(_DWORD *)v22;
                                        LODWORD(v22) = v22 + 4;
                                        if (v23 >= a2)
                                            return v22;
                                        --v122;
                                    } while (v122 > 0);
                                    v121 = v179;
                                }
                                ++v195;
                            } while (v195 < v200);
                        }
                    }
                    break;
                case 3:
                    if (a13 == 1) {
                        v123 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                        v124 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                        v125 = 0;
                        v233 = v123;
                        v205 = 0;
                        for (k = v124; v205 < k; ++v205) {
                            v126 = (unsigned __int8 *)v250;
                            v237 = v250;
                            if ((a22 & v125) != 0) {
                                v127 = 0;
                                for (l = 0; v127 < v123; v126 = v130 + 4) {
                                    v128 = v126 + 4;
                                    v217 = 0;
                                    v238 = v128;
                                    do {
                                        if (v127 >= v123)
                                            break;
                                        v243 = *v128;
                                        v23 += 4;
                                        ++a1;
                                        v129 = v243 & 0xF0 | (v243 >> 4);
                                        LODWORD(v22) = *v128 & 0xF;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | (16 * (v243 & 0xF))) << 24) |
                                            ((a20 + v129 * (a16 - (unsigned int)a20) / 0xFF)
                                             << 16) |
                                            ((a19 + v129 * (a15 - (unsigned int)a19) / 0xFF) << 8) |
                                            (a18 + v129 * (a14 - (unsigned int)a18) / 0xFF);
                                        if (v23 >= a2)
                                            return v22;
                                        v123 = v233;
                                        v128 = v238 + 1;
                                        v127 = l + 1;
                                        ++v238;
                                        v31 = v217 + 1 < 4;
                                        ++l;
                                        ++v217;
                                    } while (v31);
                                    v130 = v128 - 8;
                                    v218 = 0;
                                    v239 = v130;
                                    do {
                                        if (v127 >= v123)
                                            break;
                                        v244 = *v130;
                                        v23 += 4;
                                        ++a1;
                                        v131 = v244 & 0xF0 | (v244 >> 4);
                                        LODWORD(v22) = *v130 & 0xF;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | (16 * (v244 & 0xF))) << 24) |
                                            ((a20 + v131 * (a16 - (unsigned int)a20) / 0xFF)
                                             << 16) |
                                            (a18 + v131 * (a14 - (unsigned int)a18) / 0xFF) |
                                            ((a19 + v131 * (a15 - (unsigned int)a19) / 0xFF) << 8);
                                        if (v23 >= a2)
                                            return v22;
                                        v123 = v233;
                                        v130 = v239 + 1;
                                        v127 = l + 1;
                                        ++v239;
                                        v31 = v218 + 1 < 4;
                                        ++l;
                                        ++v218;
                                    } while (v31);
                                }
                            } else {
                                v167 = 0;
                                if (v123 > 0) {
                                    for (m = a15 - a19;; m = a15 - a19) {
                                        v23 += 4;
                                        v245 = *v126;
                                        ++a1;
                                        LODWORD(v22) = *v126 & 0xF;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | (16 * (v245 & 0xF))) << 24) |
                                            ((a20 +
                                              (a16 - a20) * (v245 & 0xF0 | (v245 >> 4)) / 0xFFu)
                                             << 16) |
                                            ((a19 + m * (v245 & 0xF0 | (v245 >> 4)) / 0xFFu) << 8) |
                                            (a18 +
                                             (a14 - a18) * (v245 & 0xF0 | (v245 >> 4)) / 0xFFu);
                                        if (v23 >= a2)
                                            return v22;
                                        v123 = v233;
                                        v126 = (unsigned __int8 *)++v237;
                                        if (++v167 >= v233)
                                            break;
                                    }
                                }
                            }
                            if (a7) {
                                v133 = 0;
                                for (LODWORD(v22) = a1 - 1; v133 < v123; ++v133) {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 - 4;
                                    if (v23 >= a2)
                                        return v22;
                                }
                            }
                            v250 += *(_DWORD *)(v227 + 8);
                            v124 = k;
                            v125 = v205 + 1;
                        }
                        if (a8) {
                            HIDWORD(v22) = a1;
                            v206 = 0;
                            if (v124 > 0) {
                                do {
                                    LODWORD(v22) = 2 * v123;
                                    if (!a7)
                                        LODWORD(v22) = v123;
                                    HIDWORD(v22) -= 4 * v22;
                                    v134 = 2 * v123;
                                    LODWORD(v22) = HIDWORD(v22);
                                    if (!a7)
                                        v134 = v123;
                                    for (; v134 > 0; --v134) {
                                        v23 += 4;
                                        *a1++ = *(_DWORD *)v22;
                                        LODWORD(v22) = v22 + 4;
                                        if (v23 >= a2)
                                            return v22;
                                    }
                                    ++v206;
                                } while (v206 < k);
                            }
                        }
                    } else {
                        LODWORD(v22) = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                        v135 = 0;
                        v223 = v22;
                        v207 = 0;
                        v174 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                        if (v174 > 0) {
                            do {
                                HIDWORD(v22) = v250;
                                if ((a22 & v135) != 0) {
                                    v136 = 0;
                                    for (n = 0; v136 < (int)v22; HIDWORD(v22) += 4) {
                                        HIDWORD(v22) += 4;
                                        v219 = 0;
                                        do {
                                            if (v136 >= (int)v22)
                                                break;
                                            v23 += 4;
                                            ++a1;
                                            v246 = *(_BYTE *)HIDWORD(v22) & 0xF0 |
                                                   (*(_BYTE *)HIDWORD(v22) >> 4);
                                            LODWORD(v22) =
                                                (unsigned __int8)(16 * *(_BYTE *)HIDWORD(v22));
                                            *(a1 - 1) =
                                                v246 |
                                                ((v246 | ((v246 | (((unsigned int)v22 |
                                                                    *(_BYTE *)HIDWORD(v22) & 0xF)
                                                                   << 8))
                                                          << 8))
                                                 << 8);
                                            if (v23 >= a2)
                                                return v22;
                                            ++HIDWORD(v22);
                                            v136 = ++n;
                                            ++v219;
                                            LODWORD(v22) = v223;
                                        } while (v219 < 4);
                                        HIDWORD(v22) -= 8;
                                        v220 = 0;
                                        do {
                                            if (v136 >= (int)v22)
                                                break;
                                            v23 += 4;
                                            ++a1;
                                            v247 = *(_BYTE *)HIDWORD(v22) & 0xF0 |
                                                   (*(_BYTE *)HIDWORD(v22) >> 4);
                                            LODWORD(v22) = *(_BYTE *)HIDWORD(v22) & 0xF;
                                            *(a1 - 1) =
                                                v247 |
                                                ((v247 |
                                                  ((v247 |
                                                    (((unsigned int)v22 |
                                                      (unsigned __int8)(16 *
                                                                        *(_BYTE *)HIDWORD(v22)))
                                                     << 8))
                                                   << 8))
                                                 << 8);
                                            if (v23 >= a2)
                                                return v22;
                                            ++HIDWORD(v22);
                                            v136 = ++n;
                                            ++v220;
                                            LODWORD(v22) = v223;
                                        } while (v220 < 4);
                                    }
                                } else {
                                    v169 = 0;
                                    if ((int)v22 > 0) {
                                        do {
                                            v23 += 4;
                                            ++a1;
                                            v249 = *(_BYTE *)HIDWORD(v22) & 0xF0 |
                                                   (*(_BYTE *)HIDWORD(v22) >> 4);
                                            LODWORD(v22) =
                                                (unsigned __int8)(16 * *(_BYTE *)HIDWORD(v22));
                                            *(a1 - 1) =
                                                v249 |
                                                ((v249 | ((v249 | (((unsigned int)v22 |
                                                                    *(_BYTE *)HIDWORD(v22) & 0xF)
                                                                   << 8))
                                                          << 8))
                                                 << 8);
                                            if (v23 >= a2)
                                                return v22;
                                            v22 = __PAIR64__(HIDWORD(v22), v223) + 0x100000000i64;
                                            ++v169;
                                        } while (v169 < v223);
                                    }
                                }
                                if (a7) {
                                    HIDWORD(v22) = 0;
                                    v137 = a1 - 1;
                                    if ((int)v22 > 0) {
                                        do {
                                            v23 += 4;
                                            *a1++ = *v137--;
                                            if (v23 >= a2)
                                                return v22;
                                            ++HIDWORD(v22);
                                        } while (SHIDWORD(v22) < (int)v22);
                                    }
                                }
                                v250 += *(_DWORD *)(v227 + 8);
                                v135 = ++v207;
                            } while (v207 < v174);
                        }
                        if (a8) {
                            v138 = a1;
                            for (ii = 0; ii < v174; ++ii) {
                                v139 = 2 * v22;
                                if (!a7)
                                    v139 = v22;
                                v138 -= v139;
                                v140 = 2 * v22;
                                v141 = v138;
                                if (!a7)
                                    v140 = v22;
                                for (; v140 > 0; --v140) {
                                    v23 += 4;
                                    *a1++ = *v141++;
                                    if (v23 >= a2)
                                        return v22;
                                }
                            }
                        }
                    }
                    break;
                case 4:
                    v142 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                    v143 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    v144 = 0;
                    v201 = v142;
                    v209 = 0;
                    for (jj = v143; v209 < jj; ++v209) {
                        LODWORD(v22) = v250;
                        if ((a22 & v144) != 0) {
                            for (kk = 0; kk < v142; LODWORD(v22) = v22 + 4) {
                                v22 = (unsigned int)(v22 + 4);
                                do {
                                    if (kk >= v142)
                                        break;
                                    v23 += 4;
                                    *a1++ = (*(unsigned __int8 *)v22 << 24) | 0xFFFFFF;
                                    if (v23 >= a2)
                                        return v22;
                                    v142 = v201;
                                    LODWORD(v22) = v22 + 1;
                                    ++kk;
                                    ++HIDWORD(v22);
                                } while (SHIDWORD(v22) < 4);
                                v22 = (unsigned int)(v22 - 8);
                                do {
                                    if (kk >= v142)
                                        break;
                                    v23 += 4;
                                    *a1++ = (*(unsigned __int8 *)v22 << 24) | 0xFFFFFF;
                                    if (v23 >= a2)
                                        return v22;
                                    v142 = v201;
                                    LODWORD(v22) = v22 + 1;
                                    ++kk;
                                    ++HIDWORD(v22);
                                } while (SHIDWORD(v22) < 4);
                            }
                        } else {
                            for (ll = 0; ll < v142; ++ll) {
                                v23 += 4;
                                *a1++ = (*(unsigned __int8 *)v22 << 24) | 0xFFFFFF;
                                if (v23 >= a2)
                                    return v22;
                                LODWORD(v22) = v22 + 1;
                            }
                        }
                        if (a7) {
                            v147 = 0;
                            for (LODWORD(v22) = a1 - 1; v147 < v142; ++v147) {
                                v23 += 4;
                                *a1++ = *(_DWORD *)v22;
                                LODWORD(v22) = v22 - 4;
                                if (v23 >= a2)
                                    return v22;
                            }
                        }
                        v250 += *(_DWORD *)(v227 + 8);
                        v143 = jj;
                        v144 = v209 + 1;
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        v210 = 0;
                        if (v143 > 0) {
                            do {
                                LODWORD(v22) = 2 * v142;
                                if (!a7)
                                    LODWORD(v22) = v142;
                                HIDWORD(v22) -= 4 * v22;
                                v148 = 2 * v142;
                                LODWORD(v22) = HIDWORD(v22);
                                if (!a7)
                                    v148 = v142;
                                for (; v148 > 0; --v148) {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 + 4;
                                    if (v23 >= a2)
                                        return v22;
                                }
                                ++v210;
                            } while (v210 < jj);
                        }
                    }
                    break;
                }
                goto LABEL_336;
            }
            if (a3 != 2 || a6)
                goto LABEL_336;
            v170 = 0;
            v180 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
            v176 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
            if (v176 <= 0) {
            LABEL_324:
                if (a8) {
                    HIDWORD(v22) = a1;
                    v171 = 0;
                    if (v176 > 0) {
                        v155 = v180;
                        do {
                            LODWORD(v22) = 2 * v155;
                            if (!a7)
                                LODWORD(v22) = v155;
                            HIDWORD(v22) -= 4 * v22;
                            v156 = 2 * v155;
                            LODWORD(v22) = HIDWORD(v22);
                            if (!a7)
                                v156 = v155;
                            if (v156 > 0) {
                                do {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 + 4;
                                    if (v23 >= a2)
                                        return v22;
                                    --v156;
                                } while (v156 > 0);
                                v155 = v180;
                            }
                            ++v171;
                        } while (v171 < v176);
                    }
                }
                goto LABEL_336;
            }
            while (1) {
                WORD1(v22) = HIWORD(v170);
                v149 = (_WORD *)v250;
                HIDWORD(v22) = v180;
                v187 = 0;
                if ((v170 & a22) != 0) {
                    if (v180 <= 0)
                        goto LABEL_319;
                    while (1) {
                        WORD2(v22) = v149[2];
                        *a1++ = sub_10027B10(HIDWORD(v22));
                        v150 = v149 + 1;
                        v23 += 4;
                        LODWORD(v22) = v187 + 1;
                        v188 = v187 + 1;
                        if (v188 >= v180)
                            break;
                        if (v23 >= a2)
                            return v22;
                        LOWORD(v22) = v150[2];
                        LODWORD(v22) = sub_10027B10(v22);
                        HIWORD(v151) = HIWORD(v180);
                        *a1++ = v22;
                        v152 = v150 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v188 + 1;
                        v189 = v188 + 1;
                        if (v189 >= v180)
                            break;
                        if (v23 >= a2)
                            return v22;
                        LOWORD(v151) = *(v152 - 2);
                        *a1++ = sub_10027B10(v151);
                        v153 = v152 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v189 + 1;
                        v190 = v189 + 1;
                        if (v190 >= v180)
                            break;
                        if (v23 >= a2)
                            return v22;
                        WORD2(v22) = *(v153 - 2);
                        *a1++ = sub_10027B10(HIDWORD(v22));
                        v149 = v153 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v190 + 1;
                        v187 = v190 + 1;
                        if (v187 >= v180)
                            break;
                        if (v23 >= a2)
                            return v22;
                    }
                } else {
                    if (v180 <= 0)
                        goto LABEL_319;
                    do {
                        LOWORD(v22) = *v149;
                        LODWORD(v22) = sub_10027B10(v22);
                        *a1 = v22;
                        v23 += 4;
                        ++a1;
                        ++v149;
                        if (v23 >= a2)
                            return v22;
                        LODWORD(v22) = ++v187;
                    } while (v187 < v180);
                }
                HIDWORD(v22) = v180;
            LABEL_319:
                if (a7) {
                    v154 = 0;
                    for (LODWORD(v22) = a1 - 1; v154 < SHIDWORD(v22); ++v154) {
                        v23 += 4;
                        *a1++ = *(_DWORD *)v22;
                        LODWORD(v22) = v22 - 4;
                        if (v23 >= a2)
                            return v22;
                    }
                }
                v31 = v170 + 1 < v176;
                v250 += *(_DWORD *)(v227 + 8);
                ++v170;
                if (!v31)
                    goto LABEL_324;
            }
        }
        if (a6 != 2) {
            if (a6 == 4) {
                v65 = *(_DWORD *)(HIDWORD(v22) + 32);
                if (a13 == 1) {
                    v66 = 1 << (v65 - 1);
                    v67 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    v68 = 0;
                    v221 = v66;
                    v211 = 0;
                    for (mm = v67; v211 < mm; ++v211) {
                        v69 = (unsigned __int8 *)v250;
                        v234 = v250;
                        if ((v68 & a22) != 0) {
                            v70 = 0;
                            for (nn = 0; v70 < v66; v69 = v78 + 4) {
                                v71 = v69 + 4;
                                v229 = 0;
                                v235 = v71;
                                do {
                                    if (v70 >= v66)
                                        break;
                                    v224 = *v71;
                                    v184 = a14 - a18;
                                    v72 = (v224 >> 4) | v224 & 0xF0;
                                    v73 = (unsigned __int8)(a20 - v72 * (a16 - a20));
                                    BYTE1(v73) = a21 - v72 * (a17 - a21);
                                    v74 = v23 + 4;
                                    v22 = 2155905153i64 * v184 * v72;
                                    LOBYTE(v22) = a18;
                                    v75 = a1 + 1;
                                    *(v75 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - v72 * (a15 - a19)) | (v73 << 8))
                                         << 8);
                                    if (v74 >= a2)
                                        return v22;
                                    v23 = v74 + 4;
                                    a1 = v75 + 1;
                                    v76 = v224 & 0xF | (unsigned __int8)(16 * v224);
                                    LOBYTE(v77) = a20 - v76 * (a16 - a20);
                                    HIBYTE(v77) = a21 - v76 * (a17 - a21);
                                    v22 = 2155905153i64 * v184 * v76;
                                    LOBYTE(v22) = a18;
                                    *(a1 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - v76 * (a15 - a19)) | (v77 << 8))
                                         << 8);
                                    if (v23 >= a2)
                                        return v22;
                                    v66 = v221;
                                    v71 = v235 + 1;
                                    v70 = nn + 1;
                                    ++v235;
                                    v31 = v229 + 1 < 4;
                                    ++nn;
                                    ++v229;
                                } while (v31);
                                v78 = v71 - 8;
                                v230 = 0;
                                v236 = v78;
                                do {
                                    if (v70 >= v66)
                                        break;
                                    v225 = *v78;
                                    v242 = (v225 >> 4) | v225 & 0xF0;
                                    v185 = a14 - a18;
                                    v79 = (unsigned __int8)(a20 - (a16 - a20) * v242);
                                    BYTE1(v79) = a21 - (a17 - a21) * v242;
                                    v80 = v23 + 4;
                                    v22 = 2155905153i64 * v185 * v242;
                                    LOBYTE(v22) = a18;
                                    v81 = a1 + 1;
                                    *(v81 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - (a15 - a19) * v242) | (v79 << 8))
                                         << 8);
                                    if (v80 >= a2)
                                        return v22;
                                    v23 = v80 + 4;
                                    a1 = v81 + 1;
                                    LOBYTE(v82) = a20 - (a16 - a20) * (v225 & 0xF | (16 * v225));
                                    HIBYTE(v82) = a21 - (a17 - a21) * (v225 & 0xF | (16 * v225));
                                    v22 = 2155905153i64 * v185 *
                                          (v225 & 0xFu | (unsigned __int8)(16 * v225));
                                    LOBYTE(v22) = a18;
                                    *(a1 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - (a15 - a19) *
                                                                      (v225 & 0xF | (16 * v225))) |
                                          (v82 << 8))
                                         << 8);
                                    if (v23 >= a2)
                                        return v22;
                                    v66 = v221;
                                    v78 = v236 + 1;
                                    v70 = nn + 1;
                                    ++v236;
                                    v31 = v230 + 1 < 4;
                                    ++nn;
                                    ++v230;
                                } while (v31);
                            }
                        } else {
                            v161 = 0;
                            if (v66 > 0) {
                                v186 = a14 - a18;
                                v178 = a15 - a19;
                                v83 = a16 - a20;
                                v204 = a17 - a21;
                                while (1) {
                                    v84 = v23 + 4;
                                    v226 = *v69;
                                    v85 = a1 + 1;
                                    v86 = (v226 >> 4) | v226 & 0xF0;
                                    v87 = (int)((unsigned __int64)(2155905153i64 * v83 * v86) >>
                                                32) >>
                                          7;
                                    LOBYTE(v88) = a20 + (v87 < 0) + v87;
                                    HIBYTE(v88) = a21 - v204 * v86;
                                    v22 = 2155905153i64 * v186 * v86;
                                    LOBYTE(v22) = a18;
                                    *(v85 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 +
                                                            ((int)((unsigned __int64)(2155905153i64 *
                                                                                      v178 * v86) >>
                                                                   32) >>
                                                             7 < 0) +
                                                            ((int)((unsigned __int64)(2155905153i64 *
                                                                                      v178 * v86) >>
                                                                   32) >>
                                                             7)) |
                                          (v88 << 8))
                                         << 8);
                                    if (v84 >= a2)
                                        return v22;
                                    v23 = v84 + 4;
                                    a1 = v85 + 1;
                                    LOBYTE(v89) = a20 - (a16 - a20) * (v226 & 0xF | (16 * v226));
                                    HIBYTE(v89) = a21 - v204 * (v226 & 0xF | (16 * v226));
                                    v22 = 2155905153i64 * v186 *
                                          (v226 & 0xFu | (unsigned __int8)(16 * v226));
                                    LOBYTE(v22) = a18;
                                    *(a1 - 1) = (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                                  (SHIDWORD(v22) >> 7)) |
                                                (((unsigned __int8)(a19 - v178 * (v226 & 0xF |
                                                                                  (16 * v226))) |
                                                  (v89 << 8))
                                                 << 8);
                                    if (v23 >= a2)
                                        return v22;
                                    v66 = v221;
                                    v69 = (unsigned __int8 *)++v234;
                                    if (++v161 >= v221)
                                        break;
                                    v83 = a16 - a20;
                                }
                            }
                        }
                        if (a7) {
                            v90 = 0;
                            for (LODWORD(v22) = a1 - 1; v90 < v66; ++v90) {
                                v91 = v23 + 4;
                                *a1 = *(_DWORD *)v22;
                                v92 = a1 + 1;
                                LODWORD(v22) = v22 - 4;
                                if (v91 < a2) {
                                    v23 = v91 + 4;
                                    *v92 = *(_DWORD *)v22;
                                    a1 = v92 + 1;
                                    LODWORD(v22) = v22 - 4;
                                    if (v23 < a2)
                                        continue;
                                }
                                return v22;
                            }
                        }
                        v250 += *(_DWORD *)(v227 + 8);
                        v67 = mm;
                        v68 = v211 + 1;
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        v212 = 0;
                        if (v67 > 0) {
                            do {
                                LODWORD(v22) = 2 * v66;
                                if (!a7)
                                    LODWORD(v22) = v66;
                                HIDWORD(v22) -= 8 * v22;
                                v93 = 2 * v66;
                                LODWORD(v22) = HIDWORD(v22);
                                if (!a7)
                                    v93 = v66;
                                for (; v93 > 0; --v93) {
                                    v94 = v23 + 4;
                                    *a1 = *(_DWORD *)v22;
                                    v95 = a1 + 1;
                                    LODWORD(v22) = v22 + 4;
                                    if (v94 < a2) {
                                        v23 = v94 + 4;
                                        *v95 = *(_DWORD *)v22;
                                        a1 = v95 + 1;
                                        LODWORD(v22) = v22 + 4;
                                        if (v23 < a2)
                                            continue;
                                    }
                                    return v22;
                                }
                                ++v212;
                            } while (v212 < mm);
                        }
                    }
                } else {
                    v96 = 1 << (v65 - 1);
                    v97 = 0;
                    v222 = v96;
                    v231 = 0;
                    v199 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    if (v199 > 0) {
                        do {
                            HIDWORD(v22) = v250;
                            if ((a22 & v97) != 0) {
                                v98 = 0;
                                for (i1 = 0; v98 < v96; HIDWORD(v22) += 4) {
                                    HIDWORD(v22) += 4;
                                    v213 = 0;
                                    do {
                                        if (v98 >= v96)
                                            break;
                                        v99 = *(_BYTE *)HIDWORD(v22);
                                        v100 = v23 + 4;
                                        v101 = a1 + 1;
                                        LODWORD(v22) = (unsigned __int8)*(_BYTE *)HIDWORD(v22) >> 4;
                                        *(v101 - 1) =
                                            (((unsigned int)v22 | *(_BYTE *)HIDWORD(v22) & 0xF0)
                                             << 24) |
                                            0xFFFFFF;
                                        if (v100 >= a2)
                                            return v22;
                                        v23 = v100 + 4;
                                        a1 = v101 + 1;
                                        LODWORD(v22) =
                                            ((v99 & 0xF | (unsigned __int8)(16 * v99)) << 24) |
                                            0xFFFFFF;
                                        *(a1 - 1) = v22;
                                        if (v23 >= a2)
                                            return v22;
                                        v96 = v222;
                                        ++HIDWORD(v22);
                                        v98 = i1 + 1;
                                        v31 = v213 + 1 < 4;
                                        ++i1;
                                        ++v213;
                                    } while (v31);
                                    HIDWORD(v22) -= 8;
                                    v214 = 0;
                                    do {
                                        if (v98 >= v96)
                                            break;
                                        LOBYTE(v22) = *(_BYTE *)HIDWORD(v22);
                                        v102 = v23 + 4;
                                        v103 = a1 + 1;
                                        *(v103 - 1) =
                                            ((((unsigned __int8)*(_BYTE *)HIDWORD(v22) >> 4) |
                                              *(_BYTE *)HIDWORD(v22) & 0xF0)
                                             << 24) |
                                            0xFFFFFF;
                                        if (v102 >= a2)
                                            return v22;
                                        v104 = v22;
                                        v23 = v102 + 4;
                                        LODWORD(v22) = (unsigned __int8)(16 * v22);
                                        a1 = v103 + 1;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | v104 & 0xF) << 24) | 0xFFFFFF;
                                        if (v23 >= a2)
                                            return v22;
                                        v96 = v222;
                                        ++HIDWORD(v22);
                                        v98 = i1 + 1;
                                        v31 = v214 + 1 < 4;
                                        ++i1;
                                        ++v214;
                                    } while (v31);
                                }
                            } else {
                                v163 = 0;
                                if (v96 > 0) {
                                    do {
                                        v105 = *(_BYTE *)HIDWORD(v22);
                                        v106 = v23 + 4;
                                        v107 = a1 + 1;
                                        LODWORD(v22) = *(_BYTE *)HIDWORD(v22) & 0xF0;
                                        *(v107 - 1) =
                                            (((unsigned int)v22 |
                                              ((unsigned __int8)*(_BYTE *)HIDWORD(v22) >> 4))
                                             << 24) |
                                            0xFFFFFF;
                                        if (v106 >= a2)
                                            return v22;
                                        v23 = v106 + 4;
                                        a1 = v107 + 1;
                                        LODWORD(v22) =
                                            ((v105 & 0xF | (unsigned __int8)(16 * v105)) << 24) |
                                            0xFFFFFF;
                                        *(a1 - 1) = v22;
                                        if (v23 >= a2)
                                            return v22;
                                        v96 = v222;
                                        ++HIDWORD(v22);
                                        ++v163;
                                    } while (v163 < v222);
                                }
                            }
                            if (a7) {
                                v108 = 0;
                                for (LODWORD(v22) = a1 - 1; v108 < v96; ++v108) {
                                    v109 = v23 + 4;
                                    *a1 = *(_DWORD *)v22;
                                    v110 = a1 + 1;
                                    LODWORD(v22) = v22 - 4;
                                    if (v109 < a2) {
                                        v23 = v109 + 4;
                                        *v110 = *(_DWORD *)v22;
                                        a1 = v110 + 1;
                                        LODWORD(v22) = v22 - 4;
                                        if (v23 < a2)
                                            continue;
                                    }
                                    return v22;
                                }
                            }
                            v250 += *(_DWORD *)(v227 + 8);
                            v97 = ++v231;
                        } while (v231 < v199);
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        for (i2 = 0; i2 < v199; ++i2) {
                            LODWORD(v22) = 2 * v96;
                            if (!a7)
                                LODWORD(v22) = v96;
                            HIDWORD(v22) -= 8 * v22;
                            v111 = 2 * v96;
                            LODWORD(v22) = HIDWORD(v22);
                            if (!a7)
                                v111 = v96;
                            for (; v111 > 0; --v111) {
                                v112 = v23 + 4;
                                *a1 = *(_DWORD *)v22;
                                v113 = a1 + 1;
                                LODWORD(v22) = v22 + 4;
                                if (v112 < a2) {
                                    v23 = v112 + 4;
                                    *v113 = *(_DWORD *)v22;
                                    a1 = v113 + 1;
                                    LODWORD(v22) = v22 + 4;
                                    if (v23 < a2)
                                        continue;
                                }
                                return v22;
                            }
                        }
                    }
                }
            }
            goto LABEL_336;
        }
        if ((a12 & 2) == 0 || v241 != 1) {
            v46 = 1 << (*(_DWORD *)(HIDWORD(v22) + 32) - 1);
            v47 = 0;
            v193 = v46;
            v158 = 0;
            v197 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
            if (v197 <= 0) {
            LABEL_73:
                if (a8) {
                    HIDWORD(v22) = a1;
                    for (i3 = 0; i3 < v197; ++i3) {
                        LODWORD(v22) = 2 * v46;
                        if (!a7)
                            LODWORD(v22) = v46;
                        HIDWORD(v22) -= 8 * v22;
                        v62 = 2 * v46;
                        LODWORD(v22) = HIDWORD(v22);
                        if (!a7)
                            v62 = v46;
                        if (v62 > 0) {
                            do {
                                v63 = v23 + 4;
                                *a1 = *(_DWORD *)v22;
                                v64 = a1 + 1;
                                LODWORD(v22) = v22 + 4;
                                if (v63 >= a2)
                                    return v22;
                                v23 = v63 + 4;
                                *v64 = *(_DWORD *)v22;
                                a1 = v64 + 1;
                                LODWORD(v22) = v22 + 4;
                                if (v23 >= a2)
                                    return v22;
                                --v62;
                            } while (v62 > 0);
                            v46 = v193;
                        }
                    }
                }
                goto LABEL_336;
            }
            while (2) {
                WORD1(v22) = 0;
                v181 = (char *)v250;
                HIWORD(v22) = HIWORD(a22);
                v177 = 0;
                if ((a22 & v47) != 0) {
                    if (v46 > 0) {
                        do {
                            v202 = 0;
                            v182 = v181 + 4;
                            do {
                                HIWORD(v48) = HIWORD(v193);
                                if (v177 >= v193)
                                    break;
                                v49 = *v182;
                                WORD2(v22) = *(_WORD *)(a5 + 2 * ((unsigned __int8)*v182 >> 4));
                                LODWORD(v22) = sub_10027B10(HIDWORD(v22));
                                *a1 = v22;
                                v51 = v23 + 4;
                                v52 = a1 + 1;
                                if (v51 >= a2)
                                    return v22;
                                LOWORD(v50) = *(_WORD *)(a5 + 2 * (v49 & 0xF));
                                LODWORD(v22) = sub_10027B10(v50);
                                *v52 = v22;
                                v23 = v51 + 4;
                                a1 = v52 + 1;
                                if (v23 >= a2)
                                    return v22;
                                ++v182;
                                ++v177;
                                ++v202;
                            } while (v202 < 4);
                            v203 = 0;
                            v183 = (unsigned __int8 *)(v182 - 8);
                            do {
                                HIWORD(v22) = HIWORD(v177);
                                if (v177 >= v193)
                                    break;
                                v53 = *v183;
                                LOWORD(v48) = *(_WORD *)(a5 + 2 * (*v183 >> 4));
                                LODWORD(v22) = sub_10027B10(v48);
                                *a1 = v22;
                                v54 = v23 + 4;
                                v55 = a1 + 1;
                                if (v54 >= a2)
                                    return v22;
                                LOWORD(v22) = *(_WORD *)(a5 + 2 * (v53 & 0xF));
                                LODWORD(v22) = sub_10027B10(v22);
                                *v55 = v22;
                                v23 = v54 + 4;
                                a1 = v55 + 1;
                                if (v23 >= a2)
                                    return v22;
                                ++v183;
                                ++v177;
                                ++v203;
                            } while (v203 < 4);
                            v181 = (char *)(v183 + 4);
                        } while (v177 < v193);
                        goto LABEL_66;
                    }
                } else if (v46 > 0) {
                    do {
                        v56 = *v181;
                        LOWORD(v22) = *(_WORD *)(a5 + 2 * ((unsigned __int8)*v181 >> 4));
                        LODWORD(v22) = sub_10027B10(v22);
                        *a1 = v22;
                        v57 = v23 + 4;
                        v58 = a1 + 1;
                        if (v57 >= a2)
                            return v22;
                        WORD2(v22) = *(_WORD *)(a5 + 2 * (v56 & 0xF));
                        LODWORD(v22) = sub_10027B10(HIDWORD(v22));
                        *v58 = v22;
                        v23 = v57 + 4;
                        a1 = v58 + 1;
                        if (v23 >= a2)
                            return v22;
                        LODWORD(v22) = v177 + 1;
                        ++v181;
                        ++v177;
                    } while (v177 < v193);
                LABEL_66:
                    v46 = v193;
                }
                if (a7) {
                    v59 = 0;
                    for (LODWORD(v22) = a1 - 1; v59 < v46; ++v59) {
                        v60 = v23 + 4;
                        *a1 = *(_DWORD *)v22;
                        v61 = a1 + 1;
                        LODWORD(v22) = v22 - 4;
                        if (v60 < a2) {
                            v23 = v60 + 4;
                            *v61 = *(_DWORD *)v22;
                            a1 = v61 + 1;
                            LODWORD(v22) = v22 - 4;
                            if (v23 < a2)
                                continue;
                        }
                        return v22;
                    }
                }
                v250 += *(_DWORD *)(v227 + 8);
                v47 = ++v158;
                if (v158 >= v197)
                    goto LABEL_73;
                continue;
            }
        }
        v25 = 1 << (a11[24] - 1);
        v191 = 0;
        v228 = v25;
        v240 = 1 << a11[25];
        if (v240 > 0)
            break;
    LABEL_33:
        if (a8) {
            v42 = a1;
            v192 = 0;
            if (v240 > 0) {
                HIDWORD(v22) = v228;
                while (1) {
                    LODWORD(v22) = 2 * HIDWORD(v22);
                    if (!a7)
                        LODWORD(v22) = HIDWORD(v22);
                    v42 -= 2 * v22;
                    v43 = 2 * HIDWORD(v22);
                    LODWORD(v22) = v42;
                    if (!a7)
                        v43 = HIDWORD(v22);
                    if (v43 > 0)
                        break;
                LABEL_45:
                    if (++v192 >= v240)
                        goto LABEL_336;
                }
                while (1) {
                    v44 = v23 + 4;
                    *a1 = *(_DWORD *)v22;
                    v45 = a1 + 1;
                    LODWORD(v22) = v22 + 4;
                    if (v44 >= a2)
                        return v22;
                    v23 = v44 + 4;
                    *v45 = *(_DWORD *)v22;
                    a1 = v45 + 1;
                    LODWORD(v22) = v22 + 4;
                    if (v23 >= a2)
                        return v22;
                    if (--v43 <= 0) {
                        HIDWORD(v22) = v228;
                        goto LABEL_45;
                    }
                }
            }
        }
    LABEL_336:
        LODWORD(v22) = ++v241;
        if (v241 >= a10)
            return v22;
    }
    while (1) {
        v26 = (_BYTE *)v250;
        if ((a22 & v191) == 0)
            break;
        v27 = 0;
        v196 = 0;
        if (v25 > 0) {
            do {
                v28 = v26 + 4;
                v172 = 0;
                do {
                    if (v27 >= v228)
                        break;
                    v29 = v23 + 4;
                    v30 = a1 + 1;
                    LOBYTE(v22) = *v28;
                    *(v30 - 1) = (unsigned __int8)*v28 >> 4;
                    if (v29 >= a2)
                        return v22;
                    LODWORD(v22) = v22 & 0xF;
                    v23 = v29 + 4;
                    *v30 = v22;
                    a1 = v30 + 1;
                    if (v23 >= a2)
                        return v22;
                    ++v28;
                    ++v27;
                    v31 = v172 + 1 < 4;
                    v196 = v27;
                    ++v172;
                } while (v31);
                v32 = v28 - 8;
                v33 = 0;
                do {
                    if (v27 >= v228)
                        break;
                    v34 = v23 + 4;
                    v35 = a1 + 1;
                    LOBYTE(v22) = *v32;
                    *(v35 - 1) = (unsigned __int8)*v32 >> 4;
                    if (v34 >= a2)
                        return v22;
                    LODWORD(v22) = v22 & 0xF;
                    v23 = v34 + 4;
                    *v35 = v22;
                    a1 = v35 + 1;
                    if (v23 >= a2)
                        return v22;
                    ++v32;
                    v27 = v196 + 1;
                    ++v33;
                    ++v196;
                } while (v33 < 4);
                v26 = v32 + 4;
            } while (v27 < v228);
        }
    LABEL_27:
        if (a7) {
            v39 = 0;
            LODWORD(v22) = a1 - 1;
            if (v228 > 0) {
                do {
                    v40 = v23 + 4;
                    *a1 = *(_DWORD *)v22;
                    v41 = a1 + 1;
                    LODWORD(v22) = v22 - 4;
                    if (v40 >= a2)
                        return v22;
                    v23 = v40 + 4;
                    *v41 = *(_DWORD *)v22;
                    a1 = v41 + 1;
                    LODWORD(v22) = v22 - 4;
                    if (v23 >= a2)
                        return v22;
                } while (++v39 < v228);
            }
        }
        v250 += a11[18];
        if (++v191 >= v240)
            goto LABEL_33;
        v25 = v228;
    }
    v36 = 0;
    if (v25 <= 0)
        goto LABEL_27;
    while (1) {
        v37 = v23 + 4;
        v38 = a1 + 1;
        LOBYTE(v22) = *v26;
        *(v38 - 1) = (unsigned __int8)*v26 >> 4;
        if (v37 >= a2)
            return v22;
        LODWORD(v22) = v22 & 0xF;
        v23 = v37 + 4;
        *v38 = v22;
        a1 = v38 + 1;
        if (v23 >= a2)
            return v22;
        ++v26;
        if (++v36 >= v228)
            goto LABEL_27;
    }
}
// 10025E67: variable 'v22' is possibly undefined
// 10025E8E: variable 'v50' is possibly undefined
// 10025F18: variable 'v48' is possibly undefined
// 10027B10: using guessed type _DWORD __cdecl sub_10027B10(_DWORD);
