//----- (1003AFA0) --------------------------------------------------------
int __cdecl sub_1003AFA0(int a1, int a2, int a3, float a4) {
    int result; // eax

    result = a3;
    *(float *)a1 = (*(float *)a2 - *(float *)a3) * a4 + *(float *)a3;
    *(float *)(a1 + 4) = (*(float *)(a2 + 4) - *(float *)(a3 + 4)) * a4 + *(float *)(a3 + 4);
    *(float *)(a1 + 8) = (*(float *)(a2 + 8) - *(float *)(a3 + 8)) * a4 + *(float *)(a3 + 8);
    return result;
}
