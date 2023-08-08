#include "../types-win32.h"
//----- (1001A8C0) --------------------------------------------------------
int __cdecl sub_1001A8C0(int a1) {
    int result; // eax

    switch (a1) {
    case 1:
        result = 0x4000;
        break;
    case 2:
        result = 0x2000;
        break;
    case 4:
        result = 0x1000;
        break;
    case 8:
        result = 0x800;
        break;
    case 16:
        result = 0x400;
        break;
    case 24:
        result = 0x200;
        break;
    case 32:
        result = 0x100;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
