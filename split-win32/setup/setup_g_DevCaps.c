#include "../../types-win32.h"
//----- (10008D90) --------------------------------------------------------
HRESULT __cdecl setup_g_DevCaps(IDirect3DDevice2 *dev2)
{
  IDirect3DDevice2Vtbl *d3dDev2Vtbl; // ecx

  memset(&g_HWCaps, 0, 0xFCu);
  memset(&g_HELCaps, 0, 0xFCu);
  d3dDev2Vtbl = dev2->lpVtbl;
  g_HWCaps.dwSize = 0xFC;
  g_HWCaps.dpcTriCaps.dwSize = 0x38;
  g_HELCaps.dwSize = 0xFC;
  g_HELCaps.dpcTriCaps.dwSize = 0x38;
  return d3dDev2Vtbl->GetCaps(dev2, &g_HWCaps, &g_HELCaps);
}
