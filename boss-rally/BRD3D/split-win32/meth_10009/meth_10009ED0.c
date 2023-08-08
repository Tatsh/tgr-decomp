#include "../types-win32.h"
//----- (10009ED0) --------------------------------------------------------
BOOL __thiscall meth_10009ED0(void *this, char *a2, LONG rectRight, LONG rectBottom) {
    int **unk2;                       // ebp
    int *ddSurface;                   // eax
    BOOL result;                      // eax
    int ddSurfaceVtbl;                // ecx
    int *ddSurface_1;                 // eax
    int ddSurfaceVtbl_1;              // ecx
    LONG v10;                         // edi
    DWORD dwRGBBitCountShiftedRight3; // esi
    LPVOID lpSurface;                 // ebp
    _BYTE *v14;                       // ecx
    LONG v15;                         // esi
    char v16;                         // dl
    _WORD *v17;                       // ecx
    LONG rectRight_1;                 // edx
    __int16 v19;                      // si
    _DWORD *v20;                      // ecx
    LONG v21;                         // edx
    int v22;                          // esi
    RECT rect;                        // [esp+20h] [ebp-7Ch] BYREF
    DDSURFACEDESC ddSurfaceDesc;      // [esp+30h] [ebp-6Ch] BYREF

    unk2 = (int **)this;
    ddSurface = *(int **)this;
    if (!*(_DWORD *)this)
        return 0;
    ddSurfaceVtbl = *ddSurface;
    ddSurfaceDesc.dwSize = 108;
    (*(void(__stdcall **)(int *, DDSURFACEDESC *))(ddSurfaceVtbl + 88))(ddSurface, &ddSurfaceDesc);
    ddSurface_1 = *unk2;
    ddSurfaceVtbl_1 = **unk2;
    rect.left = 0;
    rect.top = 0;
    v10 = rectBottom;
    dwRGBBitCountShiftedRight3 = ddSurfaceDesc.ddpfPixelFormat.dwRGBBitCount >> 3;
    rect.right = rectRight;
    rect.bottom = rectBottom;
    if ((*(int(__stdcall **)(int *, RECT *, DDSURFACEDESC *, int, _DWORD))(ddSurfaceVtbl_1 + 100))(
            ddSurface_1, &rect, &ddSurfaceDesc, 33, 0)) {
        return 0;
    }
    lpSurface = ddSurfaceDesc.lpSurface;
    if (dwRGBBitCountShiftedRight3 == 1) {
        if (rectBottom > 0) {
            do {
                v14 = lpSurface;
                if (rectRight > 0) {
                    v15 = rectRight;
                    do {
                        v16 = *a2++;
                        *v14++ = v16;
                        --v15;
                    } while (v15);
                }
                lpSurface = (char *)lpSurface + ddSurfaceDesc.lPitch;
                --v10;
            } while (v10);
        }
    } else if (dwRGBBitCountShiftedRight3 == 2) {
        if (rectBottom > 0) {
            do {
                v17 = lpSurface;
                if (rectRight > 0) {
                    rectRight_1 = rectRight;
                    do {
                        v19 = *(_WORD *)a2;
                        a2 += 2;
                        *v17++ = v19;
                        --rectRight_1;
                    } while (rectRight_1);
                }
                lpSurface = (char *)lpSurface + ddSurfaceDesc.lPitch;
                --v10;
            } while (v10);
        }
    } else if (dwRGBBitCountShiftedRight3 == 4 && rectBottom > 0) {
        do {
            v20 = lpSurface;
            if (rectRight > 0) {
                v21 = rectRight;
                do {
                    v22 = *(_DWORD *)a2;
                    a2 += 4;
                    *v20++ = v22;
                    --v21;
                } while (v21);
            }
            lpSurface = (char *)lpSurface + ddSurfaceDesc.lPitch;
            --v10;
        } while (v10);
    }
    if ((*(int(__stdcall **)(_DWORD, LPVOID))(**(_DWORD **)this + 128))(*(_DWORD *)this,
                                                                        ddSurfaceDesc.lpSurface))
        result = 0;
    else
        result = meth_1000A020((#511 *)this);
    return result;
}
