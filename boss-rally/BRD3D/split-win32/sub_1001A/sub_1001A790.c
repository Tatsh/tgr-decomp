#include "types-win32.h"
//----- (1001A790) --------------------------------------------------------
HRESULT __cdecl sub_1001A790(
    int a1, int a2, int a3, int a4, int a5, int a6, int a7, #485 * *a8, int **a9, int ***a10) {
# 485 ** gsu1;      // ebp
    int **v11;      // ebx
    int ***v12;     // edi
    HRESULT result; // eax
# 485 * v14;        // esi
# 485 ** v15;       // edx
    int **v16;      // eax

    gsu1 = a8;
    if (!a8)
        return -2005522670;
    v11 = a9;
    if (!a9)
        return -2005522670;
    v12 = a10;
    if (!a10)
        return -2005522670;
    if ((g_hasCalledDDrawEnum & 1) == 0) {
        result = sub_1001B970();
        if (result < 0)
            return result;
    }
    v14 = sub_1001A550((#485 *)a1);
    if (!v14)
        return -2005522670;
    if (a7) {
        if (!sub_1001A6E0((int)v14, a6, a2, a3, a4, a5, &a8, &a9))
            return -2005522671;
    } else if (!sub_1001A610((int)v14, a6, &a8, (int *)&a9)) {
        return -2005522671;
    }
    v15 = a8;
    v16 = a9;
    *gsu1 = v14;
    *v11 = (int *)v15;
    *v12 = v16;
    return 0;
}
// 104BBE18: using guessed type int g_hasCalledDDrawEnum;
