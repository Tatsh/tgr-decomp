//----- (10079C40) --------------------------------------------------------
int sub_10079C40()
{
  gameSpecificUnk0 *v0; // esi

  if ( g_HWND && IsWindow(g_HWND) )
  {
    DestroyWindow(g_HWND);
    g_HWND = 0;
  }
  v0 = g_gsu0;
  if ( g_gsu0 )
  {
    sub_1000A1C0(g_gsu0);
    operator delete(v0);
    g_gsu0 = 0;
  }
  return 0;
}
