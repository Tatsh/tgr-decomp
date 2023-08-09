#include "types-win32.h"
//----- (1000B390) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B390(unk0008C *this, int a1, unk00334 *a3, int a4) {
    unk00334 *v5;   // edi
    HRESULT result; // eax
    CLSID **v7;     // ebx
    unk00334 *u334; // eax
    unk00334 *v9;   // ebx
    void *v10;      // ebp
    void *v11;      // edx
    unk00334 *v12;  // eax
    int v13;        // edi
    unk00334 *v14;  // ecx
    int a4a;        // [esp+10h] [ebp-14h] BYREF
    int a3a;        // [esp+14h] [ebp-10h] BYREF
    int a2;         // [esp+18h] [ebp-Ch] BYREF
    void *v18;      // [esp+1Ch] [ebp-8h] BYREF
    unk00334 *v19;  // [esp+20h] [ebp-4h] BYREF

    v5 = (unk00334 *)sub_1001A550((#485 *)a1);
    if (!v5)
        return -2005522670;
    if (a3) {
        v7 = &a3->lpGUID;
    } else {
        u334 = this->u334;
        if (u334)
            v7 = &u334->lpGUID;
        else
            v7 = 0;
    }
    if (a4) {
        meth_unk00334_1001AC80((unk00334 *)a4, &a2, &a3a, &a4a, &a1);
    } else {
        a2 = 640;
        a3a = 480;
        a4a = 16;
        a1 = 0;
    }
    if (!sub_1001A6E0((int)v5, (int)v7, a2, a3a, a4a, a1, &v18, &v19))
        return -2005522671;
    v9 = this->field_2C;
    v10 = this->field_30;
    a3 = this->u334;
    meth_unk0008C_ReleaseDDrawD3D(this);
    v11 = v18;
    v12 = v19;
    this->field_2C = v5;
    this->field_30 = v11;
    this->u334 = v12;
    v13 = meth_unk0008C_1000A2C0(this);
    if (v13 >= 0) {
        SendMessageA(this->hwnd, 0xBD2u, 0, 0);
        result = 0;
    } else {
        meth_unk0008C_ReleaseDDrawD3D(this);
        v14 = a3;
        this->field_2C = v9;
        this->u334 = v14;
        this->field_30 = v10;
        meth_unk0008C_1000A2C0(this);
        result = v13;
    }
    return result;
}
