//----- (10008D90) --------------------------------------------------------
HRESULT __cdecl setup_g_DevCaps(IDirect3DDevice2 *dev2)
{
  IDirect3DDevice2Vtbl *d3dDev2Vtbl; // ecx

  memset(&g_HWCaps, 0, sizeof(g_HWCaps));
  memset(&g_HELCaps, 0, sizeof(g_HELCaps));
  d3dDev2Vtbl = dev2->lpVtbl;
  g_HWCaps.dwSize = 252;
  g_HWCaps.dpcTriCaps.dwSize = 56;
  g_HELCaps.dwSize = 252;
  g_HELCaps.dpcTriCaps.dwSize = 56;
  return d3dDev2Vtbl->GetCaps(dev2, &g_HWCaps, &g_HELCaps);
}
