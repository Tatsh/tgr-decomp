#include "types-win32.h"
//----- (1006D280) --------------------------------------------------------
int *__cdecl sub_1006D280(int a1) {
    int *result; // eax

    result = (int *)dword_117554E4;
    dword_117554E4 += 8;
    *result = a1;
    result[1] = dword_11754E38;
    dword_11754E38 = (int)result;
    return result;
}
// 11754E38: using guessed type int dword_11754E38;
// 117554E4: using guessed type int dword_117554E4;
