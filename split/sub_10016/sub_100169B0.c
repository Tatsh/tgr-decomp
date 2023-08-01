//----- (100169B0) --------------------------------------------------------
int sub_100169B0() {
    int result;      // eax
    unsigned int v1; // ebx
    int v2;          // ecx
    int *v3;         // edi
    int *v4;         // edx
    int v5;          // ecx

    result = -1;
    v1 = -1;
    v2 = 0;
    v3 = dword_1039B760;
    v4 = &dword_1039B728;
    do {
        if (!*v4 && v2 != dword_104AFD00 && v1 >= *v3) {
            result = v2;
            v1 = *v3;
        }
        ++v4;
        ++v2;
        v3 += 47164;
    } while ((int)v4 < (int)&flt_1039B73C);
    if (dword_104AFD00 < 0)
        v5 = 0;
    else
        v5 = dword_1039B760[47164 * dword_104AFD00];
    dword_104AFD18 = dword_104AFD04;
    dword_104AFD04 = dword_104AFD00;
    dword_104AFD00 = result;
    dword_1039B760[47164 * result] = v5 + 1;
    return result;
}
// 1039B728: using guessed type int dword_1039B728;
// 1039B73C: using guessed type float flt_1039B73C;
// 1039B760: using guessed type int dword_1039B760[];
// 104AFD00: using guessed type int dword_104AFD00;
// 104AFD04: using guessed type int dword_104AFD04;
// 104AFD18: using guessed type int dword_104AFD18;
