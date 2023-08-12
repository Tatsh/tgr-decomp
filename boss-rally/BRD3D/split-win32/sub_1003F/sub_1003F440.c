#include "types-win32.h"
//----- (1003F440) --------------------------------------------------------
int __cdecl sub_1003F440(int a1) {
    int result; // eax

    if (dword_10AA26F0 > 0) {
        switch (dword_10AA26F0) {
        case 1:
            *(_WORD *)(a1 + 123404) = 115;
            break;
        case 2:
            *(_WORD *)(a1 + 123404) = 114;
            break;
        case 3:
            *(_WORD *)(a1 + 123404) = 113;
            break;
        case 4:
            *(_WORD *)(a1 + 123404) = 112;
            break;
        case 5:
            *(_WORD *)(a1 + 123404) = 111;
            break;
        default:
            *(_WORD *)(a1 + 123404) = -1;
            break;
        }
    }
    if (dword_10AA26F0)
        return 1;
    switch (LOBYTE(dword_10AA26F4[0])) {
    case 1:
        *(_WORD *)(a1 + 123404) = 71;
        result = 1;
        break;
    case 2:
        *(_WORD *)(a1 + 123404) = 73;
        result = 1;
        break;
    case 3:
        *(_WORD *)(a1 + 123404) = 75;
        result = 1;
        break;
    case 4:
    case 5:
    case 6:
        *(_WORD *)(a1 + 123404) = 77;
        result = 1;
        break;
    default:
        *(_WORD *)(a1 + 123404) = -1;
        return 1;
    }
    return result;
}
// 1003F440: using guessed type int __cdecl sub_1003F440(int);
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
