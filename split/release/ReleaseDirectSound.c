//----- (10073730) --------------------------------------------------------
int ReleaseDirectSound() {
    HGLOBAL v1; // eax
    HGLOBAL v2; // eax
    HGLOBAL v3; // eax
    HGLOBAL v4; // eax

    if (--dword_118290FC)
        return 1;
    sub_100734F0();
    if (g_dSoundBuffer) {
        g_dSoundBuffer->lpVtbl->Stop(g_dSoundBuffer);
        g_dSoundBuffer->lpVtbl->Release(g_dSoundBuffer);
        g_dSoundBuffer = 0;
    }
    if (g_DSound) {
        g_DSound->lpVtbl->Release(g_DSound);
        g_DSound = 0;
    }
    if (pMem) {
        v1 = GlobalHandle(pMem);
        GlobalUnlock(v1);
        v2 = GlobalHandle(pMem);
        GlobalFree(v2);
        pMem = 0;
    }
    if (dword_11828F48) {
        v3 = GlobalHandle(dword_11828F48);
        GlobalUnlock(v3);
        v4 = GlobalHandle(dword_11828F48);
        GlobalFree(v4);
        dword_11828F48 = 0;
    }
    return 1;
}
// 118290FC: using guessed type int dword_118290FC;
