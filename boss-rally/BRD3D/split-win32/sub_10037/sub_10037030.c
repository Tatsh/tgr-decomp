#include "types-win32.h"
//----- (10037030) --------------------------------------------------------
int __cdecl sub_10037030(int a1) {
    int result; // eax

    result = *(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18164] + 124);
    if (result >= 30) {
        ++*(_DWORD *)&gUnk06594.gap1C8[18168];
        result = *(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18164] + 124) + 1;
        *(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18164] + 124) = result;
    } else {
        *(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18164] + 4 * result + 4) = a1;
        ++*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18164] + 124);
    }
    return result;
}
