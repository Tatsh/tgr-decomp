#include "../../types-win32.h"
//----- (10048B20) --------------------------------------------------------
void __stdcall sub_10048B20(int a1)
{
  int v1; // esi
  DWORD ticks; // esi
  char **ppFilepath; // esi
  void *v4; // esi

  v1 = 0;
  if ( dword_10AA2854 == 2 )
  {
    v1 = 0x11DA;
  }
  else if ( dword_10AA2854 == 3 )
  {
    v1 = 0x604;
  }
  ticks = getTicks() + v1;
  while ( getTicks() < ticks )
    Sleep(0);
  if ( !a1 )
  {
    dword_100AC300 = 0;
    dword_10AA2904 = 0;
    sub_1005F530();
    ppFilepath = &g_aImagesWork1aBmFilepath;
    do
    {
      if ( *ppFilepath )
        free(*ppFilepath);
      *ppFilepath = 0;
      ppFilepath += 29;
    }
    while ( (int)ppFilepath < (int)&unk_10AA2584 );
  }
  if ( dword_10AA2940 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2940 + 28))(dword_10AA2940);
    if ( dword_10AA2940 )
      (**(void (__thiscall ***)(int, int))dword_10AA2940)(dword_10AA2940, 1);
    dword_10AA2940 = 0;
    dword_10A9CFFC = 0;
  }
  if ( dword_10AA290C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA290C + 28))(dword_10AA290C);
    if ( dword_10AA290C )
      (**(void (__thiscall ***)(int, int))dword_10AA290C)(dword_10AA290C, 1);
    dword_10AA290C = 0;
    dword_10AA29AC = 0;
  }
  if ( dword_10AA2910 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2910 + 28))(dword_10AA2910);
    if ( dword_10AA2910 )
      (**(void (__thiscall ***)(int, int))dword_10AA2910)(dword_10AA2910, 1);
    dword_10AA2910 = 0;
  }
  if ( dword_10AA2914 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2914 + 28))(dword_10AA2914);
    if ( dword_10AA2914 )
      (**(void (__thiscall ***)(int, int))dword_10AA2914)(dword_10AA2914, 1);
    dword_10AA2914 = 0;
    dword_10AA29B4 = 0;
  }
  if ( dword_10AA2918 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2918 + 28))(dword_10AA2918);
    if ( dword_10AA2918 )
      (**(void (__thiscall ***)(int, int))dword_10AA2918)(dword_10AA2918, 1);
    dword_10AA2918 = 0;
  }
  if ( dword_10AA291C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA291C + 28))(dword_10AA291C);
    if ( dword_10AA291C )
      (**(void (__thiscall ***)(int, int))dword_10AA291C)(dword_10AA291C, 1);
    dword_10AA291C = 0;
  }
  if ( dword_10AA2920 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2920 + 28))(dword_10AA2920);
    if ( dword_10AA2920 )
      (**(void (__thiscall ***)(int, int))dword_10AA2920)(dword_10AA2920, 1);
    dword_10AA2920 = 0;
    dword_10AA29A8 = 0;
  }
  if ( dword_10AA2924 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2924 + 28))(dword_10AA2924);
    if ( dword_10AA2924 )
      (**(void (__thiscall ***)(int, int))dword_10AA2924)(dword_10AA2924, 1);
    dword_10AA2924 = 0;
  }
  if ( dword_10AA2928 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2928 + 28))(dword_10AA2928);
    if ( dword_10AA2928 )
      (**(void (__thiscall ***)(int, int))dword_10AA2928)(dword_10AA2928, 1);
    dword_10AA2928 = 0;
    dword_10AA29C0 = 0;
    dword_10AA29CC = 0;
    dword_10AA29F4 = 0;
  }
  if ( dword_10AA292C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA292C + 28))(dword_10AA292C);
    if ( dword_10AA292C )
      (**(void (__thiscall ***)(int, int))dword_10AA292C)(dword_10AA292C, 1);
    dword_10AA292C = 0;
    dword_10AA29B0 = 0;
  }
  if ( dword_10AA2930 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2930 + 28))(dword_10AA2930);
    if ( dword_10AA2930 )
      (**(void (__thiscall ***)(int, int))dword_10AA2930)(dword_10AA2930, 1);
    dword_10AA2930 = 0;
  }
  if ( dword_10AA2934 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2934 + 28))(dword_10AA2934);
    if ( dword_10AA2934 )
      (**(void (__thiscall ***)(int, int))dword_10AA2934)(dword_10AA2934, 1);
    dword_10AA2934 = 0;
  }
  if ( dword_10AA2938 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2938 + 28))(dword_10AA2938);
    if ( dword_10AA2938 )
      (**(void (__thiscall ***)(int, int))dword_10AA2938)(dword_10AA2938, 1);
    dword_10AA2938 = 0;
  }
  if ( dword_10AA293C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA293C + 28))(dword_10AA293C);
    if ( dword_10AA293C )
      (**(void (__thiscall ***)(int, int))dword_10AA293C)(dword_10AA293C, 1);
    dword_10AA293C = 0;
  }
  if ( dword_10AA2940 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2940 + 28))(dword_10AA2940);
    if ( dword_10AA2940 )
      (**(void (__thiscall ***)(int, int))dword_10AA2940)(dword_10AA2940, 1);
    dword_10AA2940 = 0;
  }
  if ( dword_10AA2944 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2944 + 28))(dword_10AA2944);
    if ( dword_10AA2944 )
      (**(void (__thiscall ***)(int, int))dword_10AA2944)(dword_10AA2944, 1);
    dword_10AA2944 = 0;
  }
  if ( dword_10AA2948 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2948 + 28))(dword_10AA2948);
    if ( dword_10AA2948 )
      (**(void (__thiscall ***)(int, int))dword_10AA2948)(dword_10AA2948, 1);
    dword_10AA2948 = 0;
    dword_10AA29B8 = 0;
    dword_10AA29D8 = 0;
    dword_10AA29D4 = 0;
    dword_10AA2880 = 0;
  }
  if ( dword_10AA294C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA294C + 28))(dword_10AA294C);
    if ( dword_10AA294C )
      (**(void (__thiscall ***)(int, int))dword_10AA294C)(dword_10AA294C, 1);
    dword_10AA294C = 0;
    dword_10AA29B8 = 0;
  }
  if ( dword_10AA2950 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2950 + 28))(dword_10AA2950);
    if ( dword_10AA2950 )
      (**(void (__thiscall ***)(int, int))dword_10AA2950)(dword_10AA2950, 1);
    dword_10AA2950 = 0;
  }
  if ( dword_10AA2954 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2954 + 28))(dword_10AA2954);
    if ( dword_10AA2954 )
      (**(void (__thiscall ***)(int, int))dword_10AA2954)(dword_10AA2954, 1);
    dword_10AA2954 = 0;
    dword_10AA29E4 = 0;
    dword_10AA29E0 = 0;
  }
  if ( dword_10AA2958 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2958 + 28))(dword_10AA2958);
    if ( dword_10AA2958 )
      (**(void (__thiscall ***)(int, int))dword_10AA2958)(dword_10AA2958, 1);
    dword_10AA2958 = 0;
    dword_10AA29A8 = 0;
  }
  if ( dword_10AA298C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA298C + 28))(dword_10AA298C);
    if ( dword_10AA298C )
      (**(void (__thiscall ***)(int, int))dword_10AA298C)(dword_10AA298C, 1);
    dword_10AA298C = 0;
    dword_10AA29E8 = 0;
  }
  if ( dword_10AA295C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA295C + 28))(dword_10AA295C);
    if ( dword_10AA295C )
      (**(void (__thiscall ***)(int, int))dword_10AA295C)(dword_10AA295C, 1);
    dword_10AA295C = 0;
  }
  if ( dword_10AA2960 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2960 + 28))(dword_10AA2960);
    if ( dword_10AA2960 )
      (**(void (__thiscall ***)(int, int))dword_10AA2960)(dword_10AA2960, 1);
    dword_10AA2960 = 0;
  }
  if ( dword_10AA2964 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2964 + 28))(dword_10AA2964);
    if ( dword_10AA2964 )
      (**(void (__thiscall ***)(int, int))dword_10AA2964)(dword_10AA2964, 1);
    dword_10AA2964 = 0;
  }
  if ( dword_10AA2968 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2968 + 28))(dword_10AA2968);
    if ( dword_10AA2968 )
      (**(void (__thiscall ***)(int, int))dword_10AA2968)(dword_10AA2968, 1);
    dword_10AA2968 = 0;
    dword_10AA29C4 = 0;
    dword_10AA29D0 = 0;
  }
  if ( dword_10AA296C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA296C + 28))(dword_10AA296C);
    if ( dword_10AA296C )
      (**(void (__thiscall ***)(int, int))dword_10AA296C)(dword_10AA296C, 1);
    dword_10AA296C = 0;
  }
  if ( dword_10AA2970 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2970 + 28))(dword_10AA2970);
    if ( dword_10AA2970 )
      (**(void (__thiscall ***)(int, int))dword_10AA2970)(dword_10AA2970, 1);
    dword_10AA2970 = 0;
  }
  if ( dword_10AA2974 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2974 + 28))(dword_10AA2974);
    if ( dword_10AA2974 )
      (**(void (__thiscall ***)(int, int))dword_10AA2974)(dword_10AA2974, 1);
    dword_10AA2974 = 0;
  }
  if ( dword_10AA297C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA297C + 28))(dword_10AA297C);
    if ( dword_10AA297C )
      (**(void (__thiscall ***)(int, int))dword_10AA297C)(dword_10AA297C, 1);
    dword_10AA297C = 0;
  }
  if ( dword_10AA2980 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2980 + 28))(dword_10AA2980);
    if ( dword_10AA2980 )
      (**(void (__thiscall ***)(int, int))dword_10AA2980)(dword_10AA2980, 1);
    dword_10AA2980 = 0;
  }
  if ( dword_10AA2984 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2984 + 28))(dword_10AA2984);
    if ( dword_10AA2984 )
      (**(void (__thiscall ***)(int, int))dword_10AA2984)(dword_10AA2984, 1);
    dword_10AA2984 = 0;
  }
  if ( dword_10AA2988 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2988 + 28))(dword_10AA2988);
    if ( dword_10AA2988 )
      (**(void (__thiscall ***)(int, int))dword_10AA2988)(dword_10AA2988, 1);
    dword_10AA2988 = 0;
  }
  if ( dword_10AA2990 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2990 + 28))(dword_10AA2990);
    if ( dword_10AA2990 )
      (**(void (__thiscall ***)(int, int))dword_10AA2990)(dword_10AA2990, 1);
    dword_10AA2990 = 0;
    dword_10AA29F0 = 0;
  }
  if ( dword_10AA2994 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2994 + 28))(dword_10AA2994);
    if ( dword_10AA2994 )
      (**(void (__thiscall ***)(int, int))dword_10AA2994)(dword_10AA2994, 1);
    dword_10AA2994 = 0;
    dword_10AA29EC = 0;
  }
  if ( dword_10AA2998 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2998 + 28))(dword_10AA2998);
    if ( dword_10AA2998 )
      (**(void (__thiscall ***)(int, int))dword_10AA2998)(dword_10AA2998, 1);
    dword_10AA2998 = 0;
  }
  if ( !a1 )
  {
    if ( dword_10AA2908 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2908 + 28))(dword_10AA2908);
      if ( dword_10AA2908 )
        (**(void (__thiscall ***)(int, int))dword_10AA2908)(dword_10AA2908, 1);
      dword_10AA2908 = 0;
    }
    v4 = dword_10AA2900;
    if ( dword_10AA2900 )
    {
      debugPrint(dword_10AA2900);
      free(v4);
      dword_10AA2900 = 0;
    }
    sub_1005FCF0();
  }
}
// 100AC300: using guessed type int dword_100AC300;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA2880: using guessed type int dword_10AA2880;
// 10AA2908: using guessed type int dword_10AA2908;
// 10AA290C: using guessed type int dword_10AA290C;
// 10AA2910: using guessed type int dword_10AA2910;
// 10AA2914: using guessed type int dword_10AA2914;
// 10AA2918: using guessed type int dword_10AA2918;
// 10AA291C: using guessed type int dword_10AA291C;
// 10AA2920: using guessed type int dword_10AA2920;
// 10AA2924: using guessed type int dword_10AA2924;
// 10AA2928: using guessed type int dword_10AA2928;
// 10AA292C: using guessed type int dword_10AA292C;
// 10AA2930: using guessed type int dword_10AA2930;
// 10AA2934: using guessed type int dword_10AA2934;
// 10AA2938: using guessed type int dword_10AA2938;
// 10AA293C: using guessed type int dword_10AA293C;
// 10AA2940: using guessed type int dword_10AA2940;
// 10AA2944: using guessed type int dword_10AA2944;
// 10AA2948: using guessed type int dword_10AA2948;
// 10AA294C: using guessed type int dword_10AA294C;
// 10AA2950: using guessed type int dword_10AA2950;
// 10AA2954: using guessed type int dword_10AA2954;
// 10AA2958: using guessed type int dword_10AA2958;
// 10AA295C: using guessed type int dword_10AA295C;
// 10AA2960: using guessed type int dword_10AA2960;
// 10AA2964: using guessed type int dword_10AA2964;
// 10AA2968: using guessed type int dword_10AA2968;
// 10AA296C: using guessed type int dword_10AA296C;
// 10AA2970: using guessed type int dword_10AA2970;
// 10AA2974: using guessed type int dword_10AA2974;
// 10AA297C: using guessed type int dword_10AA297C;
// 10AA2980: using guessed type int dword_10AA2980;
// 10AA2984: using guessed type int dword_10AA2984;
// 10AA2988: using guessed type int dword_10AA2988;
// 10AA298C: using guessed type int dword_10AA298C;
// 10AA2990: using guessed type int dword_10AA2990;
// 10AA2994: using guessed type int dword_10AA2994;
// 10AA2998: using guessed type int dword_10AA2998;
// 10AA29A8: using guessed type int dword_10AA29A8;
// 10AA29AC: using guessed type int dword_10AA29AC;
// 10AA29B0: using guessed type int dword_10AA29B0;
// 10AA29B4: using guessed type int dword_10AA29B4;
// 10AA29B8: using guessed type int dword_10AA29B8;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29C4: using guessed type int dword_10AA29C4;
// 10AA29CC: using guessed type int dword_10AA29CC;
// 10AA29D0: using guessed type int dword_10AA29D0;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
// 10AA29E0: using guessed type int dword_10AA29E0;
// 10AA29E4: using guessed type int dword_10AA29E4;
// 10AA29E8: using guessed type int dword_10AA29E8;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA29F0: using guessed type int dword_10AA29F0;
// 10AA29F4: using guessed type int dword_10AA29F4;
