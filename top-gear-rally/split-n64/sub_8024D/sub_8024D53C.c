#include "../../types-n64.h"
//----- (8024D53C) --------------------------------------------------------
int sub_8024D53C() {
    unsigned __int16 *v0; // $a0
    int *v1;              // $v1
    int v2;               // $v0
    int result;           // $v0

    v0 = 0;
    v1 = (int *)byte_80369B98;
    do {
        v2 = *v0;
        v1 += 20;
        v0 += 4;
        *((_BYTE *)v1 - 64) = (v2 >> 13) & 7 | BYTE2(v2) & 0xF8;
        *((_BYTE *)v1 - 63) = HIBYTE(*(v0 - 4)) & 7 | ((int)*(v0 - 4) >> 3) & 0xF8;
        result = *(v0 - 4);
        *((_BYTE *)v1 - 62) = (result >> 3) & 7 | (4 * result) & 0xF8;
        *((_BYTE *)v1 - 44) = ((int)*(v0 - 3) >> 13) & 7 | HIBYTE(*(v0 - 3)) & 0xF8;
        *((_BYTE *)v1 - 43) = HIBYTE(*(v0 - 3)) & 7 | ((int)*(v0 - 3) >> 3) & 0xF8;
        *((_BYTE *)v1 - 42) = ((int)*(v0 - 3) >> 3) & 7 | (4 * *(v0 - 3)) & 0xF8;
        *((_BYTE *)v1 - 24) = ((int)*(v0 - 2) >> 13) & 7 | HIBYTE(*(v0 - 2)) & 0xF8;
        *((_BYTE *)v1 - 23) = HIBYTE(*(v0 - 2)) & 7 | ((int)*(v0 - 2) >> 3) & 0xF8;
        *((_BYTE *)v1 - 22) = ((int)*(v0 - 2) >> 3) & 7 | (4 * *(v0 - 2)) & 0xF8;
        *((_BYTE *)v1 - 4) = ((int)*(v0 - 1) >> 13) & 7 | HIBYTE(*(v0 - 1)) & 0xF8;
        *((_BYTE *)v1 - 3) = HIBYTE(*(v0 - 1)) & 7 | ((int)*(v0 - 1) >> 3) & 0xF8;
        *((_BYTE *)v1 - 2) = ((int)*(v0 - 1) >> 3) & 7 | (4 * *(v0 - 1)) & 0xF8;
    } while (v1 != &dword_80369CD8);
    return result;
}
// 80369CD8: using guessed type int dword_80369CD8;
