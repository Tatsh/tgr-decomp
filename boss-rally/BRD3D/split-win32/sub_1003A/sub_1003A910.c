#include "types-win32.h"
//----- (1003A910) --------------------------------------------------------
BOOL __cdecl sub_1003A910(int a1, int a2) {
  return a2 >= dword_10A9BBCC && a2 <= dword_10A9BBC4 && a1 >= dword_10A9BBD0[a2] &&
         a1 <= dword_10A9BCD0[a2];
}
// 10A9BBC4: using guessed type int dword_10A9BBC4;
// 10A9BBCC: using guessed type int dword_10A9BBCC;
// 10A9BBD0: using guessed type int dword_10A9BBD0[];
