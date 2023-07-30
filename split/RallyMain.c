//----- (10079820) --------------------------------------------------------
int __cdecl RallyMain(int a1, int a2, char *Str)
{
  dword_118ABE2C = 0;
  if ( CoInitialize(0) >= 0 )
  {
    setupMemoryStatus();
    readInstallDirectory();
    loadBrstringDll();
    readSettings(Str);
    strcpy(g_bossRallyCfgPath, g_InstallPath);
    strcat(g_bossRallyCfgPath, aBossrallyCfg);
    bossRallyCfgSomething(g_Config, g_bossRallyCfgPath);
    if ( sub_100796B0() )
    {
      sub_1000C6D0();
      if ( sub_1005D440() )
      {
        sub_1003E220();
        sub_10079740();
        sub_10079720();
      }
    }
  }
  CoUninitialize();
  return dword_118ABE2C;
}
// 118ABE2C: using guessed type int dword_118ABE2C;
