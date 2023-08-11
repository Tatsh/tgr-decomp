#include "types-win32.h"
//----- (10045A00) --------------------------------------------------------
BOOL __stdcall IsBossRallyCDROMPresent() {
    BOOL ret;               // ebx
    int defaultDriveNumber; // ebp
    int driveNumber;        // esi
    char path[260];         // [esp+10h] [ebp-104h] BYREF

    ret = FALSE;
    defaultDriveNumber = _getdrive();
    getcwd(path, MAX_PATH);
    driveNumber = 3;
    while (_chdrive(driveNumber) || GetDriveTypeA(NULL) != DRIVE_CDROM || _chdir(kBackslash) ||
           !IsBossRallyCDROM(driveNumber)) {
        if (++driveNumber > 26)
            goto LABEL_9;
    }
    ret = TRUE;
LABEL_9:
    _chdrive(defaultDriveNumber);
    _chdir(path);
    return ret;
}
