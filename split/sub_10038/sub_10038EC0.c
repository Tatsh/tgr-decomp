//----- (10038EC0) --------------------------------------------------------
int sub_10038EC0() {
    int result;          // eax
    HGLOBAL v1;          // eax
    HRESULT hr;          // esi
    SIZE_T pMetric;      // [esp+10h] [ebp-18h] BYREF
    int dsBufferDesc[5]; // [esp+14h] [ebp-14h] BYREF

    sub_10008B40((char *)dword_10A99780, aBossrallyPod);
    sub_100088D0(dword_10A99780);
    sub_1006AA20(1);
    sub_10061400();
    sub_10078CD0();
    sub_100770F0();
    if (g_Playmusic) {
        pm_sub_100025C0(g_HWND);
        sub_10060D90();
        pm_sub_100027C0(2);
    }
    result = g_Playsfx;
    if (g_Playsfx) {
        if (++dword_118290FC != 1)
            return 1;
        memset(dword_11828F08, 0, sizeof(dword_11828F08));
        sub_10073060();
        if (acmMetrics(0, 0x32u, &pMetric))
            return 0;
        v1 = GlobalAlloc(0x40u, pMetric);
        result = (int)GlobalLock(v1);
        pMem = (#514 *)result;
        if (result) {
            *(_WORD *)result = 1;
            *((_WORD *)pMem + 1) = 2;
            *((_DWORD *)pMem + 1) = 22050;
            *((_DWORD *)pMem + 2) = 88200;
            *((_WORD *)pMem + 6) = 4;
            *((_WORD *)pMem + 7) = 16;
            *((_WORD *)pMem + 8) = 0;
            hr = CoCreateInstance(
                &CLSID_CLSID_DirectSound, 0, 1u, &CLSID_IDirectSound, (LPVOID *)&g_DSound);
            if (hr < 0 || !g_DSound)
                return hr >= 0;
            hr = g_DSound->lpVtbl->Initialize(g_DSound, 0);
            if (hr >= 0) {
                hr = g_DSound->lpVtbl->SetCooperativeLevel(g_DSound, g_HWND, 2);
                if (hr >= 0) {
                    dsBufferDesc[0] = 20;
                    dsBufferDesc[2] = 0;
                    dsBufferDesc[1] = 1;
                    dsBufferDesc[3] = 0;
                    dsBufferDesc[4] = 0;
                    hr = g_DSound->lpVtbl->CreateSoundBuffer(
                        g_DSound, (LPCDSBUFFERDESC)dsBufferDesc, &g_dSoundBuffer, 0);
                    if (hr >= 0) {
                        hr = g_dSoundBuffer->lpVtbl->Play(g_dSoundBuffer, 0, 0, 1);
                        if (hr >= 0)
                            return hr >= 0;
                        g_dSoundBuffer->lpVtbl->Release(g_dSoundBuffer);
                        g_dSoundBuffer = 0;
                    }
                }
            }
            g_DSound->lpVtbl->Release(g_DSound);
            g_DSound = 0;
            return hr >= 0;
        }
    }
    return result;
}
// 100736FE: conditional instruction was optimized away because of 'esi.4<0'
// 10061400: using guessed type int sub_10061400(void);
// 100940A4: using guessed type int g_Playmusic;
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;