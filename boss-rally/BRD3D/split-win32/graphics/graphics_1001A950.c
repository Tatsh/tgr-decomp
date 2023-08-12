#include "types-win32.h"
//----- (1001A950) --------------------------------------------------------
HRESULT __cdecl graphics_1001A950(DDPIXELFORMAT *pixelFormat) {
  HRESULT hr;    // eax
  DWORD dwFlags; // eax

  hr = (HRESULT)pixelFormat;
  if (pixelFormat) {
    dwFlags = pixelFormat->dwFlags;
    if ((dwFlags & DDPF_PALETTEINDEXED1) != 0) {
      hr = 1;
    } else if ((dwFlags & DDPF_PALETTEINDEXED2) != 0) {
      hr = 1;
    } else if ((dwFlags & DDPF_PALETTEINDEXED4) != 0) {
      hr = 1;
    } else {
      hr = ((unsigned __int8)pixelFormat->dwFlags >> 5) & 1;
    }
  }
  return hr;
}
