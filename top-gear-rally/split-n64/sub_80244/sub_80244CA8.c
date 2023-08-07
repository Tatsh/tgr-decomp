#include "../../types-n64.h"
//----- (80244CA8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
char *sub_80244CA8() {
    char *result; // $v0

    sub_80260B20(0, 0, 2048);
    result = &byte_8028DBB4;
    byte_8028DB74 = 2;
    byte_8028DBB4 = 1;
    byte_8028DBDC = 1;
    return result;
}
// 80244CDC: write access to const memory at 8028DB74 has been detected
// 80244CF8: write access to const memory at 8028DBDC has been detected
// 80244CF0: write access to const memory at 8028DBB4 has been detected
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB74: using guessed type char byte_8028DB74;
// 8028DBB4: using guessed type char byte_8028DBB4;
// 8028DBDC: using guessed type char byte_8028DBDC;
