#include "types-win32.h"
//----- (100243E0) --------------------------------------------------------
HRESULT sub_100243E0() {
  IDirect3DDevice2Vtbl *v0; // ecx

  if (!MEMORY[0x106C6618])
    return g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_FOGENABLE, 0);
  if (MEMORY[0x106C6624] || MEMORY[0x106C6620] || (flt_104C15C8 = 16384.0, !MEMORY[0x106C661C]))
    flt_104C15C8 = 8192.0;
  v0 = g_D3DDevice2->lpVtbl;
  dword_104BBE30 = 8;
  v0->SetRenderState(g_D3DDevice2, D3DRS_FOGENABLE, 1);
  return g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_FOGTABLEMODE, 0);
}
// 104BBE30: using guessed type int dword_104BBE30;
// 104C15C8: using guessed type float flt_104C15C8;
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
