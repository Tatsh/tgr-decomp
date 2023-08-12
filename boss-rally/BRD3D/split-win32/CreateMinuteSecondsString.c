#include "types-win32.h"
//----- (100020D0) --------------------------------------------------------
int __cdecl CreateMinuteSecondsString(char *outBuffer, float totalSeconds) {
  __int64 qwTotalSeconds; // rax

  qwTotalSeconds = (__int64)(totalSeconds * 100.0);
  return sprintf(outBuffer,
                 "%d:%02d.%02d",
                 (int)qwTotalSeconds / 100 / 60,
                 (int)qwTotalSeconds / 100 % 60,
                 (_DWORD)qwTotalSeconds +
                     20 * (4 * ((int)qwTotalSeconds / -100) - (int)qwTotalSeconds / 100));
}
