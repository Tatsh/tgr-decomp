//----- (10060A10) --------------------------------------------------------
float *__cdecl sub_10060A10(int a1, int a2) {
    float *v2;        // ebp
    unsigned int *v3; // eax
    unsigned int v4;  // ecx
    unsigned int v5;  // ecx
    BOOL v6;          // eax
    float *result;    // eax

    v2 = (float *)(a1 + 476);
    *(_DWORD *)(a1 + 500) = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 504) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a1 + 508) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 512) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 476) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 480) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a1 + 484) = *(_DWORD *)(a2 + 24);
    sub_100695D0(a1 + 544, a2);
    *(_DWORD *)(a1 + 488) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a1 + 492) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 496) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 516) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 520) = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a1 + 524) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 824) = *(_DWORD *)(a2 + 52);
    *(_DWORD *)(a1 + 1852) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 2900) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 1348) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a1 + 2396) = *(_DWORD *)(a2 + 64);
    *(_DWORD *)(a1 + 1872) = *(_DWORD *)(a2 + 68);
    *(_DWORD *)(a1 + 2920) = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(a1 + 1316) = (__int64)*(float *)(a2 + 76);
    *(_DWORD *)(a1 + 2364) = (__int64)*(float *)(a2 + 80);
    *(_DWORD *)(a1 + 1840) = (__int64)*(float *)(a2 + 84);
    *(_DWORD *)(a1 + 2888) = (__int64)*(float *)(a2 + 88);
    *(_BYTE *)(a1 + 1296) = (__int64)*(float *)(a2 + 92);
    *(_BYTE *)(a1 + 2344) = (__int64)*(float *)(a2 + 96);
    *(_BYTE *)(a1 + 1820) = (__int64)*(float *)(a2 + 100);
    *(_BYTE *)(a1 + 2868) = (__int64)*(float *)(a2 + 104);
    *(_BYTE *)(a1 + 877) = (__int64)*(float *)(a2 + 108);
    v3 = *(unsigned int **)(a1 + 10688);
    v4 = *v3;
    if (*(float *)(a2 + 112) == 0.0)
        v5 = v4 & 0xFFFBFFFF;
    else
        v5 = v4 | 0x40000;
    *v3 = v5;
    if (*(float *)(a2 + 116) == 0.0)
        *(_DWORD *)(a1 + 3688) = 1065353216;
    else
        *(_DWORD *)(a1 + 3688) = -1082130432;
    if (*(float *)(a1 + 4084) > 0.0)
        v6 = *(float *)(a1 + 4084) - -1000.0 > *(float *)(a2 + 120);
    else
        v6 = 1;
    if (v6)
        *(_DWORD *)(a1 + 4084) = *(_DWORD *)(a2 + 120);
    *(_DWORD *)(a1 + 3620) = *(_DWORD *)(a2 + 124);
    *(_BYTE *)(a1 + 866) = (__int64)*(float *)(a2 + 128);
    *(_BYTE *)(a1 + 867) = (__int64)*(float *)(a2 + 132);
    *(_BYTE *)(a1 + 876) = (__int64)*(float *)(a2 + 136);
    *(_BYTE *)(a1 + 870) = (__int64)*(float *)(a2 + 140);
    *(_BYTE *)(a1 + 871) = (__int64)*(float *)(a2 + 144);
    *(_BYTE *)(a1 + 872) = (__int64)*(float *)(a2 + 148);
    *(_BYTE *)(a1 + 873) = (__int64)*(float *)(a2 + 152);
    *(_BYTE *)(a1 + 874) = (__int64)*(float *)(a2 + 156);
    result = sub_100742D0(v2);
    qmemcpy((void *)(a1 + 632), v2, 0x44u);
    qmemcpy((void *)(a1 + 700), v2, 0x44u);
    return result;
}
