#include "types-win32.h"
//----- (1000A390) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A390(unk0008C *this) {
    HRESULT result;    // eax
    D3DVALUE gsu1;     // ecx
    CLSID *guid;       // eax
    D3DVALUE v5;       // ecx
    CLSID *v6;         // ebx
    unk00334 *v7;      // esi
    D3DVALUE v8;       // ecx
    D3DVALUE refclsid; // ecx
    int a5;            // [esp+10h] [ebp-18h] BYREF
    int bitDepth;      // [esp+14h] [ebp-14h] BYREF
    int height;        // [esp+18h] [ebp-10h] BYREF
    int width;         // [esp+1Ch] [ebp-Ch] BYREF
    D3DVALUE v14;      // [esp+20h] [ebp-8h] BYREF
    float v15;         // [esp+24h] [ebp-4h] BYREF

    if ((gHasCalledDDrawEnum & 1) != 0 || (result = graphics_1001B970(), result >= 0)) {
        gsu1 = this->field_8.specular.r;
        if (gsu1 == 0.0)
            guid = 0;
        else
            guid = meth_unk00334_GetDirectDrawGUID((unk00334 *)LODWORD(gsu1));
        v5 = this->field_8.specular.b;
        if (v5 == 0.0)
            v6 = 0;
        else
            v6 = (CLSID *)(LODWORD(v5) + 4);
        v7 = sub_1001A550(guid);
        if (v7) {
            v8 = this->field_8.specular.g;
            if (v8 == 0.0) {
                a5 = 0;
                bitDepth = 0;
                height = 0;
                width = 0;
            } else {
                meth_unk00334_1001AC80((unk00334 *)LODWORD(v8), &width, &height, &bitDepth, &a5);
            }
            if (s_unk00334_1001A6E0(v7, (int)v6, width, height, bitDepth, a5, &v14, &v15)) {
                refclsid = v15;
                this->field_8.specular.g = v14;
                LODWORD(this->field_8.specular.r) = v7;
                this->field_8.specular.b = refclsid;
                result = 0;
            } else {
                result = -2005522671;
            }
        } else {
            result = -2005522670;
        }
    }
    return result;
}
// 104BBE18: using guessed type int gHasCalledDDrawEnum;
