#include "../../types-win32.h"
//----- (1006A4A0) --------------------------------------------------------
FILE *__thiscall WriteConfigFile(BossRallyConfig *this, char *FileName) {
    FILE *result; // eax
    FILE *fp;     // esi

    result = fopen(FileName, aWb);
    fp = result;
    if (result) {
        if (fwriteLock(aRcfg, strlen(aRcfg), 1u, result) == 1 &&
            fwriteLock(&unk_1008FA64, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_2A8, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_2AC, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_2B0, 4u, 1u, fp) == 1 &&
            fwriteLock(this->field_2B4, 0x104u, 1u, fp) == 1 &&
            fwriteLock(this->field_3B8, 0x400u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7B8, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7BC, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7C0, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7C4, 4u, 1u, fp) == 1 &&
            fwriteLock(this->field_7C8, 0x10u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7D8, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7DC, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7E0, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7E4, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7E8, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7EC, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7F0, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7F4, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7F8, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_7FC, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_800, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_804, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_808, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_80C, 4u, 1u, fp) == 1 &&
            fwriteLock(this->field_810, 0x20u, 1u, fp) == 1 &&
            fwriteLock(this->field_830, 0x40u, 1u, fp) == 1 &&
            fwriteLock(&this->field_870, 4u, 1u, fp) == 1 &&
            fwriteLock(&this->field_2A0, 4u, 1u, fp) == 1 && fwriteLock(this, 0xA8u, 1u, fp) == 1 &&
            fwriteLock(this->joystick1, 0xA8u, 1u, fp) == 1 &&
            fwriteLock(this->joystick2, 0xA8u, 1u, fp) == 1 &&
            fwriteLock(this->joystick3, 0xA8u, 1u, fp) == 1) {
            fclose(fp);
            result = (FILE *)1;
        } else {
            fclose(fp);
            result = 0;
        }
    }
    return result;
}
