//----- (100066A0) --------------------------------------------------------
char __cdecl sub_100066A0(float a1) {
    char result; // al

    if (a1 < 128.0)
        return 0;
    if (a1 < 171.0)
        return 1;
    result = 2;
    if (a1 >= 213.0)
        result = 3;
    return result;
}
