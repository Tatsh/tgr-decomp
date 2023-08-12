#include "types-win32.h"
//----- (1005F5A0) --------------------------------------------------------
int __cdecl graphics_1005F5A0(int a1, int a2, unsigned __int16 a3, int *a4, int a5) {
    int v5;     // eax
    int v6;     // ebp
    int v7;     // esi
    int v8;     // edi
    int v9;     // ebx
    int v10;    // eax
    int v11;    // ecx
    int v12;    // esi
    int result; // eax
    int v14[2]; // [esp+14h] [ebp-10h] BYREF
    int v15;    // [esp+1Ch] [ebp-8h]
    int v16;    // [esp+20h] [ebp-4h]
    int v17;    // [esp+38h] [ebp+14h]

    v5 = a5;
    LOBYTE(v5) = a5 | 0x10;
    v17 = v5;
    v6 = a1;
    v7 = a2;
    do {
        v8 = *a4;
        v14[0] = *a4;
        v9 = a4[1];
        v14[1] = v9;
        v10 = a4[2];
        v15 = v10;
        v11 = a4[3];
        v16 = v11;
        if (a3 == 1) {
            v12 = v11 + v7;
            if (v10 + v6 > 640) {
                v15 = 640 - v6;
                if (640 - v6 < v8)
                    v15 = v8;
            }
            if (v12 > 480) {
                v16 = 480 - v12 + v11;
                if (v16 < v9)
                    v16 = v9;
            }
        }
        v7 = a2;
        v6 = a1;
        result = (*(int(__stdcall **)(_DWORD, int, int, IDirectDrawSurface *, int *, int))(
            **(_DWORD **)(gUnk334->ddCapsFlags + 88) + 28))(
            *(_DWORD *)(gUnk334->ddCapsFlags + 88), a1, a2, (&gDDSurface)[29 * a3], v14, v17);
        if (!result)
            break;
        if (result == -2005532222) {
            result = graphics_1005F4E0();
            if (result)
                break;
        }
    } while (result == -2005532132);
    return result;
}
