#include "types-win32.h"
//----- (1000B4D0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B4D0(unk0008C *this, int a2, int a3, int a4, int a5) {
    unk00334 *v6;   // edi
    unk00334 *v7;   // ebp
    unk00334 *v8;   // eax
    unk00334 *v9;   // ebx
    HRESULT result; // eax
    unk00334 *v11;  // edi
    int v12;        // edi
    void *v13;      // [esp+10h] [ebp-4h]

    if (!this->hwnd || !IsWindow(this->hwnd))
        return -2005522669;
    v6 = this->field_2C;
    v7 = this->u334;
    v13 = this->field_30;
    v8 = meth_unk00334_1001B490(v6, a2, a3, a4, 0, 0, 0);
    v9 = v8;
    if (!v8)
        return -2005522670;
    if (meth_unk00334_1001ACF0(v8, v7)) {
        v11 = 0;
    } else {
        v11 = (unk00334 *)meth_unk00334_1001B7C0(v6, &v7->lpGUID, v9, (int)&a4, 0);
        if (!v11) {
            v11 = (unk00334 *)a4;
            if (!a4)
                return -2005522671;
        }
    }
    meth_unk0008C_ReleaseDDrawSurface(this);
    meth_unk0008C_ReleaseDDraw2Surface(this);
    this->field_30 = v9;
    if (v11)
        this->u334 = v11;
    result = meth_unk0008C_1000A5D0(this);
    if (result >= 0) {
        v12 = meth_unk0008C_1000A820(this);
        if (v12 < 0) {
            this->field_30 = v13;
        LABEL_17:
            this->u334 = v7;
            meth_unk0008C_1000A5D0(this);
            meth_unk0008C_1000A820(this);
            meth_unk0008C_1000AB70(this);
            return v12;
        }
        v12 = meth_unk0008C_1000AB70(this);
        if (v12 < 0) {
            meth_unk0008C_ReleaseDDraw2Surface(this);
            this->field_30 = v13;
            goto LABEL_17;
        }
        SendMessageA(this->hwnd, 0xBD3u, 0, 0);
        result = 0;
    }
    return result;
}
