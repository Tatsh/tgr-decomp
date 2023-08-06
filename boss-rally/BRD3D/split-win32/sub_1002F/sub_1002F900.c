#include "../../types-win32.h"
//----- (1002F900) --------------------------------------------------------
int __cdecl sub_1002F900(unsigned int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17)
{
  char v17; // bl
  int v18; // esi
  char v19; // di
  char v20; // bp
  int result; // eax
  char v22; // [esp+28h] [ebp+18h]
  char v23; // [esp+2Ch] [ebp+1Ch]
  char v24; // [esp+30h] [ebp+20h]
  char v25; // [esp+34h] [ebp+24h]
  char v26; // [esp+38h] [ebp+28h]
  char v27; // [esp+3Ch] [ebp+2Ch]
  char v28; // [esp+40h] [ebp+30h]
  char v29; // [esp+44h] [ebp+34h]
  char v30; // [esp+48h] [ebp+38h]
  char v31; // [esp+4Ch] [ebp+3Ch]
  char v32; // [esp+50h] [ebp+40h]

  v17 = sub_1002FAF0(a2);
  v18 = sub_1002FAF0(a3);
  v19 = sub_1002FAF0(a4);
  v20 = sub_1002FAF0(a5);
  v22 = sub_1002FAC0(a6);
  v23 = sub_1002FAC0(a7);
  v24 = sub_1002FAC0(a8);
  v25 = sub_1002FAC0(a9);
  v26 = sub_1002FAF0(a10);
  v27 = sub_1002FAF0(a11);
  v28 = sub_1002FAF0(a12);
  v29 = sub_1002FAF0(a13);
  v30 = sub_1002FAC0(a14);
  v31 = sub_1002FAC0(a15);
  v32 = sub_1002FAC0(a16);
  result = sub_1002FAC0(a17) & 7;
  *a1 = v28 & 0x1F | (32
                    * (v26 & 0xF | (16
                                  * (v24 & 7 | (8 * (v22 & 7 | (8 * ((32 * (v17 & 0xF | 0xFFFFFFC0)) | v19 & 0x1F))))))));
  a1[1] = result | (8
                  * (v31 & 7 | (8
                              * (v29 & 7 | (8
                                          * (v25 & 7 | (8
                                                      * (v23 & 7 | (8
                                                                  * (v20 & 7 | (8
                                                                              * (v32 & 7 | (8
                                                                                          * (v30 & 7 | (8 * (v27 & 0xF | (16 * v18)))))))))))))))));
  return result;
}
