//----- (10069800) --------------------------------------------------------
char *sub_10069800() {
    char *v0;     // edi
    _DWORD *v1;   // esi
    char *result; // eax

    v0 = (char *)&unk_106C6678;
    v1 = dword_10ACDEA8;
    do {
        sub_100634F0((int)v1);
        result = sub_10035FE0(v0);
        v1 += 2778;
        v0 += 348;
    } while ((int)v1 < (int)&dword_10AF9528);
    return result;
}
// 10AF9528: using guessed type int dword_10AF9528;