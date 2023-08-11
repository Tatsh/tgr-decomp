#include "types-win32.h"
//----- (1005B540) --------------------------------------------------------
char __cdecl car_1005B540(int a1) {
    int i;     // ecx
    char **v2; // eax

    i = 0;
    v2 = (char **)&unk_100ACE58;
    while (*v2 != (char *)a1) {
        v2 += 2;
        ++i;
        if (v2 >= &gCarPartArray[45].imageData)
            return 0;
    }
    return byte_100ACE5C[8 * i];
}
