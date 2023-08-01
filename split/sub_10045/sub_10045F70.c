//----- (10045F70) --------------------------------------------------------
int sub_10045F70() {
    _DWORD *v0; // eax
    int result; // eax
    _DWORD *v2; // eax

    if (dword_10AA2938) {
        dword_10AA2904 = (void *)dword_10AA2938;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)sub_10048710(v0);
        else
            result = 0;
        dword_10AA2938 = result;
        dword_10AA2904 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10053CF0;
            (*(void(__cdecl **)(int))(dword_10AA2938 + 4))(dword_10AA2938);
            *((_DWORD *)dword_10AA2904 + 3) = 1;
            *((_DWORD *)dword_10AA2904 + 26) = 1;
            v2 = (_DWORD *)malloc(0xC8u);
            if (v2)
                result = (int)sub_10048710(v2);
            else
                result = 0;
            dword_10AA2978 = result;
            if (result) {
                *(_DWORD *)(result + 4) = sub_1004A260;
                (*(void(__cdecl **)(int))(dword_10AA2978 + 4))(dword_10AA2978);
                result = 1;
                *(_DWORD *)(dword_10AA2978 + 12) = 1;
            }
        }
    }
    return result;
}
// 1004A260: using guessed type int __cdecl sub_1004A260(int);
// 10AA2938: using guessed type int dword_10AA2938;
// 10AA2978: using guessed type int dword_10AA2978;
