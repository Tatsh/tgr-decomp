#include "types-win32.h"
//----- (10065740) --------------------------------------------------------
int __thiscall meth_10065740(void *this) {
    int v2;         // eax
    long double v3; // st4
    double v4;      // st7
    __int16 v5;     // cx
    int v6;         // eax
    int v7;         // ecx
    int result;     // eax
    int v9;         // [esp+0h] [ebp-28h]
    int v10;        // [esp+4h] [ebp-24h]
    float v11;      // [esp+8h] [ebp-20h]
    float v12;      // [esp+8h] [ebp-20h]
    int v13;        // [esp+8h] [ebp-20h]
    float v14;      // [esp+14h] [ebp-14h]
    float v15;      // [esp+18h] [ebp-10h]
    float v16;      // [esp+18h] [ebp-10h]
    float v17;      // [esp+18h] [ebp-10h]
    float v18;      // [esp+1Ch] [ebp-Ch]
    float v19;      // [esp+20h] [ebp-8h]
    float v20;      // [esp+24h] [ebp-4h]

    meth_10076B20(this);
    if (gGameMode == GAME_MODE_2 || gGameMode == GAME_MODE_4 ||
        gGameMode == GAME_MODE_3 && dword_100B4050 == 1 || gGameMode == GAME_MODE_0) {
        meth_10076A40(this, *((_DWORD *)this + 80));
        v14 = 0.0;
        v15 = 0.5;
    } else {
        meth_10076A40(this, *((_DWORD *)this + 80));
        if (gNetworkPlay)
            v2 = *((_DWORD *)this + 81);
        else
            v2 = *((_DWORD *)this + 80);
        v14 = (float)(v2 >> 1);
        v15 = (float)((v2 & 1) == 0);
    }
    v20 = cos_(*(float *)&gUnk06594.field_4914);
    v18 = sin_(*(float *)&gUnk06594.field_4914);
    v11 = *(float *)&gUnk06594.field_4914 - -1.5707964;
    v19 = cos_(v11);
    v12 = *(float *)&gUnk06594.field_4914 - -1.5707964;
    v16 = v15 - 0.5;
    v3 = sin_(v12) * v16;
    v4 = v19 * v16;
    v17 = v14 - -1.0;
    *(float *)&v13 = *(float *)&gUnk06594.field_4910 - -0.1;
    *(float *)&v10 = *(float *)&gUnk06594.field_490C - v3 * 3.0 - v18 * v17 * 8.0;
    *(float *)&v9 = *(float *)&gUnk06594.field_4908 - v4 * 3.0 - v20 * v17 * 8.0;
    meth_10076420((float *)this, v9, v10, v13);
    *((float *)this + 1021) = (v14 - -0.5) * -8.0;
    meth_100764C0((float *)this, *(float *)&gUnk06594.field_4914);
    *((_DWORD *)this + 992) = *((_DWORD *)this + 12);
    *((_DWORD *)this + 993) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 994) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 983) = *((_DWORD *)this + 12);
    *((_DWORD *)this + 984) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 985) = *((_DWORD *)this + 14);
    meth_10001FF0(this);
    *((_DWORD *)this + 936) = 0;
    *((_DWORD *)this + 937) = 0;
    *((_DWORD *)this + 938) = 0;
    *((_DWORD *)this + 939) = -180;
    meth_100767A0(this, 0, 0, 0);
    if (gUnk06594.field_4938) {
        *((_DWORD *)this + 1004) = 0;
        *((_DWORD *)this + 1019) = 0;
        *((_DWORD *)this + 1017) = 0;
        v5 = gChosenWeather1 - 1;
        if ((__int16)(gChosenWeather1 - 1) > 2 || v5 < 0)
            v5 = 0;
        *((_DWORD *)this + 1020) =
            *(_DWORD *)&gTrackData[gChosenTrack]->last[84 * *((_DWORD *)this + 921) + 24 + 28 * v5];
        *((_DWORD *)this + 995) = gUnk06594.field_4938;
        *((_DWORD *)this + 996) = 0;
        sub_1003ADA0((float *)this + 997,
                     (float *)(gUnk06594.field_4938 + 76),
                     (float *)(gUnk06594.field_4938 + 116));
    } else {
        *((_DWORD *)this + 997) = 1065353216;
        *((_DWORD *)this + 998) = 0;
        *((_DWORD *)this + 999) = 0;
    }
    v6 = *((_DWORD *)this + 80);
    v7 = dword_100B36F8 - v6;
    *((_DWORD *)this + 1002) = 0;
    *((_DWORD *)this + 1018) = 0;
    *((_DWORD *)this + 1022) = v7 - 1;
    *((_DWORD *)this + 1000) = 0;
    if (v6 < dword_100B4050 || gGameMode == GAME_MODE_1 || gGameMode == GAME_MODE_2 ||
        gGameMode == GAME_MODE_4 || gGameMode == GAME_MODE_6) {
        *((_DWORD *)this + 1003) = -1;
        *((_DWORD *)this + 1001) = -1;
    } else {
        *((_DWORD *)this + 1003) = 0;
        *((_DWORD *)this + 1001) = 0;
    }
    *((_DWORD *)this + 2643) = 0;
    *((_DWORD *)this + 2660) = 0;
    *((_DWORD *)this + 2502) = 0;
    *((_DWORD *)this + 1037) = 0;
    *((_DWORD *)this + 1036) = 0;
    *((_DWORD *)this + 1038) = 0;
    *((_DWORD *)this + 1039) = 0;
    *((_DWORD *)this + 1040) = 0;
    *((_DWORD *)this + 1041) = 0;
    *((_DWORD *)this + 1042) = 0;
    *((_DWORD *)this + 1043) = 0;
    *((_DWORD *)this + 1044) = 0;
    *((_DWORD *)this + 1045) = 0;
    *((_DWORD *)this + 1046) = 0;
    *((_DWORD *)this + 1032) = 0;
    *((_DWORD *)this + 961) = 0;
    meth_10065630(this);
    result = meth_10065710(this);
    *((_DWORD *)this + 990) = 0;
    *((_DWORD *)this + 986) = 0;
    *((_DWORD *)this + 987) = 0;
    *((_DWORD *)this + 988) = 0;
    *((_DWORD *)this + 989) = 1065353216;
    return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B380C: using guessed type int gChosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 1022AF18: using guessed type int gNetworkPlay;
// 104BBE08: using guessed type int gChosenWeather1;
