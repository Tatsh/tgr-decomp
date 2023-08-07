#include "../../types-n64.h"
//----- (80248DB4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80248DB4() {
    int result; // $v0

    sub_80244CA8();
    result = 0;
    byte_8028CFBC = 0;
    byte_8028DB60 = 1;
    return result;
}
// 80248F10: write access to const memory at 8028CFBC has been detected
// 80248F34: write access to const memory at 8028DB60 has been detected
// 8028CFBC: using guessed type char byte_8028CFBC;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
