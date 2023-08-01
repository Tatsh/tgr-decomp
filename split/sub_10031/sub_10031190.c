//----- (10031190) --------------------------------------------------------
char *sub_10031190() {
    if (dword_106C65DC == 32)
        sub_10042AF0();
    else
        ++dword_106C65DC;
    dword_106C65D8 = (dword_106C65D8 + 1) % 32;
    return (char *)&unk_106C29F0 + 24 * dword_106C65D8;
}
// 106C65D8: using guessed type int dword_106C65D8;
// 106C65DC: using guessed type int dword_106C65DC;
