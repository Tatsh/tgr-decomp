#include "types-win32.h"
//----- (1000A390) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A390(unk0008C *this) {
    HRESULT result;     // eax
    unk00334 *gsu1;     // ecx
# 485 * guid;           // eax
    unk00334 *v5;       // ecx
    int v6;             // ebx
    unk00334 *v7;       // esi
    unk00334 *v8;       // ecx
    unk00334 *refclsid; // ecx
    int a5;             // [esp+10h] [ebp-18h] BYREF
    int bitDepth;       // [esp+14h] [ebp-14h] BYREF
    int height;         // [esp+18h] [ebp-10h] BYREF
    int width;          // [esp+1Ch] [ebp-Ch] BYREF
    void *v14;          // [esp+20h] [ebp-8h] BYREF
    unk00334 *v15;      // [esp+24h] [ebp-4h] BYREF

    if ((g_hasCalledDDrawEnum & 1) != 0 || (result = sub_1001B970(), result >= 0)) {
        gsu1 = this->field_2C;
        if (gsu1)
            guid = (#485 *)getDirectDrawLPGUID((#485 *)gsu1);
        else
            guid = 0;
        v5 = this->u334;
        if (v5)
            v6 = (int)&v5->lpGUID;
        else
            v6 = 0;
        v7 = (unk00334 *)sub_1001A550(guid);
        if (v7) {
            v8 = (unk00334 *)this->field_30;
            if (v8) {
                meth_unk00334_1001AC80(v8, &width, &height, &bitDepth, &a5);
            } else {
                a5 = 0;
                bitDepth = 0;
                height = 0;
                width = 0;
            }
            if (sub_1001A6E0((int)v7, v6, width, height, bitDepth, a5, &v14, &v15)) {
                refclsid = v15;
                this->field_30 = v14;
                this->field_2C = v7;
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
// 104BBE18: using guessed type int g_hasCalledDDrawEnum;