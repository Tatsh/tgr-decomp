#include "types-win32.h"
//----- (10008CC0) --------------------------------------------------------
void __noreturn s_noreturn_writeToBufferExit(char *format, ...) {
    char *buff; // eax
    va_list va; // [esp+8h] [ebp+8h] BYREF

    va_start(va, format);
    buff = (char *)malloc(0x400u);
    vsprintf(buff, format, va);
    exit(1);
}
