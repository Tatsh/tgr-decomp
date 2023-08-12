#include "types-win32.h"
//----- (1000AD70) --------------------------------------------------------
int __thiscall meth_unk0008C_ReleaseDDrawSurface(unk0008C *this) {
  IDirect3DDevice *dev;              // eax
  IDirectDrawSurface *lpDDSurface_1; // eax
  IDirectDrawSurface *lpDDSurface;   // eax

  if (this->last)
    returnZeroWrapper();
  meth_unk0008C_1000AEA0(this);
  dev = (IDirect3DDevice *)this->lpDirect3DDevice;
  this->? &= 0xFFFFFFF7;
  if (dev) {
    dev->lpVtbl->Release(dev);
    this->lpDirect3DDevice = 0;
    g_D3DDevice2 = 0;
  }
  if (this->lpDirectDrawSurface2) {
    lpDDSurface_1 = this->lpDirectDrawSurface1;
    if (lpDDSurface_1)
      lpDDSurface_1->lpVtbl->DeleteAttachedSurface(lpDDSurface_1, 0, this->lpDirectDrawSurface2);
    this->lpDirectDrawSurface2->lpVtbl->Release(this->lpDirectDrawSurface2);
    this->lpDirectDrawSurface2 = 0;
  }
  lpDDSurface = this->lpDirectDrawSurface1;
  if (lpDDSurface) {
    lpDDSurface->lpVtbl->Release(this->lpDirectDrawSurface1);
    this->lpDirectDrawSurface1 = 0;
  }
  return 0;
}
