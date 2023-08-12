#include "types-win32.h"
//----- (1003E100) --------------------------------------------------------
BOOL __cdecl IsBossRallyCDROM(int driveNumber) {
  char drivePath[260];        // [esp+8h] [ebp-208h] BYREF
  CHAR volumeNameBuffer[260]; // [esp+10Ch] [ebp-104h] BYREF

  sprintf(drivePath, "%C:\\", driveNumber + 0x40);
  return !_chdrive(driveNumber) && GetDriveTypeA(NULL) == DRIVE_CDROM && !_chdir(kBackslash) &&
         GetVolumeInformationA(drivePath, volumeNameBuffer, MAX_PATH, 0, 0, 0, 0, 0) &&
         !strcmp(volumeNameBuffer, kWindowName);
}
