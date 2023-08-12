#include "types-win32.h"
//----- (100347BA) --------------------------------------------------------
void __cdecl sub_100347BA(int a1, float a2) {
  if (a2 > 2.5)
    a2 = 2.5;
  MEMORY[0x106C5468][a1] = MEMORY[0x106C5468][a1] + a2;
  if (MEMORY[0x106C5468][a1] > 5.0)
    MEMORY[0x106C5468][a1] = 5.0;
}
