//----- (10005E40) --------------------------------------------------------
int __cdecl sub_10005E40(int a1) {
    int v1; // esi

    WaitForSingleObject(g_hMutex_0, INFINITE);
    v1 = dword_102212D0[a1];
    ReleaseMutex(g_hMutex_0);
    return v1;
}
