#include "../../types-win32.h"
//----- (10016910) --------------------------------------------------------
int *sub_10016910() {
    int *result; // eax

    result = (int *)dword_104AFD1C;
    if (!dword_104AFD1C) {
        dword_1039B728[0] = 0;
        dword_104AFD14 = -1;
        dword_1039B72C = 0;
        dword_1039B75C = -1;
        dword_1039B730 = 0;
        dword_104AFD00 = -1;
        dword_1039B734 = 0;
        dword_104AFD04 = -1;
        dword_104AFD18 = -1;
        dword_100A66E8 = 1;
        flt_1039B73C = 0.0;
        dword_104AFD0C = 0;
        dword_104AFD08 = 0;
        result = dword_1039B760;
        dword_1039B738 = 0;
        do {
            *result = 0;
            result += 47164;
        } while ((int)result < (int)&unk_10481C10);
        dword_104AFD1C = 1;
    }
    return result;
}
// 100A66E8: using guessed type int dword_100A66E8;
// 1039B728: using guessed type int dword_1039B728[];
// 1039B72C: using guessed type int dword_1039B72C;
// 1039B730: using guessed type int dword_1039B730;
// 1039B734: using guessed type int dword_1039B734;
// 1039B738: using guessed type int dword_1039B738;
// 1039B73C: using guessed type float flt_1039B73C;
// 1039B75C: using guessed type int dword_1039B75C;
// 1039B760: using guessed type int dword_1039B760[];
// 104AFD00: using guessed type int dword_104AFD00;
// 104AFD04: using guessed type int dword_104AFD04;
// 104AFD08: using guessed type int dword_104AFD08;
// 104AFD0C: using guessed type int dword_104AFD0C;
// 104AFD14: using guessed type int dword_104AFD14;
// 104AFD18: using guessed type int dword_104AFD18;
// 104AFD1C: using guessed type int dword_104AFD1C;
