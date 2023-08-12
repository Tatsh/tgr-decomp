#include "types-win32.h"
//----- (1000A480) --------------------------------------------------------
int __thiscall meth_unk0008C_1000A480(unk0008C *this) {
    unk00334 *v2; // eax
    int result;   // eax
    GUID *v4;     // eax
    HRESULT v5;   // edi
    int v6;       // edi
    D3DVALUE v7;  // eax

    if (!LODWORD(this->field_8.specular.r)) {
        v2 = sub_1001A550(NULL);
        LODWORD(this->field_8.specular.r) = v2;
        if (!v2)
            return -2005522669;
    }
    v4 = meth_unk00334_GetDirectDrawGUID((unk00334 *)LODWORD(this->field_8.specular.r));
    v5 = DirectDrawCreate(v4, (LPDIRECTDRAW *)&this->field_8.specular.a, 0);
    if (v5 < 0)
        goto LABEL_8;
    v6 = (**(int(__stdcall ***)(_DWORD, GUID *, D3DCOLORVALUE *))LODWORD(this->field_8.specular.a))(
        LODWORD(this->field_8.specular.a), &CLSID_IDirectDraw2, &this->field_8.emissive);
    if (v6 < 0) {
        MessageBoxA((HWND)LODWORD(this->field_8.ambient.g),
                    gMessageBoxText,
                    gMessageBoxCaption,
                    MB_ICONERROR);
        meth_unk0008C_ReleaseD3D2DDraw2DDraw(this);
        return v6;
    }
    v5 = (**(int(__stdcall ***)(_DWORD, GUID *, D3DVALUE *))LODWORD(this->field_8.emissive.r))(
        LODWORD(this->field_8.emissive.r), &CLSID_IDirect3D2, &this->field_8.emissive.g);
    if (v5 >= 0) {
        g_pD3D2 = (IDirect3D2 *)LODWORD(this->field_8.emissive.g);
        v7 = this->field_8.ambient.r;
        LOBYTE(v7) |= 1u;
        this->field_8.ambient.r = v7;
        result = 0;
    } else {
    LABEL_8:
        meth_unk0008C_ReleaseD3D2DDraw2DDraw(this);
        result = v5;
    }
    return result;
}
