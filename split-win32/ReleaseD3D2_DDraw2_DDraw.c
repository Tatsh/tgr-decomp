#include "../types-win32.h"
//----- (1000A540) --------------------------------------------------------
int __thiscall ReleaseD3D2_DDraw2_DDraw(unk0 *this)
{
  IDirect3D2 *d3d2; // eax
  IDirectDraw2 *ddraw2; // eax
  LPDIRECTDRAW ddraw; // eax

  d3d2 = this->d3d2;
  this->field_1C &= 0xFFFFFFFE;
  if ( d3d2 )
  {
    d3d2->lpVtbl->Release(d3d2);
    this->d3d2 = 0;
    g_pD3D2 = 0;
  }
  ddraw2 = this->ddraw2;
  if ( ddraw2 )
  {
    ddraw2->lpVtbl->Release(this->ddraw2);
    this->ddraw2 = 0;
  }
  ddraw = this->lpDDraw;
  if ( ddraw )
  {
    ddraw->lpVtbl->Release(this->lpDDraw);
    this->lpDDraw = 0;
  }
  return 0;
}
