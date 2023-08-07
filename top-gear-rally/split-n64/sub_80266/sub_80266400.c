#include "../../types-n64.h"
//----- (80266400) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80266400(int a1) {
    int v1; // $v0
    int v2; // $v0
    int v3; // [sp+28h] [-8h]
    int v4; // [sp+2Ch] [-4h]

    sub_8026BC40();
    osCreateMesgQueue((OSMesgQueue *)dword_80380640, (OSMesg *)dword_80380658, 5);
    word_80380670 = 13;
    byte_80380672 = 0;
    dword_80380674 = 0;
    word_80380688 = 14;
    byte_8038068A = 0;
    dword_8038068C = 0;
    osSetEventMesg(OS_EVENT_SI | 0x2, (OSMesgQueue *)dword_80380640, &word_80380670);
    osSetEventMesg((MACRO_OS_EVENT)3, (OSMesgQueue *)dword_80380640, &word_80380688);
    v3 = -1;
    v1 = sub_8026C040(0);
    if (v1 < a1) {
        v3 = v1;
        sub_802668F0(0, a1);
    }
    v2 = sub_80268540();
    dword_802A6160 = 1;
    dword_802A6164 = (int)&dword_8037F490;
    dword_802A6168 = (int)dword_80380640;
    dword_802A616C = 0;
    v4 = v2;
    dword_802A6170 = 0;
    dword_802A6174 = 0;
    dword_802A6178 = 0;
    osCreateThread(0, 0, sub_80266588, &dword_802A6160, dword_80380640, a1);
    sub_80268580();
    osStartThread((OSThread *)&dword_8037F490);
    sub_80268560(v4);
    if (v3 != -1)
        sub_802668F0(0, v3);
}
// 80266440: write access to const memory at 80380670 has been detected
// 80266444: write access to const memory at 80380672 has been detected
// 80266448: write access to const memory at 80380674 has been detected
// 8026645C: write access to const memory at 80380688 has been detected
// 80266460: write access to const memory at 8038068A has been detected
// 80266464: write access to const memory at 8038068C has been detected
// 802664E8: write access to const memory at 802A6160 has been detected
// 802664EC: write access to const memory at 802A6164 has been detected
// 802664F0: write access to const memory at 802A6168 has been detected
// 802664F4: write access to const memory at 802A616C has been detected
// 80266518: write access to const memory at 802A6170 has been detected
// 8026651C: write access to const memory at 802A6174 has been detected
// 80266520: write access to const memory at 802A6178 has been detected
// 802A6160: using guessed type int dword_802A6160;
// 802A6164: using guessed type int dword_802A6164;
// 802A6168: using guessed type int dword_802A6168;
// 802A616C: using guessed type int dword_802A616C;
// 802A6170: using guessed type int dword_802A6170;
// 802A6174: using guessed type int dword_802A6174;
// 802A6178: using guessed type int dword_802A6178;
// 80380640: using guessed type int dword_80380640[6];
// 80380658: using guessed type int dword_80380658[6];
// 80380670: using guessed type __int16 word_80380670;
// 80380672: using guessed type char byte_80380672;
// 80380674: using guessed type int dword_80380674;
// 80380688: using guessed type __int16 word_80380688;
// 8038068A: using guessed type char byte_8038068A;
// 8038068C: using guessed type int dword_8038068C;
