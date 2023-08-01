//----- (1003C150) --------------------------------------------------------
int sub_1003C150() {
    int result;        // eax
    int v1;            // eax
    char v2[204];      // [esp+4h] [ebp-4CCh] BYREF
    char Buffer[1024]; // [esp+D0h] [ebp-400h] BYREF

    result = unk;
    if (unk) {
        memset(v2, 0, sizeof(v2));
        sub_1003D130(v2);
        v1 = sub_1003C5C0((int *)unk, (int)v2, (int *)dword_10A9D008);
        if (v1 >= 0) {
            g_NetworkPlay = 2;
            sub_10071550();
            result = sub_10005B10();
        } else {
            result = sprintf(Buffer, "Could not host session because of error 0x%08X", v1);
        }
    }
    return result;
}
// 1003D130: using guessed type _DWORD __cdecl sub_1003D130(_DWORD);
// 10071550: using guessed type int sub_10071550(void);
// 1022AF18: using guessed type int g_NetworkPlay;
