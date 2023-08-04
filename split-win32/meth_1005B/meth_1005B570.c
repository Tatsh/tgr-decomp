#include "../../types-win32.h"
//----- (1005B570) --------------------------------------------------------
char __thiscall meth_1005B570(char *this)
{
  char v3; // bl

  if ( dword_10AA285C )
  {
    if ( dword_10AA2B6C )
    {
      sub_1003D9A0((int *)dword_10A9D008, 4);
      sub_10072AF0(4, 0x200020u);
      dword_10AA2854 = 4;
    }
    else if ( dword_10AA2B70 )
    {
      sub_1003D9A0((int *)dword_10A9D008, 5);
      sub_10072AF0(5, 0x200020u);
      dword_10AA2854 = 5;
    }
    else if ( dword_10AA2B74 )
    {
      sub_1003D9A0((int *)dword_10A9D008, 6);
      sub_10072AF0(6, 0x200020u);
      dword_10AA2854 = 6;
    }
    else if ( dword_10AA2B78 )
    {
      sub_1003D9A0((int *)dword_10A9D008, 7);
      sub_10072AF0(7, 0x200020u);
      dword_10AA2854 = 7;
    }
  }
  if ( dword_10AA2A84 )
  {
    dword_10AA33E4 = 0;
    return -1;
  }
  if ( (dword_10AA2AF0 || dword_10AA2CF0 || sub_1003E080() && !dword_10AA285C) && strlen(this + 9) )
  {
    dword_10AA33E4 = 0;
    return 0;
  }
  if ( !dword_10AA33E4 )
    goto LABEL_25;
  if ( dword_10AA33E4 == 8 )
  {
    if ( strlen(this + 9) )
    {
      this[strlen(this + 9) + 8] = 0;
      dword_10AA33E4 = 0;
      return 1;
    }
    goto LABEL_25;
  }
  v3 = sub_1005B540(dword_10AA33E4);
  if ( v3 )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 4))(this);
    if ( *((_WORD *)this + 517) < *((_WORD *)this + 526) )
      sprintf(this + 9, "%s%c", this + 9, v3);
LABEL_25:
    dword_10AA33E4 = 0;
  }
  return 1;
}
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA2A84: using guessed type int dword_10AA2A84;
// 10AA2AF0: using guessed type int dword_10AA2AF0;
// 10AA2B6C: using guessed type int dword_10AA2B6C;
// 10AA2B70: using guessed type int dword_10AA2B70;
// 10AA2B74: using guessed type int dword_10AA2B74;
// 10AA2B78: using guessed type int dword_10AA2B78;
// 10AA2CF0: using guessed type int dword_10AA2CF0;
// 10AA33E4: using guessed type int dword_10AA33E4;
