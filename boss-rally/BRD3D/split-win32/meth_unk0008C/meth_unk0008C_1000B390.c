#include "types-win32.h"
//----- (1000B390) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B390(unk0008C *this,
                                          CLSID *guidOrRefreshRate,
                                          unk00334 *a3,
                                          int a4) {
    unk00334 *v5;   // edi
    HRESULT result; // eax
    GUID **v7;      // ebx
    D3DVALUE u334;  // eax
    D3DVALUE v9;    // ebx
    D3DVALUE v10;   // ebp
    D3DVALUE v11;   // edx
    D3DVALUE v12;   // eax
    int v13;        // edi
    unk00334 *v14;  // ecx
    int a4a;        // [esp+10h] [ebp-14h] BYREF
    int a3a;        // [esp+14h] [ebp-10h] BYREF
    int a2;         // [esp+18h] [ebp-Ch] BYREF
    float a7;       // [esp+1Ch] [ebp-8h] BYREF
    float a8;       // [esp+20h] [ebp-4h] BYREF

    v5 = sub_1001A550(guidOrRefreshRate);
    if (!v5)
        return -2005522670;
    if (a3) {
        v7 = &a3->lpGUID;
    } else {
        u334 = this->field_8.specular.b;
        if (u334 == 0.0)
            v7 = 0;
        else
            v7 = (GUID **)(LODWORD(u334) + 4);
    }
    if (a4) {
        meth_unk00334_1001AC80((unk00334 *)a4, &a2, &a3a, &a4a, (int *)&guidOrRefreshRate);
    } else {
        a2 = 640;
        a3a = 480;
        a4a = 16;
        guidOrRefreshRate = 0;
    }
    if (!s_unk00334_1001A6E0(v5, (int)v7, a2, a3a, a4a, (int)guidOrRefreshRate, &a7, &a8))
        return -2005522671;
    v9 = this->field_8.specular.r;
    v10 = this->field_8.specular.g;
    a3 = (unk00334 *)LODWORD(this->field_8.specular.b);
    meth_unk0008C_ReleaseDDrawD3D(this);
    v11 = a7;
    v12 = a8;
    LODWORD(this->field_8.specular.r) = v5;
    this->field_8.specular.g = v11;
    this->field_8.specular.b = v12;
    v13 = meth_unk0008C_1000A2C0(this);
    if (v13 >= 0) {
        SendMessageA((HWND)LODWORD(this->field_8.ambient.g), 0xBD2u, 0, 0);
        result = 0;
    } else {
        meth_unk0008C_ReleaseDDrawD3D(this);
        v14 = a3;
        this->field_8.specular.r = v9;
        LODWORD(this->field_8.specular.b) = v14;
        this->field_8.specular.g = v10;
        meth_unk0008C_1000A2C0(this);
        result = v13;
    }
    return result;
}
