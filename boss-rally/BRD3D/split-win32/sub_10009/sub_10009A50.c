#include "../../types-win32.h"
//----- (10009A50) --------------------------------------------------------
char __usercall sub_10009A50
    @<al>(unsigned int checksumOrZero @<eax>, _BYTE *a2, _WORD *a3, int size) {
    int sz;      // ebp
    char v7;     // cl
    _BYTE *v8;   // esi
    char v9;     // dl
    char result; // al

    sz = size;
    if (size > 0) {
        do {
            LOWORD(checksumOrZero) = *a3++;
            v7 = -((checksumOrZero & 0x8000) != 0);
            *a2 = ((unsigned __int16)checksumOrZero >> 7) ^
                  (((unsigned __int16)checksumOrZero >> 7) ^ (checksumOrZero >> 10)) & 7;
            v8 = a2 + 1;
            v9 = checksumOrZero;
            *v8 =
                ((unsigned __int16)checksumOrZero >> 2) ^
                (((unsigned __int16)checksumOrZero >> 2) ^ ((unsigned __int8)checksumOrZero >> 5)) &
                    7;
            result = checksumOrZero & 7;
            *++v8 = result | (8 * v9);
            *++v8 = v7;
            a2 = v8 + 1;
            --sz;
        } while (sz);
    }
    return result;
}
