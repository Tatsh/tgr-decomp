#include "../../types-n64.h"
//----- (8023D714) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8023D714()
{
  int result; // $v0

  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -1174400255;
  sub_80225370((int)&flt_8031AB10, 0);
  flt_8031AB50 = 0.0;
  flt_8031AB54 = 0.0;
  flt_8031AB5C = 0.0;
  flt_8031AB64 = 0.0;
  flt_8031AB68 = 0.0;
  flt_8031AB6C = 0.0;
  flt_8031AB70 = 0.0;
  flt_8031AB78 = 0.0;
  flt_8031AB7C = 0.0;
  flt_8031AB80 = 0.0;
  flt_8031AB84 = 0.0;
  flt_8031AB88 = 0.0;
  flt_8031AB58 = -1.0;
  flt_8031AB60 = -1.0;
  flt_8031AB74 = -1.0;
  flt_8031AB8C = 1.0;
  sub_80225180((int)&flt_8031AB10, &flt_8031AB10, &flt_8031AB50);
  sub_80260B20((int)&flt_8031AB50, (char *)&flt_8031AB10, 64);
  sub_80225180((int)dword_80368A80, &flt_8031AB10, (float *)dword_8031AA90);
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -117440512;
  sub_8023D134(0);
  sub_8023D134(0);
  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 1;
  MEMORY[0] = -1191182334;
  return result;
}
// 8023D734: write access to const memory at 8028A858 has been detected
// 8023D750: write access to const memory at 8028A858 has been detected
// 8023D76C: write access to const memory at 8028A858 has been detected
// 8023D78C: write access to const memory at 8028A858 has been detected
// 8023D7B8: write access to const memory at 8028A858 has been detected
// 8023D7D4: write access to const memory at 8028A858 has been detected
// 8023D7F4: write access to const memory at 8028A858 has been detected
// 8023D814: write access to const memory at 8028A858 has been detected
// 8023D830: write access to const memory at 8028A858 has been detected
// 8023D84C: write access to const memory at 8028A858 has been detected
// 8023D868: write access to const memory at 8028A858 has been detected
// 8023D884: write access to const memory at 8028A858 has been detected
// 8023D8A4: write access to const memory at 8028A858 has been detected
// 8023D8C0: write access to const memory at 8028A858 has been detected
// 8023D908: write access to const memory at 8031AB50 has been detected
// 8023D90C: write access to const memory at 8031AB54 has been detected
// 8023D910: write access to const memory at 8031AB5C has been detected
// 8023D914: write access to const memory at 8031AB64 has been detected
// 8023D918: write access to const memory at 8031AB68 has been detected
// 8023D91C: write access to const memory at 8031AB6C has been detected
// 8023D920: write access to const memory at 8031AB70 has been detected
// 8023D924: write access to const memory at 8031AB78 has been detected
// 8023D928: write access to const memory at 8031AB7C has been detected
// 8023D92C: write access to const memory at 8031AB80 has been detected
// 8023D930: write access to const memory at 8031AB84 has been detected
// 8023D934: write access to const memory at 8031AB88 has been detected
// 8023D938: write access to const memory at 8031AB58 has been detected
// 8023D93C: write access to const memory at 8031AB60 has been detected
// 8023D940: write access to const memory at 8031AB74 has been detected
// 8023D948: write access to const memory at 8031AB8C has been detected
// 8023DB00: write access to const memory at 8028A858 has been detected
// 8023DB1C: write access to const memory at 8028A858 has been detected
// 8023DB38: write access to const memory at 8028A858 has been detected
// 8023DB54: write access to const memory at 8028A858 has been detected
// 8023DB7C: write access to const memory at 8028A858 has been detected
// 8023DBA0: write access to const memory at 8028A858 has been detected
// 8023D9E8: write access to const memory at 8028A858 has been detected
// 8023DA04: write access to const memory at 8028A858 has been detected
// 8023DA20: write access to const memory at 8028A858 has been detected
// 8023D990: write access to const memory at 8028A858 has been detected
// 8023D9B0: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A898: using guessed type int dword_8028A898;
// 8028A89C: using guessed type int dword_8028A89C;
// 8028A8A0: using guessed type int dword_8028A8A0;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028B940: using guessed type int dword_8028B940;
// 8028C838: using guessed type __int16 word_8028C838;
// 8028C83C: using guessed type __int16 word_8028C83C;
// 8031AA90: using guessed type int dword_8031AA90[16];
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB50: using guessed type float flt_8031AB50;
// 8031AB54: using guessed type float flt_8031AB54;
// 8031AB58: using guessed type float flt_8031AB58;
// 8031AB5C: using guessed type float flt_8031AB5C;
// 8031AB60: using guessed type float flt_8031AB60;
// 8031AB64: using guessed type float flt_8031AB64;
// 8031AB68: using guessed type float flt_8031AB68;
// 8031AB6C: using guessed type float flt_8031AB6C;
// 8031AB70: using guessed type float flt_8031AB70;
// 8031AB74: using guessed type float flt_8031AB74;
// 8031AB78: using guessed type float flt_8031AB78;
// 8031AB7C: using guessed type float flt_8031AB7C;
// 8031AB80: using guessed type float flt_8031AB80;
// 8031AB84: using guessed type float flt_8031AB84;
// 8031AB88: using guessed type float flt_8031AB88;
// 8031AB8C: using guessed type float flt_8031AB8C;
// 80368A80: using guessed type int dword_80368A80[16];
