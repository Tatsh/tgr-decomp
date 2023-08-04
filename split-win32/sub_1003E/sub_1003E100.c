#include "../../types-win32.h"
//----- (1003E100) --------------------------------------------------------
BOOL __cdecl sub_1003E100(int Drive)
{
  char Buffer[260]; // [esp+8h] [ebp-208h] BYREF
  CHAR VolumeNameBuffer[260]; // [esp+10Ch] [ebp-104h] BYREF

  sprintf(Buffer, "%C:\\", Drive + 64);
  return !_chdrive(Drive)
      && GetDriveTypeA(0) == 5
      && !_chdir(kBackslash)
      && GetVolumeInformationA(Buffer, VolumeNameBuffer, 260u, 0, 0, 0, 0, 0)
      && !strcmp(VolumeNameBuffer, kWindowName);
}
