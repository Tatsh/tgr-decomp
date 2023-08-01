//----- (1000B390) --------------------------------------------------------
HRESULT __thiscall sub_1000B390(unk0 *lParam, int a2, int a3, int a4) {
    gameSpecificUnk1 *v5; // edi
    HRESULT result;       // eax
    int v7;               // ebx
    IID *v8;              // eax
    gameSpecificUnk1 *v9; // ebx
    __unk0 *v10;          // ebp
    __unk0 *v11;          // edx
    IID *v12;             // eax
    int v13;              // edi
    IID *v14;             // ecx
    int v15;              // [esp+10h] [ebp-14h] BYREF
    int v16;              // [esp+14h] [ebp-10h] BYREF
    int v17;              // [esp+18h] [ebp-Ch] BYREF
    __unk0 *v18;          // [esp+1Ch] [ebp-8h] BYREF
    IID *v19;             // [esp+20h] [ebp-4h] BYREF

    v5 = sub_1001A550((gameSpecificUnk1 *)a2);
    if (!v5)
        return -2005522670;
    if (a3) {
        v7 = a3 + 4;
    } else {
        v8 = lParam->refclsid;
        if (v8)
            v7 = (int)&v8->Data2;
        else
            v7 = 0;
    }
    if (a4) {
        sub_1001AC80((__unk0 *)a4, &v17, &v16, &v15, &a2);
    } else {
        v17 = 640;
        v16 = 480;
        v15 = 16;
        a2 = 0;
    }
    if (!sub_1001A6E0((int)v5, v7, v17, v16, v15, a2, &v18, &v19))
        return -2005522671;
    v9 = lParam->gameSpecificUnk1_instance;
    v10 = lParam->u0;
    a3 = (int)lParam->refclsid;
    sub_1000A350(lParam);
    v11 = v18;
    v12 = v19;
    lParam->gameSpecificUnk1_instance = v5;
    lParam->u0 = v11;
    lParam->refclsid = v12;
    v13 = sub_1000A2C0(lParam);
    if (v13 >= 0) {
        SendMessageA(lParam->hwnd, 0xBD2u, 0, 0);
        result = 0;
    } else {
        sub_1000A350(lParam);
        v14 = (IID *)a3;
        lParam->gameSpecificUnk1_instance = v9;
        lParam->refclsid = v14;
        lParam->u0 = v10;
        sub_1000A2C0(lParam);
        result = v13;
    }
    return result;
}
