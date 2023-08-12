#include "types-win32.h"
//----- (100347BA) --------------------------------------------------------
void __cdecl sub_100347BA(int a1, float a2) {
    if (a2 > 2.5)
        a2 = 2.5;
    *(float *)&gUnk06594.gap1C8[4 * a1 + 7968] = *(float *)&gUnk06594.gap1C8[4 * a1 + 7968] + a2;
    if (*(float *)&gUnk06594.gap1C8[4 * a1 + 7968] > 5.0)
        *(_DWORD *)&gUnk06594.gap1C8[4 * a1 + 7968] = 1084227584;
}
