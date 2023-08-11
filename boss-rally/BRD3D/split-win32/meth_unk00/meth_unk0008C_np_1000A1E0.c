#include "types-win32.h"
//----- (1000A1E0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_np_1000A1E0(
    unk0008C *this, HWND hWnd, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    int v10;        // eax
    HRESULT result; // eax
    int hr;         // edi

    if (!hWnd || !IsWindow(hWnd))
        return -2005522670;
    this->hwnd = hWnd;
    v10 = this->field_14;
    if (a9)
        LOBYTE(v10) = v10 | 4;
    else
        LOBYTE(v10) = v10 & 0xFB;
    this->field_14 = v10;
    result = sub_1001A790(a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          1,
                          (unk00334 *)&this->u334a,
                          (unk00334 *)&this->u334b,
                          (unk00334 *)&this->u334);
    if (result >= 0) {
        result = meth_unk0008C_1000A480(this);
        if (result >= 0) {
            hr = meth_unk0008C_SetCooperativeLevel(this);
            if (hr >= 0 && (hr = meth_unk0008C_1000A5D0(this), hr >= 0) &&
                (hr = meth_unk0008C_1000A820(this), hr >= 0) &&
                (hr = meth_unk0008C_1000AB70(this), hr >= 0)) {
                SendMessageA(this->hwnd, 0xBD0u, 0, (LPARAM)this);
                result = 0;
            } else {
                meth_unk0008C_ReleaseDDrawD3D(this);
                result = hr;
            }
        }
    }
    return result;
}
