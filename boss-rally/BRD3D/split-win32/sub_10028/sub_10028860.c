#include "types-win32.h"
//----- (10028860) --------------------------------------------------------
unsigned __int8 *__cdecl sub_10028860(#506 * a1) {
    int v1;                  // edx
    unsigned __int8 *result; // eax
    unsigned __int8 *v3;     // edi
    int v4;                  // eax
    int v5;                  // eax

    v1 = *((_DWORD *)a1 + 153);
    if ((v1 & 0x40) != 0) {
        dword_105553F8 = *((_DWORD *)a1 + 168);
        result = (unsigned __int8 *)*((_DWORD *)a1 + 19);
    } else {
        v3 = byte_11829870;
        if (*((_DWORD *)a1 + 155)) {
            result = (unsigned __int8 *)*((_DWORD *)a1 + *((_DWORD *)a1 + 158) + 160);
            if (!result)
                result = (unsigned __int8 *)*((_DWORD *)a1 + 160);
            dword_105553F8 = *((_DWORD *)a1 + 164);
        } else {
            if ((v1 & 0x10) == 0)
                sub_10025AB0(byte_11829870,
                             *((_DWORD *)a1 + 168),
                             *((_DWORD *)a1 + 16 * *((_DWORD *)a1 + 23) + 26),
                             *((_DWORD *)a1 + 19),
                             *((_DWORD *)a1 + 20),
                             *((_DWORD *)a1 + 16 * *((_DWORD *)a1 + 23) + 25),
                             *((_DWORD *)a1 + 21),
                             *((_DWORD *)a1 + 22),
                             *((_DWORD *)a1 + 23),
                             *((_DWORD *)a1 + 24),
                             (_DWORD *)a1 + 25,
                             v1,
                             *((_DWORD *)a1 + 154),
                             *((_BYTE *)a1 + 660),
                             *((_BYTE *)a1 + 661),
                             *((_BYTE *)a1 + 662),
                             *((_BYTE *)a1 + 663),
                             *((_BYTE *)a1 + 664),
                             *((_BYTE *)a1 + 665),
                             *((_BYTE *)a1 + 666),
                             *((_BYTE *)a1 + 667),
                             *((_DWORD *)a1 + 167));
            dword_105553F8 = *((_DWORD *)a1 + 168);
            v4 = *((_DWORD *)a1 + 153);
            if ((v4 & 2) != 0 && (v4 & 0x80u) != 0) {
                *((_DWORD *)a1 + 6) = *((_DWORD *)a1 + 7);
                sub_10028A10((int)a1, (int *)byte_11829870);
            }
            if (*((_DWORD *)a1 + 169) != *((_DWORD *)a1 + 2) ||
                *((_DWORD *)a1 + 170) != *((_DWORD *)a1 + 3)) {
                v5 = sub_10028B20((int)&unk_104D51D0, COERCE_FLOAT(byte_11829870), (int)a1);
                *((_DWORD *)a1 + 16) = v5;
                dword_105553F8 = v5;
                v3 = (unsigned __int8 *)&unk_104D51D0;
            }
            if (*((_DWORD *)a1 + 15))
                dword_105553F8 = (int)sub_10009660(
                    v3, v3, *((_DWORD *)a1 + 16), *((_DWORD *)a1 + 4), (int *)a1 + 15);
            else
                dword_105553F8 =
                    (int)graphics_100098A0(v3, v3, *((_DWORD *)a1 + 16), *((_DWORD *)a1 + 4));
            result = v3;
        }
    }
    return result;
}
// 105553F8: using guessed type int dword_105553F8;
