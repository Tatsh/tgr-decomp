#include "types-win32.h"
//----- (1000B4D0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B4D0(unk0008C *this, int a2, int a3, int a4, int a5) {
    unk00334 *v6;   // edi
    unk00228 *v7;   // ebp
    unk00334 *v8;   // eax
    unk00334 *v9;   // ebx
    HRESULT result; // eax
    unk00334 *v11;  // edi
    int v12;        // edi
    unk00334 *v13;  // [esp+10h] [ebp-4h]

    if (!this->hwnd || !IsWindow(this->hwnd))
        return -2005522669;
    v6 = this->u334a;
    v7 = (unk00228 *)this->u334;
    v13 = this->u334b;
    v8 = meth_unk00334_1001B490(v6, a2, a3, a4, 0, 0, 0);
    v9 = v8;
    if (!v8)
        return 2289444626;
    if (meth_unk00334_1001ACF0(v8, v7)) {
        v11 = 0;
    } else {
        v11 = (unk00334 *)meth_unk00334_1001B7C0(v6, &v7->guid, v9, (unk00228 *)&a4, 0);
        if (!v11) {
            v11 = (unk00334 *)a4;
            if (!a4)
                return -2005522671;
        }
    }
    meth_unk0008C_ReleaseDDrawSurface(this);
    meth_unk0008C_ReleaseDDraw2Surface(this);
    this->u334b = v9;
    if (v11)
        this->u334 = v11;
    result = meth_unk0008C_1000A5D0(this);
    if (result >= 0) {
        v12 = meth_unk0008C_1000A820(this);
        if (v12 < 0) {
            this->u334b = v13;
        LABEL_17:
            this->u334 = (unk00334 *)v7;
            meth_unk0008C_1000A5D0(this);
            meth_unk0008C_1000A820(this);
            meth_unk0008C_1000AB70(this);
            return v12;
        }
        v12 = meth_unk0008C_1000AB70(this);
        if (v12 < 0) {
            meth_unk0008C_ReleaseDDraw2Surface(this);
            this->u334b = v13;
            goto LABEL_17;
        }
        SendMessageA(this->hwnd, 0xBD3u, 0, 0);
        result = 0;
    }
    return result;
}
