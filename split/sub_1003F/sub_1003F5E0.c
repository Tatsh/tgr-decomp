//----- (1003F5E0) --------------------------------------------------------
int __cdecl sub_1003F5E0(int a1) {
    int result; // eax

    switch (dword_10AA2A18) {
    case 0:
        *(_WORD *)(a1 + 123404) = 86;
        result = 1;
        break;
    case 1:
        result = 1;
        *(_WORD *)(a1 + 123404) = 87;
        break;
    case 2:
        result = 1;
        *(_WORD *)(a1 + 123404) = 89;
        break;
    case 3:
        *(_WORD *)(a1 + 123404) = 91;
        result = 1;
        break;
    case 4:
        result = 1;
        *(_WORD *)(a1 + 123404) = 93;
        break;
    default:
        result = 1;
        *(_WORD *)(a1 + 123404) = 86;
        break;
    }
    return result;
}
// 10AA2A18: using guessed type int dword_10AA2A18;
