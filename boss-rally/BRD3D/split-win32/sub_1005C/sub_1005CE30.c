#include "../types-win32.h"
//----- (1005CE30) --------------------------------------------------------
int __stdcall sub_1005CE30(int a1, const char *a2) {
    int v2;          // edx
    char *v3;        // ecx
    char String[32]; // [esp+8h] [ebp-20h] BYREF

    if (dword_10AA2848) {
        strcpy(String, (const char *)(a1 + strlen(aRallyseason)));
        v2 = 65 * atoi(String);
        v3 = g_unkC8Ptr2->field_C0;
    } else {
        strcpy(String, (const char *)(a1 + strlen(aTimeattack)));
        v2 = 65 * atoi(String);
        v3 = (char *)g_unkC8Ptr2->last;
    }
    strcpy(&v3[4 * v2 + 4], a2);
    return 1;
}
// 10AA2848: using guessed type int dword_10AA2848;
