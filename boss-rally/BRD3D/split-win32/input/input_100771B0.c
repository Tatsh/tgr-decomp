#include "types-win32.h"
//----- (100771B0) --------------------------------------------------------
HRESULT __cdecl input_100771B0(void *a1) {
  HRESULT result; // eax

  if (!g_lpDirectInputDeviceA)
    return 1;
  result = g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(g_lpDirectInputDeviceA, 256, a1);
  if (result < 0 && result == -2147024866) {
    result = g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA);
    if (result >= 0)
      result = g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(g_lpDirectInputDeviceA, 256, a1);
  }
  return result;
}
