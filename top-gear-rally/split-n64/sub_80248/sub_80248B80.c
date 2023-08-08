#include "types-n64.h"
//----- (80248B80) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80248B80() {
    int v0;     // $s3
    int result; // $v0

    byte_80369DAB = 3;
    byte_8028DB6C = 2;
    v0 = *(_DWORD *)(MEMORY[0x14] + 36 * MEMORY[0x112]);
    byte_8028DB68 = -51;
    dword_8028DB78 = *(_DWORD *)(MEMORY[0x14] + 36 * MEMORY[0x1DD]);
    dword_8028DB7C = *(_DWORD *)(MEMORY[0x11C] + 820);
    dword_8028DB08 = 0x100000;
    dword_8028DCA4 = v0;
    sub_80244CA8();
    result = -2144796672;
    byte_8028DBD0 = 1;
    word_8028DBB0 = 0;
    byte_8028DB60 = 1;
    dword_8028DCA4 = 0;
    return result;
}
// 80248BB4: write access to const memory at 8028DB60 has been detected
// 80248BF0: write access to const memory at 80369DAB has been detected
// 80248BFC: write access to const memory at 80369DAB has been detected
// 80248C0C: write access to const memory at 80369DAB has been detected
// 80248C1C: write access to const memory at 80369DAB has been detected
// 80248C2C: write access to const memory at 80369DAB has been detected
// 80248C34: write access to const memory at 80369DAB has been detected
// 80248CC8: write access to const memory at 8028DB7C has been detected
// 80248CCC: write access to const memory at 8028DB08 has been detected
// 80248CDC: write access to const memory at 8028DCA4 has been detected
// 80248D64: write access to const memory at 8028DCA4 has been detected
// 80248D70: write access to const memory at 8028DBD0 has been detected
// 80248D80: write access to const memory at 8028DBB0 has been detected
// 80248D88: write access to const memory at 8028DB60 has been detected
// 80248D90: write access to const memory at 8028DCA4 has been detected
// 80248C44: write access to const memory at 8028DB6C has been detected
// 80248CB4: write access to const memory at 8028DB78 has been detected
// 80248C8C: write access to const memory at 8028DB68 has been detected
// 8028AB08: using guessed type int dword_8028AB08;
// 8028DB08: using guessed type int dword_8028DB08;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB6C: using guessed type char byte_8028DB6C;
// 8028DB78: using guessed type int dword_8028DB78;
// 8028DB7C: using guessed type int dword_8028DB7C;
// 8028DBB0: using guessed type __int16 word_8028DBB0;
// 8028DBCC: using guessed type char byte_8028DBCC;
// 8028DBD0: using guessed type char byte_8028DBD0;
// 8028DCA4: using guessed type int dword_8028DCA4;
// 80369DAB: using guessed type char byte_80369DAB;
