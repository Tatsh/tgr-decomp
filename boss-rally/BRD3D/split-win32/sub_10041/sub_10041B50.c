#include "types-win32.h"
//----- (10041B50) --------------------------------------------------------
void sub_10041B50() {
# 505 * v0; // edx

  v0 = dword_10ACED34;
  if (dword_10ACED34) {
    strcpy(aCRallyseasonDatFilepath_ptr, aAutosaveBrf);
    if (!*((_BYTE *)v0 + 4) && !*((_BYTE *)v0 + 5)) {
      memset((char *)v0 + 6, 0, 0x18u);
      memset((char *)dword_10ACED34 + 30, 0, 0x30u);
      memset((char *)dword_10ACED34 + 80, 0, 0x60u);
    }
    sub_100709A0();
  }
}
