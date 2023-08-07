#include "../../types-win32.h"
//----- (1000A1E0) --------------------------------------------------------
HRESULT __thiscall meth_1000A1E0(
    unk0 *this, HWND hWnd, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    int v10;        // eax
    HRESULT result; // eax
    HRESULT v12;    // edi

    if (!hWnd || !IsWindow(hWnd))
        return -2005522670;
    this->hwnd = hWnd;
    v10 = this->unkMeth1;
    if (a9)
        LOBYTE(v10) = v10 | 4;
    else
        LOBYTE(v10) = v10 & 0xFB;
    this->unkMeth1 = v10;
    result = sub_1001A790(a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          1,
                          &this->gameSpecificUnk1_instance,
                          (int **)&this->u0,
                          (int ***)&this->unk);
    if (result >= 0) {
        result = meth_1000A480(this);
        if (result >= 0) {
            v12 = SetCooperativeLevel(this);
            if (v12 >= 0 && (v12 = meth_1000A5D0(this), v12 >= 0) &&
                (v12 = meth_1000A820(this), v12 >= 0) && (v12 = meth_1000AB70(this), v12 >= 0)) {
                SendMessageA(this->hwnd, 0xBD0u, 0, (LPARAM)this);
                result = 0;
            } else {
                meth_1000A350(this);
                result = v12;
            }
        }
    }
    return result;
}
