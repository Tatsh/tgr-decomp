#include "types-win32.h"
//----- (10079390) --------------------------------------------------------
HRESULT __cdecl DICreateEffects(int a1, int unusedA2) {
  IDirectInputDevice2AVtbl *diDevice2AVtbl_1; // ecx
  IDirectInputDevice2AVtbl *diDevice2AVtbl;   // ecx
  DWORD rgdwAxes[2];                          // [esp+14h] [ebp-8h] BYREF

  gUnused118ABD24 = unusedA2;
  gUnused118ABD28 = unusedA2;
  gDIEffectSpring.rgdwAxes = rgdwAxes;
  diDevice2AVtbl_1 = gDirectInputDevice2A->lpVtbl;
  rgdwAxes[0] = 0;
  rgdwAxes[1] = 4;
  gDIEffectTypeSpecificParams = 0;
  gUnused118ABD0C = a1;
  gUnused118ABD10 = a1;
  gUnused118ABD14 = 10000;
  gUnused118ABD18 = 10000;
  gUnused118ABD1C = 0;
  gUnused118ABD20 = 0;
  gUnused118ABD2C = 10000;
  gUnused118ABD30 = 10000;
  gUnused118ABD34 = 0;
  gDIEffectSpring.dwSize = 52;
  gDIEffectSpring.dwFlags = 18;
  gDIEffectSpring.dwDuration = -1;
  gDIEffectSpring.dwSamplePeriod = 0;
  gDIEffectSpring.dwGain = 10000;
  gDIEffectSpring.dwTriggerButton = -1;
  gDIEffectSpring.dwTriggerRepeatInterval = 0;
  gDIEffectSpring.cAxes = 2;
  gDIEffectSpring.rglDirection = &gDIEffectRglDirection;
  gDIEffectSpring.lpEnvelope = 0;
  gDIEffectSpring.cbTypeSpecificParams = 48;
  gDIEffectSpring.lpvTypeSpecificParams = &gDIEffectTypeSpecificParams;
  if (!diDevice2AVtbl_1->CreateEffect(
          gDirectInputDevice2A, &CLSID_GUID_Spring, &gDIEffectSpring, &gDirectInputEffect0, 0)) {
    dword_118ABD78 = a1;
    gDirectInputEffect0Stopped = 1;
  }
  gDIEffectSquare.rgdwAxes = rgdwAxes;
  diDevice2AVtbl = gDirectInputDevice2A->lpVtbl;
  gDIEffectTypeSpecificParams0 = 10000;
  gUnused118ABAC4 = 0;
  gUnused118ABAC8 = 0;
  gUnused118ABACC = 250000;
  gDIEffectSquare.dwSize = 52;
  gDIEffectSquare.dwFlags = 18;
  gDIEffectSquare.dwDuration = gDIEffectSquareDuration;
  gDIEffectSquare.dwSamplePeriod = 0;
  gDIEffectSquare.dwGain = 10000;
  gDIEffectSquare.dwTriggerButton = -1;
  gDIEffectSquare.dwTriggerRepeatInterval = 0;
  gDIEffectSquare.cAxes = 2;
  gDIEffectSquare.rglDirection = &diEffectRglDirection_0;
  gDIEffectSquare.lpEnvelope = 0;
  gDIEffectSquare.cbTypeSpecificParams = 16;
  gDIEffectSquare.lpvTypeSpecificParams = &gDIEffectTypeSpecificParams0;
  return diDevice2AVtbl->CreateEffect(
      gDirectInputDevice2A, &CLSID_GUID_Square, &gDIEffectSquare, &gDirectInputEffect, 0);
}
// 100BD438: using guessed type int gDIEffectSquareDuration;
// 118ABAC0: using guessed type int gDIEffectTypeSpecificParams0;
// 118ABAC4: using guessed type int gUnused118ABAC4;
// 118ABAC8: using guessed type int gUnused118ABAC8;
// 118ABACC: using guessed type int gUnused118ABACC;
// 118ABD08: using guessed type int gDIEffectTypeSpecificParams;
// 118ABD0C: using guessed type int gUnused118ABD0C;
// 118ABD10: using guessed type int gUnused118ABD10;
// 118ABD14: using guessed type int gUnused118ABD14;
// 118ABD18: using guessed type int gUnused118ABD18;
// 118ABD1C: using guessed type int gUnused118ABD1C;
// 118ABD20: using guessed type int gUnused118ABD20;
// 118ABD24: using guessed type int gUnused118ABD24;
// 118ABD28: using guessed type int gUnused118ABD28;
// 118ABD2C: using guessed type int gUnused118ABD2C;
// 118ABD30: using guessed type int gUnused118ABD30;
// 118ABD34: using guessed type int gUnused118ABD34;
// 118ABD78: using guessed type int dword_118ABD78;
// 118ABDF8: using guessed type int gDirectInputEffect0Stopped;
