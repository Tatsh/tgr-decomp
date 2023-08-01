//----- (10007250) --------------------------------------------------------
double __cdecl sub_10007250(char a1) {
    double result; // st7

    if ((a1 & 0x20) != 0)
        result = (double)(char)(a1 | 0xC0) * -0.0078125;
    else
        result = (double)(a1 & 0x3F) * -0.0078125;
    return result;
}
