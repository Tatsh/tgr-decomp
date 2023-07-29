//----- (100771B0) --------------------------------------------------------
int __cdecl sub_100771B0(void *a1)
{
  int result; // eax

  if ( !g_lpDirectInputDeviceA )
    return 1;
  result = g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(g_lpDirectInputDeviceA, 256, a1);
  if ( result < 0 && result == -2147024866 )
  {
    result = g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA);
    if ( result >= 0 )
      result = g_lpDirectInputDeviceA->lpVtbl->GetDeviceState(g_lpDirectInputDeviceA, 256, a1);
  }
  return result;
}
