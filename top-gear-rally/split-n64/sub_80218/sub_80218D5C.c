#include "../../types-n64.h"
//----- (80218D5C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
char *sub_80218D5C() {
    char *result; // $v0

    flt_8031B338 = 15.0;
    flt_8031B33C = 10.0;
    flt_8031B340 = 20.0;
    sub_80224760(&flt_8031B338);
    byte_8028AB40 = -1;
    byte_8028AB44 = -1;
    byte_8028AB48 = -52;
    byte_8028AB4C = 102;
    byte_8028AB50 = 102;
    byte_8028AB54 = 119;
    result = &byte_8031B350;
    byte_8031B350 = 0;
    byte_8031B354 = 0;
    byte_8031B355 = 0;
    byte_8031B359 = 0;
    byte_8031B352 = 0;
    byte_8031B358 = 0;
    byte_8031B351 = 0;
    byte_8031B356 = 0;
    byte_8031B35A = 0;
    byte_8031B353 = 0;
    byte_8031B357 = 0;
    byte_8031B35B = 0;
    dword_8028AB5C = 0;
    dword_8028AB58 = 0;
    dword_8031B360 = 1500601600;
    dword_8031B364 = -775761664;
    dword_8031B368 = -350966016;
    dword_8031B36C = 1185635328;
    return result;
}
// 80218DF4: write access to const memory at 8028AB40 has been detected
// 80218E10: write access to const memory at 8028AB44 has been detected
// 80218E14: write access to const memory at 8028AB48 has been detected
// 80218E30: write access to const memory at 8028AB4C has been detected
// 80218E4C: write access to const memory at 8028AB50 has been detected
// 80218E6C: write access to const memory at 8028AB54 has been detected
// 80218E88: write access to const memory at 8028AB40 has been detected
// 80218E98: write access to const memory at 8028AB44 has been detected
// 80218EA0: write access to const memory at 8028AB48 has been detected
// 80218EB0: write access to const memory at 8028AB4C has been detected
// 80218EBC: write access to const memory at 8028AB50 has been detected
// 80218EC8: write access to const memory at 8028AB54 has been detected
// 80218F84: write access to const memory at 8028AB40 has been detected
// 80218FCC: write access to const memory at 8028AB44 has been detected
// 80219034: write access to const memory at 8028AB48 has been detected
// 802190A8: write access to const memory at 8028AB4C has been detected
// 8021911C: write access to const memory at 8028AB50 has been detected
// 80219194: write access to const memory at 8028AB54 has been detected
// 802191A0: write access to const memory at 8028AB40 has been detected
// 802191A8: write access to const memory at 8028AB44 has been detected
// 802191B0: write access to const memory at 8028AB48 has been detected
// 802191B8: write access to const memory at 8028AB4C has been detected
// 802191C0: write access to const memory at 8028AB50 has been detected
// 802191D0: write access to const memory at 8028AB54 has been detected
// 80219378: write access to const memory at 8028AB5C has been detected
// 8021939C: write access to const memory at 8028AB58 has been detected
// 802193D8: write access to const memory at 8031B360 has been detected
// 80219404: write access to const memory at 8031B364 has been detected
// 80219434: write access to const memory at 8031B368 has been detected
// 80219464: write access to const memory at 8031B36C has been detected
// 80218D90: write access to const memory at 8031B338 has been detected
// 80218D94: write access to const memory at 8031B33C has been detected
// 80218D9C: write access to const memory at 8031B340 has been detected
// 802191F8: write access to const memory at 8031B350 has been detected
// 802191FC: write access to const memory at 8031B354 has been detected
// 80219200: write access to const memory at 8031B358 has been detected
// 80219204: write access to const memory at 8031B351 has been detected
// 80219208: write access to const memory at 8031B355 has been detected
// 8021920C: write access to const memory at 8031B359 has been detected
// 80219210: write access to const memory at 8031B352 has been detected
// 80219214: write access to const memory at 8031B356 has been detected
// 80219218: write access to const memory at 8031B35A has been detected
// 8021921C: write access to const memory at 8031B353 has been detected
// 80219220: write access to const memory at 8031B357 has been detected
// 80219224: write access to const memory at 8031B35B has been detected
// 8021926C: write access to const memory at 8031B350 has been detected
// 80219270: write access to const memory at 8031B354 has been detected
// 80219274: write access to const memory at 8031B358 has been detected
// 80219278: write access to const memory at 8031B351 has been detected
// 8021927C: write access to const memory at 8031B355 has been detected
// 80219280: write access to const memory at 8031B359 has been detected
// 80219284: write access to const memory at 8031B352 has been detected
// 80219288: write access to const memory at 8031B356 has been detected
// 8021928C: write access to const memory at 8031B35A has been detected
// 80219290: write access to const memory at 8031B353 has been detected
// 80219294: write access to const memory at 8031B357 has been detected
// 80219298: write access to const memory at 8031B35B has been detected
// 802192CC: write access to const memory at 8031B350 has been detected
// 802192E4: write access to const memory at 8031B354 has been detected
// 80219310: write access to const memory at 8031B355 has been detected
// 8021931C: write access to const memory at 8031B359 has been detected
// 80219320: write access to const memory at 8031B352 has been detected
// 80219330: write access to const memory at 8031B358 has been detected
// 80219334: write access to const memory at 8031B351 has been detected
// 80219338: write access to const memory at 8031B356 has been detected
// 8021933C: write access to const memory at 8031B35A has been detected
// 80219340: write access to const memory at 8031B353 has been detected
// 80219344: write access to const memory at 8031B357 has been detected
// 80219348: write access to const memory at 8031B35B has been detected
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AB20: using guessed type char byte_8028AB20;
// 8028AB24: using guessed type char byte_8028AB24;
// 8028AB28: using guessed type char byte_8028AB28;
// 8028AB2C: using guessed type char byte_8028AB2C;
// 8028AB40: using guessed type char byte_8028AB40;
// 8028AB44: using guessed type char byte_8028AB44;
// 8028AB48: using guessed type char byte_8028AB48;
// 8028AB4C: using guessed type char byte_8028AB4C;
// 8028AB50: using guessed type char byte_8028AB50;
// 8028AB54: using guessed type char byte_8028AB54;
// 8028AB58: using guessed type int dword_8028AB58;
// 8028AB5C: using guessed type int dword_8028AB5C;
// 8031B338: using guessed type float flt_8031B338;
// 8031B33C: using guessed type float flt_8031B33C;
// 8031B340: using guessed type float flt_8031B340;
// 8031B350: using guessed type char byte_8031B350;
// 8031B351: using guessed type char byte_8031B351;
// 8031B352: using guessed type char byte_8031B352;
// 8031B353: using guessed type char byte_8031B353;
// 8031B354: using guessed type char byte_8031B354;
// 8031B355: using guessed type char byte_8031B355;
// 8031B356: using guessed type char byte_8031B356;
// 8031B357: using guessed type char byte_8031B357;
// 8031B358: using guessed type char byte_8031B358;
// 8031B359: using guessed type char byte_8031B359;
// 8031B35A: using guessed type char byte_8031B35A;
// 8031B35B: using guessed type char byte_8031B35B;
// 8031B360: using guessed type int dword_8031B360;
// 8031B364: using guessed type int dword_8031B364;
// 8031B368: using guessed type int dword_8031B368;
// 8031B36C: using guessed type int dword_8031B36C;
