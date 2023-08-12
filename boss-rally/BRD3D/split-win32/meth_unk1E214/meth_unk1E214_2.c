#include "types-win32.h"
//----- (10048010) --------------------------------------------------------
int __thiscall meth_unk1E214_2(unk1E214 *this) {
  int v1;     // eax
  int result; // eax

  if ((this->field_28 & 1) == 0)
    return 1;
  v1 = this->field_1C;
  if ((v1 & 0x100000) != 0) {
    if (this != (unk1E214 *)0xFFFFD49B) {
      (*(void(__thiscall **)(char *))(*(_DWORD *)this->vectorUnk + 16))(this->vectorUnk);
      return 1;
    }
    return 1;
  }
  if ((v1 & 0x200000) != 0)
    return 1;
  result = this->lpVtbl->meth4(this);
  if (result)
    return 1;
  return result;
}
