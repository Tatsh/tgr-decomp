#include "../../types-win32.h"
//----- (10024A90) --------------------------------------------------------
int __cdecl sub_10024A90(int a1) {
    int result; // eax

    for (result = a1; result; result = funcs_10024A9E[*(unsigned __int8 *)(result + 3)](result))
        ;
    return result;
}
// 100A79F0: using guessed type int (__cdecl *funcs_10024A9E[4])(int);
