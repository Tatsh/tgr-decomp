#include "../../types-win32.h"
//----- (10028CA0) --------------------------------------------------------
void *__cdecl sub_10028CA0(int a1)
{
  void *result; // eax
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  int v5; // edx

  result = (void *)dword_104D51B8;
  if ( a1 != dword_104D51B8 )
  {
    v2 = 696 * a1;
    g_D3DDevice2->lpVtbl->SetRenderState(
      g_D3DDevice2,
      (D3DRENDERSTATETYPE)1,
      *(_DWORD *)(*((_DWORD *)Block + *((_DWORD *)dword_1057543C + 174 * a1)) + 12));
    result = dword_1057543C;
    if ( *((_DWORD *)dword_1057543C + 174 * a1 + 10) == 1 )
    {
      dword_10277398 = 3;
      v3 = dword_10277370;
      if ( dword_10277418 == 3 )
      {
        BYTE1(v3) = BYTE1(dword_10277370) & 0xFE;
        goto LABEL_8;
      }
    }
    else
    {
      dword_10277398 = 1;
      v3 = dword_10277370;
      if ( dword_10277418 == 1 )
      {
        BYTE1(v3) = BYTE1(dword_10277370) & 0xFE;
        goto LABEL_8;
      }
    }
    BYTE1(v3) |= 1u;
LABEL_8:
    dword_10277370 = v3;
    if ( *(_DWORD *)((char *)dword_1057543C + v2 + 44) == 1 )
    {
      dword_1027739C = 3;
      v4 = dword_10277370;
      if ( dword_1027741C == 3 )
      {
        BYTE1(v4) = BYTE1(dword_10277370) & 0xFD;
LABEL_14:
        dword_10277370 = v4;
        flt_118AA08C = *(float *)((char *)dword_1057543C + v2 + 688);
        flt_118AA090 = *(float *)((char *)dword_1057543C + v2 + 692);
        dword_118AA080 = *(_DWORD *)((char *)dword_1057543C
                                   + 64 * *(_DWORD *)((char *)dword_1057543C + v2 + 96)
                                   + v2
                                   + 152);
        dword_11829838 = *(_DWORD *)((char *)dword_1057543C
                                   + 64 * *(_DWORD *)((char *)dword_1057543C + v2 + 96)
                                   + v2
                                   + 156);
        dword_1182983C = *(_DWORD *)((char *)dword_1057543C
                                   + 64 * *(_DWORD *)((char *)dword_1057543C + v2 + 96)
                                   + v2
                                   + 160);
        v5 = *(_DWORD *)((char *)dword_1057543C + 64 * *(_DWORD *)((char *)dword_1057543C + v2 + 96) + v2 + 164);
        dword_104D51B8 = a1;
        dword_118A9870 = v5;
        return result;
      }
    }
    else
    {
      dword_1027739C = 1;
      v4 = dword_10277370;
      if ( dword_1027741C == 1 )
      {
        BYTE1(v4) = BYTE1(dword_10277370) & 0xFD;
        goto LABEL_14;
      }
    }
    BYTE1(v4) |= 2u;
    goto LABEL_14;
  }
  return result;
}
// 10277370: using guessed type int dword_10277370;
// 10277398: using guessed type int dword_10277398;
// 1027739C: using guessed type int dword_1027739C;
// 10277418: using guessed type int dword_10277418;
// 1027741C: using guessed type int dword_1027741C;
// 104D51B8: using guessed type int dword_104D51B8;
// 11829838: using guessed type int dword_11829838;
// 1182983C: using guessed type int dword_1182983C;
// 118A9870: using guessed type int dword_118A9870;
// 118AA080: using guessed type int dword_118AA080;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
