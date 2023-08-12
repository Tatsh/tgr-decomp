#include "types-win32.h"
//----- (100796B0) --------------------------------------------------------
HINSTANCE main_100796B0() {
  HINSTANCE result;       // eax
  unsigned int dxVersion; // [esp+0h] [ebp-8h] BYREF
  char unk[4];            // [esp+4h] [ebp-4h] BYREF

  result = GetModuleHandleA(0);
  hInstance = result;
  if (result) {
    GetDirectXVersion(&dxVersion, unk);
    if (dxVersion >= 0x600) {
      result = (HINSTANCE)CheckPreviousApp();
      if (result)
        result = (HINSTANCE)(main_100798F0() != 0);
    } else {
      MessageBoxA(0, gMessageBoxText, gMessageBoxCaption, MB_ICONHAND);
      result = 0;
    }
  }
  return result;
}
