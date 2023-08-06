#include "../../types-n64.h"
//----- (80248F88) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80248F88(int a1, int a2, int a3, char a4, _BYTE *a5)
{
  word_802A4BE8 = 0;
  byte_8028DCBC = 1;
  byte_80369E50 = 0;
  byte_80369E51 = 0;
  dword_80369E54 = 0;
  byte_80369E61 = 0;
  dword_8028DCC4 = 0;
  dword_80369E5C = 0;
  byte_80369E62 = 0;
  if ( a4 == 1 )
    byte_80369E60 = 0;
  else
    byte_80369E60 = 2;
  *a5 = 0;
  return 0;
}
// 80248FE8: write access to const memory at 802A4BE8 has been detected
// 80248FFC: write access to const memory at 8028DCBC has been detected
// 80249004: write access to const memory at 80369E50 has been detected
// 8024900C: write access to const memory at 80369E51 has been detected
// 80249014: write access to const memory at 80369E54 has been detected
// 8024901C: write access to const memory at 80369E61 has been detected
// 80249024: write access to const memory at 8028DCC4 has been detected
// 80249030: write access to const memory at 80369E5C has been detected
// 80249040: write access to const memory at 80369E62 has been detected
// 8024904C: write access to const memory at 80369E60 has been detected
// 80249054: write access to const memory at 80369E60 has been detected
// 802490BC: write access to const memory at 80369E60 has been detected
// 802490E8: write access to const memory at 80369E62 has been detected
// 802490EC: write access to const memory at 80369E60 has been detected
// 802490FC: write access to const memory at 80369E62 has been detected
// 80249298: write access to const memory at 80369E60 has been detected
// 802492CC: write access to const memory at 8028DB60 has been detected
// 80249300: write access to const memory at 80369E54 has been detected
// 80249314: write access to const memory at 80369E60 has been detected
// 80249360: write access to const memory at 80369E54 has been detected
// 802493E4: write access to const memory at 80369E60 has been detected
// 80249428: write access to const memory at 80369E60 has been detected
// 80249438: write access to const memory at 80369E60 has been detected
// 80249478: write access to const memory at 80369E54 has been detected
// 80249488: write access to const memory at 80369E50 has been detected
// 80249498: write access to const memory at 80369E60 has been detected
// 802494B4: write access to const memory at 80369E54 has been detected
// 802494C4: write access to const memory at 80369E60 has been detected
// 802494E4: write access to const memory at 80369E60 has been detected
// 80249518: write access to const memory at 80369E54 has been detected
// 80249528: write access to const memory at 80369E60 has been detected
// 80249538: write access to const memory at 80369E60 has been detected
// 80249540: write access to const memory at 8028DCC4 has been detected
// 80249548: write access to const memory at 80369E5C has been detected
// 8024955C: write access to const memory at 80369E61 has been detected
// 80249570: write access to const memory at 8028DCC0 has been detected
// 80249594: write access to const memory at 80369E62 has been detected
// 802495B8: write access to const memory at 80369E54 has been detected
// 802496C8: write access to const memory at 80369E60 has been detected
// 802496D4: write access to const memory at 80369E60 has been detected
// 802496FC: write access to const memory at 80369E60 has been detected
// 8024972C: write access to const memory at 80369E54 has been detected
// 80249740: write access to const memory at 80369E60 has been detected
// 80249808: write access to const memory at 8028DCC0 has been detected
// 80249818: write access to const memory at 80369E60 has been detected
// 80249824: write access to const memory at 80369E62 has been detected
// 80249828: write access to const memory at 80369E54 has been detected
// 8024983C: write access to const memory at 80369E60 has been detected
// 8024985C: write access to const memory at 80369E54 has been detected
// 8024986C: write access to const memory at 80369E60 has been detected
// 8024987C: write access to const memory at 80369E60 has been detected
// 80249890: write access to const memory at 80369E60 has been detected
// 802498A0: write access to const memory at 80369E54 has been detected
// 802498AC: write access to const memory at 80369E60 has been detected
// 80249A38: write access to const memory at 80369E60 has been detected
// 80249A58: write access to const memory at 80369E60 has been detected
// 80249B98: write access to const memory at 80369E62 has been detected
// 80249BE4: write access to const memory at 8028DCC0 has been detected
// 80249C08: write access to const memory at 80369E54 has been detected
// 80249C44: write access to const memory at 80369E54 has been detected
// 80249C4C: write access to const memory at 80369E60 has been detected
// 80249C68: write access to const memory at 80369E60 has been detected
// 80249C80: write access to const memory at 80369E54 has been detected
// 80249C88: write access to const memory at 80369E60 has been detected
// 80249CAC: write access to const memory at 80369E54 has been detected
// 80249CC0: write access to const memory at 80369E60 has been detected
// 80249CD8: write access to const memory at 80369E60 has been detected
// 80249D88: write access to const memory at 80369E5C has been detected
// 80249DB0: write access to const memory at 80369E54 has been detected
// 80249DD4: write access to const memory at 80369E5C has been detected
// 80249DFC: write access to const memory at 80369E54 has been detected
// 8024A058: write access to const memory at 8028DCC4 has been detected
// 8024A068: write access to const memory at 80369E54 has been detected
// 8024A074: write access to const memory at 80369E54 has been detected
// 8024A09C: write access to const memory at 80369E61 has been detected
// 8024A0A4: write access to const memory at 8028DCC4 has been detected
// 8024A0AC: write access to const memory at 80369E5C has been detected
// 8024A0BC: write access to const memory at 80369E60 has been detected
// 8024A0DC: write access to const memory at 80369E61 has been detected
// 8024A0E8: write access to const memory at 8028DCC4 has been detected
// 8024A0EC: write access to const memory at 80369E54 has been detected
// 8024A118: write access to const memory at 80369E54 has been detected
// 8024A120: write access to const memory at 80369E60 has been detected
// 8024A134: write access to const memory at 80369E51 has been detected
// 8024A150: write access to const memory at 80369E60 has been detected
// 8024A1B0: write access to const memory at 80369E61 has been detected
// 8024A1C0: write access to const memory at 80369E61 has been detected
// 8024A1E8: write access to const memory at 80369E60 has been detected
// 8024A278: write access to const memory at 80369E54 has been detected
// 8024A3B8: write access to const memory at 80369E54 has been detected
// 8024A428: write access to const memory at 80369E60 has been detected
// 8024A434: write access to const memory at 8028DBB4 has been detected
// 8024A440: write access to const memory at 80369E54 has been detected
// 8024A470: write access to const memory at 80369E60 has been detected
// 8024A48C: write access to const memory at 8028DCC4 has been detected
// 8024A490: write access to const memory at 80369E54 has been detected
// 8024A498: write access to const memory at 80369E60 has been detected
// 8024A4D8: write access to const memory at 80369E60 has been detected
// 8024A4E4: write access to const memory at 80369E51 has been detected
// 8024A4F4: write access to const memory at 80369E54 has been detected
// 8024A508: write access to const memory at 80369E60 has been detected
// 8024A6A0: write access to const memory at 80369E51 has been detected
// 8024A6B0: write access to const memory at 80369E60 has been detected
// 8024A6B8: write access to const memory at 80369E60 has been detected
// 8024A8FC: write access to const memory at 80369E60 has been detected
// 8024A93C: write access to const memory at 80369E54 has been detected
// 8024A950: write access to const memory at 80369E60 has been detected
// 8024A964: write access to const memory at 80369E54 has been detected
// 8024A978: write access to const memory at 80369E60 has been detected
// 8024A990: write access to const memory at 80369E54 has been detected
// 8024A994: write access to const memory at 80369E61 has been detected
// 8024A99C: write access to const memory at 8028DCC4 has been detected
// 8024A9A8: write access to const memory at 80369E5C has been detected
// 8024A9B8: write access to const memory at 80369E62 has been detected
// 8024A9C8: write access to const memory at 80369E60 has been detected
// 8024AAFC: write access to const memory at 80369E50 has been detected
// 8024AB28: write access to const memory at 80369E54 has been detected
// 8024AB5C: write access to const memory at 80369E60 has been detected
// 8024AB68: write access to const memory at 80369E60 has been detected
// 8024AB6C: write access to const memory at 8028DCBC has been detected
// 8024ABB8: write access to const memory at 802A4BE8 has been detected
// 8024ABDC: write access to const memory at 8028DB60 has been detected
// 8024AC40: write access to const memory at 8028DB60 has been detected
// 80249390: write access to const memory at 8031B1E8 has been detected
// 802494B0: write access to const memory at 8031B1E8 has been detected
// 802494D8: write access to const memory at 8031B1E8 has been detected
// 80271FA8: using guessed type int dword_80271FA8;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
// 8028DBB4: using guessed type char byte_8028DBB4;
// 8028DCBC: using guessed type char byte_8028DCBC;
// 8028DCC0: using guessed type char byte_8028DCC0;
// 8028DCC4: using guessed type int dword_8028DCC4;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 8031B1E8: using guessed type char byte_8031B1E8;
// 80369E50: using guessed type char byte_80369E50;
// 80369E51: using guessed type char byte_80369E51;
// 80369E54: using guessed type int dword_80369E54;
// 80369E5C: using guessed type int dword_80369E5C;
// 80369E60: using guessed type char byte_80369E60;
// 80369E61: using guessed type char byte_80369E61;
// 80369E62: using guessed type char byte_80369E62;
