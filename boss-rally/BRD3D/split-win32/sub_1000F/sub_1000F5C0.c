#include "types-win32.h"
//----- (1000F5C0) --------------------------------------------------------
char *sub_1000F5C0() {
    char *result; // eax

    dword_10363FF0 = (int)&unk_103643C0 + 80000 * MEMORY[0x106C65EC];
    dword_102E5EC8 = (int)&unk_103643C0 + 80000 * MEMORY[0x106C65EC];
    result = (char *)&unk_102E5F28 + 256000 * MEMORY[0x106C65EC];
    dword_10364304 = (int)&unk_1038BCC0 + 32000 * MEMORY[0x106C65EC];
    dword_103643BC = (int)&unk_1038BCC0 + 32000 * MEMORY[0x106C65EC];
    dword_102E5EC4 = (int)result;
    dword_10363FF4 = (int)result;
    return result;
}
// 102E5EC4: using guessed type int dword_102E5EC4;
// 102E5EC8: using guessed type int dword_102E5EC8;
// 10363FF0: using guessed type int dword_10363FF0;
// 10363FF4: using guessed type int dword_10363FF4;
// 10364304: using guessed type int dword_10364304;
// 103643BC: using guessed type int dword_103643BC;
// 106C65EC: using guessed type int dword_106C65EC;
