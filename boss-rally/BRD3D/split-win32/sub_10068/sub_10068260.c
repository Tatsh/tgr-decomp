#include "../types-win32.h"
//----- (10068260) --------------------------------------------------------
size_t __cdecl sub_10068260(int a1, int a2) {
    sub_10073080(a1, a2);
    sub_100730A0(a1);
    return strftime((char *)(2 * a1), SizeInBytes, Format, Tm);
}
