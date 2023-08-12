#include "types-win32.h"
//----- (1000F5C0) --------------------------------------------------------
char *sub_1000F5C0() {
    char *result; // eax

    dword_10363FF0 = (int)&unk_103643C0 + 80000 * *(_DWORD *)&gUnk06594.gap1C8[12452];
    dword_102E5EC8 = (int)&unk_103643C0 + 80000 * *(_DWORD *)&gUnk06594.gap1C8[12452];
    result = (char *)&unk_102E5F28 + 256000 * *(_DWORD *)&gUnk06594.gap1C8[12452];
    dword_10364304 = (int)&unk_1038BCC0 + 32000 * *(_DWORD *)&gUnk06594.gap1C8[12452];
    dword_103643BC = (int)&unk_1038BCC0 + 32000 * *(_DWORD *)&gUnk06594.gap1C8[12452];
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
