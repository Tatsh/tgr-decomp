#include "types-win32.h"
//----- (10079820) --------------------------------------------------------
int __cdecl RallyMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine) {
  dword_118ABE2C = 0;
  if (CoInitialize(0) >= 0) {
    SetupGMemoryStatus();
    ReadInstallDirectory();
    LoadBrstringDll();
    ReadSettingsParseCmdLine(lpCmdLine);
    strcpy(gBossRallyCfgPath, gInstallPath);
    strcat(gBossRallyCfgPath, aBossrallyCfg);
    meth_BossRally_ReadCfg(&gConfig, gBossRallyCfgPath);
    if (sub_100796B0()) {
        sub_1000C6D0();
        if (sub_1005D440()) {
            sub_1003E220();
            sub_10079740();
            UnregisterClass();
        }
    }
  }
  CoUninitialize();
  return dword_118ABE2C;
}
// 118ABE2C: using guessed type int dword_118ABE2C;
