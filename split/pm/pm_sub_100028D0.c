//----- (100028D0) --------------------------------------------------------
int pm_sub_100028D0() {
    int result; // eax

    do {
        result = (playParmsPlayTo - 5) * rand() / 0x8000 + 3;
        if (result < 3)
            result = 3;
        if (result > playParmsPlayTo)
            result = playParmsPlayTo;
    } while (playParmsPlayTo > 6 && result == dword_10220CD4);
    return result;
}
// 10220C38: using guessed type int playParmsPlayTo;
// 10220CD4: using guessed type int dword_10220CD4;
