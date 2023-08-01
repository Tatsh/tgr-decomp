//----- (10045EA0) --------------------------------------------------------
int sub_10045EA0() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA2934) {
        dword_10AA2904 = (void *)dword_10AA2934;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)sub_10048710(v0);
        else
            result = 0;
        dword_10AA2934 = result;
        dword_10AA2904 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10052F50;
            (*(void(__cdecl **)(int))(dword_10AA2934 + 4))(dword_10AA2934);
            *((_DWORD *)dword_10AA2904 + 3) = 1;
            result = 1;
            *((_DWORD *)dword_10AA2904 + 26) = 1;
        }
    }
    return result;
}
// 10052F50: using guessed type int __cdecl sub_10052F50(int);
// 10AA2934: using guessed type int dword_10AA2934;
