#include "../types-win32.h"
//----- (1000A480) --------------------------------------------------------
int __thiscall meth_1000A480(unk334 *this) {
    gameSpecificUnk1 *v2; // eax
    int result;           // eax
    GUID *v4;             // eax
    HRESULT v5;           // edi
    int v6;               // edi
    int v7;               // eax

  if ( !this->? )
  {
      v2 = sub_1001A550(0);
      this->? = v2;
      if (!v2)
          return -2005522669;
  }
  v4 = getDirectDrawLPGUID((gameSpecificUnk1 *)this->?);
  v5 = DirectDrawCreate(v4, &this->?, 0);
  if (v5 < 0)
      goto LABEL_8;
  v6 = this->?->lpVtbl->QueryInterface(this->?, &CLSID_IDirectDraw2, (LPVOID *)&this->?);
  if (v6 < 0) {
      MessageBoxA(this->field_20, Text, Caption, 0x10u);
      ReleaseD3D2_DDraw2_DDraw(this);
      return v6;
  }
  v5 = this->?->lpVtbl->QueryInterface(this->?, &IID_IDirect3D2, (LPVOID *)&this->?);
  if (v5 >= 0) {
      g_pD3D2 = this->? ;
      v7 = this->field_1C;
      LOBYTE(v7) = v7 | 1;
      this->field_1C = v7;
      result = 0;
  } else {
  LABEL_8:
      ReleaseD3D2_DDraw2_DDraw(this);
      result = v5;
  }
  return result;
}
