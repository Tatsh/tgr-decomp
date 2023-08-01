//----- (1001ACF0) --------------------------------------------------------
BOOL __thiscall sub_1001ACF0(__unk0 *this, int iid) {
    int v3; // eax
    int v4; // edi
    int v5; // eax

    if (!iid)
        return 0;
    v3 = sub_1001AC60(this);
    v4 = sub_1001A8C0(v3);
    if (sub_1001AD90((_DWORD *)iid))
        v5 = v4 & *(_DWORD *)(iid + 184);
    else
        v5 = v4 & *(_DWORD *)(iid + 436);
    return v5 != 0;
}
