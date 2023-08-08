#include "../types-win32.h"
//----- (10047610) --------------------------------------------------------
int sub_10047610() {
    int result; // eax
    int v1;     // ecx
    int v2;     // eax
    int v3;     // eax

    result = dword_10AA33E4;
    if (dword_10AA33E4) {
        if ((char)dword_10AA33E4 >= 65 && (char)dword_10AA33E4 <= 90)
            LOBYTE(result) = dword_10AA33E4 + 32;
        v1 = (char)result;
        v2 = dword_10AA2A48;
        dword_10A9E150[dword_10AA2A48] = v1;
        v3 = v2 + 1;
        dword_10AA2A48 = v3;
        if (v3 >= 32)
            dword_10AA2A48 = 0;
        result = sub_10047660(v3);
        dword_10AA33E4 = 0;
    }
    return result;
}
// 10AA2A48: using guessed type int dword_10AA2A48;
// 10AA33E4: using guessed type int dword_10AA33E4;
