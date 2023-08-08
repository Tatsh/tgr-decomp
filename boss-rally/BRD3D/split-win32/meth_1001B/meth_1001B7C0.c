#include "types-win32.h"
//----- (1001B7C0) --------------------------------------------------------
int __thiscall meth_1001B7C0(unk334 *this, const void *a2, unk334 *a3, int a4, int a5) {
    unk334 *v6; // esi
    unk334 *v7; // ebx
    int v8;     // eax

    if (!a3) {
        if (a4) {
            *(_DWORD *)a4 = 0;
            return 0;
        }
        return 0;
    }
    v6 = (unk334 *)a5;
    if (!a5)
        v6 = (unk334 *)this[5].? ;
    if (a4 && meth_1001ACF0(a3, (int)v6))
        *(_DWORD *)a4 = v6;
    if (v6) {
        while (1) {
            v7 = (unk334 *)v6[3].? ;
            LOBYTE(v8) = meth_1001ADA0(v6, a2);
            if (v8) {
                if (meth_1001ACF0(a3, (int)v6))
                    return (int)v6;
            } else {
                if (meth_1001AD90(v6)) {
                    if (!a4 || !meth_1001ACF0(a3, (int)v6))
                        goto LABEL_20;
                } else if (!meth_1001ACF0(a3, (int)v6) || !a4) {
                    goto LABEL_20;
                }
                *(_DWORD *)a4 = v6;
            }
        LABEL_20:
            v6 = v7;
            if (!v7)
                return 0;
        }
    }
    return 0;
}
// 1001B81F: variable 'v8' is possibly undefined
