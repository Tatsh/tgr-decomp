//----- (10004DD0) --------------------------------------------------------
int __cdecl sub_10004DD0(_DWORD *a1, int a2) {
    int result; // eax
    int v3;     // eax
    int v4;     // eax
    int v5;     // [esp-Ch] [ebp-14h]
    int v6;     // [esp-4h] [ebp-Ch]

    if (dword_10AA2894)
        goto LABEL_2;
    if (a1[3]) {
        v5 = sub_10073F40((_DWORD *)a2);
        v3 = sub_10073F50((_DWORD *)a2);
        sub_100360F0((int)a1, v3, v5, (void *)1);
    }
    v6 = sub_10073F40((_DWORD *)a2);
    v4 = sub_10073F50((_DWORD *)a2);
    if (!sub_1000C4D0(*a1, a1[2], 0, 0, v4, v6))
    LABEL_2:
        result = sub_10073F40((_DWORD *)a2);
    else
        result = -1;
    return result;
}
// 10AA2894: using guessed type int dword_10AA2894;