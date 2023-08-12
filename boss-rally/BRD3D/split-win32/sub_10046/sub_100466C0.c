#include "types-win32.h"
//----- (100466C0) --------------------------------------------------------
int __cdecl sub_100466C0(unk1E214 *a1) {
    a1->field_2AE8->lpVtbl->meth7(a1->field_2AE8);
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
    gUnkC8Ptr34 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr4;
    sub_1003E310();
    meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
    return 0;
}
