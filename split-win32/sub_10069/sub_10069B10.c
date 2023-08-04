#include "../../types-win32.h"
//----- (10069B10) --------------------------------------------------------
int __thiscall sub_10069B10(_DWORD *this, int a2, int a3, __int16 a4, char a5)
{
  char *v5; // ebp
  char *v6; // edi
  char *v7; // eax
  int v8; // edi
  _WORD *v9; // esi
  int v10; // ebx
  __int16 v11; // dx
  int v12; // eax
  char *v13; // ecx
  int result; // eax
  int v15; // [esp+14h] [ebp+4h]

  switch ( a2 )
  {
    case 1:
      v5 = (char *)(this + 42);
      v6 = (char *)&unk_100B4140;
      break;
    case 2:
      v5 = (char *)(this + 84);
      v6 = (char *)&unk_100B41E8;
      break;
    case 3:
      v5 = (char *)(this + 126);
      v6 = (char *)&unk_100B4290;
      break;
    default:
      v5 = (char *)this;
      v6 = aE;
      break;
  }
  v15 = 2;
  v7 = &v5[6 * a3];
  v8 = v6 - v5;
  *(_WORD *)v7 = a4 ^ (unsigned __int8)(a4 ^ a5);
  v9 = v7 + 2;
  do
  {
    v10 = 28;
    do
    {
      v11 = *(_WORD *)((char *)v9 + v8);
      v12 = 0;
      *v9 = v11;
      v13 = v5;
      while ( *(_WORD *)v13 != v11 )
      {
        ++v12;
        v13 += 6;
        if ( v12 >= 28 )
          goto LABEL_15;
      }
      *v9 = 0;
LABEL_15:
      --v10;
    }
    while ( v10 );
    ++v9;
    result = --v15;
  }
  while ( v15 );
  return result;
}
