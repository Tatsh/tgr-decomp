//----- (1003A950) --------------------------------------------------------
BOOL __cdecl sub_1003A950(float a1, float a2) {
    int v2;   // eax
    float v4; // [esp+0h] [ebp-8h]
    float v5; // [esp+4h] [ebp-4h]
    int v6;   // [esp+4h] [ebp-4h]

    v5 = a2 * 0.03125;
    v6 = sub_1002B920(v5);
    v4 = a1 * 0.03125;
    v2 = sub_1002B920(v4);
    return sub_1003A910(v2, v6);
}
