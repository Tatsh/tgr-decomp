#include "types-win32.h"
//----- (1001B9A0) --------------------------------------------------------
HRESULT graphics_ddrawEnum() {
  HRESULT result; // eax
  int context[3]; // [esp+0h] [ebp-Ch] BYREF

  context[0] = 1;
  context[1] = 0;
  context[2] = 0;
  result = DirectDrawEnumerateA((LPDDENUMCALLBACKA)graphics_ddrawEnumerateCallback, context);
  if (result >= 0) {
    if (context[0] && context[1] && dword_104BBE1C == context[1])
      result = 0;
    else
      result = -2005522671;
  }
  return result;
}
// 104BBE1C: using guessed type int dword_104BBE1C;
