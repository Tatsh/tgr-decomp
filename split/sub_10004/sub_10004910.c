//----- (10004910) --------------------------------------------------------
int __cdecl sub_10004910(_DWORD *a1, int a2) {
    int v2;         // esi
    _DWORD v4[133]; // [esp+4h] [ebp-220h] BYREF
    int v5;         // [esp+220h] [ebp-4h]

    sub_10073B40(v4);
    v5 = 0;
    sub_100048D0((int)v4);
    sub_10073D60(v4, dword_10094294 & 0xF | 0xD0);
    sub_10073DC0(v4, a2);
    v2 = sub_100046D0(a1, (int)v4);
    v5 = -1;
    debugPrint(v4);
    return v2;
}
// 10094294: using guessed type int dword_10094294;
