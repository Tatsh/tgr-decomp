#include "types-win32.h"
//----- (1005C000) --------------------------------------------------------
int __thiscall meth_unk1A5E0_11(unk1A5E0 *this, int a2) {
  int v2;      // eax
  char *v4;    // edx
  _DWORD *v5;  // eax
  int v6;      // ecx
  int v7;      // eax
  int v8;      // ebx
  _DWORD *v9;  // eax
  char *v10;   // edx
  int v11;     // esi
  int v12;     // eax
  char *v13;   // edx
  _DWORD *v14; // eax
  _DWORD *v16; // [esp+10h] [ebp-4h]
  char *v17;   // [esp+18h] [ebp+4h]

  v2 = a2;
  if (a2 >= 0) {
    v4 = (char *)this + 1080 * a2;
    strcpy(v4 + 53, String2);
    v4[52] = 0;
    *((_WORD *)v4 + 548) = 0;
    this->vectorUnk438[a2].field_40C = 0;
    *((_WORD *)v4 + 539) = 0;
    *((_DWORD *)v4 + 276) = 0;
    *((_DWORD *)v4 + 277) = 0;
    *((_DWORD *)v4 + 278) = 0;
    *((_DWORD *)v4 + 279) = 0;
    *((_DWORD *)v4 + 271) = 0;
    *((_DWORD *)v4 + 272) = 0;
    *((_DWORD *)v4 + 273) = 0;
    *((_DWORD *)v4 + 275) = 0;
    *((_DWORD *)v4 + 280) = 0;
    v5 = &this->gap1A60C[8 * a2];
    *v5 = 0;
    v5[1] = 0;
    v2 = a2;
  }
  v6 = v2 + 1;
  v7 = (unsigned __int16)this->field_1A92C[0];
  if (v6 != (unsigned __int16)v7) {
    v8 = v6;
    if (v6 <= v7 - 1) {
      v9 = &this->gap1A60C[8 * v6 + 4];
      v16 = v9;
      v10 = (char *)this + 1080 * v6;
      v17 = v10;
      do {
        qmemcpy(v10 - 1036, v10 + 44, 0x438u);
        if (*v9) {
          v11 = *(v9 - 1);
          if (v11 > 0) {
              this->lpVtbl->meth10(this, *v9, v11, v8 - 1);
              v9 = v16;
              v10 = v17;
          }
        }
        ++v8;
        v10 += 1080;
        v9 += 2;
        v17 = v10;
        v16 = v9;
      } while (v8 <= (unsigned __int16)this->field_1A92C[0] - 1);
    }
  }
  v12 = (unsigned __int16)this->field_1A92C[0] - 1;
  if (v12 > 0) {
    v13 = (char *)this + 1080 * v12;
    strcpy(v13 + 53, String2);
    v13[52] = 0;
    *((_WORD *)v13 + 548) = 0;
    this->vectorUnk438[v12].field_40C = 0;
    *((_WORD *)v13 + 539) = 0;
    *((_DWORD *)v13 + 276) = 0;
    *((_DWORD *)v13 + 277) = 0;
    *((_DWORD *)v13 + 278) = 0;
    *((_DWORD *)v13 + 279) = 0;
    *((_DWORD *)v13 + 271) = 0;
    *((_DWORD *)v13 + 272) = 0;
    *((_DWORD *)v13 + 273) = 0;
    *((_DWORD *)v13 + 275) = 0;
    v14 = &this->gap1A60C[8 * v12];
    *v14 = 0;
    v14[1] = 0;
  }
  --this->field_1A92C[0];
  return 1;
}
