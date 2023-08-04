#include "../../types-n64.h"
//----- (8026BCCC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8026BCCC()
{
  if ( &dword_803818A0 != (int *)1937243352 )
  {
    while ( 1 )
    {
      if ( &dword_803818A0 == (int *)1937243352 )
      {
        sub_8026E6C0(0);
        dword_803818D0 = 0;
        return;
      }
      dword_803818D0 = sub_802649F0();
      if ( MEMORY[0x7377FCE8] )
        break;
      *MEMORY[0x7377FCDC] = MEMORY[0x7377FCD8];
      *(_DWORD *)(MEMORY[0x7377FCD8] + 4) = MEMORY[0x7377FCDC];
      MEMORY[0x7377FCD8] = 0;
      MEMORY[0x7377FCDC] = 0;
      if ( MEMORY[0x7377FCF0] )
        sub_802654B0(MEMORY[0x7377FCF0], MEMORY[0x7377FCF4], 0);
      if ( MEMORY[0x7377FCE0] || MEMORY[0x7377FCE4] )
      {
        MEMORY[0x7377FCE8] = MEMORY[0x7377FCE0];
        MEMORY[0x7377FCEC] = MEMORY[0x7377FCE4];
        sub_8026BEB8(1937243352);
      }
    }
    sub_8026BE44(MEMORY[0x7377FCE8]);
  }
}
// 8026BD0C: write access to const memory at 803818D0 has been detected
// 8026BD38: write access to const memory at 803818D0 has been detected
// 803818A0: using guessed type int dword_803818A0;
// 803818D0: using guessed type int dword_803818D0;
