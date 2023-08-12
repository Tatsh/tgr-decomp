#include "types-win32.h"
//----- (1001BAD0) --------------------------------------------------------
int graphics_1001BAD0() {
  unk0008C *v0; // esi
  int result;   // eax

  v0 = gUnk8C;
  if (gD3DWaitCanFlip && (*(int(__stdcall **)(_DWORD, int))(
                             *(_DWORD *)LODWORD(gUnk8C->field_8.emissive.b) + 72))( // GetFlipStatus
                             LODWORD(gUnk8C->field_8.emissive.b),
                             1)) {
    while ((*(int(__stdcall **)(_DWORD, int))(*(_DWORD *)LODWORD(v0->field_8.emissive.b) + 72))(
        LODWORD(v0->field_8.emissive.b), 1))
      ;
  }
  (*(void(__stdcall **)(_DWORD, IDirectDrawSurface *, int))(
      *(_DWORD *)LODWORD(v0->field_8.emissive.b) + 44))( // Flip()
      LODWORD(v0->field_8.emissive.b),
      v0->lpDirectDrawSurface1,
      1);
  result = gD3DWaitFlipDone;
  if (gD3DWaitFlipDone) {
    for (result = (*(int(__stdcall **)(_DWORD, int))(*(_DWORD *)LODWORD(v0->field_8.emissive.b) +
                                                     72))( // GetFlipStatus
             LODWORD(v0->field_8.emissive.b),
             2);
         result;
         result = (*(int(__stdcall **)(_DWORD, int))(*(_DWORD *)LODWORD(v0->field_8.emissive.b) +
                                                     72))(LODWORD(v0->field_8.emissive.b), 2)) {
      ;
    }
  }
  *(&stru_10277680 + 8) = 0;
  return result;
}
// 1001BAD0: using guessed type int graphics_1001BAD0();
// 100A62F8: using guessed type int gD3DWaitCanFlip;
// 100A62FC: using guessed type int gD3DWaitFlipDone;
