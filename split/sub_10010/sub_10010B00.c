//----- (10010B00) --------------------------------------------------------
int __cdecl sub_10010B00(int a1, int a2, float a3) {
    int result; // eax

    result = dword_102E5ECC;
    if (dword_102E5ECC)
        dword_102E5ECC = *(_DWORD *)dword_102E5ECC;
    *(_DWORD *)(result + 4) = result + 8;
    *(float *)(result + 8) =
        (**(float **)(a2 + 4) - **(float **)(a1 + 4)) * a3 + **(float **)(a1 + 4);
    *(float *)(*(_DWORD *)(result + 4) + 4) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 4) - *(float *)(*(_DWORD *)(a1 + 4) + 4)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 4);
    *(float *)(*(_DWORD *)(result + 4) + 8) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 8) - *(float *)(*(_DWORD *)(a1 + 4) + 8)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 8);
    *(float *)(*(_DWORD *)(result + 4) + 12) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 12) - *(float *)(*(_DWORD *)(a1 + 4) + 12)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 12);
    *(float *)(*(_DWORD *)(result + 4) + 16) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 16) - *(float *)(*(_DWORD *)(a1 + 4) + 16)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 16);
    *(float *)(*(_DWORD *)(result + 4) + 20) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 20) - *(float *)(*(_DWORD *)(a1 + 4) + 20)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 20);
    *(float *)(*(_DWORD *)(result + 4) + 24) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 24) - *(float *)(*(_DWORD *)(a1 + 4) + 24)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 24);
    *(float *)(*(_DWORD *)(result + 4) + 28) =
        (*(float *)(*(_DWORD *)(a2 + 4) + 28) - *(float *)(*(_DWORD *)(a1 + 4) + 28)) * a3 +
        *(float *)(*(_DWORD *)(a1 + 4) + 28);
    return result;
}
// 102E5ECC: using guessed type int dword_102E5ECC;
