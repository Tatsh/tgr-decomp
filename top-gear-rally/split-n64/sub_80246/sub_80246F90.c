#include "../../types-n64.h"
//----- (80246F90) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80246F90(int a1, int a2, int a3, int a4, int a5, char a6, char a7) {
    int v7;              // $s0
    int v8;              // $s2
    int v9;              // $fp
    int v10;             // $s6
    int v11;             // $t9
    int v12;             // $a0
    int v13;             // $a3
    int v14;             // $a1
    int v15;             // $a2
    int v16;             // $t9
    int v17;             // $a0
    int v18;             // $a1
    int v19;             // $a2
    int v20;             // $t2
    int v21;             // $t5
    int v22;             // $s4
    int v23;             // $t0
    int v24;             // $t3
    int v25;             // $s2
    int v26;             // $a3
    int v27;             // $t1
    int v28;             // $t4
    int v29;             // $s3
    int v30;             // $t8
    int v31;             // $a2
    int v32;             // $a1
    int v33;             // $a0
    int v34;             // $a3
    int v35;             // $t7
    int v36;             // $a2
    int v37;             // $a0
    int v38;             // $a3
    int v39;             // $ra
    int v40;             // $s0
    int v41;             // $s5
    int v42;             // $t1
    int v43;             // $t4
    int v44;             // $s3
    int v45;             // $a1
    int v46;             // $t2
    int v47;             // $t5
    int v48;             // $s4
    int v49;             // $t8
    int v50;             // $t9
    int v51;             // $a3
    int v52;             // $a0
    int v53;             // $a1
    int v54;             // $a2
    int v55;             // $t6
    int v56;             // $a3
    int v57;             // $a1
    int v58;             // $a2
    int v59;             // $t2
    int v60;             // $t5
    int v61;             // $s4
    int v62;             // $t0
    int v63;             // $t3
    int v64;             // $s2
    int v65;             // $a0
    int v66;             // $ra
    int v67;             // $s0
    int v68;             // $s5
    int v69;             // $t9
    int v70;             // $a1
    int v71;             // $a2
    int v72;             // $a0
    int v73;             // $a3
    int v74;             // $t9
    int v75;             // $a1
    int v76;             // $a0
    int v77;             // $a3
    int v78;             // $ra
    int v79;             // $s0
    int v80;             // $s5
    int v81;             // $t1
    int v82;             // $t4
    int v83;             // $s3
    int v84;             // $a2
    int v85;             // $t0
    int v86;             // $t3
    int v87;             // $s2
    int v88;             // $t8
    int result;          // $v0
    int v90;             // [sp+84h] [-5Ch]
    int v91;             // [sp+84h] [-5Ch]
    int v92;             // [sp+84h] [-5Ch]
    int v93;             // [sp+88h] [-58h]
    int v94;             // [sp+88h] [-58h]
    int v95;             // [sp+88h] [-58h]
    unsigned __int8 v96; // [sp+DAh] [-6h] BYREF
    char v97[5];         // [sp+DBh] [-5h] BYREF
    int v98;             // [sp+E0h] [+0h]
    int v99;             // [sp+E4h] [+4h]
    int v100;            // [sp+E8h] [+8h]
    int v101;            // [sp+ECh] [+Ch]

    v97[0] = -32;
    v96 = 48;
    v7 = a1 >> 1;
    v8 = a2 >> 1;
    v100 = a3 >> 1;
    v101 = a4 >> 1;
    v9 = a5 >> 1;
    if (a5 >> 1 < 2)
        v9 = 1;
    dword_8028A858 = 8;
    MEMORY[4] = 252329984;
    MEMORY[0] = -1191181539;
    if (!a6) {
        dword_8028A858 = 8;
        MEMORY[4] = 0;
        MEMORY[0] = -419430400;
    }
    if (a7 == 1)
        sub_80252F50(v97, &v96);
    v10 = 1;
    dword_8028A858 = 8;
    MEMORY[0] = -150994944;
    v11 = ((unsigned __int8)v97[0] << 8) & 0xF800 | (8 * (unsigned __int8)v97[0]) & 0x7C0 |
          ((int)(unsigned __int8)v97[0] >> 2) & 0x3E | 1;
    MEMORY[4] = (v11 << 16) | v11;
    v99 = v8;
    v98 = v7;
    if (v9 > 0) {
        v98 = v7;
        v90 = v8 + v101;
        v99 = v8;
        if ((v9 & 3) == 0)
            goto LABEL_13;
        v12 = v7 - 1;
        v13 = v7;
        v14 = v8 + v101 + 1;
        v15 = v8 - 1;
        do {
            dword_8028A858 = 8;
            MEMORY[0] = ((v13 & 0x3FF) << 14) | 0xF6000000 | (4 * (v14 & 0x3FF));
            v16 = ((v12 & 0x3FF) << 14) | (4 * (v15 & 0x3FF));
            ++v10;
            --v12;
            --v15;
            ++v14;
            --v13;
            MEMORY[4] = v16;
        } while ((v9 & 3) + 1 != v10);
        if (v9 + 1 == v10) {
            v10 = 1;
        } else {
        LABEL_13:
            v17 = v7 - v10;
            v18 = v90 + v10;
            v19 = v8 - v10;
            v20 = v8 - v10 - 1;
            v21 = v8 - v10 - 2;
            v22 = v8 - v10 - 3;
            v23 = v90 + v10 + 1;
            v24 = v90 + v10 + 2;
            v25 = v90 + v10 + 3;
            v26 = v7 - v10 + 1;
            v27 = v7 - v10 - 1;
            v28 = v7 - v10 - 2;
            v29 = v7 - v10 - 3;
            do {
                dword_8028A858 = 8;
                MEMORY[0] = ((v28 & 0x3FF) << 14) | 0xF6000000 | (4 * (v25 & 0x3FF));
                v30 = ((v29 & 0x3FF) << 14) | (4 * (v22 & 0x3FF));
                v10 += 4;
                v29 -= 4;
                v22 -= 4;
                v25 += 4;
                v28 -= 4;
                v21 -= 4;
                v24 += 4;
                v27 -= 4;
                v20 -= 4;
                v23 += 4;
                v17 -= 4;
                v19 -= 4;
                v18 += 4;
                v26 -= 4;
                MEMORY[4] = v30;
            } while (v9 + 1 != v10);
            v10 = 1;
        }
    }
    if (v9 > 0) {
        v93 = v98 + v100;
        if ((v9 & 3) == 0)
            goto LABEL_22;
        v31 = v99 - 1;
        v32 = v99;
        v33 = v98 - 1;
        v34 = v98 + v100 + 1;
        do {
            dword_8028A858 = 8;
            MEMORY[0] = ((v34 & 0x3FF) << 14) | 0xF6000000 | (4 * (v32 & 0x3FF));
            v35 = ((v33 & 0x3FF) << 14) | (4 * (v31 & 0x3FF));
            ++v10;
            --v33;
            --v31;
            --v32;
            ++v34;
            MEMORY[4] = v35;
        } while ((v9 & 3) + 1 != v10);
        if (v9 + 1 == v10) {
            v10 = 1;
        } else {
        LABEL_22:
            v36 = v99 - v10;
            v37 = v98 - v10;
            v38 = v93 + v10;
            v39 = v93 + v10 + 1;
            v40 = v93 + v10 + 2;
            v41 = v93 + v10 + 3;
            v42 = v98 - v10 - 1;
            v43 = v98 - v10 - 2;
            v44 = v98 - v10 - 3;
            v45 = v99 - v10 + 1;
            v46 = v99 - v10 - 1;
            v47 = v99 - v10 - 2;
            v48 = v99 - v10 - 3;
            do {
                dword_8028A858 = 8;
                MEMORY[0] = ((v41 & 0x3FF) << 14) | 0xF6000000 | (4 * (v47 & 0x3FF));
                v49 = ((v44 & 0x3FF) << 14) | (4 * (v48 & 0x3FF));
                v10 += 4;
                v44 -= 4;
                v48 -= 4;
                v47 -= 4;
                v41 += 4;
                v43 -= 4;
                v46 -= 4;
                v40 += 4;
                v42 -= 4;
                v36 -= 4;
                v39 += 4;
                v37 -= 4;
                v45 -= 4;
                v38 += 4;
                MEMORY[4] = v49;
            } while (v9 + 1 != v10);
            v10 = 1;
        }
    }
    dword_8028A858 = 8;
    MEMORY[0] = -150994944;
    v50 = (v96 << 8) & 0xF800 | (8 * v96) & 0x7C0 | ((int)v96 >> 2) & 0x3E | 1;
    MEMORY[4] = (v50 << 16) | v50;
    if (v9 > 0) {
        v94 = v98 + v100;
        v91 = v99 + v101;
        if ((v9 & 3) == 0)
            goto LABEL_31;
        v51 = v98 + v100 + 1;
        v52 = v98 + v100;
        v53 = v99 + v101 + 1;
        v54 = v99 - 1;
        do {
            dword_8028A858 = 8;
            MEMORY[0] = ((v51 & 0x3FF) << 14) | 0xF6000000 | (4 * (v53 & 0x3FF));
            v55 = ((v52 & 0x3FF) << 14) | (4 * (v54 & 0x3FF));
            ++v10;
            ++v52;
            --v54;
            ++v53;
            ++v51;
            MEMORY[4] = v55;
        } while ((v9 & 3) + 1 != v10);
        if (v9 + 1 == v10) {
            v10 = 1;
        } else {
        LABEL_31:
            v56 = v94 + v10;
            v57 = v91 + v10;
            v58 = v99 - v10;
            v59 = v99 - v10 - 1;
            v60 = v99 - v10 - 2;
            v61 = v99 - v10 - 3;
            v62 = v91 + v10 + 1;
            v63 = v91 + v10 + 2;
            v64 = v91 + v10 + 3;
            v65 = v94 + v10 - 1;
            v66 = v94 + v10 + 1;
            v67 = v94 + v10 + 2;
            v68 = v94 + v10 + 3;
            do {
                dword_8028A858 = 8;
                MEMORY[0] = ((v68 & 0x3FF) << 14) | 0xF6000000 | (4 * (v64 & 0x3FF));
                v69 = ((v67 & 0x3FF) << 14) | (4 * (v61 & 0x3FF));
                v10 += 4;
                v67 += 4;
                v61 -= 4;
                v64 += 4;
                v68 += 4;
                v66 += 4;
                v60 -= 4;
                v63 += 4;
                v56 += 4;
                v59 -= 4;
                v62 += 4;
                v65 += 4;
                v58 -= 4;
                v57 += 4;
                MEMORY[4] = v69;
            } while (v9 + 1 != v10);
            v10 = 1;
        }
    }
    if (v9 > 0) {
        v92 = v99 + v101;
        v95 = v98 + v100;
        if ((v9 & 3) == 0)
            goto LABEL_39;
        v70 = v99 + v101 + 1;
        v71 = v99 + v101;
        v72 = v98 - 1;
        v73 = v98 + v100 + 1;
        do {
            dword_8028A858 = 8;
            MEMORY[0] = ((v73 & 0x3FF) << 14) | 0xF6000000 | (4 * (v70 & 0x3FF));
            v74 = ((v72 & 0x3FF) << 14) | (4 * (v71 & 0x3FF));
            ++v10;
            --v72;
            ++v71;
            ++v70;
            ++v73;
            MEMORY[4] = v74;
        } while ((v9 & 3) + 1 != v10);
        if (v9 + 1 != v10) {
        LABEL_39:
            v75 = v92 + v10;
            v76 = v98 - v10;
            v77 = v95 + v10;
            v78 = v95 + v10 + 1;
            v79 = v95 + v10 + 2;
            v80 = v95 + v10 + 3;
            v81 = v98 - v10 - 1;
            v82 = v98 - v10 - 2;
            v83 = v98 - v10 - 3;
            v84 = v92 + v10 - 1;
            v85 = v92 + v10 + 1;
            v86 = v92 + v10 + 2;
            v87 = v92 + v10 + 3;
            do {
                dword_8028A858 = 8;
                MEMORY[0] = ((v80 & 0x3FF) << 14) | 0xF6000000 | (4 * (v87 & 0x3FF));
                v88 = ((v83 & 0x3FF) << 14) | (4 * (v86 & 0x3FF));
                v10 += 4;
                v83 -= 4;
                v86 += 4;
                v87 += 4;
                v80 += 4;
                v82 -= 4;
                v85 += 4;
                v79 += 4;
                v81 -= 4;
                v75 += 4;
                v78 += 4;
                v76 -= 4;
                v84 += 4;
                v77 += 4;
                MEMORY[4] = v88;
            } while (v9 + 1 != v10);
        }
    }
    result = 0;
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1174399998;
    return result;
}
// 80247AB8: write access to const memory at 8028A858 has been detected
// 80247AD0: write access to const memory at 8028A858 has been detected
// 80247978: write access to const memory at 8028A858 has been detected
// 802479B8: write access to const memory at 8028A858 has been detected
// 802479F8: write access to const memory at 8028A858 has been detected
// 80247A38: write access to const memory at 8028A858 has been detected
// 802478D4: write access to const memory at 8028A858 has been detected
// 80247750: write access to const memory at 8028A858 has been detected
// 80247790: write access to const memory at 8028A858 has been detected
// 802477D0: write access to const memory at 8028A858 has been detected
// 80247810: write access to const memory at 8028A858 has been detected
// 802476AC: write access to const memory at 8028A858 has been detected
// 8024760C: write access to const memory at 8028A858 has been detected
// 80247620: write access to const memory at 8028A858 has been detected
// 802474C8: write access to const memory at 8028A858 has been detected
// 80247508: write access to const memory at 8028A858 has been detected
// 80247548: write access to const memory at 8028A858 has been detected
// 80247588: write access to const memory at 8028A858 has been detected
// 80247424: write access to const memory at 8028A858 has been detected
// 802472A4: write access to const memory at 8028A858 has been detected
// 802472E4: write access to const memory at 8028A858 has been detected
// 80247324: write access to const memory at 8028A858 has been detected
// 80247364: write access to const memory at 8028A858 has been detected
// 80247200: write access to const memory at 8028A858 has been detected
// 80247178: write access to const memory at 8028A858 has been detected
// 802470A0: write access to const memory at 8028A858 has been detected
// 802470FC: write access to const memory at 8028A858 has been detected
// 80247140: write access to const memory at 8028A858 has been detected
// 80247038: write access to const memory at 8028A858 has been detected
// 80247054: write access to const memory at 8028A858 has been detected
// 80247070: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
