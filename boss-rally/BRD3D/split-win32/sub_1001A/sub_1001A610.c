#include "../../types-win32.h"
//----- (1001A610) --------------------------------------------------------
int __cdecl sub_1001A610(int a1, int a2, _DWORD *a3, int *a4) {
    HWND v4;  // ebp
    HDC v5;   // esi
    int v6;   // ebx
    int v7;   // ebx
    unk0 *v8; // esi
    int v9;   // eax
    int v11;  // [esp+10h] [ebp-Ch]
    int v12;  // [esp+14h] [ebp-8h]
    int a4a;  // [esp+18h] [ebp-4h] BYREF

    if (!a1)
        return 0;
    if (!a3)
        return 0;
    if (!a4)
        return 0;
    v4 = GetDesktopWindow();
    v5 = GetDC(v4);
    v12 = GetDeviceCaps(v5, 8);
    v11 = GetDeviceCaps(v5, 10);
    v6 = GetDeviceCaps(v5, 12);
    v7 = GetDeviceCaps(v5, 14) * v6;
    ReleaseDC(v4, v5);
    v8 = (unk0 *)meth_1001B490((_DWORD *)a1, v12, v11, v7, 0, 0, 0);
    if (!v8)
        return 0;
    v9 = meth_1001B7C0((unk0 *)a1, (const void *)a2, v8, (int)&a4a, 0);
    if (!v9) {
        v9 = a4a;
        if (!a4a)
            return 0;
    }
    *a3 = v8;
    *a4 = v9;
    return 1;
}
