#include "types-win32.h"
//----- (1000A480) --------------------------------------------------------
int __thiscall meth_unk0008C_1000A480(unk0008C *this) {
    unk00334 *v2; // eax
    int result;   // eax
    GUID *v4;     // eax
    HRESULT v5;   // edi
    int v6;       // edi
    int v7;       // eax

    if (!this->u334a) {
        v2 = sub_1001A550(NULL);
        this->u334a = v2;
        if (!v2)
            return -2005522669;
    }
    v4 = GetDirectDrawGUID(this->u334a);
    v5 = DirectDrawCreate(v4, &this->lpDirectDraw, 0);
    if (v5 < 0)
        goto LABEL_8;
    v6 = this->lpDirectDraw->lpVtbl->QueryInterface(
        this->lpDirectDraw, &CLSID_IDirectDraw2, (LPVOID *)&this->lpDirectDraw2);
    if (v6 < 0) {
        MessageBoxA(this->hwnd, gMessageBoxText, gMessageBoxCaption, MB_ICONERROR);
        ReleaseD3D2_DDraw2_DDraw(this);
        return v6;
    }
    v5 = this->lpDirectDraw2->lpVtbl->QueryInterface(
        this->lpDirectDraw2, &CLSID_IDirect3D2, (LPVOID *)&this->lpDirect3D2);
    if (v5 >= 0) {
        g_pD3D2 = this->lpDirect3D2;
        v7 = this->field_1C;
        LOBYTE(v7) = v7 | 1;
        this->field_1C = v7;
        result = 0;
    } else {
    LABEL_8:
        ReleaseD3D2_DDraw2_DDraw(this);
        result = v5;
    }
    return result;
}
