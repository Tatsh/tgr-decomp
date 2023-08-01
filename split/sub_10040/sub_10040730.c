//----- (10040730) --------------------------------------------------------
int __cdecl sub_10040730(int a1) {
    int v1;     // edx
    int v2;     // eax
    __int16 v3; // cx
    int result; // eax

    if (g_GameMode) {
        v2 = dword_100AC648;
    } else {
        if (byte_10AA28A8)
            v1 = dword_10AA28AC + 12 * (char)dword_10AA28B8;
        else
            v1 = dword_10AA28A4 + 12 * (char)dword_10AA28B8;
        v2 = (unsigned __int8)byte_100B3820[2 * v1];
    }
    v3 = word_100AC550[v2];
    result = 1;
    *(_WORD *)(a1 + 123404) = v3;
    return result;
}
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100AA010: using guessed type int g_GameMode;
// 100AC648: using guessed type int dword_100AC648;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28A8: using guessed type char byte_10AA28A8;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
