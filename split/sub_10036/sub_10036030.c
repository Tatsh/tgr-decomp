//----- (10036030) --------------------------------------------------------
int __cdecl sub_10036030(HANDLE a1) {
    HANDLE *v2; // esi
    HANDLE v3;  // ebx
    HANDLE v4;  // edi
    int v5;     // edi
    HANDLE *v6; // esi
    bool v7;    // bl
    int v8;     // [esp+10h] [ebp-4h]

    if (a1 == HANDLE_FLAG_INHERIT)
        return 0;
    v8 = 1;
    v2 = (HANDLE *)&unk_11787194;
    do {
        WaitForSingleObject(*v2, 0xFFFFFFFF);
        v3 = v2[1];
        v4 = v2[11];
        ReleaseMutex(*v2);
        if (((unsigned __int8)v4 & 0x3F) != 0 && v3 == a1)
            return v8;
        v2 += 603;
        ++v8;
    } while ((int)v2 < (int)&dword_1178FEE8);
    v5 = 1;
    v6 = (HANDLE *)&unk_11787194;
    while (1) {
        WaitForSingleObject(*v6, 0xFFFFFFFF);
        v7 = ((unsigned __int8)v6[11] & 0x3F) == 0;
        ReleaseMutex(*v6);
        if (v7)
            break;
        v6 += 603;
        ++v5;
        if ((int)v6 >= (int)&dword_1178FEE8)
            return -1;
    }
    return v5;
}
// 1178FEE8: using guessed type int dword_1178FEE8;
