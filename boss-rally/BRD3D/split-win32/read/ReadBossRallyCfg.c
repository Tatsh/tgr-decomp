#include "../../types-win32.h"
//----- (10069FF0) --------------------------------------------------------
int __thiscall ReadBossRallyCfg(BossRallyConfig *this, const char *cfgFilename) {
    int res;                     // eax
    FILE *fp_1;                  // esi
    int expectedToBe2;           // [esp+Ch] [ebp-888h] BYREF
    char fourCC[4];              // [esp+10h] [ebp-884h] BYREF
    BossRallyConfig otherConfig; // [esp+14h] [ebp-880h] BYREF
    int unk;                     // [esp+890h] [ebp-4h]

    res = (int)fopen(cfgFilename, kFileModeReadBinary);
    fp_1 = (FILE *)res;
    if (res) {
        meth_10069A90(&otherConfig);
        unk = 0;
        meth_10069DE0(&otherConfig, this);
        if (freadLock(fourCC, 4u, 1u, fp_1) == 1 && !strncmp(fourCC, aRcfg, strlen(aRcfg)) &&
            freadLock(&expectedToBe2, 4u, 1u, fp_1) == 1 && expectedToBe2 == 2 &&
            freadLock(&this->field_2A8, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_2AC, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_2B0, 4u, 1u, fp_1) == 1 &&
            freadLock(this->field_2B4, 0x104u, 1u, fp_1) == 1 &&
            freadLock(this->field_3B8, 0x400u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7B8, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7BC, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7C0, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7C4, 4u, 1u, fp_1) == 1 &&
            freadLock(this->field_7C8, 0x10u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7D8, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7DC, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7E0, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7E4, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7E8, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7EC, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7F0, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7F4, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7F8, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_7FC, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_800, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_804, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_808, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_80C, 4u, 1u, fp_1) == 1 &&
            freadLock(this->field_810, 0x20u, 1u, fp_1) == 1 &&
            freadLock(this->field_830, 0x40u, 1u, fp_1) == 1 &&
            freadLock(&this->field_870, 4u, 1u, fp_1) == 1 &&
            freadLock(&this->field_2A0, 4u, 1u, fp_1) == 1 &&
            freadLock(this, 0xA8u, 1u, fp_1) == 1 &&
            freadLock(this->joystick1, 0xA8u, 1u, fp_1) == 1 &&
            freadLock(this->joystick2, 0xA8u, 1u, fp_1) == 1 &&
            freadLock(this->joystick3, 0xA8u, 1u, fp_1) == 1) {
            fclose(fp_1);
            unk = -1;
            debugPrint(&otherConfig);
            res = 1;
        } else {
            meth_10069DE0(this, &otherConfig);
            fclose(fp_1);
            meth_10069C90(this);
            unk = -1;
            debugPrint(&otherConfig);
            res = 0;
        }
    }
    return res;
}
