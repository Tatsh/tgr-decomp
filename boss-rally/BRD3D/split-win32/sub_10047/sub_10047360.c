#include "../types-win32.h"
//----- (10047360) --------------------------------------------------------
int __cdecl sub_10047360(int a1) {
    int v1;     // edx
    int result; // eax

    v1 = *(_DWORD *)(a1 + 28);
    if ((v1 & 0x10) != 0)
        return 0;
    if ((v1 & 0x1000000) != 0)
        return 0;
    if ((*(_DWORD *)(a1 + 14416) & 0x1000000) != 0)
        return 0;
    if (dword_10AA284C && (*(_DWORD *)&g_unk54Ptr->gap4[40] || *(_DWORD *)&g_unk54Ptr->gap4[44] ||
                           *(_DWORD *)&g_unk54Ptr->gap4[48] || *(_DWORD *)&g_unk54Ptr->gap4[52])) {
        *(_BYTE *)(a1 + 11108) = 4;
        result = 1;
    } else if ((v1 & 0x100) != 0) {
        switch (++*(_WORD *)(a1 + 123404)) {
        case 2:
            BYTE1(v1) &= 0xFEu;
            *(_BYTE *)(a1 + 11108) = 0;
            *(_DWORD *)(a1 + 28) = v1;
            result = 1;
            break;
        case 3:
            BYTE1(v1) &= 0xFEu;
            *(_BYTE *)(a1 + 11108) = 1;
            *(_DWORD *)(a1 + 28) = v1;
            result = 1;
            break;
        case 4:
            BYTE1(v1) &= 0xFEu;
            *(_BYTE *)(a1 + 11108) = 2;
            *(_DWORD *)(a1 + 28) = v1;
            result = 1;
            break;
        case 0x34:
            BYTE1(v1) &= 0xFEu;
            *(_BYTE *)(a1 + 11108) = 4;
            *(_DWORD *)(a1 + 28) = v1;
            result = 1;
            break;
        default:
            BYTE1(v1) &= 0xFEu;
            *(_WORD *)(a1 + 123404) = 2;
            *(_DWORD *)(a1 + 28) = v1;
            goto LABEL_20;
        }
    } else {
    LABEL_20:
        result = 1;
    }
    return result;
}
// 10AA284C: using guessed type int dword_10AA284C;
