#include "types-win32.h"
//----- (1003C550) --------------------------------------------------------
int sub_1003C550() {
  _DWORD *v0; // ecx
  int v1;     // edx

  sub_1003D070();
  v0 = (_DWORD *)dword_10A9D008;
  if (*(_DWORD *)dword_10A9D008) {
    v1 = *(_DWORD *)(dword_10A9D008 + 8);
    if (v1) {
      (*(void(__stdcall **)(_DWORD, int))(**(_DWORD **)dword_10A9D008 + 36))(
          *(_DWORD *)dword_10A9D008, v1);
      *(_DWORD *)(dword_10A9D008 + 8) = 0;
      v0 = (_DWORD *)dword_10A9D008;
    }
    (*(void(__stdcall **)(_DWORD))(*(_DWORD *)*v0 + 16))(*v0);
    (*(void(__stdcall **)(_DWORD))(**(_DWORD **)dword_10A9D008 + 8))(*(_DWORD *)dword_10A9D008);
    *(_DWORD *)dword_10A9D008 = 0;
  }
  unk = 0;
  --dword_10A9D004;
  return 0;
}
// 1003D070: using guessed type int sub_1003D070(void);
// 10A9D004: using guessed type int dword_10A9D004;
