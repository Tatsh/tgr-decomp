#include "../types-win32.h"
//----- (1003D480) --------------------------------------------------------
int __cdecl sub_1003D480(_DWORD *a1, SIZE_T *a2) {
    const void *v2;  // ebp
    int v3;          // edi
    int v4;          // esi
    int v5;          // eax
    int v6;          // edi
    _DWORD *v7;      // eax
    int v8;          // eax
    HGLOBAL v9;      // eax
    HGLOBAL v10;     // eax
    HGLOBAL v11;     // eax
    SIZE_T v13;      // edx
    SIZE_T dwBytes;  // [esp+28h] [ebp-50h] BYREF
    const void *v15; // [esp+2Ch] [ebp-4Ch] BYREF
    int v16;         // [esp+30h] [ebp-48h] BYREF
    int v17;         // [esp+34h] [ebp-44h]
    int v18;         // [esp+38h] [ebp-40h]
    int v19;         // [esp+3Ch] [ebp-3Ch]
    int v20;         // [esp+40h] [ebp-38h]
    IID *v21;        // [esp+44h] [ebp-34h]
    int v22;         // [esp+48h] [ebp-30h]
    int v23;         // [esp+4Ch] [ebp-2Ch]
    int v24;         // [esp+50h] [ebp-28h]
    int v25;         // [esp+54h] [ebp-24h]
    int v26;         // [esp+58h] [ebp-20h]
    CHAR *v27;       // [esp+5Ch] [ebp-1Ch]
    int v28;         // [esp+60h] [ebp-18h]
    int v29;         // [esp+64h] [ebp-14h]
    int v30;         // [esp+68h] [ebp-10h]
    void *v31;       // [esp+6Ch] [ebp-Ch]
    int v32;         // [esp+70h] [ebp-8h]
    CHAR *v33;       // [esp+74h] [ebp-4h]

    v2 = 0;
    dwBytes = 0;
    v3 = sub_1003CFC0(&v15);
    if (v3 >= 0) {
        if (!memcmp(v15, &DPSPGUID_MODEM, 0x10u)) {
            v16 = 131667648;
            v17 = 298836143;
            v18 = -1610592612;
            v19 = 1581385161;
            v4 = 1;
            v20 = 16;
            v21 = &DPSPGUID_MODEM;
            if (strlen(byte_10A9CEF8) > 1) {
                v22 = -153304576;
                v23 = 298885886;
                v24 = -1610592356;
                v25 = 1581385161;
                v5 = lstrlenA(byte_10A9CEF8);
                v27 = byte_10A9CEF8;
                v26 = v5 + 1;
                v4 = 2;
            }
            if (String1) {
                v6 = 24 * v4;
                v7 = (int *)((char *)&v16 + v6);
                *(int *)((char *)&v16 + v6) = 2028767648;
                v7[1] = 298836143;
                v7[2] = -1610592612;
                v7[3] = 1581385161;
                ++v4;
                *(int *)((char *)&v20 + v6) = lstrlenA(String1) + 1;
                *(IID **)((char *)&v21 + v6) = (IID *)String1;
            }
        } else if (!memcmp(v15, &IID_IDirectPlay2A, 0x10u)) {
            v16 = 131667648;
            v17 = 298836143;
            v18 = -1610592612;
            v19 = 1581385161;
            v20 = 16;
            v21 = &IID_IDirectPlay2A;
            if (strlen(byte_10B4E760) <= 1)
                lstrcpyA(byte_10B4E760, String2);
            v22 = -995799648;
            v23 = 298836143;
            v24 = -1610592612;
            v25 = 1581385161;
            v26 = lstrlenA(byte_10B4E760) + 1;
            v27 = byte_10B4E760;
            if (strlen(byte_10B4E740) <= 1)
                lstrcpyA(byte_10B4E740, String2);
            v28 = -464370367;
            v29 = 298946213;
            v30 = 1610651274;
            v31 = &unk_1114B097;
            v8 = lstrlenA(byte_10B4E740);
            v33 = byte_10B4E740;
            v32 = v8 + 1;
            v4 = 3;
        } else {
            v17 = 298836143;
            v16 = 131667648;
            v19 = 1581385161;
            v18 = -1610592612;
            v20 = 16;
            v21 = !memcmp(v15, &IID_IDirectPlay2, 0x10u) ? &IID_IDirectPlay2 : &v15;
            v4 = 1;
        }
        v3 = (*(int(__stdcall **)(int, int *, int, _DWORD, SIZE_T *))(
            *(_DWORD *)dword_10A9BFD8 + 56))(dword_10A9BFD8, &v16, v4, 0, &dwBytes);
        if (v3 == -2005467106) {
            v9 = GlobalAlloc(0x42u, dwBytes);
            v2 = GlobalLock(v9);
            if (v2) {
                v3 = (*(int(__stdcall **)(int, int *, int, const void *, SIZE_T *))(
                    *(_DWORD *)dword_10A9BFD8 + 56))(dword_10A9BFD8, &v16, v4, v2, &dwBytes);
                if (v3 >= 0) {
                    v13 = dwBytes;
                    *a1 = v2;
                    *a2 = v13;
                    return 0;
                }
            } else {
                v3 = -2147024882;
            }
        }
    }
    if (v2) {
        v10 = GlobalHandle(v2);
        GlobalUnlock(v10);
        v11 = GlobalHandle(v2);
        GlobalFree(v11);
    }
    return v3;
}
// 10090890: using guessed type IID IID_IDirectPlay2;
// 100908A0: using guessed type IID IID_IDirectPlay2A;
// 100908C0: using guessed type IID DPSPGUID_MODEM;
// 100909E0: using guessed type int dword_100909E0;
// 10A9BFD8: using guessed type int dword_10A9BFD8;
