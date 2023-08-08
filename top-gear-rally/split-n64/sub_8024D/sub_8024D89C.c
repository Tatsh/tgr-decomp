#include "types-n64.h"
//----- (8024D89C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8024D89C() {
    int result; // $v0

    sub_80246F90(200, 150, 240, 180, 3, 0, 0);
    sub_8022F5D0(15);
    sub_8022F504();
    sub_8022F4F8();
    formatter("%rySELECT STYLE", 159, 91);
    sub_8024594C((int)&dword_8028D410, 250, 200, 0, 0);
    sub_80246E10();
    sub_80246F90(224, 255, 192, 30, 1, 1, 1);
    sub_8022F5D0(11);
    sub_8022F530(255, 255, 255, 255, 245, 0);
    formatter("ROUND BRUSH", 159, 138);
    sub_80245604((int)&dword_8028D0B0, 216, 298);
    sub_80245604((int)&dword_8028D0E0, 325, 298);
    sub_8022F5D0(10);
    sub_8022F514();
    formatter("%wwSELECT", 123, 158);
    formatter("%wwCANCEL", 177, 158);
    sub_80255ADC((int)dword_8036A8E0);
    result = sub_80255910(dword_8036A8E0, 32);
    byte_8028DBE0 = 0;
    return result;
}
// 8024D93C: write access to const memory at 8028DBB8 has been detected
// 8024DC3C: write access to const memory at 8028DBB8 has been detected
// 8024DC64: write access to const memory at 8028CE9C has been detected
// 8024DC74: write access to const memory at 8028DBE0 has been detected
// 8024DC88: write access to const memory at 8028DBE0 has been detected
// 8024DC4C: conditional instruction was optimized away because of '$t7.4==0'
// 8024DC78: conditional instruction was optimized away because of '$t2.4==20'
// 8028CE9C: using guessed type char byte_8028CE9C;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028D410: using guessed type int dword_8028D410;
// 8028DBB8: using guessed type char byte_8028DBB8;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8036A8E0: using guessed type int dword_8036A8E0[];
