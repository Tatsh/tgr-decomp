//----- (10043710) --------------------------------------------------------
void __cdecl __noreturn sub_10043710(int a1)
{
  sub_1003E220();
  sub_1003E310();
  sub_1006A4A0((#483 *)g_Config, g_bossRallyCfgPath);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 10984) + 24))(*(_DWORD *)(a1 + 10984), 0);
  sub_1000C510((HANDLE *)dword_10A9D008);
  cleanUpAndExitWithCode(0);
}
