#include "types-win32.h"
//----- (1005FFB0) --------------------------------------------------------
HRESULT sub_1005FFB0() {
  HRESULT result; // eax

  result = input_100771B0(byte_10AA3288);
  if (result >= 0)
    result = sub_1005FF60();
  return result;
}
