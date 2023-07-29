//----- (10038510) --------------------------------------------------------
int __cdecl sub_10038510(void *Buffer, int a2)
{
  unsigned __int16 v3; // cx
  char v4; // al
  unsigned __int16 v5; // dx
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char *v22; // eax
  int v23; // ecx
  char v24; // dl
  char v25; // dl
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  int v32; // ecx
  char v33; // al
  char v34; // al
  unsigned __int16 v35; // dx
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  int v41; // eax
  char *v42; // eax
  char v43; // cl
  char v44; // cl
  char v45; // cl
  char v46; // cl
  char v47; // cl
  char v48; // cl
  char v49; // cl
  char v50; // cl
  char v51; // cl
  char v52; // cl
  unsigned __int16 v53; // ax
  int *Buffera; // [esp+50h] [ebp+4h]
  int v56; // [esp+54h] [ebp+8h]

  CHK_FReadReportError(Buffer, 1u, 0x230u, (CHK_File *)a2);
  LOBYTE(v3) = *((_BYTE *)Buffer + 1);
  HIBYTE(v3) = *(_BYTE *)Buffer;
  *(_DWORD *)Buffer = *((unsigned __int8 *)Buffer + 3) | ((*((unsigned __int8 *)Buffer + 2) | (v3 << 8)) << 8);
  LOBYTE(v3) = *((_BYTE *)Buffer + 5);
  HIBYTE(v3) = *((_BYTE *)Buffer + 4);
  *((_DWORD *)Buffer + 1) = *((unsigned __int8 *)Buffer + 7) | ((*((unsigned __int8 *)Buffer + 6) | (v3 << 8)) << 8);
  LOBYTE(v3) = *((_BYTE *)Buffer + 9);
  HIBYTE(v3) = *((_BYTE *)Buffer + 8);
  *((_DWORD *)Buffer + 2) = *((unsigned __int8 *)Buffer + 11) | ((*((unsigned __int8 *)Buffer + 10) | (v3 << 8)) << 8);
  LOBYTE(v3) = *((_BYTE *)Buffer + 15);
  Buffera = (int *)((char *)Buffer + 12);
  *((_BYTE *)Buffer + 15) = *((_BYTE *)Buffer + 12);
  *((_BYTE *)Buffer + 12) = v3;
  v4 = *((_BYTE *)Buffer + 14);
  *((_BYTE *)Buffer + 14) = *((_BYTE *)Buffer + 13);
  *((_BYTE *)Buffer + 13) = v4;
  LOBYTE(v5) = *((_BYTE *)Buffer + 17);
  HIBYTE(v5) = *((_BYTE *)Buffer + 16);
  *((_DWORD *)Buffer + 4) = *((unsigned __int8 *)Buffer + 19) | ((*((unsigned __int8 *)Buffer + 18) | (v5 << 8)) << 8);
  LOBYTE(v3) = *((_BYTE *)Buffer + 23);
  *((_BYTE *)Buffer + 23) = *((_BYTE *)Buffer + 20);
  *((_BYTE *)Buffer + 20) = v3;
  v6 = *((_BYTE *)Buffer + 22);
  *((_BYTE *)Buffer + 22) = *((_BYTE *)Buffer + 21);
  *((_BYTE *)Buffer + 21) = v6;
  LOBYTE(v5) = *((_BYTE *)Buffer + 25);
  HIBYTE(v5) = *((_BYTE *)Buffer + 24);
  *((_DWORD *)Buffer + 6) = *((unsigned __int8 *)Buffer + 27) | ((*((unsigned __int8 *)Buffer + 26) | (v5 << 8)) << 8);
  LOBYTE(v3) = *((_BYTE *)Buffer + 31);
  *((_BYTE *)Buffer + 31) = *((_BYTE *)Buffer + 28);
  *((_BYTE *)Buffer + 28) = v3;
  v7 = *((_BYTE *)Buffer + 30);
  *((_BYTE *)Buffer + 30) = *((_BYTE *)Buffer + 29);
  *((_BYTE *)Buffer + 29) = v7;
  LOBYTE(v3) = *((_BYTE *)Buffer + 35);
  *((_BYTE *)Buffer + 35) = *((_BYTE *)Buffer + 32);
  *((_BYTE *)Buffer + 32) = v3;
  v8 = *((_BYTE *)Buffer + 34);
  *((_BYTE *)Buffer + 34) = *((_BYTE *)Buffer + 33);
  *((_BYTE *)Buffer + 33) = v8;
  LOBYTE(v3) = *((_BYTE *)Buffer + 39);
  *((_BYTE *)Buffer + 39) = *((_BYTE *)Buffer + 36);
  *((_BYTE *)Buffer + 36) = v3;
  v9 = *((_BYTE *)Buffer + 38);
  *((_BYTE *)Buffer + 38) = *((_BYTE *)Buffer + 37);
  *((_BYTE *)Buffer + 37) = v9;
  v10 = *((_BYTE *)Buffer + 43);
  *((_BYTE *)Buffer + 43) = *((_BYTE *)Buffer + 40);
  *((_BYTE *)Buffer + 40) = v10;
  v11 = *((_BYTE *)Buffer + 42);
  *((_BYTE *)Buffer + 42) = *((_BYTE *)Buffer + 41);
  *((_BYTE *)Buffer + 41) = v11;
  v12 = *((_BYTE *)Buffer + 47);
  *((_BYTE *)Buffer + 47) = *((_BYTE *)Buffer + 44);
  *((_BYTE *)Buffer + 44) = v12;
  v13 = *((_BYTE *)Buffer + 46);
  *((_BYTE *)Buffer + 46) = *((_BYTE *)Buffer + 45);
  *((_BYTE *)Buffer + 45) = v13;
  v14 = *((_BYTE *)Buffer + 51);
  *((_BYTE *)Buffer + 51) = *((_BYTE *)Buffer + 48);
  *((_BYTE *)Buffer + 48) = v14;
  v15 = *((_BYTE *)Buffer + 50);
  *((_BYTE *)Buffer + 50) = *((_BYTE *)Buffer + 49);
  *((_BYTE *)Buffer + 49) = v15;
  v16 = *((_BYTE *)Buffer + 55);
  *((_BYTE *)Buffer + 55) = *((_BYTE *)Buffer + 52);
  *((_BYTE *)Buffer + 52) = v16;
  v17 = *((_BYTE *)Buffer + 54);
  *((_BYTE *)Buffer + 54) = *((_BYTE *)Buffer + 53);
  *((_BYTE *)Buffer + 53) = v17;
  v18 = *((_BYTE *)Buffer + 59);
  *((_BYTE *)Buffer + 59) = *((_BYTE *)Buffer + 56);
  *((_BYTE *)Buffer + 56) = v18;
  v19 = *((_BYTE *)Buffer + 58);
  *((_BYTE *)Buffer + 58) = *((_BYTE *)Buffer + 57);
  *((_BYTE *)Buffer + 57) = v19;
  v20 = *((_BYTE *)Buffer + 63);
  *((_BYTE *)Buffer + 63) = *((_BYTE *)Buffer + 60);
  *((_BYTE *)Buffer + 60) = v20;
  v21 = *((_BYTE *)Buffer + 62);
  *((_BYTE *)Buffer + 62) = *((_BYTE *)Buffer + 61);
  *((_BYTE *)Buffer + 61) = v21;
  v22 = (char *)Buffer + 64;
  v23 = 4;
  do
  {
    v24 = v22[3];
    v22[3] = *v22;
    *v22 = v24;
    v25 = v22[2];
    v22[2] = v22[1];
    v22[1] = v25;
    v22 += 4;
    --v23;
  }
  while ( v23 );
  v26 = *((_BYTE *)Buffer + 83);
  *((_BYTE *)Buffer + 83) = *((_BYTE *)Buffer + 80);
  *((_BYTE *)Buffer + 80) = v26;
  v27 = *((_BYTE *)Buffer + 82);
  *((_BYTE *)Buffer + 82) = *((_BYTE *)Buffer + 81);
  *((_BYTE *)Buffer + 81) = v27;
  v28 = *((_BYTE *)Buffer + 87);
  *((_BYTE *)Buffer + 87) = *((_BYTE *)Buffer + 84);
  *((_BYTE *)Buffer + 84) = v28;
  v29 = *((_BYTE *)Buffer + 86);
  *((_BYTE *)Buffer + 86) = *((_BYTE *)Buffer + 85);
  *((_BYTE *)Buffer + 85) = v29;
  v30 = *((_BYTE *)Buffer + 91);
  *((_BYTE *)Buffer + 91) = *((_BYTE *)Buffer + 88);
  *((_BYTE *)Buffer + 88) = v30;
  v31 = *((_BYTE *)Buffer + 90);
  *((_BYTE *)Buffer + 90) = *((_BYTE *)Buffer + 89);
  *((_BYTE *)Buffer + 89) = v31;
  v32 = *((unsigned __int8 *)Buffer + 95);
  *((_BYTE *)Buffer + 95) = *((_BYTE *)Buffer + 92);
  *((_BYTE *)Buffer + 92) = v32;
  v33 = *((_BYTE *)Buffer + 94);
  *((_BYTE *)Buffer + 94) = *((_BYTE *)Buffer + 93);
  *((_BYTE *)Buffer + 93) = v33;
  LOBYTE(v32) = *((_BYTE *)Buffer + 99);
  *((_BYTE *)Buffer + 99) = *((_BYTE *)Buffer + 96);
  *((_BYTE *)Buffer + 96) = v32;
  v34 = *((_BYTE *)Buffer + 98);
  *((_BYTE *)Buffer + 98) = *((_BYTE *)Buffer + 97);
  *((_BYTE *)Buffer + 97) = v34;
  LOBYTE(v35) = *((_BYTE *)Buffer + 101);
  HIBYTE(v35) = *((_BYTE *)Buffer + 100);
  *((_DWORD *)Buffer + 25) = *((unsigned __int8 *)Buffer + 103) | ((*((unsigned __int8 *)Buffer + 102) | (v35 << 8)) << 8);
  LOBYTE(v32) = *((_BYTE *)Buffer + 107);
  *((_BYTE *)Buffer + 107) = *((_BYTE *)Buffer + 104);
  *((_BYTE *)Buffer + 104) = v32;
  v36 = *((_BYTE *)Buffer + 106);
  *((_BYTE *)Buffer + 106) = *((_BYTE *)Buffer + 105);
  *((_BYTE *)Buffer + 105) = v36;
  LOBYTE(v32) = *((_BYTE *)Buffer + 111);
  *((_BYTE *)Buffer + 111) = *((_BYTE *)Buffer + 108);
  *((_BYTE *)Buffer + 108) = v32;
  v37 = *((_BYTE *)Buffer + 110);
  *((_BYTE *)Buffer + 110) = *((_BYTE *)Buffer + 109);
  *((_BYTE *)Buffer + 109) = v37;
  LOBYTE(v32) = *((_BYTE *)Buffer + 115);
  *((_BYTE *)Buffer + 115) = *((_BYTE *)Buffer + 112);
  *((_BYTE *)Buffer + 112) = v32;
  v38 = *((_BYTE *)Buffer + 114);
  *((_BYTE *)Buffer + 114) = *((_BYTE *)Buffer + 113);
  *((_BYTE *)Buffer + 113) = v38;
  LOBYTE(v32) = *((_BYTE *)Buffer + 119);
  *((_BYTE *)Buffer + 119) = *((_BYTE *)Buffer + 116);
  *((_BYTE *)Buffer + 116) = v32;
  v39 = *((_BYTE *)Buffer + 118);
  *((_BYTE *)Buffer + 118) = *((_BYTE *)Buffer + 117);
  *((_BYTE *)Buffer + 117) = v39;
  LOBYTE(v32) = *((_BYTE *)Buffer + 123);
  *((_BYTE *)Buffer + 123) = *((_BYTE *)Buffer + 120);
  *((_BYTE *)Buffer + 120) = v32;
  v40 = *((_BYTE *)Buffer + 122);
  LOBYTE(v35) = *((_BYTE *)Buffer + 125);
  *((_BYTE *)Buffer + 122) = *((_BYTE *)Buffer + 121);
  HIBYTE(v35) = *((_BYTE *)Buffer + 124);
  *((_BYTE *)Buffer + 121) = v40;
  LOBYTE(v32) = *((_BYTE *)Buffer + 135);
  *((_DWORD *)Buffer + 31) = *((unsigned __int8 *)Buffer + 127) | ((*((unsigned __int8 *)Buffer + 126) | (v35 << 8)) << 8);
  *((_BYTE *)Buffer + 135) = *((_BYTE *)Buffer + 132);
  *((_BYTE *)Buffer + 132) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 133);
  LOBYTE(v35) = *((_BYTE *)Buffer + 137);
  *((_BYTE *)Buffer + 133) = *((_BYTE *)Buffer + 134);
  HIBYTE(v35) = *((_BYTE *)Buffer + 136);
  v41 = *((unsigned __int8 *)Buffer + 138);
  *((_BYTE *)Buffer + 134) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 143);
  *((_DWORD *)Buffer + 34) = *((unsigned __int8 *)Buffer + 139) | ((v41 | (v35 << 8)) << 8);
  LOBYTE(v35) = *((_BYTE *)Buffer + 140);
  *((_BYTE *)Buffer + 140) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 141);
  *((_BYTE *)Buffer + 141) = *((_BYTE *)Buffer + 142);
  *((_BYTE *)Buffer + 142) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 147);
  *((_BYTE *)Buffer + 143) = v35;
  LOBYTE(v35) = *((_BYTE *)Buffer + 144);
  *((_BYTE *)Buffer + 144) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 145);
  LOBYTE(v41) = *((_BYTE *)Buffer + 146);
  *((_BYTE *)Buffer + 147) = v35;
  *((_BYTE *)Buffer + 146) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 151);
  LOBYTE(v35) = *((_BYTE *)Buffer + 148);
  *((_BYTE *)Buffer + 145) = v41;
  *((_BYTE *)Buffer + 151) = v35;
  *((_BYTE *)Buffer + 148) = v32;
  LOBYTE(v32) = *((_BYTE *)Buffer + 149);
  *((_BYTE *)Buffer + 149) = *((_BYTE *)Buffer + 150);
  *((_BYTE *)Buffer + 150) = v32;
  v42 = (char *)Buffer + 152;
  v56 = 10;
  do
  {
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
    --v56;
  }
  while ( v56 );
  LOBYTE(v53) = *((_BYTE *)Buffer + 353);
  HIBYTE(v53) = *((_BYTE *)Buffer + 352);
  *((_DWORD *)Buffer + 88) = *((unsigned __int8 *)Buffer + 355) | ((*((unsigned __int8 *)Buffer + 354) | (v53 << 8)) << 8);
  sub_1002B970(Buffera);
  sub_1002B970((int *)Buffer + 5);
  sub_1002B970((int *)Buffer + 7);
  sub_1002B970((int *)Buffer + 8);
  sub_1002B970((int *)Buffer + 9);
  sub_1002B970((int *)Buffer + 20);
  sub_1002B970((int *)Buffer + 21);
  sub_1002B970((int *)Buffer + 22);
  sub_1002B970((int *)Buffer + 23);
  sub_1002B970((int *)Buffer + 24);
  sub_1002B970((int *)Buffer + 26);
  sub_1002B970((int *)Buffer + 27);
  sub_1002B970((int *)Buffer + 28);
  sub_1002B970((int *)Buffer + 29);
  sub_1002B970((int *)Buffer + 30);
  sub_1002B970((int *)Buffer + 33);
  sub_1002B970((int *)Buffer + 35);
  sub_1002B970((int *)Buffer + 36);
  return sub_1002B970((int *)Buffer + 37);
}
