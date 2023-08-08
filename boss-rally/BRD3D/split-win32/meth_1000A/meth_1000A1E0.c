#include "../types-win32.h"
//----- (1000A1E0) --------------------------------------------------------
HRESULT __thiscall meth_1000A1E0(
    unk8C *this, HWND hWnd, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    int v10;        // eax
    HRESULT result; // eax
    HRESULT v12;    // edi

    if (!hWnd || !IsWindow(hWnd))
        return -2005522670;
    this->field_20 = hWnd;
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
                          (gameSpecificUnk1 **)&this->gap24[8],
                          (int **)&this->gap24[12],
                          (int ***)&this->gap24[16]);
    if (result >= 0) {
        result = meth_1000A480((unk334 *)this);
        if (result >= 0) {
            v12 = SetCooperativeLevel((unk334 *)this);
            if (v12 >= 0 && (v12 = meth_1000A5D0((unk334 *)this), v12 >= 0) &&
                (v12 = meth_1000A820((unk334 *)this), v12 >= 0) &&
                (v12 = meth_1000AB70((unk334 *)this), v12 >= 0)) {
                SendMessageA(this->field_20, 0xBD0u, 0, (LPARAM)this);
                result = 0;
            } else {
                meth_1000A350(this);
                result = v12;
            }
        }
    }
    return result;
}
