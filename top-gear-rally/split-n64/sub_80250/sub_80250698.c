#include "../../types-n64.h"
//----- (80250698) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80250698()
{
  int v0; // $s1
  int *v1; // $s0
  int result; // $v0

  sub_80246F90(184, 149, 272, 182, 3, 0, 0);
  sub_8022F5D0(16);
  sub_8022F504();
  sub_8022F4F8();
  formatter("%rySELECT STYLE", 160, 91);
  v0 = 0;
  v1 = (int *)&off_8028DB44;
  do
  {
    if ( v0 )
    {
      sub_80245470(*v1);
      ++v0;
    }
    else
    {
      sub_8024594C(*v1, *(_DWORD *)(*v1 + 28), *(_DWORD *)(*v1 + 32), *(_DWORD *)(*v1 + 36), *(_DWORD *)(*v1 + 40));
      v0 = 1;
    }
    ++v1;
  }
  while ( v0 != 4 );
  sub_80246F90(206, 257, 228, 30, 1, 1, 1);
  sub_8022F5D0(11);
  sub_8022F530(255, 255, 255, 255, 245, 0);
  formatter("FILLED OVAL", 159, 139);
  sub_8022F5D0(10);
  sub_8022F514();
  formatter("%wwSELECT", 122, 158);
  formatter("%wwCANCEL", 179, 158);
  sub_80245604((int)&dword_8028D0B0, 214, 299);
  sub_80245604((int)&dword_8028D0E0, 328, 299);
  sub_80255ADC((int)dword_8036A8E0);
  result = sub_80255910(dword_8036A8E0, 32);
  byte_8028DBE0 = 0;
  return result;
}
// 80250B10: write access to const memory at 8028CF8C has been detected
// 80250B20: write access to const memory at 8028DBE0 has been detected
// 80250B38: write access to const memory at 8028DBE0 has been detected
// 8025079C: write access to const memory at 8028DBB8 has been detected
// 80250A28: write access to const memory at 8028DBB8 has been detected
// 80250A2C: write access to const memory at 8028DBB8 has been detected
// 80250A88: write access to const memory at 8028DBB8 has been detected
// 80250AC4: write access to const memory at 8028DBB8 has been detected
// 80250A64: conditional instruction was optimized away because of '$t1.4==0'
// 8028CF8C: using guessed type char byte_8028CF8C;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DB44: using guessed type int *off_8028DB44;
// 8028DBB8: using guessed type char byte_8028DBB8;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8036A8E0: using guessed type int dword_8036A8E0[];
