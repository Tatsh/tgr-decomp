#include "types-win32.h"
//----- (1000A350) --------------------------------------------------------
int __thiscall meth_unk0008C_ReleaseDDrawD3D(unk0008C *this) {
    SendMessageA(this->hwnd, 0xBD1u, 0, (LPARAM)this);
    meth_unk0008C_ReleaseDDrawSurface(this);
    meth_unk0008C_ReleaseDDraw2Surface(this);
    RestoreDisplayMode(this);
    ReleaseD3D2_DDraw2_DDraw(this);
    return 0;
}
