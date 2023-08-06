#include "../../types-n64.h"
//----- (802590E8) --------------------------------------------------------
void __fastcall sub_802590E8(float *a1, float *a2, float *a3)
{
  float v3; // $f16
  float v4; // $f14
  float v5; // $f18
  float v6; // [sp+38h] [-30h]
  float v7; // [sp+3Ch] [-2Ch]
  float v8; // [sp+48h] [-20h]
  float v9; // [sp+4Ch] [-1Ch]

  v3 = a2[4];
  v4 = a2[8];
  v5 = a2[7];
  v7 = a2[5];
  v6 = a2[1];
  v8 = a2[2];
  v9 = 1.0
     / (float)((float)(a2[6] * (float)(v3 * v8))
             + (float)((float)((float)((float)((float)((float)-*a2 * (float)(v4 * v3)) + (float)(*a2 * (float)(v5 * v7)))
                                     + (float)(a2[3] * (float)(v4 * v6)))
                             - (float)(a2[3] * (float)(v5 * v8)))
                     - (float)(a2[6] * (float)(v7 * v6))));
  *a1 = (float)((float)(a3[2] * (float)(v3 * v8))
              + (float)((float)((float)((float)((float)((float)-*a3 * (float)(v4 * v3)) + (float)(*a3 * (float)(v5 * v7)))
                                      + (float)(a3[1] * (float)(v4 * v6)))
                              - (float)(a3[1] * (float)(v5 * v8)))
                      - (float)(a3[2] * (float)(v7 * v6))))
      * v9;
  a1[1] = (float)-(float)((float)(a3[2] * (float)(a2[3] * a2[2]))
                        + (float)((float)((float)((float)((float)((float)-*a3 * (float)(a2[8] * a2[3]))
                                                        + (float)(*a3 * (float)(a2[6] * a2[5])))
                                                + (float)(a3[1] * (float)(a2[8] * *a2)))
                                        - (float)(a3[1] * (float)(a2[6] * a2[2])))
                                - (float)(a3[2] * (float)(a2[5] * *a2))))
        * v9;
  a1[2] = (float)((float)(a3[2] * (float)(a2[3] * a2[1]))
                + (float)((float)((float)((float)((float)((float)-*a3 * (float)(a2[7] * a2[3]))
                                                + (float)(*a3 * (float)(a2[6] * a2[4])))
                                        + (float)(a3[1] * (float)(a2[7] * *a2)))
                                - (float)(a3[1] * (float)(a2[6] * a2[1])))
                        - (float)(a3[2] * (float)(a2[4] * *a2))))
        * v9;
}
