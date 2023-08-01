//----- (1006B260) --------------------------------------------------------
float *__cdecl sub_1006B260(int a1) {
    int v2; // ecx

    v2 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 252) = 0;
    *(_DWORD *)(a1 + 256) = 0;
    *(_DWORD *)(a1 + 260) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(v2 + 252) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 256) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 260) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 252) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 256) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 260) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 252) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 256) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 260) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 16) + 252) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 16) + 256) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 16) + 260) = 0;
    sub_1006AEB0(a1);
    sub_1006AFF0((float *)a1, *(_DWORD *)(a1 + 4));
    sub_1006AFF0((float *)a1, *(_DWORD *)(a1 + 8));
    sub_1006AFF0((float *)a1, *(_DWORD *)(a1 + 12));
    sub_1006AFF0((float *)a1, *(_DWORD *)(a1 + 16));
    return sub_1006B170(a1);
}
