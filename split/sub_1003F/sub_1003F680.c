//----- (1003F680) --------------------------------------------------------
int __cdecl sub_1003F680(int a1) {
    int result; // eax

    switch (dword_10AA2A18) {
    case 0:
        *(_WORD *)(a1 + 123404) = -1;
        result = 1;
        break;
    case 1:
        result = 1;
        *(_WORD *)(a1 + 123404) = 88;
        break;
    case 2:
        result = 1;
        *(_WORD *)(a1 + 123404) = 90;
        break;
    case 3:
        *(_WORD *)(a1 + 123404) = 92;
        result = 1;
        break;
    case 4:
        result = 1;
        *(_WORD *)(a1 + 123404) = 94;
        break;
    default:
        result = 1;
        *(_WORD *)(a1 + 123404) = -1;
        break;
    }
    return result;
}
// 10AA2A18: using guessed type int dword_10AA2A18;
