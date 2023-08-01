//----- (1000A170) --------------------------------------------------------
IDirect3DMaterial2 *__thiscall SafeReleaseDirect3DMaterial2(unk0_member2 *this) {
    IDirect3DMaterial2 *hr; // eax

    hr = this->lpDirect3DMaterial2;
    if (hr) {
        hr = (IDirect3DMaterial2 *)hr->lpVtbl->Release(hr);
        this->lpDirect3DMaterial2 = 0;
    }
    return hr;
}
