#include "types-win32.h"
//----- (1000A480) --------------------------------------------------------
int __thiscall meth_unk0008C_1000A480(unk0008C *this) {
    unk00334 *v2; // eax
    int result;   // eax
    GUID *v4;     // eax
    HRESULT v5;   // edi
    int v6;       // edi
    int v7;       // eax

  if ( !this->? )
  {
      v2 = sub_1001A550(NULL);
      this->? = v2;
      if (!v2)
          return -2005522669;
  }
  v4 = meth_unk00334_GetDirectDrawGUID(this->?);
  v5 = DirectDrawCreate(v4, &this->?, 0);
  if (v5 < 0)
      goto LABEL_8;
  v6 = this->?->lpVtbl->QueryInterface(this->?, &CLSID_IDirectDraw2, (LPVOID *)&this->?);
  if (v6 < 0) {
    MessageBoxA(this->?, gMessageBoxText, gMessageBoxCaption, MB_ICONERROR);
    meth_unk0008C_ReleaseD3D2DDraw2DDraw(this);
    return v6;
  }
  v5 = this->?->lpVtbl->QueryInterface(this->?, &CLSID_IDirect3D2, (LPVOID *)&this->?);
  if (v5 >= 0) {
    g_pD3D2 = this->? ;
    v7 = this->     ? ;
    LOBYTE(v7) = v7 | 1;
    this->? = v7;
    result = 0;
  } else {
  LABEL_8:
    meth_unk0008C_ReleaseD3D2DDraw2DDraw(this);
    result = v5;
  }
  return result;
}
