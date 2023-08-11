#include "types-win32.h"
//----- (10079720) --------------------------------------------------------
BOOL UnregisterClass() {
  DestroyWindow_gUnk8C();
  return UnregisterClassA(lpClassName, hInstance);
}
