//----- (10002550) --------------------------------------------------------
MCIERROR __cdecl mciPlayOrClose(DWORD_PTR callback, unsigned __int8 positionToPlayFrom) {
    MCIERROR v2;              // esi
    MCI_PLAY_PARMS playParms; // [esp+8h] [ebp-Ch] BYREF

    playParms.dwFrom = positionToPlayFrom;
    playParms.dwTo = (unsigned __int8)playParmsPlayTo;
    playParms.dwCallback = callback;
    v2 = mciSendCommandA(mciId, 0x806u, 0xDu, (DWORD_PTR)&playParms); // MCI_PLAY,
    if (!v2)
        return 0;
    mciSendCommandA(mciId, 0x804u, 0, 0); // MCI_CLOSE, 0, NULL
    return v2;
}
// 10220C38: using guessed type int playParmsPlayTo;
