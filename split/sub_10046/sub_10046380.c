//----- (10046380) --------------------------------------------------------
int sub_10046380() {
    int result; // eax

    dword_100AC304 = 0;
    sub_10045110();
    result = 1;
    dword_100AC304 = 1;
    *(_DWORD *)(dword_10AA29B4 + 8) = sub_10046D20;
    g_GameMode = 2;
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100AC304: using guessed type int dword_100AC304;
// 10AA29B4: using guessed type int dword_10AA29B4;