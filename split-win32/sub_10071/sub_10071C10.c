#include "../../types-win32.h"
//----- (10071C10) --------------------------------------------------------
int sub_10071C10()
{
  int v0; // esi
  _DWORD *v1; // edi
  int *v2; // ebp
  void *v3; // ecx
  DWORD (__stdcall *v4)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  int *v5; // ebp
  int v6; // edx
  char v7; // al
  char v8; // cl
  char v9; // al
  int v10; // edx
  bool v11; // bl
  int v12; // edi
  bool v13; // cc
  int result; // eax
  _DWORD *v15; // [esp+10h] [ebp-448h]
  int v16; // [esp+14h] [ebp-444h]
  int v17; // [esp+18h] [ebp-440h]
  int *v18; // [esp+1Ch] [ebp-43Ch]
  int *v19; // [esp+20h] [ebp-438h]
  int *v20; // [esp+24h] [ebp-434h]
  int v21; // [esp+28h] [ebp-430h]
  HANDLE v22; // [esp+2Ch] [ebp-42Ch] BYREF
  int v23; // [esp+30h] [ebp-428h]
  int v24; // [esp+34h] [ebp-424h]
  int v25; // [esp+38h] [ebp-420h]
  int v26; // [esp+3Ch] [ebp-41Ch]
  HANDLE v27; // [esp+40h] [ebp-418h] BYREF
  HANDLE hMutex; // [esp+44h] [ebp-414h]
  int v29; // [esp+48h] [ebp-410h]
  int v30; // [esp+4Ch] [ebp-40Ch]
  HANDLE Handles[2]; // [esp+50h] [ebp-408h] BYREF
  char v32[1024]; // [esp+58h] [ebp-400h] BYREF

  v0 = 0;
  v1 = &dword_11826BD0;
  v2 = dword_11786854;
  v21 = 0;
  v17 = 0;
  v15 = &dword_11826BD0;
  v19 = dword_1178FEF8;
  v20 = dword_11786854;
  do
  {
    v3 = (void *)*(v2 - 11);
    v4 = WaitForMultipleObjects;
    Handles[0] = dword_11826B00;
    Handles[1] = v3;
    if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
      ExitThread(0);
    if ( (*v2 & 0x3F) != 0 )
    {
      v21 = 1;
      if ( (*v2 & 0x3F) == 1 )
      {
        sub_10072080(v1, v0);
      }
      else
      {
        v16 = 0;
        v18 = v19;
        v5 = dword_11786858;
        do
        {
          v6 = *(v5 - 12);
          v22 = dword_11826B00;
          v23 = v6;
          if ( !v4(2u, &v22, 0, 0xFFFFFFFF) )
            ExitThread(0);
          v23 = *v18;
          if ( !v4(2u, &v22, 0, 0xFFFFFFFF) )
            ExitThread(0);
          v7 = *((_BYTE *)v5 + 4);
          v30 = *v5;
          v8 = *((_BYTE *)v5 + 5);
          LOBYTE(v26) = v7;
          v9 = *((_BYTE *)v5 + 6);
          LOBYTE(v25) = v8;
          LOBYTE(v24) = v9;
          v10 = *(v5 - 1);
          strcpy(v32, (const char *)v5 + 1324);
          v29 = v10;
          v11 = v18[11] != v10;
          if ( v18[11] != v10 && (v10 & 0x3F) == 2 && v17 == v16 )
          {
            v18[11] = v10;
            v11 = 0;
          }
          ReleaseMutex((HANDLE)*v18);
          if ( v11 )
            sub_10071F40(v15, v16, v29, v30, v26, v25, v24, (int)v32, *(v5 - 11));
          ReleaseMutex((HANDLE)*(v5 - 12));
          v4 = WaitForMultipleObjects;
          v5 += 603;
          ++v16;
          v18 += 603;
        }
        while ( (int)v5 < (int)&unk_1178FF18 );
        v2 = v20;
        v0 = v17;
        v1 = v15;
      }
      sub_10072110(v1, v0);
      if ( dword_11828D10 > (unsigned int)(v2[588] + 1000)
        && !dword_1178FEF0
        && sub_10072030(v1, v0, v2[589], *((_WORD *)v2 + 1180)) )
      {
        v12 = 0;
        v2[588] = dword_11828D10;
        do
        {
          if ( v0 != v12 )
          {
            v27 = dword_11826B00;
            hMutex = *(&dword_11786828 + 603 * v12);
            if ( !v4(2u, &v27, 0, 0xFFFFFFFF) )
              ExitThread(0);
            if ( (dword_11786854[603 * v12] & 0x3F) != 0
              && !sub_10072030(v15, v12, dword_11787188[603 * v12], dword_1178718C[603 * v12]) )
            {
              v12 = 16;
            }
            ReleaseMutex(hMutex);
            v0 = v17;
          }
          ++v12;
        }
        while ( v12 < 16 );
        v1 = v15;
      }
    }
    ReleaseMutex((HANDLE)*(v2 - 11));
    ++v0;
    v1 += 133;
    v2 += 603;
    v13 = (int)(v19 + 9648) < (int)&dword_11826AF8;
    v17 = v0;
    v19 += 9648;
    v15 = v1;
    v20 = v2;
  }
  while ( v13 );
  result = v21;
  if ( !v21 )
    dword_1178FEF0 = 0;
  return result;
}
// 11786854: using guessed type int dword_11786854[];
// 11786858: using guessed type int dword_11786858[];
// 11787188: using guessed type int dword_11787188[];
// 1178718C: using guessed type int dword_1178718C[];
// 1178FEF0: using guessed type int dword_1178FEF0;
// 1178FEF8: using guessed type int dword_1178FEF8[];
// 11826AF8: using guessed type int dword_11826AF8;
// 11828D10: using guessed type int dword_11828D10;
