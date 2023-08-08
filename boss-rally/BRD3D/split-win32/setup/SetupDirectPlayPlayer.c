#include "../types-win32.h"
//----- (10038CB0) --------------------------------------------------------
HRESULT __cdecl SetupDirectPlayPlayer(#503 * u1) {
    DPLCONNECTION *dplConnection;     // ebx
    HRESULT hr;                       // ebp
    HGLOBAL mem;                      // eax
    IDirectPlay4A *dplay4a_copy;      // eax
    HGLOBAL mem2;                     // eax
    HGLOBAL mem3;                     // eax
    DWORD old_dwFlags;                // esi
    DWORD createPlayerFlags;          // esi
    DWORD idPlayer_copy;              // ecx
    const char *user3;                // edi
    IDirectPlay4A *dplay4a;           // [esp+60h] [ebp-10h] BYREF
    IDirectPlayLobby3A *dplayLobby3a; // [esp+64h] [ebp-Ch] BYREF
    DWORD dwConnSize;                 // [esp+68h] [ebp-8h] BYREF
    DWORD idPlayer;                   // [esp+6Ch] [ebp-4h] BYREF

    dplay4a = 0;
    dplayLobby3a = 0;
    dplConnection = 0;
    hr = CoCreateInstance(
        &CLSID_DirectPlayLobby, 0, 1u, &IID_IDirectPlayLobby3A, (LPVOID *)&dplayLobby3a);
    if (hr < 0)
        goto LABEL_5;
    hr = dplayLobby3a->lpVtbl->GetConnectionSettings(dplayLobby3a, 0, 0, &dwConnSize);
    if (hr != -2005467106)
        goto LABEL_5;
    mem = GlobalAlloc(GHND, dwConnSize);
    dplConnection = (DPLCONNECTION *)GlobalLock(mem);
    if (!dplConnection) {
        hr = -2147024882;
    LABEL_5:
        dplay4a_copy = dplay4a;
        goto LABEL_6;
    }
    hr = dplayLobby3a->lpVtbl->GetConnectionSettings(dplayLobby3a, 0, dplConnection, &dwConnSize);
    if (hr < 0)
        goto LABEL_5;
    old_dwFlags = (unsigned __int8)dplConnection->dwFlags;
    dplConnection->lpSessionDesc->dwFlags = DPSESSION_KEEPALIVE | DPSESSION_MIGRATEHOST;
    dplConnection->lpSessionDesc->dwUser1 = 8;
    createPlayerFlags = (old_dwFlags >> 1) & 1;
    hr = dplayLobby3a->lpVtbl->SetConnectionSettings(dplayLobby3a, 0, 0, dplConnection);
    if (hr < 0)
        goto LABEL_5;
    hr =
        dplayLobby3a->lpVtbl->ConnectEx(dplayLobby3a, 0, &IID_IDirectPlay4A, (LPVOID *)&dplay4a, 0);
    if (hr < 0)
        goto LABEL_5;
    hr = dplay4a->lpVtbl->CreatePlayer((IDirectPlay4AVtbl *)dplay4a,
                                       &idPlayer,
                                       dplConnection->lpPlayerName,
                                       (HANDLE) * ((_DWORD *)u1 + 1),
                                       0,
                                       0,
                                       createPlayerFlags != 0 ? DPENUMPLAYERS_SERVERPLAYER : 0);
    if (hr < 0)
        goto LABEL_5;
    idPlayer_copy = idPlayer;
    *(_DWORD *)u1 = dplay4a;
    *((_DWORD *)u1 + 2) = idPlayer_copy;
    *((_DWORD *)u1 + 3) = (dplConnection->dwFlags & DPLCONNECTION_CREATESESSION) != 0;
    strcpy(dplay4aShortName, dplConnection->lpPlayerName->lpszShortName);
    user3 = (const char *)dplConnection->lpSessionDesc->dwUser3;
    if (user3)
        strcpy(g_lpSessionDesc_dwUser3, user3);
    dplay4a_copy = 0;
    dplay4a = 0;
LABEL_6:
    if (dplay4a_copy)
        dplay4a_copy->lpVtbl->Release(dplay4a_copy);
    if (dplayLobby3a)
        dplayLobby3a->lpVtbl->Release(dplayLobby3a);
    if (dplConnection) {
        mem2 = GlobalHandle(dplConnection);
        GlobalUnlock(mem2);
        mem3 = GlobalHandle(dplConnection);
        GlobalFree(mem3);
    }
    return hr;
}
// 10090870: using guessed type IID IID_IDirectPlay4A;
