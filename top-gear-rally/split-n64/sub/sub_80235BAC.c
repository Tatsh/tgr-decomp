#include "../../types-n64.h"
//----- (80235BAC) --------------------------------------------------------
// sub_10011590 on PC
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80235BAC(int a1)
{
  int result; // $v0
  int v2; // [sp+3BCh] [-Ch]
  int v3; // [sp+3C0h] [-8h]

  if ( !a1 )
  {
    sub_80234FF8();
    dword_8028C748 = -1;
    v2 = -1;
    dword_8028C744 = 0;
    v3 = 0;
    flt_8035D51C = sub_80217420(&flt_8031AA50);
    dword_8035D520 = -887858248;
    dword_8028C784 = 4096;
    dword_8028C77C = 4096;
    dword_8028C78C = 4096;
  }
  sub_8022D7E0(0, 255, 128, 128, 255);
  dword_8028C74C = 201850880;
  dword_8028C750 = 1122360;
  dword_8028A858 = 8;
  MEMORY[0] = -1224736768;
  MEMORY[4] = 664069;
  sub_80219F04();
  dword_8028A858 = 8;
  MEMORY[0] = -1140841462;
  MEMORY[4] = 0;
  sub_802182A8();
  sub_802182A8();
  dword_8028A858 = 8;
  MEMORY[4] = 83886080;
  MEMORY[0] = -184549120;
  if ( a1 )
  {
    v2 = 0;
    dword_8028C740 = 1;
    v3 = 0;
  }
  else
  {
    sub_80254D90();
  }
  if ( !a1 )
    dword_8028C78C = v2 + v3;
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -419430400;
  result = sub_8022D7E0(0, 0, 180, 0, 255);
  dword_8028C748 = v2;
  return result;
}
// 80235C48: write access to const memory at 8035D51C has been detected
// 80235C58: write access to const memory at 8035D520 has been detected
// 80235C60: write access to const memory at 8035D520 has been detected
// 80235CA0: write access to const memory at 8035D520 has been detected
// 80235D0C: write access to const memory at 8035D520 has been detected
// 80235D14: write access to const memory at 8028C784 has been detected
// 80235D1C: write access to const memory at 8028C77C has been detected
// 80235D24: write access to const memory at 8028C78C has been detected
// 802367C8: write access to const memory at 8028C740 has been detected
// 80236A24: write access to const memory at 8028C78C has been detected
// 80236B90: write access to const memory at 8031AB40 has been detected
// 80236BF4: write access to const memory at 8031AB44 has been detected
// 80236C4C: write access to const memory at 8031AB48 has been detected
// 80236CA8: write access to const memory at 8031AB4C has been detected
// 80236CD0: write access to const memory at 8031AB10 has been detected
// 80236CD4: write access to const memory at 8031AB14 has been detected
// 80236CEC: write access to const memory at 8031AB18 has been detected
// 80236D04: write access to const memory at 8031AB1C has been detected
// 80236D18: write access to const memory at 8031AB20 has been detected
// 80236D1C: write access to const memory at 8031AB24 has been detected
// 80236D34: write access to const memory at 8031AB28 has been detected
// 80236D4C: write access to const memory at 8031AB2C has been detected
// 80236D5C: write access to const memory at 8031AB30 has been detected
// 80236D60: write access to const memory at 8031AB34 has been detected
// 80236D78: write access to const memory at 8031AB38 has been detected
// 80236D90: write access to const memory at 8031AB3C has been detected
// 80236E84: write access to const memory at 8031AB4C has been detected
// 80236E88: write access to const memory at 8031AB48 has been detected
// 80236E90: write access to const memory at 8031AB44 has been detected
// 80236EBC: write access to const memory at 8031AB44 has been detected
// 80236EC8: write access to const memory at 8031AB48 has been detected
// 80236ED0: write access to const memory at 8031AB4C has been detected
// 802371F0: write access to const memory at 8031AB10 has been detected
// 80237200: write access to const memory at 8031AB14 has been detected
// 80237210: write access to const memory at 8031AB18 has been detected
// 80237220: write access to const memory at 8031AB1C has been detected
// 80237230: write access to const memory at 8031AB20 has been detected
// 80237240: write access to const memory at 8031AB24 has been detected
// 80237250: write access to const memory at 8031AB28 has been detected
// 80237260: write access to const memory at 8031AB2C has been detected
// 80237270: write access to const memory at 8031AB30 has been detected
// 80237280: write access to const memory at 8031AB34 has been detected
// 80237290: write access to const memory at 8031AB38 has been detected
// 802372A0: write access to const memory at 8031AB3C has been detected
// 802372C0: write access to const memory at 8031AB40 has been detected
// 802372CC: write access to const memory at 8031AB44 has been detected
// 802372D0: write access to const memory at 8031AB4C has been detected
// 802372D8: write access to const memory at 8031AB48 has been detected
// 80237978: write access to const memory at 8028C748 has been detected
// 80235C2C: write access to const memory at 8028C748 has been detected
// 80235C38: write access to const memory at 8028C744 has been detected
// 80235D7C: write access to const memory at 8028C74C has been detected
// 80235D84: write access to const memory at 8028C750 has been detected
// 80235DA4: write access to const memory at 8028C74C has been detected
// 80235DA8: write access to const memory at 8028C750 has been detected
// 802376B0: write access to const memory at 8028AA10 has been detected
// 802376C4: write access to const memory at 8028AA08 has been detected
// 802376D4: write access to const memory at 8028AA38 has been detected
// 802378F4: write access to const memory at 8028A858 has been detected
// 8023791C: write access to const memory at 8028A858 has been detected
// 80237938: write access to const memory at 8028A858 has been detected
// 802378E0: write access to const memory at 8028C78C has been detected
// 802377EC: write access to const memory at 8028A858 has been detected
// 80237750: write access to const memory at 8028A858 has been detected
// 80237778: write access to const memory at 8028A858 has been detected
// 8023779C: write access to const memory at 8028A858 has been detected
// 802377BC: write access to const memory at 8028A858 has been detected
// 80237724: write access to const memory at 8028A858 has been detected
// 8023764C: write access to const memory at 8028A858 has been detected
// 80237668: write access to const memory at 8028A858 has been detected
// 80237684: write access to const memory at 8028A858 has been detected
// 80237604: write access to const memory at 8028A858 has been detected
// 80237564: write access to const memory at 8028A858 has been detected
// 802374B4: write access to const memory at 8028A858 has been detected
// 802374D0: write access to const memory at 8028A858 has been detected
// 802374EC: write access to const memory at 8028A858 has been detected
// 80237524: write access to const memory at 8028A858 has been detected
// 802372FC: write access to const memory at 8028A858 has been detected
// 80237318: write access to const memory at 8028A858 has been detected
// 80237338: write access to const memory at 8028A858 has been detected
// 80237358: write access to const memory at 8028A858 has been detected
// 80236ABC: write access to const memory at 8028A858 has been detected
// 80237394: write access to const memory at 8028A858 has been detected
// 8023693C: write access to const memory at 8028A858 has been detected
// 80236840: write access to const memory at 8028A858 has been detected
// 80236860: write access to const memory at 8028A858 has been detected
// 8023687C: write access to const memory at 8028A858 has been detected
// 8023689C: write access to const memory at 8028A858 has been detected
// 802366FC: write access to const memory at 8028A858 has been detected
// 8023671C: write access to const memory at 8028A858 has been detected
// 80236738: write access to const memory at 8028A858 has been detected
// 80236750: write access to const memory at 8028A858 has been detected
// 8023676C: write access to const memory at 8028A858 has been detected
// 8023678C: write access to const memory at 8028A858 has been detected
// 8023660C: write access to const memory at 8028A858 has been detected
// 80236628: write access to const memory at 8028A858 has been detected
// 80236644: write access to const memory at 8028A858 has been detected
// 80236660: write access to const memory at 8028A858 has been detected
// 802365B8: write access to const memory at 8028A858 has been detected
// 802365D4: write access to const memory at 8028A858 has been detected
// 802364C0: write access to const memory at 8028A858 has been detected
// 802364DC: write access to const memory at 8028A858 has been detected
// 802364F0: write access to const memory at 8028A858 has been detected
// 80236518: write access to const memory at 8028A858 has been detected
// 8023653C: write access to const memory at 8028A858 has been detected
// 80236560: write access to const memory at 8028A858 has been detected
// 8023657C: write access to const memory at 8028A858 has been detected
// 80236404: write access to const memory at 8028A858 has been detected
// 80236420: write access to const memory at 8028A858 has been detected
// 8023643C: write access to const memory at 8028A858 has been detected
// 80236270: write access to const memory at 8028A858 has been detected
// 802362A0: write access to const memory at 8028A858 has been detected
// 802362C8: write access to const memory at 8028A858 has been detected
// 802362F0: write access to const memory at 8028A858 has been detected
// 8023630C: write access to const memory at 8028A858 has been detected
// 80236348: write access to const memory at 8028A858 has been detected
// 80236378: write access to const memory at 8028A858 has been detected
// 80236398: write access to const memory at 8028A858 has been detected
// 802363B8: write access to const memory at 8028A858 has been detected
// 802363D8: write access to const memory at 8028A858 has been detected
// 80236178: write access to const memory at 8028A858 has been detected
// 80236194: write access to const memory at 8028A858 has been detected
// 802361B8: write access to const memory at 8028A858 has been detected
// 802361D4: write access to const memory at 8028A858 has been detected
// 802361F0: write access to const memory at 8028A858 has been detected
// 80235DBC: write access to const memory at 8028A858 has been detected
// 80235DEC: write access to const memory at 8028A858 has been detected
// 80235E08: write access to const memory at 8028A858 has been detected
// 80235E34: write access to const memory at 8028A858 has been detected
// 80235E5C: write access to const memory at 8028A858 has been detected
// 80235E88: write access to const memory at 8028A858 has been detected
// 80235EA4: write access to const memory at 8028A858 has been detected
// 80235EE0: write access to const memory at 8028A858 has been detected
// 80235F18: write access to const memory at 8028A858 has been detected
// 80235F40: write access to const memory at 8028A858 has been detected
// 80235F68: write access to const memory at 8028A858 has been detected
// 80235F90: write access to const memory at 8028A858 has been detected
// 80235FB8: write access to const memory at 8028A858 has been detected
// 80235FD0: write access to const memory at 8028A858 has been detected
// 80235FEC: write access to const memory at 8028A858 has been detected
// 8023600C: write access to const memory at 8028A858 has been detected
// 80236028: write access to const memory at 8028A858 has been detected
// 80236048: write access to const memory at 8028A858 has been detected
// 80236070: write access to const memory at 8028A858 has been detected
// 8023608C: write access to const memory at 8028A858 has been detected
// 802360A4: write access to const memory at 8028A858 has been detected
// 802360C0: write access to const memory at 8028A858 has been detected
// 802360D4: write access to const memory at 8028A858 has been detected
// 802360FC: write access to const memory at 8028A858 has been detected
// 80236120: write access to const memory at 8028A858 has been detected
// 8023613C: write access to const memory at 8028A858 has been detected
// 80235C54: conditional instruction was optimized away because of '%var_1E4.4==1'
// 80236814: conditional instruction was optimized away because of '$s5.4<0'
// 80236924: conditional instruction was optimized away because of '$s5.4==0'
// 80236EB4: conditional instruction was optimized away because of '$s5.4<1'
// 80237620: conditional instruction was optimized away because of '$s5.4<1'
// 802378E0: variable 'v2' is possibly undefined
// 802378E0: variable 'v3' is possibly undefined
// 8026FF18: using guessed type int dword_8026FF18;
// 8028A858: using guessed type int dword_8028A858;
// 8028A874: using guessed type __int16 word_8028A874;
// 8028A878: using guessed type int dword_8028A878;
// 8028A898: using guessed type int dword_8028A898;
// 8028A89C: using guessed type int dword_8028A89C;
// 8028A8A0: using guessed type int dword_8028A8A0;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028AA08: using guessed type int dword_8028AA08;
// 8028AA10: using guessed type int dword_8028AA10;
// 8028AA38: using guessed type int dword_8028AA38;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AB58: using guessed type int dword_8028AB58;
// 8028AB5C: using guessed type int dword_8028AB5C;
// 8028B940: using guessed type int dword_8028B940;
// 8028C640: using guessed type int dword_8028C640[6];
// 8028C6A0: using guessed type int dword_8028C6A0;
// 8028C740: using guessed type int dword_8028C740;
// 8028C744: using guessed type int dword_8028C744;
// 8028C748: using guessed type int dword_8028C748;
// 8028C74C: using guessed type int dword_8028C74C;
// 8028C750: using guessed type int dword_8028C750;
// 8028C770: using guessed type __int16 word_8028C770;
// 8028C774: using guessed type int dword_8028C774;
// 8028C778: using guessed type int dword_8028C778;
// 8028C77C: using guessed type int dword_8028C77C;
// 8028C780: using guessed type int dword_8028C780;
// 8028C784: using guessed type int dword_8028C784;
// 8028C788: using guessed type int dword_8028C788;
// 8028C78C: using guessed type int dword_8028C78C;
// 8031AA50: using guessed type float flt_8031AA50;
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB14: using guessed type float flt_8031AB14;
// 8031AB20: using guessed type float flt_8031AB20;
// 8031AB24: using guessed type float flt_8031AB24;
// 8031AB30: using guessed type float flt_8031AB30;
// 8031AB34: using guessed type float flt_8031AB34;
// 8031AB40: using guessed type float flt_8031AB40;
// 8031AB44: using guessed type float flt_8031AB44;
// 8031AB48: using guessed type float flt_8031AB48;
// 8035D51C: using guessed type float flt_8035D51C;
// 8035D520: using guessed type int dword_8035D520;
