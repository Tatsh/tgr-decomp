#include "types-win32.h"
//----- (1005F690) --------------------------------------------------------
int DDraw_DoInit() {
    int v0;                        // ebp
    IDirectDraw2 *lpDDraw2;        // eax
    IDirectDrawSurface *lpSurface; // eax
    char **imagesWork1aBmFilepath; // ebx
    IDirectDrawSurface *surface;   // eax
    DDSURFACEDESC a5;              // [esp+10h] [ebp-16Ch] BYREF
    char Buffer[256];              // [esp+7Ch] [ebp-100h] BYREF

    v0 = 0;
    lpDDraw2 = gUnk334->u8c->lpDirectDraw2;
    gDDraw2 = lpDDraw2;
    if (dword_10AA2A6C) {
        lpSurface = DDrawCreateSurface(lpDDraw2, filepath, 0, 0, &a5);
        gDDSurface = lpSurface;
        if (gImagesWork1aBmFilepath && !lpSurface) {
            sprintf(Buffer, aDdrawDoinitLoa);
            sub_1005F580();
        }
        gUnkC8Ptr1->lpVtbl->field_20(gUnkC8Ptr1);
        sub_1005F5A0(0, 0, 0, dword_100AB56C, dword_100AB57C[0]);
        gUnkC8Ptr1->lpVtbl->field_14(gUnkC8Ptr1);
        if (gDDSurface) {
            gDDSurface->lpVtbl->Release(gDDSurface);
            gDDSurface = 0;
        }
    }
    imagesWork1aBmFilepath = &gImagesWork1aBmFilepath;
    ++dword_10AA2A6C;
    do {
        if (*imagesWork1aBmFilepath) {
            surface = DDrawCreateSurface(gDDraw2, *imagesWork1aBmFilepath, 0, 0, &a5);
            *(imagesWork1aBmFilepath - 28) = (char *)surface;
            if (*imagesWork1aBmFilepath && !surface) {
                sprintf(Buffer, "DDraw_DoInit: Bitmap %d failed to load!", v0);
                sub_1005F580();
            }
            ++gSurfaceCount;
            qmemcpy(imagesWork1aBmFilepath - 27, &a5, 0x6Cu);
            sub_1000BA40((LPDIRECTDRAWSURFACE) * (imagesWork1aBmFilepath - 28), 0xFF00u);
        }
        imagesWork1aBmFilepath += 29;
        ++v0;
    } while ((int)imagesWork1aBmFilepath < (int)&unk_10AA2584);
    return 1;
}
// 10AA2A6C: using guessed type int dword_10AA2A6C;
