//----- (1002C210) --------------------------------------------------------
_DWORD *__thiscall sub_1002C210(void *this) {
    int i;          // esi
    _DWORD *result; // eax
    _DWORD *v3;     // ecx
    int v4;         // ecx

    for (i = 0; i < 3; ++i)
        debugPrint(this);
    dword_1067D570 ^= 1u;
    dword_1067D578 = sub_10060E90();
    dword_1067D57C = 0;
    result = (_DWORD *)((char *)&unk_1067D584 + 6144 * dword_1067D570);
    v3 = (_DWORD *)((char *)&unk_1067D558 + 12 * dword_1067D570);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v4 = 3;
    do {
        *result = 0;
        result += 512;
        --v4;
    } while (v4);
    return result;
}
// 1002C222: variable 'this' is possibly undefined
// 10060E90: using guessed type int sub_10060E90(void);
// 1067D570: using guessed type int dword_1067D570;
// 1067D578: using guessed type int dword_1067D578;
// 1067D57C: using guessed type int dword_1067D57C;
