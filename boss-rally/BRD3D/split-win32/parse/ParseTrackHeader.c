#include "types-win32.h"
//----- (10038510) --------------------------------------------------------
int __cdecl ParseTrackHeader(int outBuffer, CHK_File *fp) {
    unsigned __int16 v3;  // cx
    char v4;              // al
    unsigned __int16 v5;  // dx
    char v6;              // al
    char v7;              // al
    char v8;              // al
    char v9;              // al
    char v10;             // al
    char v11;             // al
    char v12;             // al
    char v13;             // al
    char v14;             // al
    char v15;             // al
    char v16;             // al
    char v17;             // al
    char v18;             // al
    char v19;             // al
    char v20;             // al
    char v21;             // al
    _BYTE *v22;           // eax
    int v23;              // ecx
    char v24;             // dl
    char v25;             // dl
    char v26;             // al
    char v27;             // al
    char v28;             // al
    char v29;             // al
    char v30;             // al
    char v31;             // al
    int v32;              // ecx
    char v33;             // al
    char v34;             // al
    unsigned __int16 v35; // dx
    char v36;             // al
    char v37;             // al
    char v38;             // al
    char v39;             // al
    char v40;             // al
    int v41;              // eax
    _BYTE *v42;           // eax
    char v43;             // cl
    char v44;             // cl
    char v45;             // cl
    char v46;             // cl
    char v47;             // cl
    char v48;             // cl
    char v49;             // cl
    char v50;             // cl
    char v51;             // cl
    char v52;             // cl
    unsigned __int16 v53; // ax
    int *Buffera;         // [esp+50h] [ebp+4h]
    int fpa;              // [esp+54h] [ebp+8h]

    CHK_FReadReportError((void *)outBuffer, 1u, 0x230u, fp);
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 1);
    HIBYTE(v3) = *(_BYTE *)outBuffer;
    *(_DWORD *)outBuffer = *(unsigned __int8 *)(outBuffer + 3) |
                           ((*(unsigned __int8 *)(outBuffer + 2) | (v3 << 8)) << 8);
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 5);
    HIBYTE(v3) = *(_BYTE *)(outBuffer + 4);
    *(_DWORD *)(outBuffer + 4) = *(unsigned __int8 *)(outBuffer + 7) |
                                 ((*(unsigned __int8 *)(outBuffer + 6) | (v3 << 8)) << 8);
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 9);
    HIBYTE(v3) = *(_BYTE *)(outBuffer + 8);
    *(_DWORD *)(outBuffer + 8) = *(unsigned __int8 *)(outBuffer + 11) |
                                 ((*(unsigned __int8 *)(outBuffer + 10) | (v3 << 8)) << 8);
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 15);
    Buffera = (int *)(outBuffer + 12);
    *(_BYTE *)(outBuffer + 15) = *(_BYTE *)(outBuffer + 12);
    *(_BYTE *)(outBuffer + 12) = v3;
    v4 = *(_BYTE *)(outBuffer + 14);
    *(_BYTE *)(outBuffer + 14) = *(_BYTE *)(outBuffer + 13);
    *(_BYTE *)(outBuffer + 13) = v4;
    LOBYTE(v5) = *(_BYTE *)(outBuffer + 17);
    HIBYTE(v5) = *(_BYTE *)(outBuffer + 16);
    *(_DWORD *)(outBuffer + 16) = *(unsigned __int8 *)(outBuffer + 19) |
                                  ((*(unsigned __int8 *)(outBuffer + 18) | (v5 << 8)) << 8);
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 23);
    *(_BYTE *)(outBuffer + 23) = *(_BYTE *)(outBuffer + 20);
    *(_BYTE *)(outBuffer + 20) = v3;
    v6 = *(_BYTE *)(outBuffer + 22);
    *(_BYTE *)(outBuffer + 22) = *(_BYTE *)(outBuffer + 21);
    *(_BYTE *)(outBuffer + 21) = v6;
    LOBYTE(v5) = *(_BYTE *)(outBuffer + 25);
    HIBYTE(v5) = *(_BYTE *)(outBuffer + 24);
    *(_DWORD *)(outBuffer + 24) = *(unsigned __int8 *)(outBuffer + 27) |
                                  ((*(unsigned __int8 *)(outBuffer + 26) | (v5 << 8)) << 8);
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 31);
    *(_BYTE *)(outBuffer + 31) = *(_BYTE *)(outBuffer + 28);
    *(_BYTE *)(outBuffer + 28) = v3;
    v7 = *(_BYTE *)(outBuffer + 30);
    *(_BYTE *)(outBuffer + 30) = *(_BYTE *)(outBuffer + 29);
    *(_BYTE *)(outBuffer + 29) = v7;
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 35);
    *(_BYTE *)(outBuffer + 35) = *(_BYTE *)(outBuffer + 32);
    *(_BYTE *)(outBuffer + 32) = v3;
    v8 = *(_BYTE *)(outBuffer + 34);
    *(_BYTE *)(outBuffer + 34) = *(_BYTE *)(outBuffer + 33);
    *(_BYTE *)(outBuffer + 33) = v8;
    LOBYTE(v3) = *(_BYTE *)(outBuffer + 39);
    *(_BYTE *)(outBuffer + 39) = *(_BYTE *)(outBuffer + 36);
    *(_BYTE *)(outBuffer + 36) = v3;
    v9 = *(_BYTE *)(outBuffer + 38);
    *(_BYTE *)(outBuffer + 38) = *(_BYTE *)(outBuffer + 37);
    *(_BYTE *)(outBuffer + 37) = v9;
    v10 = *(_BYTE *)(outBuffer + 43);
    *(_BYTE *)(outBuffer + 43) = *(_BYTE *)(outBuffer + 40);
    *(_BYTE *)(outBuffer + 40) = v10;
    v11 = *(_BYTE *)(outBuffer + 42);
    *(_BYTE *)(outBuffer + 42) = *(_BYTE *)(outBuffer + 41);
    *(_BYTE *)(outBuffer + 41) = v11;
    v12 = *(_BYTE *)(outBuffer + 47);
    *(_BYTE *)(outBuffer + 47) = *(_BYTE *)(outBuffer + 44);
    *(_BYTE *)(outBuffer + 44) = v12;
    v13 = *(_BYTE *)(outBuffer + 46);
    *(_BYTE *)(outBuffer + 46) = *(_BYTE *)(outBuffer + 45);
    *(_BYTE *)(outBuffer + 45) = v13;
    v14 = *(_BYTE *)(outBuffer + 51);
    *(_BYTE *)(outBuffer + 51) = *(_BYTE *)(outBuffer + 48);
    *(_BYTE *)(outBuffer + 48) = v14;
    v15 = *(_BYTE *)(outBuffer + 50);
    *(_BYTE *)(outBuffer + 50) = *(_BYTE *)(outBuffer + 49);
    *(_BYTE *)(outBuffer + 49) = v15;
    v16 = *(_BYTE *)(outBuffer + 55);
    *(_BYTE *)(outBuffer + 55) = *(_BYTE *)(outBuffer + 52);
    *(_BYTE *)(outBuffer + 52) = v16;
    v17 = *(_BYTE *)(outBuffer + 54);
    *(_BYTE *)(outBuffer + 54) = *(_BYTE *)(outBuffer + 53);
    *(_BYTE *)(outBuffer + 53) = v17;
    v18 = *(_BYTE *)(outBuffer + 59);
    *(_BYTE *)(outBuffer + 59) = *(_BYTE *)(outBuffer + 56);
    *(_BYTE *)(outBuffer + 56) = v18;
    v19 = *(_BYTE *)(outBuffer + 58);
    *(_BYTE *)(outBuffer + 58) = *(_BYTE *)(outBuffer + 57);
    *(_BYTE *)(outBuffer + 57) = v19;
    v20 = *(_BYTE *)(outBuffer + 63);
    *(_BYTE *)(outBuffer + 63) = *(_BYTE *)(outBuffer + 60);
    *(_BYTE *)(outBuffer + 60) = v20;
    v21 = *(_BYTE *)(outBuffer + 62);
    *(_BYTE *)(outBuffer + 62) = *(_BYTE *)(outBuffer + 61);
    *(_BYTE *)(outBuffer + 61) = v21;
    v22 = (_BYTE *)(outBuffer + 64);
    v23 = 4;
    do {
        v24 = v22[3];
        v22[3] = *v22;
        *v22 = v24;
        v25 = v22[2];
        v22[2] = v22[1];
        v22[1] = v25;
        v22 += 4;
        --v23;
    } while (v23);
    v26 = *(_BYTE *)(outBuffer + 83);
    *(_BYTE *)(outBuffer + 83) = *(_BYTE *)(outBuffer + 80);
    *(_BYTE *)(outBuffer + 80) = v26;
    v27 = *(_BYTE *)(outBuffer + 82);
    *(_BYTE *)(outBuffer + 82) = *(_BYTE *)(outBuffer + 81);
    *(_BYTE *)(outBuffer + 81) = v27;
    v28 = *(_BYTE *)(outBuffer + 87);
    *(_BYTE *)(outBuffer + 87) = *(_BYTE *)(outBuffer + 84);
    *(_BYTE *)(outBuffer + 84) = v28;
    v29 = *(_BYTE *)(outBuffer + 86);
    *(_BYTE *)(outBuffer + 86) = *(_BYTE *)(outBuffer + 85);
    *(_BYTE *)(outBuffer + 85) = v29;
    v30 = *(_BYTE *)(outBuffer + 91);
    *(_BYTE *)(outBuffer + 91) = *(_BYTE *)(outBuffer + 88);
    *(_BYTE *)(outBuffer + 88) = v30;
    v31 = *(_BYTE *)(outBuffer + 90);
    *(_BYTE *)(outBuffer + 90) = *(_BYTE *)(outBuffer + 89);
    *(_BYTE *)(outBuffer + 89) = v31;
    v32 = *(unsigned __int8 *)(outBuffer + 95);
    *(_BYTE *)(outBuffer + 95) = *(_BYTE *)(outBuffer + 92);
    *(_BYTE *)(outBuffer + 92) = v32;
    v33 = *(_BYTE *)(outBuffer + 94);
    *(_BYTE *)(outBuffer + 94) = *(_BYTE *)(outBuffer + 93);
    *(_BYTE *)(outBuffer + 93) = v33;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 99);
    *(_BYTE *)(outBuffer + 99) = *(_BYTE *)(outBuffer + 96);
    *(_BYTE *)(outBuffer + 96) = v32;
    v34 = *(_BYTE *)(outBuffer + 98);
    *(_BYTE *)(outBuffer + 98) = *(_BYTE *)(outBuffer + 97);
    *(_BYTE *)(outBuffer + 97) = v34;
    LOBYTE(v35) = *(_BYTE *)(outBuffer + 101);
    HIBYTE(v35) = *(_BYTE *)(outBuffer + 100);
    *(_DWORD *)(outBuffer + 100) = *(unsigned __int8 *)(outBuffer + 103) |
                                   ((*(unsigned __int8 *)(outBuffer + 102) | (v35 << 8)) << 8);
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 107);
    *(_BYTE *)(outBuffer + 107) = *(_BYTE *)(outBuffer + 104);
    *(_BYTE *)(outBuffer + 104) = v32;
    v36 = *(_BYTE *)(outBuffer + 106);
    *(_BYTE *)(outBuffer + 106) = *(_BYTE *)(outBuffer + 105);
    *(_BYTE *)(outBuffer + 105) = v36;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 111);
    *(_BYTE *)(outBuffer + 111) = *(_BYTE *)(outBuffer + 108);
    *(_BYTE *)(outBuffer + 108) = v32;
    v37 = *(_BYTE *)(outBuffer + 110);
    *(_BYTE *)(outBuffer + 110) = *(_BYTE *)(outBuffer + 109);
    *(_BYTE *)(outBuffer + 109) = v37;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 115);
    *(_BYTE *)(outBuffer + 115) = *(_BYTE *)(outBuffer + 112);
    *(_BYTE *)(outBuffer + 112) = v32;
    v38 = *(_BYTE *)(outBuffer + 114);
    *(_BYTE *)(outBuffer + 114) = *(_BYTE *)(outBuffer + 113);
    *(_BYTE *)(outBuffer + 113) = v38;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 119);
    *(_BYTE *)(outBuffer + 119) = *(_BYTE *)(outBuffer + 116);
    *(_BYTE *)(outBuffer + 116) = v32;
    v39 = *(_BYTE *)(outBuffer + 118);
    *(_BYTE *)(outBuffer + 118) = *(_BYTE *)(outBuffer + 117);
    *(_BYTE *)(outBuffer + 117) = v39;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 123);
    *(_BYTE *)(outBuffer + 123) = *(_BYTE *)(outBuffer + 120);
    *(_BYTE *)(outBuffer + 120) = v32;
    v40 = *(_BYTE *)(outBuffer + 122);
    LOBYTE(v35) = *(_BYTE *)(outBuffer + 125);
    *(_BYTE *)(outBuffer + 122) = *(_BYTE *)(outBuffer + 121);
    HIBYTE(v35) = *(_BYTE *)(outBuffer + 124);
    *(_BYTE *)(outBuffer + 121) = v40;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 135);
    *(_DWORD *)(outBuffer + 124) = *(unsigned __int8 *)(outBuffer + 127) |
                                   ((*(unsigned __int8 *)(outBuffer + 126) | (v35 << 8)) << 8);
    *(_BYTE *)(outBuffer + 135) = *(_BYTE *)(outBuffer + 132);
    *(_BYTE *)(outBuffer + 132) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 133);
    LOBYTE(v35) = *(_BYTE *)(outBuffer + 137);
    *(_BYTE *)(outBuffer + 133) = *(_BYTE *)(outBuffer + 134);
    HIBYTE(v35) = *(_BYTE *)(outBuffer + 136);
    v41 = *(unsigned __int8 *)(outBuffer + 138);
    *(_BYTE *)(outBuffer + 134) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 143);
    *(_DWORD *)(outBuffer + 136) =
        *(unsigned __int8 *)(outBuffer + 139) | ((v41 | (v35 << 8)) << 8);
    LOBYTE(v35) = *(_BYTE *)(outBuffer + 140);
    *(_BYTE *)(outBuffer + 140) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 141);
    *(_BYTE *)(outBuffer + 141) = *(_BYTE *)(outBuffer + 142);
    *(_BYTE *)(outBuffer + 142) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 147);
    *(_BYTE *)(outBuffer + 143) = v35;
    LOBYTE(v35) = *(_BYTE *)(outBuffer + 144);
    *(_BYTE *)(outBuffer + 144) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 145);
    LOBYTE(v41) = *(_BYTE *)(outBuffer + 146);
    *(_BYTE *)(outBuffer + 147) = v35;
    *(_BYTE *)(outBuffer + 146) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 151);
    LOBYTE(v35) = *(_BYTE *)(outBuffer + 148);
    *(_BYTE *)(outBuffer + 145) = v41;
    *(_BYTE *)(outBuffer + 151) = v35;
    *(_BYTE *)(outBuffer + 148) = v32;
    LOBYTE(v32) = *(_BYTE *)(outBuffer + 149);
    *(_BYTE *)(outBuffer + 149) = *(_BYTE *)(outBuffer + 150);
    *(_BYTE *)(outBuffer + 150) = v32;
    v42 = (_BYTE *)(outBuffer + 152);
    fpa = 10;
    do {
        v43 = v42[3];
        v42[3] = *v42;
        *v42 = v43;
        v44 = v42[2];
        v42[2] = v42[1];
        v42[1] = v44;
        v45 = v42[7];
        v42[7] = v42[4];
        v42[4] = v45;
        v46 = v42[6];
        v42[6] = v42[5];
        v42[5] = v46;
        v47 = v42[11];
        v42[11] = v42[8];
        v42[8] = v47;
        v48 = v42[10];
        v42[10] = v42[9];
        v42[9] = v48;
        v49 = v42[15];
        v42[15] = v42[12];
        v42[12] = v49;
        v50 = v42[14];
        v42[14] = v42[13];
        v42[13] = v50;
        v51 = v42[19];
        v42[19] = v42[16];
        v42[16] = v51;
        v52 = v42[18];
        v42[18] = v42[17];
        v42[17] = v52;
        v42 += 20;
        --fpa;
    } while (fpa);
    LOBYTE(v53) = *(_BYTE *)(outBuffer + 353);
    HIBYTE(v53) = *(_BYTE *)(outBuffer + 352);
    *(_DWORD *)(outBuffer + 352) = *(unsigned __int8 *)(outBuffer + 355) |
                                   ((*(unsigned __int8 *)(outBuffer + 354) | (v53 << 8)) << 8);
    sub_1002B970(Buffera);
    sub_1002B970((int *)(outBuffer + 20));
    sub_1002B970((int *)(outBuffer + 28));
    sub_1002B970((int *)(outBuffer + 32));
    sub_1002B970((int *)(outBuffer + 36));
    sub_1002B970((int *)(outBuffer + 80));
    sub_1002B970((int *)(outBuffer + 84));
    sub_1002B970((int *)(outBuffer + 88));
    sub_1002B970((int *)(outBuffer + 92));
    sub_1002B970((int *)(outBuffer + 96));
    sub_1002B970((int *)(outBuffer + 104));
    sub_1002B970((int *)(outBuffer + 108));
    sub_1002B970((int *)(outBuffer + 112));
    sub_1002B970((int *)(outBuffer + 116));
    sub_1002B970((int *)(outBuffer + 120));
    sub_1002B970((int *)(outBuffer + 132));
    sub_1002B970((int *)(outBuffer + 140));
    sub_1002B970((int *)(outBuffer + 144));
    return sub_1002B970((int *)(outBuffer + 148));
}
