#include "types-win32.h"
//----- (10038010) --------------------------------------------------------
int __cdecl sub_10038010(_BYTE *a1) {
    char v1;     // al
    char v2;     // al
    char v3;     // al
    char v4;     // al
    char v5;     // al
    char v6;     // al
    char v7;     // al
    char v8;     // al
    char v9;     // al
    char v10;    // al
    char v11;    // al
    char v12;    // al
    char v13;    // al
    char v14;    // al
    char v15;    // al
    char v16;    // al
    char v17;    // al
    char v18;    // al
    char v19;    // al
    char v20;    // al
    char v21;    // al
    char v22;    // al
    char v23;    // al
    char v24;    // al
    char v25;    // al
    char v26;    // al
    char v27;    // al
    char v28;    // al
    char v29;    // al
    char v30;    // cl
    char v31;    // al
    char v32;    // dl
    char v33;    // al
    char v34;    // cl
    char v35;    // al
    char v36;    // dl
    char v37;    // al
    char v38;    // cl
    char v39;    // dl
    char v40;    // al
    __int16 v41; // ax
    __int16 v42; // cx
    __int16 v43; // dx
    int v45;     // [esp-4h] [ebp-Ch]

    v1 = a1[3];
    a1[3] = *a1;
    *a1 = v1;
    v2 = a1[2];
    a1[2] = a1[1];
    a1[1] = v2;
    v3 = a1[7];
    a1[7] = a1[4];
    a1[4] = v3;
    v4 = a1[6];
    a1[6] = a1[5];
    a1[5] = v4;
    v5 = a1[11];
    a1[11] = a1[8];
    a1[8] = v5;
    v6 = a1[10];
    a1[10] = a1[9];
    a1[9] = v6;
    v7 = a1[15];
    a1[15] = a1[12];
    a1[12] = v7;
    v8 = a1[14];
    a1[14] = a1[13];
    a1[13] = v8;
    v9 = a1[19];
    a1[19] = a1[16];
    a1[16] = v9;
    v10 = a1[18];
    a1[18] = a1[17];
    a1[17] = v10;
    v11 = a1[23];
    a1[23] = a1[20];
    a1[20] = v11;
    v12 = a1[22];
    a1[22] = a1[21];
    a1[21] = v12;
    v13 = a1[27];
    a1[27] = a1[24];
    a1[24] = v13;
    v14 = a1[26];
    a1[26] = a1[25];
    a1[25] = v14;
    v15 = a1[31];
    a1[31] = a1[28];
    a1[28] = v15;
    v16 = a1[30];
    a1[30] = a1[29];
    a1[29] = v16;
    v17 = a1[35];
    a1[35] = a1[32];
    a1[32] = v17;
    v18 = a1[34];
    a1[34] = a1[33];
    a1[33] = v18;
    v19 = a1[39];
    a1[39] = a1[36];
    a1[36] = v19;
    v20 = a1[38];
    a1[38] = a1[37];
    a1[37] = v20;
    v21 = a1[43];
    a1[43] = a1[40];
    a1[40] = v21;
    v22 = a1[42];
    a1[42] = a1[41];
    a1[41] = v22;
    v23 = a1[47];
    a1[47] = a1[44];
    a1[44] = v23;
    v24 = a1[46];
    a1[46] = a1[45];
    a1[45] = v24;
    v25 = a1[51];
    a1[51] = a1[48];
    a1[48] = v25;
    v26 = a1[50];
    a1[50] = a1[49];
    a1[49] = v26;
    v27 = a1[55];
    a1[55] = a1[52];
    a1[52] = v27;
    v28 = a1[54];
    a1[54] = a1[53];
    a1[53] = v28;
    v29 = a1[59];
    a1[59] = a1[56];
    v30 = a1[60];
    a1[56] = v29;
    v31 = a1[58];
    a1[58] = a1[57];
    v32 = a1[61];
    a1[57] = v31;
    v33 = a1[63];
    a1[63] = v30;
    v34 = a1[64];
    a1[60] = v33;
    v35 = a1[62];
    a1[62] = v32;
    v36 = a1[65];
    a1[61] = v35;
    a1[64] = a1[67];
    a1[65] = a1[66];
    v37 = a1[71];
    a1[67] = v34;
    v38 = a1[68];
    a1[66] = v36;
    v39 = a1[69];
    a1[68] = v37;
    v40 = a1[70];
    a1[71] = v38;
    a1[70] = v39;
    a1[69] = v40;
    sub_1002B970((int *)a1 + 17);
    LOBYTE(v41) = a1[73];
    LOBYTE(v42) = a1[75];
    HIBYTE(v41) = a1[72];
    HIBYTE(v42) = a1[74];
    LOBYTE(v43) = a1[77];
    *((_WORD *)a1 + 36) = v41;
    HIBYTE(v43) = a1[76];
    *((_WORD *)a1 + 37) = v42;
    *((_WORD *)a1 + 38) = v43;
    LOBYTE(v41) = a1[79];
    HIBYTE(v41) = a1[78];
    LOBYTE(v42) = a1[81];
    HIBYTE(v42) = a1[80];
    LOBYTE(v43) = a1[83];
    *((_WORD *)a1 + 39) = v41;
    HIBYTE(v43) = a1[82];
    v45 = *((_DWORD *)a1 + 17);
    *((_WORD *)a1 + 40) = v42;
    *((_WORD *)a1 + 41) = v43;
    sub_1002BF80(v45);
    sub_1003445A((int)a1);
    sub_10074DC0(1);
    return dword_118AA0C4(*((_DWORD *)a1 + 17));
}
// 118AA0C4: using guessed type int (__cdecl *dword_118AA0C4)(_DWORD);
