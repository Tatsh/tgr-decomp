#include "../../types-win32.h"
//----- (100489A0) --------------------------------------------------------
int __thiscall meth_100489A0(char *this) {
    int v2;   // eax
    void *v4; // edi
    int v5;   // ebx
    bool v6;  // zf
    char *v7; // edi
    int v8;   // eax
    int v9;   // edi

    if (!*((_DWORD *)this + 26)) {
        sub_1003E310();
        WriteConfigFile(&g_Config, g_bossRallyCfgPath);
        v2 = *(_DWORD *)this;
        *((_WORD *)this + 9) = 0;
        (*(void(__thiscall **)(char *, _DWORD))(v2 + 24))(this, 0);
        return 0;
    }
    (*(void(__thiscall **)(char *))(*(_DWORD *)this + 4))(this);
    v4 = dword_10AA2904;
    dword_10AA2904 = (void *)dword_10AA2908;
    sub_10060260();
    dword_10AA2904 = v4;
    sub_1005FFB0();
    v5 = 0;
    dword_10AA2868 = dword_10AA2904 == (void *)dword_10AA2908;
    v6 = *((_WORD *)this + 8) == 0;
    *((_WORD *)this + 9) = 0;
    if (!v6) {
        v7 = this + 108;
        do {
            v8 = *((_DWORD *)v7 - 22);
            *((_DWORD *)this + 25) = v8;
            if (!v8)
                return 0;
            *((_WORD *)this + 9) = v5;
            if (*(_DWORD *)v7) {
                if (!(*(int(__thiscall **)(_DWORD))(**((_DWORD **)this + 25) + 4))(
                        *((_DWORD *)this + 25)))
                    return 0;
            }
            ++v5;
            v7 += 4;
        } while (v5 < *((unsigned __int16 *)this + 8));
    }
    v9 = *(_DWORD *)this;
    (*(void(__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
    if (!*((_DWORD *)this + 26)) {
        sub_1003E310();
        WriteConfigFile(&g_Config, g_bossRallyCfgPath);
        *((_WORD *)this + 9) = 0;
        (*(void(__thiscall **)(char *, _DWORD))(v9 + 24))(this, 0);
        return 0;
    }
    return 1;
}
// 10AA2868: using guessed type int dword_10AA2868;
// 10AA2908: using guessed type int dword_10AA2908;
