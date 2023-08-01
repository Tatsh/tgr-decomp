//----- (10074A90) --------------------------------------------------------
_DWORD *__cdecl sub_10074A90(_DWORD *a1, int *a2) {
    _DWORD *result; // eax
    int v4;         // edi
    int *v5;        // ecx
    int v6;         // edx
    int v7;         // ebx

    result = a1;
    v4 = 3;
    do {
        v5 = a2;
        v6 = 3;
        do {
            v7 = *v5++;
            *result++ = v7;
            --v6;
        } while (v6);
        a2 += 4;
        --v4;
    } while (v4);
    return result;
}
