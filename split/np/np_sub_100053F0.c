//----- (100053F0) --------------------------------------------------------
int np_sub_100053F0() {
    int v0;     // esi
    int result; // eax
    int v2;     // esi

    WaitForSingleObject(g_hMutex_4, INFINITE);
    v0 = dword_1022AAA8;
    result = ReleaseMutex(g_hMutex_4);
    if (v0) {
        v2 = sub_10005470();
        result = sub_1000C670();
        if (v2 == result)
            result = sub_10004760(&unk,
                                  dword_10094294,
                                  g_chosenCar,
                                  byte_10AD0854[0],
                                  byte_10AD0855[0],
                                  byte_10AD0856[0],
                                  dword_10277B48,
                                  (int)dplay4aShortName,
                                  3,
                                  0);
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 1022AAA8: using guessed type int dword_1022AAA8;
// 1022B34C: using guessed type int g_chosenCar;
// 10277B48: using guessed type int dword_10277B48;
