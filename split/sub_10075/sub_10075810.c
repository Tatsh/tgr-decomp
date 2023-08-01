//----- (10075810) --------------------------------------------------------
void __thiscall sub_10075810(int this) {
    unsigned __int8 v2; // c0
    unsigned __int8 v3; // c3
    unsigned __int8 v5; // c0
    unsigned __int8 v6; // c3

    if (*(float *)(this + 4096) == 0.0) {
        if (*(float *)(this + 4104) != 0.0) {
            *(float *)(this + 4104) = *(float *)(this + 4104) - *(float *)&dword_106C2CFC;
            if (v5 | v6) {
                *(_DWORD *)(this + 4104) = 0;
                *(_DWORD *)(this + 4100) = 0;
            }
        }
    } else {
        *(float *)(this + 4096) = *(float *)(this + 4096) - *(float *)&dword_106C2CFC;
        if (v2 | v3) {
            *(_DWORD *)(this + 4096) = 0;
            *(_DWORD *)(this + 4092) = 0;
        }
    }
}
// 1007583D: variable 'v2' is possibly undefined
// 1007583D: variable 'v3' is possibly undefined
// 1007587E: variable 'v5' is possibly undefined
// 1007587E: variable 'v6' is possibly undefined
// 106C2CFC: using guessed type int dword_106C2CFC;
