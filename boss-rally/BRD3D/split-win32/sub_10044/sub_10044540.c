#include "types-win32.h"
//----- (10044540) --------------------------------------------------------
int sub_10044540() {
  int result; // eax

  result = dword_10AA2A18;
  if (dword_10AA2A44 != dword_10AA2A18) {
    dword_10AA2A44 = dword_10AA2A18;
    switch (dword_10AA2A18) {
    case 0:
      dword_100AB3E8 = 258;
      dword_100AC654 = 1;
      break;
    case 1:
      dword_100AB3E8 = 129;
      dword_100AC654 = 0;
      break;
    case 2:
      dword_100AB3E8 = 16464;
      dword_100AC654 = 6;
      break;
    case 3:
      dword_100AB3E8 = 8236;
      dword_100AC654 = 3;
      break;
    case 4:
      dword_100AB3E8 = 7680;
      dword_100AC654 = 11;
      break;
    default:
      dword_100AC654 = 1;
      dword_100AB3E8 = 258;
      break;
    }
  }
  return result;
}
// 100AB3E8: using guessed type int dword_100AB3E8;
// 100AC654: using guessed type int dword_100AC654;
// 10AA2A18: using guessed type int dword_10AA2A18;
// 10AA2A44: using guessed type int dword_10AA2A44;
