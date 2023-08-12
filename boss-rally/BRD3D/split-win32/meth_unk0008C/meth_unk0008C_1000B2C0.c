#include "types-win32.h"
//----- (1000B2C0) --------------------------------------------------------
int __thiscall meth_unk0008C_1000B2C0(unk0008C *this) {
    int hr;                          // eax
    D3DVALUE ddSurface;              // eax
    LPDIRECTDRAWSURFACE ddSurface_1; // eax
    IDirectDrawSurface *ddSurface_2; // eax

    if ((LOBYTE(this->field_8.ambient.r) & 0x1F) != 31)
        return -2005522669;
    ddSurface = this->field_8.emissive.b;
    if (ddSurface == 0.0 ||
        !(*(int(__stdcall **)(_DWORD))(*(_DWORD *)LODWORD(ddSurface) + 96))(
            LODWORD(this->field_8.emissive.b)) ||
        (hr = (*(int(__stdcall **)(_DWORD))(*(_DWORD *)LODWORD(this->field_8.emissive.b) + 108))(
             LODWORD(this->field_8.emissive.b)),
         hr >= 0)) {
        ddSurface_1 = this->lpDirectDrawSurface2;
        if (!ddSurface_1 || !ddSurface_1->lpVtbl->IsLost(this->lpDirectDrawSurface2) ||
            (hr = this->lpDirectDrawSurface2->lpVtbl->Restore(this->lpDirectDrawSurface2),
             hr >= 0)) {
            ddSurface_2 = this->lpDirectDrawSurface1;
            if (!ddSurface_2 || !ddSurface_2->lpVtbl->IsLost(this->lpDirectDrawSurface1) ||
                (hr = this->lpDirectDrawSurface1->lpVtbl->Restore(this->lpDirectDrawSurface1),
                 hr >= 0)) {
                if (!this->last || (hr = sub_10001190(), hr >= 0))
                    hr = 0;
            }
        }
    }
    return hr;
}
