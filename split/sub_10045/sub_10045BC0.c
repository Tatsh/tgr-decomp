//----- (10045BC0) --------------------------------------------------------
int sub_10045BC0() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA2928) {
        dword_10AA2904 = (void *)dword_10AA2928;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)sub_10048710(v0);
        else
            result = 0;
        dword_10AA2928 = result;
        dword_10AA2904 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10050060;
            (*(void(__cdecl **)(int))(dword_10AA2928 + 4))(dword_10AA2928);
            *((_DWORD *)dword_10AA2904 + 3) = 1;
            result = 1;
            *((_DWORD *)dword_10AA2904 + 26) = 1;
        }
    }
    return result;
}
// 10050060: using guessed type int __cdecl sub_10050060(int);
// 10AA2928: using guessed type int dword_10AA2928;
