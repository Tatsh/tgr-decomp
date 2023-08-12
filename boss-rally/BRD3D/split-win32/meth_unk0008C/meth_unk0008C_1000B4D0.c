#include "types-win32.h"
//----- (1000B4D0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B4D0(unk0008C *this, int a2, int a3, int a4, int a5) {
    D3DVALUE v6;    // edi
    D3DVALUE v7;    // ebp
    unk00334 *v8;   // eax
    unk00334 *v9;   // ebx
    HRESULT result; // eax
    int v11;        // edi
    int v12;        // edi
    D3DVALUE v13;   // [esp+10h] [ebp-4h]

    if (!LODWORD(this->field_8.ambient.g) || !IsWindow((HWND)LODWORD(this->field_8.ambient.g)))
        return -2005522669;
    v6 = this->field_8.specular.r;
    v7 = this->field_8.specular.b;
    v13 = this->field_8.specular.g;
    v8 = meth_unk00334_1001B490((unk00334 *)LODWORD(v6), a2, a3, a4, 0, 0, 0);
    v9 = v8;
    if (!v8)
        return 2289444626;
    if (meth_unk00334_1001ACF0(v8, (unk00228 *)LODWORD(v7))) {
        v11 = 0;
    } else {
        v11 = meth_unk00334_1001B7C0(
            (unk00334 *)LODWORD(v6), (CLSID *)(LODWORD(v7) + 4), v9, (unk00228 *)&a4, 0);
        if (!v11) {
            v11 = a4;
            if (!a4)
                return -2005522671;
        }
    }
    meth_unk0008C_ReleaseDDrawSurface(this);
    meth_unk0008C_ReleaseDDraw2Surface(this);
    LODWORD(this->field_8.specular.g) = v9;
    if (v11)
        LODWORD(this->field_8.specular.b) = v11;
    result = meth_unk0008C_1000A5D0(this);
    if (result >= 0) {
        v12 = meth_unk0008C_1000A820(this);
        if (v12 < 0) {
            this->field_8.specular.g = v13;
        LABEL_17:
            this->field_8.specular.b = v7;
            meth_unk0008C_1000A5D0(this);
            meth_unk0008C_1000A820(this);
            meth_unk0008C_1000AB70(this);
            return v12;
        }
        v12 = meth_unk0008C_1000AB70(this);
        if (v12 < 0) {
            meth_unk0008C_ReleaseDDraw2Surface(this);
            this->field_8.specular.g = v13;
            goto LABEL_17;
        }
        SendMessageA((HWND)LODWORD(this->field_8.ambient.g), 0xBD3u, 0, 0);
        result = 0;
    }
    return result;
}
