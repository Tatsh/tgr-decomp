#include "types-win32.h"
//----- (10005FE0) --------------------------------------------------------
int __cdecl np_sub_10005FE0(int a1) {
    int v1;            // esi
    const char *v2;    // edi
    int result;        // eax
    HANDLE v4;         // [esp-4h] [ebp-414h]
    char Buffer[1024]; // [esp+10h] [ebp-400h] BYREF

    v1 = 0;
    v2 = byte_10221898;
    do {
        result = sub_10005CF0(v1);
        if (result == a1) {
            result = atomic_sub_10004A10(v1);
            if ((result & 0x3F) != 0) {
                WaitForSingleObject(g_hMutex_2, 0xFFFFFFFF);
                v4 = g_hMutex_2;
                dword_10221288[++dword_10221318] = v1;
                ReleaseMutex(v4);
                atomic_sub_10004A50(v1, 0);
                sprintf(Buffer, "%%15%s left the game.", v2);
                result = sub_10003530(Buffer);
            }
        }
        v2 += 2424;
        ++v1;
    } while ((int)v2 < (int)&unk_1022B018);
    return result;
}
// 10221318: using guessed type int dword_10221318;
