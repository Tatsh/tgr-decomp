//----- (100337E9) --------------------------------------------------------
int __thiscall sub_100337E9(void *this) {
    int result; // eax
    int i;      // [esp+0h] [ebp-4h]

    result = sub_100337AE();
    for (i = 0; i < 1; ++i) {
        sub_10035CE0((int *)&unk_106C6678 + 87 * i);
        sub_10035FC0((_DWORD *)&unk_106C6678 + 87 * i);
        result = i + 1;
    }
    return result;
}