#include "types-win32.h"
//----- (10028720) --------------------------------------------------------
int *__cdecl sub_10028720(int *a1, int *a2, int a3, int a4) {
  int *v4;     // ecx
  int *result; // eax
  int v6;      // eax
  int v7;      // eax
  int v8;      // eax

  switch (a3) {
  case 0:
    v4 = a1;
    *a1 = 256;
    break;
  case 1:
    v4 = a1;
    *a1 = 128;
    break;
  case 2:
    v4 = a1;
    *a1 = 64;
    break;
  case 3:
    v4 = a1;
    *a1 = 32;
    break;
  case 4:
    v4 = a1;
    *a1 = 16;
    break;
  case 5:
    v4 = a1;
    *a1 = 8;
    break;
  case 6:
    v4 = a1;
    *a1 = 4;
    break;
  case 7:
    v4 = a1;
    *a1 = 2;
    break;
  default:
    v4 = a1;
    *a1 = 1;
    break;
  }
  result = (int *)a4;
  switch (a4) {
  case 0:
    result = (int *)(*v4 / 8);
    *a2 = (int)result;
    break;
  case 1:
    result = (int *)(*v4 / 4);
    *a2 = (int)result;
    break;
  case 2:
    result = (int *)(*v4 / 2);
    *a2 = (int)result;
    break;
  case 3:
    result = a2;
    *a2 = *v4;
    break;
  case 4:
    v6 = *v4;
    *a2 = *v4;
    result = (int *)(v6 / 2);
    *v4 = (int)result;
    break;
  case 5:
    v7 = *v4;
    *a2 = *v4;
    result = (int *)(v7 / 4);
    *v4 = (int)result;
    break;
  case 6:
    v8 = *v4;
    *a2 = *v4;
    result = (int *)(v8 / 8);
    *v4 = (int)result;
    break;
  default:
    return result;
  }
  return result;
}
