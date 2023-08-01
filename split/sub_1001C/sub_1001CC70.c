//----- (1001CC70) --------------------------------------------------------
int __cdecl sub_1001CC70(int a1) {
    g_D3DDevice2->lpVtbl->SetRenderState(
        g_D3DDevice2, D3DRS_FOGCOLOR, (*(_DWORD *)(a1 + 4) >> 8) | (*(_DWORD *)(a1 + 4) << 24));
    return a1 + 8;
}
