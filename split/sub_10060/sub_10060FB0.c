//----- (10060FB0) --------------------------------------------------------
int *__cdecl sub_10060FB0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int *a6) {
    int v6;      // eax
    int v7;      // edx
    int *result; // eax

    v6 = 10 * (a2 + 30 * a1);
    *a3 = dword_100ADFE4[v6];
    *a4 = dword_100ADFE8[v6];
    *a5 = dword_100ADFEC[v6];
    v7 = dword_100ADFF0[v6];
    result = a6;
    *a6 = v7;
    return result;
}
// 100ADFE4: using guessed type int dword_100ADFE4[];
// 100ADFE8: using guessed type int dword_100ADFE8[];
// 100ADFEC: using guessed type int dword_100ADFEC[];
// 100ADFF0: using guessed type int dword_100ADFF0[];
