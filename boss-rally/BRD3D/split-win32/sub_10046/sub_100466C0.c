#include "types-win32.h"
//----- (100466C0) --------------------------------------------------------
int __cdecl sub_100466C0(unk1E214 *a1) {
    a1->field_2AE8->lpVtbl->field_1C(a1->field_2AE8);
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->field_0(gUnkC8Ptr1, 1);
    gUnkC8Ptr34 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr4;
    sub_1003E310();
    WriteConfigFile(&gConfig, gBossRallyCfgPath);
    return 0;
}
