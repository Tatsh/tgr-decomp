#include "../../types-n64.h"
//----- (80243260) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_80243260()
{
  int **v0; // $s1
  int *v1; // $v0

  word_802A4BE8 = 0;
  dword_8028C328 = 0;
  byte_8028DBBC = 0;
  dword_8028B7F4 = 1;
  sub_802260A0((int)dword_8031B760);
  dword_8031C634[1] = (int)sub_80226D7C;
  dword_8031D7BC = -845608134;
  sub_80220438((int)dword_8031B760, 0, -845608134);
  dword_8028AB08 = 1544627315;
  dword_8031B760[14] = 0.0;
  dword_8031B760[13] = 0.0;
  dword_8031B760[12] = 0.0;
  dword_8031B760[10] = 1.0;
  dword_8031B760[9] = 0.0;
  dword_8031B760[8] = 0.0;
  dword_8031B760[1] = 1.0;
  dword_8031B760[0] = 0.0;
  dword_8031B760[2] = 0.0;
  dword_8031B760[6] = 0.0;
  dword_8031B760[5] = 0.0;
  dword_8031B760[4] = -1.0;
  dword_8031D64C[0] = 6.5;
  dword_8031D64C[1] = 6.5;
  dword_8031D64C[2] = 2.0;
  sub_80224434((float *)dword_8031D61C, (float *)dword_8031D64C);
  sub_80224760((float *)dword_8031D61C);
  flt_8031D640 = 0.0;
  flt_8031D63C = 0.0;
  flt_8031D644 = 1.0;
  sub_8022439C((float *)dword_8031D62C, &flt_8031D63C, (float *)dword_8031D61C);
  sub_8022439C(&flt_8031D63C, (float *)dword_8031D61C, (float *)dword_8031D62C);
  dword_8031D760 = 0;
  dword_8031D764[16] = 0;
  sub_80242940();
  debugPrint("\nAllocating %d bytes (x2) for decal buffers...\n\n");
  dword_8028DB80 = sub_8024296C(2048);
  dword_8028DB84 = sub_8024296C(2048);
  AllocPaintShopGfxMem((int)&dword_8028CB40);
  AllocPaintShopGfxMem((int)&dword_8028CB70);
  AllocPaintShopGfxMem((int)&dword_8028CBA0);
  byte_8028CBCC = 99;
  AllocPaintShopGfxMem((int)&dword_8028CBD0);
  dword_8028CC00 = 0;
  AllocPaintShopGfxMem((int)&dword_8028CC30);
  dword_8028CC60 = 0;
  AllocPaintShopGfxMem((int)&dword_8028CC90);
  AllocPaintShopGfxMem((int)&dword_8028CCC0);
  AllocPaintShopGfxMem((int)&dword_8028CCF0);
  dword_8028CD20 = 0;
  AllocPaintShopGfxMem((int)&dword_8028CD50);
  AllocPaintShopGfxMem((int)&dword_8028CD80);
  AllocPaintShopGfxMem((int)&dword_8028CDB0);
  dword_8028CDCC = 132;
  dword_8028CDD0 = 248;
  AllocPaintShopGfxMem((int)&dword_8028CDE0);
  dword_8028CE00 = 104;
  v0 = off_8028DB0C;
  dword_8028CDFC = 132;
  while ( 1 )
  {
    v1 = *v0;
    dword_80369DB0[0] = (*v0)[7] + 5;
    dword_80369DB0[1] = v1[8] + 2;
    dword_80369DB0[2] = v1[4] - 10;
    dword_80369DB0[3] = v1[5] - 4;
    ++v0;
    *((_BYTE *)v1 + 44) = 99;
  }
}
// 80243290: write access to const memory at 802A4BE8 has been detected
// 802432A4: write access to const memory at 8028C328 has been detected
// 802432B8: write access to const memory at 8028B7F4 has been detected
// 80243354: write access to const memory at 8028AB08 has been detected
// 8024350C: write access to const memory at 8028DB80 has been detected
// 80243524: write access to const memory at 8028DB84 has been detected
// 8024357C: write access to const memory at 8028CC00 has been detected
// 80243594: write access to const memory at 8028CC60 has been detected
// 802435CC: write access to const memory at 8028CD20 has been detected
// 80243BDC: write access to const memory at 8028DB78 has been detected
// 80243BF0: write access to const memory at 8028DB7C has been detected
// 80243C10: write access to const memory at 8028DB88 has been detected
// 80243C30: write access to const memory at 8028DB8C has been detected
// 80243C70: write access to const memory at 8028DB90 has been detected
// 80243C74: write access to const memory at 8028DB08 has been detected
// 80243D14: write access to const memory at 80369BC8 has been detected
// 80243D18: write access to const memory at 80369BCC has been detected
// 80243D2C: write access to const memory at 80369BC4 has been detected
// 80243D30: write access to const memory at 80369BC0 has been detected
// 80243D34: write access to const memory at 80369BDC has been detected
// 80243D40: write access to const memory at 80369BE0 has been detected
// 80243D50: write access to const memory at 80369BD4 has been detected
// 80243D7C: write access to const memory at 80369BD8 has been detected
// 80243F5C: write access to const memory at 802724F0 has been detected
// 80244420: write access to const memory at 8028AA80 has been detected
// 80244738: write access to const memory at 802724F0 has been detected
// 8024479C: write access to const memory at 802724F0 has been detected
// 802447F0: write access to const memory at 802724F0 has been detected
// 80244854: write access to const memory at 802724F0 has been detected
// 80244A48: write access to const memory at 8028DB58 has been detected
// 80244A5C: write access to const memory at 8028DBEC has been detected
// 80244AC8: write access to const memory at 8028DBC8 has been detected
// 80244AD0: write access to const memory at 8028DBA8 has been detected
// 80244AE0: write access to const memory at 8028DBAC has been detected
// 80244AE4: write access to const memory at 8028DBEC has been detected
// 80244B58: write access to const memory at 8028DC80 has been detected
// 80244B60: write access to const memory at 802724F0 has been detected
// 80244B68: write access to const memory at 8028C334 has been detected
// 80244B7C: write access to const memory at 802A4BE8 has been detected
// 802432B4: write access to const memory at 8028DBBC has been detected
// 80243604: write access to const memory at 8028CDCC has been detected
// 8024360C: write access to const memory at 8028CDD0 has been detected
// 8024362C: write access to const memory at 8028CE00 has been detected
// 8024363C: write access to const memory at 8028CDFC has been detected
// 80243850: write access to const memory at 80369CD8 has been detected
// 80243870: write access to const memory at 80369CDC has been detected
// 80243874: write access to const memory at 80369CE0 has been detected
// 80243890: write access to const memory at 80369CE4 has been detected
// 802438A4: write access to const memory at 8028D480 has been detected
// 802438A8: write access to const memory at 8028D490 has been detected
// 802438BC: write access to const memory at 8028D484 has been detected
// 802438C0: write access to const memory at 8028D494 has been detected
// 80243928: write access to const memory at 8028CE30 has been detected
// 8024392C: write access to const memory at 8028CE60 has been detected
// 80243930: write access to const memory at 8028CE2C has been detected
// 80243938: write access to const memory at 8028CE5C has been detected
// 80243C7C: write access to const memory at 8028D4F0 has been detected
// 80243C8C: write access to const memory at 8028D4F4 has been detected
// 80243EFC: write access to const memory at 8028DB9C has been detected
// 80243F14: write access to const memory at 8028DBA0 has been detected
// 80243F3C: write access to const memory at 8028DB94 has been detected
// 80243F54: write access to const memory at 8028DB98 has been detected
// 80243F58: write access to const memory at 8028DC80 has been detected
// 80244958: write access to const memory at 8028A858 has been detected
// 80244ABC: write access to const memory at 8028DBC4 has been detected
// 80244AC0: write access to const memory at 8028DBC0 has been detected
// 80244AC4: write access to const memory at 8028DBD8 has been detected
// 80243A88: write access to const memory at 8028D27C has been detected
// 80243A98: write access to const memory at 8028D280 has been detected
// 80243A9C: write access to const memory at 8028D284 has been detected
// 80243AA0: write access to const memory at 8028D288 has been detected
// 80243558: write access to const memory at 8028CBCC has been detected
// 802434E8: write access to const memory at 8031D760 has been detected
// 802434F0: write access to const memory at 8031D7A4 has been detected
// 80243480: write access to const memory at 8031D640 has been detected
// 80243484: write access to const memory at 8031D63C has been detected
// 80243488: write access to const memory at 8031D644 has been detected
// 80243358: write access to const memory at 8031B798 has been detected
// 8024335C: write access to const memory at 8031B794 has been detected
// 80243360: write access to const memory at 8031B790 has been detected
// 8024337C: write access to const memory at 8031B788 has been detected
// 80243380: write access to const memory at 8031B784 has been detected
// 80243384: write access to const memory at 8031B780 has been detected
// 8024339C: write access to const memory at 8031B764 has been detected
// 802433A0: write access to const memory at 8031B760 has been detected
// 802433A4: write access to const memory at 8031B768 has been detected
// 802433B8: write access to const memory at 8031B778 has been detected
// 802433BC: write access to const memory at 8031B774 has been detected
// 802433C0: write access to const memory at 8031B770 has been detected
// 80243300: write access to const memory at 8031C638 has been detected
// 8024331C: write access to const memory at 8031D7BC has been detected
// 80243674: write access to const memory at 80369DB0 has been detected
// 80243680: write access to const memory at 80369DB4 has been detected
// 8024368C: write access to const memory at 80369DB8 has been detected
// 8024369C: write access to const memory at 80369DBC has been detected
// 802436B4: write access to const memory at 80369DB0 has been detected
// 802436C0: write access to const memory at 80369DB4 has been detected
// 802436CC: write access to const memory at 80369DB8 has been detected
// 802436DC: write access to const memory at 80369DBC has been detected
// 802436F4: write access to const memory at 80369DB0 has been detected
// 80243700: write access to const memory at 80369DB4 has been detected
// 8024370C: write access to const memory at 80369DB8 has been detected
// 8024371C: write access to const memory at 80369DBC has been detected
// 80243734: write access to const memory at 80369DB0 has been detected
// 80243740: write access to const memory at 80369DB4 has been detected
// 8024374C: write access to const memory at 80369DB8 has been detected
// 8024375C: write access to const memory at 80369DBC has been detected
// 80243774: write access to const memory at 80369DB0 has been detected
// 80243780: write access to const memory at 80369DB4 has been detected
// 8024378C: write access to const memory at 80369DB8 has been detected
// 8024379C: write access to const memory at 80369DBC has been detected
// 802437B4: write access to const memory at 80369DB0 has been detected
// 802437C0: write access to const memory at 80369DB4 has been detected
// 802437CC: write access to const memory at 80369DB8 has been detected
// 802437DC: write access to const memory at 80369DBC has been detected
// 802437F4: write access to const memory at 80369DB0 has been detected
// 80243800: write access to const memory at 80369DB4 has been detected
// 8024380C: write access to const memory at 80369DB8 has been detected
// 8024381C: write access to const memory at 80369DBC has been detected
// 80243260: could not find valid save-restore pair for $s4
// 80243260: could not find valid save-restore pair for $s3
// 80243260: could not find valid save-restore pair for $s2
// 80243260: could not find valid save-restore pair for $s1
// 80243260: could not find valid save-restore pair for $s0
// 80243418: write access to const memory at 8031D64C has been detected
// 8024341C: write access to const memory at 8031D650 has been detected
// 80243400: write access to const memory at 8031D654 has been detected
// 80271FA8: using guessed type int dword_80271FA8;
// 802724F0: using guessed type int dword_802724F0;
// 8028A858: using guessed type int dword_8028A858;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AB08: using guessed type int dword_8028AB08;
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028C328: using guessed type int dword_8028C328;
// 8028C334: using guessed type int dword_8028C334;
// 8028CB40: using guessed type int dword_8028CB40;
// 8028CB70: using guessed type int dword_8028CB70;
// 8028CBA0: using guessed type int dword_8028CBA0;
// 8028CBCC: using guessed type char byte_8028CBCC;
// 8028CBD0: using guessed type int dword_8028CBD0;
// 8028CC00: using guessed type int dword_8028CC00;
// 8028CC30: using guessed type int dword_8028CC30;
// 8028CC60: using guessed type int dword_8028CC60;
// 8028CC90: using guessed type int dword_8028CC90;
// 8028CCC0: using guessed type int dword_8028CCC0;
// 8028CCF0: using guessed type int dword_8028CCF0;
// 8028CD20: using guessed type int dword_8028CD20;
// 8028CD50: using guessed type int dword_8028CD50;
// 8028CD80: using guessed type int dword_8028CD80;
// 8028CDB0: using guessed type int dword_8028CDB0;
// 8028CDCC: using guessed type int dword_8028CDCC;
// 8028CDD0: using guessed type int dword_8028CDD0;
// 8028CDE0: using guessed type int dword_8028CDE0;
// 8028CDFC: using guessed type int dword_8028CDFC;
// 8028CE00: using guessed type int dword_8028CE00;
// 8028CE2C: using guessed type int dword_8028CE2C;
// 8028CE30: using guessed type int dword_8028CE30;
// 8028CE5C: using guessed type int dword_8028CE5C;
// 8028CE60: using guessed type int dword_8028CE60;
// 8028CE9C: using guessed type char byte_8028CE9C;
// 8028D12C: using guessed type int dword_8028D12C;
// 8028D130: using guessed type int dword_8028D130;
// 8028D27C: using guessed type int dword_8028D27C;
// 8028D280: using guessed type int dword_8028D280;
// 8028D284: using guessed type int dword_8028D284;
// 8028D288: using guessed type int dword_8028D288;
// 8028D480: using guessed type int dword_8028D480;
// 8028D484: using guessed type int dword_8028D484;
// 8028D490: using guessed type int dword_8028D490;
// 8028D494: using guessed type int dword_8028D494;
// 8028D4F0: using guessed type int dword_8028D4F0;
// 8028D4F4: using guessed type int dword_8028D4F4;
// 8028D508: using guessed type int[4];
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB08: using guessed type int dword_8028DB08;
// 8028DB0C: using guessed type int *off_8028DB0C[11];
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB78: using guessed type int dword_8028DB78;
// 8028DB7C: using guessed type int dword_8028DB7C;
// 8028DB80: using guessed type int dword_8028DB80;
// 8028DB84: using guessed type int dword_8028DB84;
// 8028DB90: using guessed type int dword_8028DB90;
// 8028DB94: using guessed type int dword_8028DB94;
// 8028DB98: using guessed type int dword_8028DB98;
// 8028DB9C: using guessed type int dword_8028DB9C;
// 8028DBA0: using guessed type int dword_8028DBA0;
// 8028DBA8: using guessed type char byte_8028DBA8;
// 8028DBAC: using guessed type char byte_8028DBAC;
// 8028DBBC: using guessed type char byte_8028DBBC;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBC4: using guessed type char byte_8028DBC4;
// 8028DBC8: using guessed type char byte_8028DBC8;
// 8028DBD4: using guessed type char byte_8028DBD4;
// 8028DBD8: using guessed type char byte_8028DBD8;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8028DBE8: using guessed type char byte_8028DBE8;
// 8028DBEC: using guessed type char byte_8028DBEC;
// 8028DC80: using guessed type char byte_8028DC80;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 8031B760: using guessed type int dword_8031B760[512];
// 8031C634: using guessed type int[51];
// 8031D61C: using guessed type int dword_8031D61C[4];
// 8031D62C: using guessed type int dword_8031D62C[4];
// 8031D63C: using guessed type float flt_8031D63C;
// 8031D640: using guessed type float flt_8031D640;
// 8031D644: using guessed type float flt_8031D644;
// 8031D64C: using guessed type int dword_8031D64C[69];
// 8031D760: using guessed type int dword_8031D760;
// 8031D764: using guessed type int[21];
// 8031D7BC: using guessed type int dword_8031D7BC;
// 8031D7D8: using guessed type int[512];
// 80369BC0: using guessed type int dword_80369BC0;
// 80369BC4: using guessed type int dword_80369BC4;
// 80369BC8: using guessed type int dword_80369BC8;
// 80369BCC: using guessed type int dword_80369BCC;
// 80369BD4: using guessed type int dword_80369BD4;
// 80369BD8: using guessed type int dword_80369BD8;
// 80369BDC: using guessed type int dword_80369BDC;
// 80369BE0: using guessed type int dword_80369BE0;
// 80369CD8: using guessed type int dword_80369CD8;
// 80369CDC: using guessed type int dword_80369CDC;
// 80369CE0: using guessed type int dword_80369CE0;
// 80369CE4: using guessed type int dword_80369CE4;
// 80369DB0: using guessed type int dword_80369DB0[40];
// 8036A8E0: using guessed type int dword_8036A8E0[];
