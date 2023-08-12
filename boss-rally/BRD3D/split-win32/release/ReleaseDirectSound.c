#include "types-win32.h"
//----- (10073730) --------------------------------------------------------
int ReleaseDirectSound() {
    HGLOBAL v1; // eax
    HGLOBAL v2; // eax
    HGLOBAL v3; // eax
    HGLOBAL v4; // eax

    if (--dword_118290FC)
        return 1;
    pm_100734F0();
    if (gDSoundBuffer) {
        gDSoundBuffer->lpVtbl->Stop(gDSoundBuffer);
        gDSoundBuffer->lpVtbl->Release(gDSoundBuffer);
        gDSoundBuffer = 0;
    }
    if (gDSound) {
        gDSound->lpVtbl->Release(gDSound);
        gDSound = 0;
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
