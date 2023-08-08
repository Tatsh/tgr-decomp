#include "types-n64.h"
//----- (8020C408) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8020C408(int a1, int *a2) {
    sub_80242940();
    flt_80271FC4 = 0.0;
    dword_80271FC8 = 0;
    dword_80271FCC = 0;
    sub_8020C27C(a1, a2);
}
// 8020C428: write access to const memory at 80271FC4 has been detected
// 8020C42C: write access to const memory at 80271FC8 has been detected
// 8020C434: write access to const memory at 80271FCC has been detected
// 80271FC4: using guessed type float flt_80271FC4;
// 80271FC8: using guessed type int dword_80271FC8;
// 80271FCC: using guessed type int dword_80271FCC;
