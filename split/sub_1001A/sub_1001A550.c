//----- (1001A550) --------------------------------------------------------
gameSpecificUnk1 *__cdecl sub_1001A550(gameSpecificUnk1 *a1) {
    gameSpecificUnk1 *result; // eax

    result = sub_1001BA70(a1, &a1, 0);
    if (!result)
        result = a1;
    return result;
}
