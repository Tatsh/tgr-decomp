//----- (10043590) --------------------------------------------------------
int sub_10043590() {
    int result; // eax

    if (dword_10AA33D4) {
        if (++dword_10AA2A1C > 1)
            dword_10AA2A1C = 0;
    } else if (dword_10AA33D0) {
        if (--dword_10AA2A1C < 0)
            dword_10AA2A1C = 1;
    }
    result = 1;
    dword_10B4E1E0 = dword_100AC530[dword_10AA2A1C];
    return result;
}
// 100AC530: using guessed type int dword_100AC530[];
// 10AA2A1C: using guessed type int dword_10AA2A1C;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
