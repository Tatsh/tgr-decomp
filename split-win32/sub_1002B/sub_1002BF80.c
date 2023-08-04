#include "../../types-win32.h"
//----- (1002BF80) --------------------------------------------------------
int __cdecl sub_1002BF80(int a1)
{
  int v1; // esi
  unsigned __int16 v2; // ax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int result; // eax

  v1 = a1;
  if ( a1 )
  {
    sub_1002C1F0(a1);
    while ( 1 )
    {
      HIBYTE(v2) = *(_BYTE *)v1;
      LOBYTE(v2) = *(_BYTE *)(v1 + 1);
      v3 = *(unsigned __int8 *)(v1 + 5);
      BYTE1(v3) = *(_BYTE *)(v1 + 4);
      v4 = *(unsigned __int8 *)(v1 + 3) | ((*(unsigned __int8 *)(v1 + 2) | (v2 << 8)) << 8);
      v5 = *(unsigned __int8 *)(v1 + 6);
      *(_DWORD *)v1 = v4;
      result = HIBYTE(v4) - 4;
      *(_DWORD *)(v1 + 4) = *(unsigned __int8 *)(v1 + 7) | ((v5 | (v3 << 8)) << 8);
      switch ( result )
      {
        case 0:
          sub_1002C150(v1);
          v1 += 8;
          continue;
        case 173:
          sub_1002C1B0((_BYTE *)v1);
          v1 += 8;
          continue;
        case 180:
          return result;
        case 187:
          sub_1002C190((_BYTE *)v1);
          v1 += 8;
          continue;
        case 249:
          sub_1002B970((int *)(v1 + 4));
          goto LABEL_8;
        default:
LABEL_8:
          v1 += 8;
          break;
      }
    }
  }
  return result;
}
