#include "types-win32.h"
//----- (100290E0) --------------------------------------------------------
void __cdecl sub_100290E0(_DWORD *a1) {
  _DWORD *v1; // esi

  v1 = a1;
  if (a1) {
    dword_1057544C = 0;
    dword_10575430 = 0;
    dword_10575448 = 0;
    dword_104D51AC = 0;
    dword_10575438 = 0;
    while (2) {
      switch ((char)HIBYTE(*v1)) {
      case 4:
      case -79:
      case -65:
        sub_10029410((int)v1);
        v1 += 2;
        continue;
      case -72:
        return;
      case -71:
        sub_1002A1A0(v1);
        sub_10029E60((int)v1);
        v1 += 2;
        continue;
      case -70:
        sub_1002A210(v1);
        v1 += 2;
        continue;
      case -69:
        sub_10029E80(v1);
        v1 += 2;
        continue;
      case -26:
        sub_10029F80();
        v1 += 2;
        continue;
      case -25:
        sub_1002A000();
        v1 += 2;
        continue;
      case -24:
        sub_1002A020();
        v1 += 2;
        continue;
      case -16:
        sub_10029F10(v1);
        v1 += 2;
        continue;
      case -14:
        sub_1002A140(v1);
        v1 += 2;
        continue;
      case -13:
        sub_10029FA0(v1);
        v1 += 2;
        continue;
      case -11:
        sub_1002A040(v1);
        v1 += 2;
        continue;
      case -6:
        byte_10555400 = HIBYTE(v1[1]);
        byte_10575410 = BYTE2(v1[1]);
        byte_105553D8 = BYTE1(v1[1]);
        byte_105551D0 = *((_BYTE *)v1 + 4);
        dword_10575444 = 1;
        v1 += 2;
        continue;
      case -5:
        byte_104D51B0 = HIBYTE(v1[1]);
        byte_105551D4 = BYTE2(v1[1]);
        byte_104D51A8 = BYTE1(v1[1]);
        byte_104C51A0 = *((_BYTE *)v1 + 4);
        dword_10575440 = 1;
        v1 += 2;
        continue;
      case -4:
        if (*v1 == -61800956 && v1[1] == 1073607672) {
          dword_10575448 = 1;
          v1 += 2;
        } else {
          dword_10575448 = 0;
          v1 += 2;
        }
        continue;
      case -3:
        sub_10029EB0(v1);
        v1 += 2;
        continue;
      default:
        sub_10029E60((int)v1);
        v1 += 2;
        continue;
      }
    }
  }
}
// 104C51A0: using guessed type char byte_104C51A0;
// 104D51A8: using guessed type char byte_104D51A8;
// 104D51AC: using guessed type int dword_104D51AC;
// 104D51B0: using guessed type char byte_104D51B0;
// 105551D0: using guessed type char byte_105551D0;
// 105551D4: using guessed type char byte_105551D4;
// 105553D8: using guessed type char byte_105553D8;
// 10555400: using guessed type char byte_10555400;
// 10575410: using guessed type char byte_10575410;
// 10575430: using guessed type int dword_10575430;
// 10575438: using guessed type int dword_10575438;
// 10575440: using guessed type int dword_10575440;
// 10575444: using guessed type int dword_10575444;
// 10575448: using guessed type int dword_10575448;
// 1057544C: using guessed type int dword_1057544C;
