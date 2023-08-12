#include "types-win32.h"
//----- (1005BB80) --------------------------------------------------------
int __thiscall meth_unk1A5E0_9(unk1A5E0 *this, int a2) {
  char *v3;                            // edi
  int v4;                              // ebp
  char v6;                             // al
  int v7;                              // ecx
  void(__cdecl * v8)(unk1A5E0 *, int); // eax

  v3 = (char *)this + 1080 * a2;
  v4 = *((_DWORD *)v3 + 11);
  (*(void(__thiscall **)(char *))(v4 + 4))(v3 + 44);
  if (!*((_DWORD *)v3 + 275))
    return 0;
  v6 = (*(int(__thiscall **)(char *))(v4 + 20))(v3 + 44);
  v7 = v6;
  if (v6 <= 0) {
    dword_10AA28D8 = 0;
    *((_DWORD *)v3 + 275) = 0;
    v8 = (void(__cdecl *)(unk1A5E0 *, int))this->field_4[4];
    if (v8) {
      if (v7 >= 0) {
        v8(this, a2);
        return 1;
      }
      v8(this, -1);
    }
  }
  return 1;
}
// 10AA28D8: using guessed type int dword_10AA28D8;
