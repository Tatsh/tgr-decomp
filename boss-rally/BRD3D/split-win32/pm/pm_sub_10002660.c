#include "types-win32.h"
//----- (10002660) --------------------------------------------------------
int __cdecl pm_sub_10002660(HWND a1) {
    unsigned int v1;         // eax
    MCIERROR v3;             // eax
    MCI_PLAY_PARMS v4;       // [esp+8h] [ebp-430h] BYREF
    MCI_PLAY_PARMS v5;       // [esp+18h] [ebp-420h] BYREF
    DWORD_PTR dwParam2;      // [esp+24h] [ebp-414h] BYREF
    MCIDEVICEID mciId;       // [esp+28h] [ebp-410h]
    char *v8;                // [esp+2Ch] [ebp-40Ch]
    CHAR OutputString[1024]; // [esp+38h] [ebp-400h] BYREF

    if (g_Playmusic) {
        if (++dword_10220CD0 == 1) {
            hWnd = a1;
            v1 = getTicks();
            srand(v1);
            dword_10220CD4 = 2;
            dword_10220C44 = 0;
            playParmsPlayTo = 0;
            dword_10220CD8 = 0;
            dword_10220C3C = 0;
            v8 = aCdaudio;
            if (mciSendCommandA(0, 0x803u, 0x2000u, (DWORD_PTR)&dwParam2))
                return 0;
            ::mciId = mciId;
            v5.dwFrom = 10;
            if (mciSendCommandA(mciId, 0x80Du, 0x400u, (DWORD_PTR)&v5)) {
                mciSendCommandA(::mciId, 0x804u, 0, 0);
                return 0;
            }
            v4.dwTo = 3;
            v3 = mciSendCommandA(::mciId, 0x814u, 0x102u, (DWORD_PTR)&v4);
            if (v3) {
                wsprintfA(OutputString, "MCI_STATUS returned %d\n", v3);
                OutputDebugStringA(OutputString);
                mciSendCommandA(::mciId, 0x804u, 0, 0);
                return 0;
            }
            dword_10220C44 = 2;
            playParmsPlayTo = v4.dwFrom;
            dword_10220C3C = 1;
        }
    }
    return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C38: using guessed type int playParmsPlayTo;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220C44: using guessed type int dword_10220C44;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
// 10220CD8: using guessed type int dword_10220CD8;
