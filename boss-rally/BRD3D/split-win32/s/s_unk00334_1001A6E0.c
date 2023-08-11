#include "types-win32.h"
//----- (1001A6E0) --------------------------------------------------------
int __cdecl s_unk00334_1001A6E0(
    unk00334 *a1, int a2, int width, int height, int bitDepth, int a5, _DWORD *a7, _DWORD *a8) {
    unk00334 *v8;  // edi
    _DWORD *v9;    // ebx
    unk00334 *v10; // esi
    int v11;       // edx
    int v12;       // ecx
    int v13;       // eax
    unk00334 *v14; // eax

    v8 = a1;
    if (!a1)
        return 0;
    if (!a7)
        return 0;
    v9 = a8;
    if (!a8)
        return 0;
    v10 = (unk00334 *)meth_unk00334_1001B690(a1, (CLSID *)a2, &a1, 0);
    if (!v10) {
        v10 = a1;
        if (!a1)
            return 0;
    }
    v11 = width;
    if (!width || (v12 = height) == 0 || (v13 = bitDepth) == 0) {
        v11 = 640;
        v12 = 480;
        v13 = 16;
    }
    v14 = meth_unk00334_1001B880(v8, v11, v12, v13, (unk00334 *)a5, (unk00228 *)v10, &a8, 0);
    if (!v14) {
        v14 = (unk00334 *)a8;
        if (!a8)
            return 0;
    }
    *a7 = v14;
    *v9 = v10;
    return 1;
}
