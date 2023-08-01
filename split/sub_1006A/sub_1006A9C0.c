//----- (1006A9C0) --------------------------------------------------------
void __cdecl sub_1006A9C0(int a1, int a2, int a3, int a4, int a5) {
    void *v5; // ecx

    if (dword_10B502E4) {
        debugPrint(v5);
        dword_10B501CC();
        dword_118AA0D0();
        dword_10690A28();
    }
    sub_1006A990(a1);
    sub_1001BB00(a2, a3, a4, a5);
    off_100B8C94();
    dword_10B501C8();
    sub_1002B950();
}
// 1006A9C9: variable 'v5' is possibly undefined
// 100B8C94: using guessed type int (*off_100B8C94)(void);
// 10690A28: using guessed type int (*dword_10690A28)(void);
// 10B501C8: using guessed type int (*dword_10B501C8)(void);
// 10B501CC: using guessed type int (*dword_10B501CC)(void);
// 10B502E4: using guessed type int dword_10B502E4;
// 118AA0D0: using guessed type int (*dword_118AA0D0)(void);
