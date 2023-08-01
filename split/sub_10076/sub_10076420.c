//----- (10076420) --------------------------------------------------------
void __thiscall sub_10076420(float *this, int a2, int a3, int a4) {
    float *v4; // eax
    float *v5; // ecx

    *((_DWORD *)this + 12) = a2;
    *((_DWORD *)this + 13) = a3;
    *((_DWORD *)this + 14) = a4;
    *((_DWORD *)this + 2482) = a2;
    *((_DWORD *)this + 2483) = a3;
    *((_DWORD *)this + 2484) = a4;
    v4 = this + 119;
    v5 = this + 136;
    *(_DWORD *)v4 = a2;
    *((_DWORD *)v5 - 16) = a3;
    *((_DWORD *)v5 - 15) = a4;
    *((_DWORD *)v5 + 39) = a2;
    *((_DWORD *)v5 + 40) = a3;
    *((_DWORD *)v5 + 41) = a4;
    *((_DWORD *)v5 + 22) = a2;
    *((_DWORD *)v5 + 23) = a3;
    *((_DWORD *)v5 + 24) = a4;
    sub_10074450(v5, v4);
}
