#include "../../types-win32.h"
//----- (10076B20) --------------------------------------------------------
int __thiscall meth_10076B20(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  meth_10075340(this);
  meth_10075340(this + 2511);
  this[2527] = 0x3F060A92;
  meth_10075340(this + 2528);
  this[2544] = 0x3F060A92;
  meth_10075340(this + 2545);
  this[2561] = 0x3F060A92;
  meth_10075340(this + 2562);
  this[2578] = 0x3F060A92;
  meth_10075340(this + 2596);
  this[2612] = 0x3F060A92;
  this[2509] = this + 2511;
  meth_10075340(this + 16);
  meth_10075340(this + 32);
  meth_10075340(this + 48);
  meth_10075340(this + 64);
  meth_100767A0(this, 0, 0, 0);
  v2 = this[2673];
  this[995] = 0;
  this[996] = 0;
  this[2510] = 0;
  qmemcpy(this + 906, (const void *)(v2 + 152), 0x30u);
  v3 = this[935];
  this[918] = *(char *)(v2 + 216);
  this[920] = v3;
  this[919] = *(char *)(v2 + 150);
  this[208] = *(_DWORD *)(v2 + 200);
  this[209] = *(_DWORD *)(v2 + 204);
  this[210] = *(_DWORD *)(v2 + 208);
  this[211] = *(_DWORD *)(v2 + 212);
  result = *(char *)(v2 + 151);
  this[2673] = 0;
  this[921] = result;
  return result;
}
