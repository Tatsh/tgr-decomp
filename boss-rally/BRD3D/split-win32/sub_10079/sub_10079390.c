#include "../../types-win32.h"
//----- (10079390) --------------------------------------------------------
HRESULT __cdecl sub_10079390(int a1, int a2)
{
  IDirectInputDevice2AVtbl *diDevice2AVtbl_1; // ecx
  IDirectInputDevice2AVtbl *diDevice2AVtbl; // ecx
  DWORD rgdwAxes[2]; // [esp+14h] [ebp-8h] BYREF

  dword_118ABD24 = a2;
  dword_118ABD28 = a2;
  diEffect_0.rgdwAxes = rgdwAxes;
  diDevice2AVtbl_1 = g_DirectInputDevice2A->lpVtbl;
  rgdwAxes[0] = 0;
  rgdwAxes[1] = 4;
  diEffectTypeSpecificParams = 0;
  dword_118ABD0C = a1;
  dword_118ABD10 = a1;
  dword_118ABD14 = 10000;
  dword_118ABD18 = 10000;
  dword_118ABD1C = 0;
  dword_118ABD20 = 0;
  dword_118ABD2C = 10000;
  dword_118ABD30 = 10000;
  dword_118ABD34 = 0;
  diEffect_0.dwSize = 52;
  diEffect_0.dwFlags = 18;
  diEffect_0.dwDuration = -1;
  diEffect_0.dwSamplePeriod = 0;
  diEffect_0.dwGain = 10000;
  diEffect_0.dwTriggerButton = -1;
  diEffect_0.dwTriggerRepeatInterval = 0;
  diEffect_0.cAxes = 2;
  diEffect_0.rglDirection = &diEffectRglDirection;
  diEffect_0.lpEnvelope = 0;
  diEffect_0.cbTypeSpecificParams = 48;
  diEffect_0.lpvTypeSpecificParams = &diEffectTypeSpecificParams;
  if ( !diDevice2AVtbl_1->CreateEffect(
          g_DirectInputDevice2A,
          &CLSID_GUID_Spring,
          &diEffect_0,
          &g_DirectInputEffect_0,
          0) )
  {
    dword_118ABD78 = a1;
    dword_118ABDF8 = 1;
  }
  diEffect.rgdwAxes = rgdwAxes;
  diDevice2AVtbl = g_DirectInputDevice2A->lpVtbl;
  diEffectTypeSpecificParams_0 = 10000;
  dword_118ABAC4 = 0;
  dword_118ABAC8 = 0;
  dword_118ABACC = 250000;
  diEffect.dwSize = 52;
  diEffect.dwFlags = 18;
  diEffect.dwDuration = dword_100BD438;
  diEffect.dwSamplePeriod = 0;
  diEffect.dwGain = 10000;
  diEffect.dwTriggerButton = -1;
  diEffect.dwTriggerRepeatInterval = 0;
  diEffect.cAxes = 2;
  diEffect.rglDirection = &diEffectRglDirection_0;
  diEffect.lpEnvelope = 0;
  diEffect.cbTypeSpecificParams = 16;
  diEffect.lpvTypeSpecificParams = &diEffectTypeSpecificParams_0;
  return diDevice2AVtbl->CreateEffect(g_DirectInputDevice2A, &CLSID_GUID_Square, &diEffect, &g_DirectInputEffect, 0);
}
// 100BD438: using guessed type int dword_100BD438;
// 118ABAC0: using guessed type int diEffectTypeSpecificParams_0;
// 118ABAC4: using guessed type int dword_118ABAC4;
// 118ABAC8: using guessed type int dword_118ABAC8;
// 118ABACC: using guessed type int dword_118ABACC;
// 118ABD08: using guessed type int diEffectTypeSpecificParams;
// 118ABD0C: using guessed type int dword_118ABD0C;
// 118ABD10: using guessed type int dword_118ABD10;
// 118ABD14: using guessed type int dword_118ABD14;
// 118ABD18: using guessed type int dword_118ABD18;
// 118ABD1C: using guessed type int dword_118ABD1C;
// 118ABD20: using guessed type int dword_118ABD20;
// 118ABD24: using guessed type int dword_118ABD24;
// 118ABD28: using guessed type int dword_118ABD28;
// 118ABD2C: using guessed type int dword_118ABD2C;
// 118ABD30: using guessed type int dword_118ABD30;
// 118ABD34: using guessed type int dword_118ABD34;
// 118ABD78: using guessed type int dword_118ABD78;
// 118ABDF8: using guessed type int dword_118ABDF8;
