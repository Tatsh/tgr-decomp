#include "../../types-n64.h"
//----- (80209434) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80209434()
{
  int v0; // $s1
  char ***v1; // $v1
  int v2; // $s1
  int *v3; // $s0
  int v5; // $v0
  int result; // $v0

  sub_8020C408((int)&off_80271D1C, &dword_80315F88);
  v0 = 0;
  v1 = &off_80271D1C;
  do
  {
    (*v1)[1] = (char *)((unsigned int)(*v1)[1] & 0xFFFFFFFE);
    ++v0;
    ++v1;
  }
  while ( v0 < 10 );
  v2 = 0;
  sub_80214A3C();
  sub_802089D0();
  v3 = dword_8031B760;
  do
  {
    sub_802260A0((int)v3);
    v3[950] = (int)sub_80226D7C;
    sub_80220438((int)v3, v2, *(unsigned __int8 *)(28 * MEMORY[0xC74C1D3C] + v2 - 2144814764));
    v3[2048] = 0;
    v3[2065] = 0;
    *(float *)v3 = 1.0;
    *((float *)v3 + 1) = 0.0;
    *((float *)v3 + 2) = 0.0;
    *((float *)v3 + 4) = 0.0;
    *((float *)v3 + 5) = 1.0;
    *((float *)v3 + 6) = 0.0;
    *((float *)v3 + 8) = 0.0;
    *((float *)v3 + 9) = 0.0;
    *((float *)v3 + 10) = 1.0;
    *((float *)v3 + 12) = 0.0;
    *((float *)v3 + 13) = 0.0;
    ++v2;
    v3 += 2084;
    *((float *)v3 - 2070) = 0.25400001;
  }
  while ( v2 != 2 );
  dword_8031D64C[0] = 10.0;
  dword_8031D64C[1] = 10.0;
  dword_8031D64C[2] = 5.0;
  sub_802244FC((float *)dword_8031D61C, (float *)dword_8031D64C, -1.0);
  sub_80224760((float *)dword_8031D61C);
  flt_8031D63C = 0.0;
  flt_8031D640 = 0.0;
  flt_8031D644 = 1.0;
  sub_8022439C((float *)dword_8031D62C, &flt_8031D63C, (float *)dword_8031D61C);
  sub_8022439C(&flt_8031D63C, (float *)dword_8031D61C, (float *)dword_8031D62C);
  sub_80260B20((char *)dword_8031F6AC, (const char *)dword_8031D61C, 68);
  dword_8028C328 = 0;
  dword_80315F8C = 2;
  if ( !sub_80208900(2) )
  {
    do
      dword_80315F8C = -1;
    while ( !sub_80208900(-1) );
  }
  dword_80271FAC = -1044482972;
  dword_80271FC8 = (int)sub_80208A58;
  dword_80315F90 = 1;
  dword_80315EE0 = 1;
  dword_80270850 = 0;
  dword_802715BC[92] = (int)"Load Season Data";
  dword_80271738[92] = (int)"Reset To First Round";
  dword_802718D4[84] = (int)"Reset To First Season";
  dword_80271A50[84] = (int)"Reset To First Year";
  dword_80271D60 = 1;
  dword_80271FCC = (int)sub_80208CF0;
  dword_802709DC[93] = 2;
  v5 = sub_8020AD5C(
         *(const char **)(28 * MEMORY[0xC74C1D3C] - 2144814780),
         -1522440201,
         (int)&off_80271D1C,
         &dword_80315F8C,
         (int (*)(void))sub_80208900,
         0,
         0,
         0,
         0,
         120,
         130);
  dword_802709DC[93] = 0;
  if ( v5 == 1 )
  {
    result = 0;
    dword_80315F8C = -1044482972;
    dword_80315EE0 = 0;
  }
  else if ( v5 == 2 )
  {
    sub_8021C6E4((int)sub_802111E0);
    result = 0;
    dword_80271D60 = 0;
  }
  else
  {
    result = 0;
  }
  dword_802709DC[92] = -2144700956;
  return result;
}
// 8020964C: write access to const memory at 8028C328 has been detected
// 80209658: write access to const memory at 80315F8C has been detected
// 802096A4: write access to const memory at 80315F8C has been detected
// 802096D0: write access to const memory at 80271FAC has been detected
// 802096DC: write access to const memory at 80271FC8 has been detected
// 802096F4: write access to const memory at 80315F90 has been detected
// 80209708: write access to const memory at 80315EE0 has been detected
// 80209718: write access to const memory at 80270850 has been detected
// 802097FC: write access to const memory at 80271D60 has been detected
// 8020985C: write access to const memory at 80271FCC has been detected
// 80209888: write access to const memory at 80271FCC has been detected
// 80209A58: write access to const memory at 8028B304 has been detected
// 80209AC0: write access to const memory at 80271D58 has been detected
// 80209ADC: write access to const memory at 80315F8C has been detected
// 80209B08: write access to const memory at 80315F8C has been detected
// 80209B2C: write access to const memory at 80270784 has been detected
// 80209B40: write access to const memory at 80315F8C has been detected
// 80209B64: write access to const memory at 80315F8C has been detected
// 80209BB8: write access to const memory at 80315F8C has been detected
// 80209C38: write access to const memory at 80315EE0 has been detected
// 80209C68: write access to const memory at 80315F8C has been detected
// 80209C6C: write access to const memory at 80315EE0 has been detected
// 80209C7C: write access to const memory at 8028B940 has been detected
// 80209C84: write access to const memory at 80315F8C has been detected
// 80209CC8: write access to const memory at 80271D60 has been detected
// 80209D18: write access to const memory at 80271D60 has been detected
// 80209740: write access to const memory at 8027172C has been detected
// 80209764: write access to const memory at 802718A8 has been detected
// 80209788: write access to const memory at 80271A24 has been detected
// 802097AC: write access to const memory at 80271BA0 has been detected
// 802097D4: write access to const memory at 8027172C has been detected
// 802097F4: write access to const memory at 80271A24 has been detected
// 80209954: write access to const memory at 80270B50 has been detected
// 80209870: write access to const memory at 80270B50 has been detected
// 802095FC: write access to const memory at 8031D63C has been detected
// 80209600: write access to const memory at 8031D640 has been detected
// 80209604: write access to const memory at 8031D644 has been detected
// 802095D8: write access to const memory at 8031D64C has been detected
// 802095DC: write access to const memory at 8031D650 has been detected
// 802095E4: write access to const memory at 8031D654 has been detected
// 80209AF8: conditional instruction was optimized away because of '$t8.4==C'
// 80209B54: conditional instruction was optimized away because of '$t0.4==D'
// 80209D24: conditional instruction was optimized away because of '$v1.4==1'
// 80209D4C: write access to const memory at 80270B4C has been detected
// 80209434: using guessed type int sub_80209434();
// 8026FF18: using guessed type int dword_8026FF18;
// 80270850: using guessed type int dword_80270850;
// 80270854: using guessed type char *off_80270854;
// 802709DC: using guessed type int dword_802709DC[95];
// 802715BC: using guessed type int dword_802715BC[95];
// 80271738: using guessed type int dword_80271738[95];
// 802718D4: using guessed type int dword_802718D4[87];
// 80271A50: using guessed type int dword_80271A50[87];
// 80271D1C: using guessed type char **off_80271D1C;
// 80271D60: using guessed type int dword_80271D60;
// 80271FAC: using guessed type int dword_80271FAC;
// 80271FC8: using guessed type int dword_80271FC8;
// 80271FCC: using guessed type int dword_80271FCC;
// 8027224C: using guessed type int dword_8027224C[5];
// 8028B304: using guessed type int dword_8028B304;
// 8028B940: using guessed type int dword_8028B940;
// 8028C328: using guessed type int dword_8028C328;
// 8028C800: using guessed type int dword_8028C800;
// 80315EE0: using guessed type int dword_80315EE0;
// 80315F88: using guessed type int dword_80315F88;
// 80315F8C: using guessed type int dword_80315F8C;
// 80315F90: using guessed type int dword_80315F90;
// 8031B760: using guessed type int dword_8031B760[512];
// 8031D61C: using guessed type int dword_8031D61C[4];
// 8031D62C: using guessed type int dword_8031D62C[4];
// 8031D63C: using guessed type float flt_8031D63C;
// 8031D640: using guessed type float flt_8031D640;
// 8031D644: using guessed type float flt_8031D644;
// 8031D64C: using guessed type int dword_8031D64C[69];
// 8031F6AC: using guessed type int dword_8031F6AC[103];
