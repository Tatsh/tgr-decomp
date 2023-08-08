#include "types-n64.h"
//----- (8021BE88) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8021BE88() {
    char *v0;                  // $s2
    int v1;                    // $s0
    int v2;                    // $t3
    int v3;                    // $t6
    int *v4;                   // $v0
    int v5;                    // $v0
    unsigned __int8 message_1; // [sp+57h] [-21h] BYREF
    OSMesg message;            // [sp+58h] [-20h] BYREF
    void *unk[7];              // [sp+5Ch] [-1Ch] BYREF

    dword_8028A848 = (int)dword_80272D68;
    dword_8031AA28 = -2145693696;
    dword_8031AA2C = -2145540096;
    osCreateMesgQueue(&unkMessageQueue0, unkMessageBuffer0, 32);
    osCreateMesgQueue(&unkMessageQueue1, &unkMessageBuffer1, 1);
    osSetEventMesg(OS_EVENT_SP, &unkMessageQueue1, (OSMesg)0xF70A0CFA);
    osCreateMesgQueue(&unkMessageQueue2, &unkMessageBuffer2, 1);
    osSetEventMesg(OS_EVENT_DP, &unkMessageQueue2, (OSMesg)0xF70A0CFA);
    osCreateMesgQueue(&unkMessageQueue3, &unkMessageBuffer3, 1);
    sub_80265600(&unkMessageQueue3, 0xF70A0CFA, 1);
    osCreateThread(&unkThread0, 10, unkThread0Entry, 0, unkThread0Stack, 60);
    osStartThread(&unkThread0);
    osCreateThread(&unkThread1, 11, unkThread1Entry, 0, &gPIMesgQueue, 60);
    osStartThread(&unkThread1);
    flt_8028A8B0 = 46875.0;
    osCreateMesgQueue((OSMesgQueue *)unk, &message, 1);
    osSetEventMesg(OS_EVENT_SI, (OSMesgQueue *)unk, (OSMesg)1);
    sub_80265910(unk, &message_1, (s32)::unk);
    osCreateMesgQueue(&unkMessageQueue4, &unkMessageBuffer4, 1);
    osSetEventMesg(OS_EVENT_SI, &unkMessageQueue4, 0);
    nullsub_5();
    v0 = byte_8031B1E8;
    v1 = 0;
    do {
        v2 = message_1;
        *v0 = 0;
        v3 = v1;
        if (((v2 >> v1) & 1) != 0) {
            v4 = &::unk[v3];
            if ((::unk[v3] & 8) != 0) {
                ++v1;
                goto LABEL_16;
            }
            if ((*(_WORD *)v4 & 4) == 0) {
                ++v1;
                goto LABEL_16;
            }
            if ((*((_BYTE *)v4 + 2) & 1) == 0) {
                ++v1;
                goto LABEL_16;
            }
            v5 = sub_80265CD0(&unkMessageQueue4, (int)&dword_8031A3F8[26 * v1], v1);
            if (!v5) {
                ++v1;
                goto LABEL_16;
            }
            if ((v5 == 10 || v5 == 11) &&
                !sub_80262370(&unkMessageQueue4, (int)&dword_8031A3F8[26 * v1], v1)) {
                *v0 = 1;
                sub_80261F20((int)&dword_8031A3F8[26 * v1]);
            }
        }
        ++v1;
    LABEL_16:
        ++v0;
    } while (v1 != 4);
}
// 8021BEAC: write access to const memory at 8028A848 has been detected
// 8021C028: write access to const memory at 8028A8B0 has been detected
// 8021BEE4: write access to const memory at 8031AA28 has been detected
// 8021BEE8: write access to const memory at 8031AA2C has been detected
// 802729E0: using guessed type OSThread unkThread0;
// 80272B90: using guessed type OSThread unkThread1;
// 80272D68: using guessed type int dword_80272D68[512];
// 8028A848: using guessed type int dword_8028A848;
// 8028A8B0: using guessed type float flt_8028A8B0;
// 8031A3D0: using guessed type int unk[4];
// 8031A3F8: using guessed type int dword_8031A3F8[26];
// 8031AA28: using guessed type int dword_8031AA28;
// 8031AA2C: using guessed type int dword_8031AA2C;
