//----- (100244E0) --------------------------------------------------------
HRESULT sub_100244E0() {
    HRESULT hr;    // eax
    D3DRECT rects; // [esp+0h] [ebp-10h] BYREF

    hr = *(&stru_10277680 + 8);
    if (!*(&stru_10277680 + 8)) {
        hr = g_D3Dclearzbuffer;
        if (!g_D3Dclearzbuffer || (rects.x1 = 0,
                                   rects.x2 = g_Width,
                                   rects.y1 = 0,
                                   rects.y2 = g_Height,
                                   (hr = g_gsu0->lpDirect3DViewport2->lpVtbl->Clear(
                                        g_gsu0->lpDirect3DViewport2, 1, &rects, 3)) == 0)) {
            *(&stru_10277680 + 8) = 1;
        }
    }
    return hr;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 104C5168: using guessed type int g_D3Dclearzbuffer;
