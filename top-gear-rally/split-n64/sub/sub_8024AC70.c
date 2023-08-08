#include "types-n64.h"
//----- (8024AC70) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
BOOL sub_8024AC70() {
    BOOL result; // $v0
    int v1;      // $s5
    int *v2;     // $s4
    int v3;      // $t9
    int v4;      // $t1

    byte_8028DBD8 = 0;
    byte_8028DBC8 = 0;
    sub_80245798((int)&dword_8028D260);
    sub_80245470((int)&dword_8028D230);
    sub_8024594C((int)&dword_8028D260, 66, 362, 200, 48);
    sub_80246BCC();
    result = sub_8024D374(&dword_8028D260);
    v1 = 0;
    if (result) {
        v2 = dword_8028D540;
        do {
            if (sub_8024D4C8(v2)) {
                v3 = *v2;
                v4 = v2[1];
                HIBYTE(dword_8028DBA4) = v1;
                byte_8028D2BC = 1;
                dword_8028D294[6] = v3;
                dword_8028D294[7] = v4;
            }
            result = sub_8024D374(&dword_8028D290);
            ++v1;
            v2 += 7;
        } while (v1 != 50);
    }
    return result;
}
// 8024AC80: write access to const memory at 8028DBD8 has been detected
// 8024ACB0: write access to const memory at 8028DBC8 has been detected
// 8024AE84: write access to const memory at 8028DBB0 has been detected
// 8024AEAC: write access to const memory at 8028DBC0 has been detected
// 8024AEBC: write access to const memory at 8028DBE4 has been detected
// 8024AEC0: write access to const memory at 8028DBC0 has been detected
// 8024AEC4: write access to const memory at 8028DBC4 has been detected
// 8024AECC: write access to const memory at 8028DBD8 has been detected
// 8024AEDC: write access to const memory at 8028DBC8 has been detected
// 8024AE1C: write access to const memory at 8028DBA4 has been detected
// 8024AE20: write access to const memory at 8028D2BC has been detected
// 8024AE24: write access to const memory at 8028D2AC has been detected
// 8024AE28: write access to const memory at 8028D2B0 has been detected
// 8028D230: using guessed type int dword_8028D230;
// 8028D260: using guessed type int dword_8028D260;
// 8028D290: using guessed type int dword_8028D290;
// 8028D294: using guessed type int[8];
// 8028D2BC: using guessed type char byte_8028D2BC;
// 8028D540: using guessed type int dword_8028D540[2];
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DBA4: using guessed type int dword_8028DBA4;
// 8028DBB0: using guessed type __int16 word_8028DBB0;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBC4: using guessed type char byte_8028DBC4;
// 8028DBC8: using guessed type char byte_8028DBC8;
// 8028DBD8: using guessed type char byte_8028DBD8;
// 8028DBE4: using guessed type char byte_8028DBE4;
// 80369BE4: using guessed type int dword_80369BE4;
// 8036A8E0: using guessed type int dword_8036A8E0[];
