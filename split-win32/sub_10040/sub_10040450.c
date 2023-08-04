#include "../../types-win32.h"
//----- (10040450) --------------------------------------------------------
int sub_10040450()
{
  int v0; // eax
  int v2; // ecx
  int *v3; // eax
  int v4; // [esp-Ch] [ebp-118h]
  int v5; // [esp+8h] [ebp-104h] BYREF

  if ( dword_10AA2844 )
  {
    v0 = sub_1005FFD0();
    dword_100AC6A0 = v0;
    if ( v0 == -1 && dword_10AA2A38 )
    {
      dword_10AA33E4 = 0;
      dword_10AA28D8 = 0;
      dword_10AA2844 = 0;
      dword_10AA2A38 = 0;
      return 1;
    }
    switch ( dword_10AA2A0C )
    {
      case 0:
        if ( v0 >= 0 )
        {
          dword_10AA2A38 = 1;
          v5 = sub_10069BC0(g_Config, 0, dword_100AB334[2 * dword_10AA2840]);
          sub_10069B10((char *)g_Config, 0, dword_100AB334[2 * dword_10AA2840], v5, dword_100AC6A0);
        }
        dword_10AA2850 = sub_10040330(0);
        return 1;
      case 1:
        if ( v0 == -1 )
          v0 = sub_10077200(&v5);
        else
          v5 = 0;
        if ( v0 >= 0 )
        {
          dword_100AC6A0 = v0;
          dword_10AA2A38 = 1;
          sub_10069B10((char *)g_Config, 1, dword_100AB334[2 * dword_10AA2840], v5, v0);
        }
        dword_10AA2850 = sub_10040330(1);
        return 1;
      case 2:
        if ( v0 == -1 )
          v0 = sub_10077200(&v5);
        else
          v5 = 0;
        if ( v0 >= 0 )
        {
          dword_100AC6A0 = v0;
          v4 = dword_100AB334[2 * dword_10AA2840];
          dword_10AA2A38 = 1;
          sub_10069B10((char *)g_Config, 2, v4, v5, v0);
        }
        dword_10AA2850 = sub_10040330(2);
        return 1;
      case 3:
        if ( v0 == -1 )
        {
          v0 = sub_10077310();
          v2 = 768;
        }
        else
        {
          v2 = 0;
        }
        v5 = v2;
        if ( v0 >= 0 )
        {
          dword_100AC6A0 = v0;
          sub_10069B10((char *)g_Config, 3, dword_100AB334[2 * dword_10AA2840], v2, v0);
          dword_10AA2A3C = 1;
        }
        dword_10AA2850 = sub_10040330(3);
        if ( !dword_10AA2A3C )
          return 1;
        sub_10077310();
        v3 = dword_10AA33C0;
        break;
      default:
        return 1;
    }
    while ( !*v3 )
    {
      if ( (int)++v3 >= (int)dword_10AA33D0 )
      {
        dword_10AA2A3C = 0;
        dword_10AA2A38 = 1;
        return 1;
      }
    }
  }
  return 1;
}
// 100AB334: using guessed type int dword_100AB334[];
// 100AC6A0: using guessed type int dword_100AC6A0;
// 10AA2840: using guessed type int dword_10AA2840;
// 10AA2844: using guessed type int dword_10AA2844;
// 10AA2850: using guessed type int dword_10AA2850;
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA2A0C: using guessed type int dword_10AA2A0C;
// 10AA2A38: using guessed type int dword_10AA2A38;
// 10AA2A3C: using guessed type int dword_10AA2A3C;
// 10AA33C0: using guessed type int dword_10AA33C0[];
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33E4: using guessed type int dword_10AA33E4;
