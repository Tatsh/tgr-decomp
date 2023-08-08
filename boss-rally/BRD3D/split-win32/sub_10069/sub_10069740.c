#include "types-win32.h"
//----- (10069740) --------------------------------------------------------
int __cdecl sub_10069740(int a1) {
    int result; // eax

    result = a1;
    dword_106C6620 = 0;
    dword_106C6624 = 0;
    dword_106C661C = 0;
    switch (a1) {
    case 0:
        dword_106C6618 = 0;
        break;
    case 1:
        dword_106C6618 = 1;
        break;
    case 2:
        result = 1;
        dword_106C6618 = 1;
        dword_106C6624 = 1;
        break;
    case 3:
        result = 1;
        dword_106C6618 = 1;
        dword_106C6620 = 1;
        break;
    case 4:
        result = 1;
        dword_106C6618 = 1;
        dword_106C661C = 1;
        break;
    default:
        return result;
    }
    return result;
}
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
