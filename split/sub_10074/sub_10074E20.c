//----- (10074E20) --------------------------------------------------------
_DWORD *__cdecl sub_10074E20(_DWORD *a1) {
    _DWORD *result; // eax
    int v2;         // edx

    result = a1;
    v2 = 8;
    do {
        *result = *(_DWORD *)((char *)result + (char *)dword_11829850 - (char *)a1);
        ++result;
        --v2;
    } while (v2);
    return result;
}
