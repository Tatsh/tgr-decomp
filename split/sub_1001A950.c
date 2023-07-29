//----- (1001A950) --------------------------------------------------------
DDPIXELFORMAT *__cdecl sub_1001A950(DDPIXELFORMAT *pixelFormat)
{
  DDPIXELFORMAT *result; // eax
  DWORD v2; // eax

  result = pixelFormat;
  if ( pixelFormat )
  {
    v2 = pixelFormat->dwFlags;
    if ( (v2 & 0x800) != 0 )
    {
      result = (DDPIXELFORMAT *)1;
    }
    else if ( (v2 & 0x1000) != 0 )
    {
      result = (DDPIXELFORMAT *)1;
    }
    else if ( (v2 & 8) != 0 )
    {
      result = (DDPIXELFORMAT *)1;
    }
    else
    {
      result = (DDPIXELFORMAT *)(((unsigned __int8)pixelFormat->dwFlags >> 5) & 1);
    }
  }
  return result;
}
