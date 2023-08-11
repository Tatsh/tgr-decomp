#include "types-win32.h"
//----- (1000A390) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A390(unk0008C *this) {
    HRESULT result;     // eax
    unk00334 *gsu1;     // ecx
    CLSID *guid;        // eax
    unk00334 *v5;       // ecx
    CLSID *v6;          // ebx
    unk00334 *v7;       // esi
    unk00334 *v8;       // ecx
    unk00334 *refclsid; // ecx
    int a5;             // [esp+10h] [ebp-18h] BYREF
    int bitDepth;       // [esp+14h] [ebp-14h] BYREF
    int height;         // [esp+18h] [ebp-10h] BYREF
    int width;          // [esp+1Ch] [ebp-Ch] BYREF
    unk00334 *v14;      // [esp+20h] [ebp-8h] BYREF
    unk00334 *v15;      // [esp+24h] [ebp-4h] BYREF

    if ((gHasCalledDDrawEnum & 1) != 0 || (result = sub_1001B970(), result >= 0)) {
        gsu1 = this->u334a;
        if (gsu1)
            guid = GetDirectDrawGUID(gsu1);
        else
            guid = 0;
        v5 = this->u334;
        if (v5)
            v6 = (CLSID *)&v5->lpGUID;
        else
            v6 = 0;
        v7 = sub_1001A550(guid);
        if (v7) {
            v8 = this->u334b;
            if (v8) {
                meth_unk00334_1001AC80(v8, &width, &height, &bitDepth, &a5);
            } else {
                a5 = 0;
                bitDepth = 0;
                height = 0;
                width = 0;
            }
            if (s_unk00334_1001A6E0(v7, (int)v6, width, height, bitDepth, a5, &v14, &v15)) {
                refclsid = v15;
                this->u334b = v14;
                this->u334a = v7;
                this->u334 = refclsid;
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
