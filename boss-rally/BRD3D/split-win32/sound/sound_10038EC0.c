#include "types-win32.h"
//----- (10038EC0) --------------------------------------------------------
void *sound_10038EC0() {
    void *result;               // eax
    HGLOBAL v1;                 // eax
    HRESULT hr;                 // esi
    SIZE_T pMetric;             // [esp+10h] [ebp-18h] BYREF
    DSBUFFERDESC1 dsBufferDesc; // [esp+14h] [ebp-14h] BYREF

    meth_Pod_SetPodFilename(&gPod, kBossRallyPod);
    meth_Pod_ReadPodFile(&gPod);
    sub_1006AA20(1);
    thunk_LoadDamageBitmaps();
    input_10078CD0();
    input_100770F0();
    if (gPlayMusic) {
        pm_sub_100025C0(gHwnd);
        sub_10060D90();
        pm_sub_100027C0(2);
    }
    result = (void *)gPlaysfx;
    if (gPlaysfx) {
        if (++dword_118290FC != 1)
            return (void *)1;
        memset(dword_11828F08, 0, sizeof(dword_11828F08));
        sub_10073060();
        if (acmMetrics(0, 0x32u, &pMetric))
            return 0;
        v1 = GlobalAlloc(GMEM_ZEROINIT, pMetric);
        result = GlobalLock(v1);
        pMem = result;
        if (result) {
            *(_WORD *)result = 1;
            *((_WORD *)pMem + 1) = 2;
            *((_DWORD *)pMem + 1) = 22050;
            *((_DWORD *)pMem + 2) = 88200;
            *((_WORD *)pMem + 6) = 4;
            *((_WORD *)pMem + 7) = 16;
            *((_WORD *)pMem + 8) = 0;
            hr = CoCreateInstance(
                &CLSID_CLSID_DirectSound, NULL, 1u, &CLSID_IDirectSound, (LPVOID *)&gDSound);
            if (hr < 0 || !gDSound)
                return (void *)(hr >= 0);
            hr = gDSound->lpVtbl->Initialize(gDSound, 0);
            if (hr >= 0) {
                hr = gDSound->lpVtbl->SetCooperativeLevel(gDSound, gHwnd, 2);
                if (hr >= 0) {
                    dsBufferDesc.dwSize = 20;
                    dsBufferDesc.dwBufferBytes = 0;
                    dsBufferDesc.dwFlags = DSBCAPS_PRIMARYBUFFER;
                    dsBufferDesc.dwReserved = 0;
                    dsBufferDesc.lpwfxFormat = 0;
                    hr = gDSound->lpVtbl->CreateSoundBuffer(
                        gDSound, (LPCDSBUFFERDESC)&dsBufferDesc, &gDSoundBuffer, 0);
                    if (hr >= 0) {
                        hr = gDSoundBuffer->lpVtbl->Play(gDSoundBuffer, 0, 0, 1);
                        if (hr >= 0)
                            return (void *)(hr >= 0);
                        gDSoundBuffer->lpVtbl->Release(gDSoundBuffer);
                        gDSoundBuffer = 0;
                    }
                }
            }
            gDSound->lpVtbl->Release(gDSound);
            gDSound = 0;
            return (void *)(hr >= 0);
        }
    }
    return result;
}
// 100736FE: conditional instruction was optimized away because of 'esi.4<0'
// 100940A4: using guessed type int gPlayMusic;
// 100B5DE8: using guessed type int gPlaysfx;
// 118290FC: using guessed type int dword_118290FC;
