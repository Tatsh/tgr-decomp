//----- (10005090) --------------------------------------------------------
int np_sub_10005090() {
    int v0;     // eax
    int v1;     // esi
    int result; // eax
    char v3;    // al

    WaitForSingleObject(g_hMutex_6, INFINITE);
    v0 = dword_10221314;
    if (dword_10221314) {
        v0 = dword_10221314 + 1;
        dword_10221314 = v0;
        if (v0 >= 100) {
            v0 = 0;
            dword_106909D8 = 1;
            dword_10221314 = 0;
        }
    }
    v1 = v0;
    result = ReleaseMutex(g_hMutex_6);
    if (v1) {
        v3 = atomic_sub_10004A10(dword_10094294);
        result = sub_10004760(&unk,
                              dword_10094294,
                              g_chosenCar,
                              byte_10AD0854[0],
                              byte_10AD0855[0],
                              byte_10AD0856[0],
                              dword_10277B48,
                              (int)dplay4aShortName,
                              v3 & 0x7F | 0x40,
                              0);
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 10221314: using guessed type int dword_10221314;
// 1022B34C: using guessed type int g_chosenCar;
// 10277B48: using guessed type int dword_10277B48;
// 106909D8: using guessed type int dword_106909D8;
