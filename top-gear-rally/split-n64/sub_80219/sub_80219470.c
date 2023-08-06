#include "../../types-n64.h"
//----- (80219470) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80219470(int a1)
{
  if ( a1 )
  {
    dword_8028A84C = 1;
    dword_8028A850 = a1;
  }
  sub_8022D7E0(0, 0, 130, 0, 255);
  dword_8031B2C8 = 8;
  dword_8031B2CC = 8;
  dword_8031B2D0 = 304;
  dword_8031B2D4 = 224;
  sub_802173C8();
  sub_80255E64();
  dword_8028A898 = 0x2000;
  dword_8028A8A0 = 64;
  dword_8028A89C = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -419430400;
  sub_80219A78(0, 0, 320, 240);
  dword_8028A858 = 8;
  MEMORY[0] = -33554432;
  MEMORY[4] = 1024;
  sub_80264490(64);
  sub_80264490(16);
  sub_80264490(2);
}
// 80219490: write access to const memory at 8028A84C has been detected
// 80219654: write access to const memory at 8028A898 has been detected
// 80219658: write access to const memory at 8028A898 has been detected
// 8021965C: write access to const memory at 8028A8A0 has been detected
// 80219664: write access to const memory at 8028A89C has been detected
// 802194E4: write access to const memory at 8031B2C8 has been detected
// 802194E8: write access to const memory at 8031B2CC has been detected
// 802194FC: write access to const memory at 8031B2D0 has been detected
// 8021950C: write access to const memory at 8031B2D4 has been detected
// 80219518: write access to const memory at 8031B2DC has been detected
// 80219530: write access to const memory at 8031B2E0 has been detected
// 8021953C: write access to const memory at 8031B2E8 has been detected
// 80219544: write access to const memory at 8031B2E4 has been detected
// 80219548: write access to const memory at 8031B2C8 has been detected
// 8021954C: write access to const memory at 8031B2CC has been detected
// 80219550: write access to const memory at 8031B2D0 has been detected
// 80219554: write access to const memory at 8031B2D4 has been detected
// 802195D4: write access to const memory at 8031AA28 has been detected
// 802195DC: write access to const memory at 8031AA2C has been detected
// 80219630: write access to const memory at 8028A858 has been detected
// 802196C8: write access to const memory at 8028A858 has been detected
// 802196EC: write access to const memory at 8028A858 has been detected
// 80219708: write access to const memory at 8028A858 has been detected
// 80219724: write access to const memory at 8028A858 has been detected
// 80219740: write access to const memory at 8028A858 has been detected
// 80219760: write access to const memory at 8028A858 has been detected
// 8021978C: write access to const memory at 8028A858 has been detected
// 802197A8: write access to const memory at 8028A858 has been detected
// 802197C4: write access to const memory at 8028A858 has been detected
// 802197E4: write access to const memory at 8028A858 has been detected
// 80219808: write access to const memory at 8028A858 has been detected
// 80219830: write access to const memory at 8028A858 has been detected
// 80219858: write access to const memory at 8028A858 has been detected
// 80219874: write access to const memory at 8028A858 has been detected
// 80219890: write access to const memory at 8028A858 has been detected
// 802198AC: write access to const memory at 8028A858 has been detected
// 802198C8: write access to const memory at 8028A858 has been detected
// 80219924: write access to const memory at 8028A858 has been detected
// 8021995C: write access to const memory at 8028A858 has been detected
// 80219978: write access to const memory at 8028A858 has been detected
// 802199D0: write access to const memory at 8028A858 has been detected
// 802198EC: write access to const memory at 8028A858 has been detected
// 8021967C: write access to const memory at 8028A858 has been detected
// 80219698: write access to const memory at 8028A858 has been detected
// 80219498: write access to const memory at 8028A850 has been detected
// 8028A848: using guessed type int dword_8028A848;
// 8028A84C: using guessed type int dword_8028A84C;
// 8028A850: using guessed type int dword_8028A850;
// 8028A858: using guessed type int dword_8028A858;
// 8028A898: using guessed type int dword_8028A898;
// 8028A89C: using guessed type int dword_8028A89C;
// 8028A8A0: using guessed type int dword_8028A8A0;
// 8031AA28: using guessed type int dword_8031AA28;
// 8031AA2C: using guessed type int dword_8031AA2C;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
// 8031B2DC: using guessed type int dword_8031B2DC;
// 8031B2E0: using guessed type int dword_8031B2E0;
// 8031B2E4: using guessed type int dword_8031B2E4;
// 8031B2E8: using guessed type int dword_8031B2E8;
