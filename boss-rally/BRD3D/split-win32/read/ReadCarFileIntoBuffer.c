#include "types-win32.h"
//----- (10037740) --------------------------------------------------------
int __cdecl ReadCarFileIntoBuffer(char *outBuffer, int carIndex) {
  int result;             // eax
  int v3;                 // [esp+10h] [ebp-504h]
  char buffer[256];       // [esp+14h] [ebp-500h] BYREF
  char carFilepath[1024]; // [esp+114h] [ebp-400h] BYREF

  gCarIndex = carIndex;
  if (outBuffer == byte_100C12A0) {
    car_LoadCarPaint(carIndex, 1);
  } else {
    v3 = dword_100B8C90;
    if (!dword_100B8C90)
      dword_100B8C90 = 1;
    car_LoadCarPaint(carIndex, 0);
  }
  dword_10AA3460 = 0;
  strcpy(carFilepath, kCarsSlash);
  strcat(carFilepath, gCarNames[carIndex]);
  strcat(carFilepath, kRCA);
  ReadFilenameToBuffer(outBuffer, carFilepath, -1);
  if (strncmp(outBuffer, kRCar, 4u)) {
    sprintf(buffer, "not a car file: %s", buffer);
    s_noreturn_10008CF0(buffer);
  }
  result = sub_100370D0(outBuffer);
  if (outBuffer != byte_100C12A0)
    dword_100B8C90 = v3;
  return result;
}
// 10037881: variable 'v3' is possibly undefined
// 100B84F8: using guessed type char *gCarNames[16];
// 100B8C90: using guessed type int dword_100B8C90;
// 10AA3444: using guessed type int gCarIndex;
// 10AA3460: using guessed type int dword_10AA3460;
