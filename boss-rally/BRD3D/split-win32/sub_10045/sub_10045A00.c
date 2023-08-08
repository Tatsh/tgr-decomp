#include "types-win32.h"
//----- (10045A00) --------------------------------------------------------
int sub_10045A00() {
    int v0;         // ebx
    int v1;         // ebp
    int v2;         // esi
    char Path[260]; // [esp+10h] [ebp-104h] BYREF

    v0 = 0;
    v1 = _getdrive();
    sub_1007F3C0(Path, 260);
    v2 = 3;
    while (_chdrive(v2) || GetDriveTypeA(0) != 5 || _chdir(kBackslash) || !sub_1003E100(v2)) {
        if (++v2 > 26)
            goto LABEL_9;
    }
    v0 = 1;
LABEL_9:
    _chdrive(v1);
    _chdir(Path);
    return v0;
}
// 1007F3C0: using guessed type _DWORD __cdecl sub_1007F3C0(_DWORD, _DWORD);
