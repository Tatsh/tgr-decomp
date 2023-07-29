//----- (10028200) --------------------------------------------------------
int __cdecl sub_10028200(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // eax

  if ( a2 <= a3 )
  {
    v5 = 8 * a3 / a2;
    switch ( v5 )
    {
      case 64:
        result = 1;
        *a1 = 6;
        break;
      case 32:
        result = 1;
        *a1 = 5;
        break;
      case 16:
        *a1 = 4;
        result = 1;
        break;
      case 8:
        result = 1;
        *a1 = 3;
        break;
      default:
        if ( v5 <= 64 )
        {
          if ( v5 <= 32 )
          {
            if ( v5 <= 16 )
            {
              result = 0;
              *a1 = 3;
            }
            else
            {
              result = 0;
              *a1 = 4;
            }
          }
          else
          {
            *a1 = 5;
            result = 0;
          }
        }
        else
        {
          result = 0;
          *a1 = 6;
        }
        break;
    }
  }
  else
  {
    v3 = 8 * a2 / a3;
    switch ( v3 )
    {
      case 64:
        *a1 = 0;
        result = 1;
        break;
      case 32:
        result = 1;
        *a1 = 1;
        break;
      case 16:
        result = 1;
        *a1 = 2;
        break;
      default:
        if ( v3 <= 64 )
        {
          if ( v3 <= 32 )
          {
            if ( v3 <= 16 )
            {
              *a1 = 3;
              result = 0;
            }
            else
            {
              result = 0;
              *a1 = 2;
            }
          }
          else
          {
            result = 0;
            *a1 = 1;
          }
        }
        else
        {
          *a1 = 0;
          result = 0;
        }
        break;
    }
  }
  return result;
}
