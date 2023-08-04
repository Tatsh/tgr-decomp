#include "../../types-win32.h"
//----- (10030210) --------------------------------------------------------
void __cdecl GetDirectXVersion(_DWORD *dxVersion, _DWORD *out_b)
{
  DWORD result; // eax
  HMODULE dinputDllHmod; // eax
  HMODULE dinputDllHmod_2; // esi
  HRESULT (__stdcall *DirectInputCreateA)(HINSTANCE, DWORD, LPDIRECTINPUTA *, LPUNKNOWN); // ebx
  HMODULE drawDllHmod; // eax
  HMODULE drawDllHmod_2; // esi
  HRESULT (__stdcall *DirectDrawCreatePA)(GUID *, LPDIRECTDRAW *, IUnknown *); // eax
  IDirectDrawVtbl *ddrawVtbl; // ecx
  HMODULE dinputDllHmod_3; // eax
  HMODULE dinputDllHmod_4; // ebp
  HRESULT (__stdcall *DirectInputCreatePA)(HINSTANCE, DWORD, LPDIRECTINPUTA *, LPUNKNOWN); // edi
  IDirectDraw *ppvDDraw; // eax
  IDirectDrawVtbl *ddrawVtbl_2; // ecx
  IDirectDrawSurfaceVtbl *ppvDDrawSurfaceVtbl; // ecx
  IDirectDrawSurface *ppvDDrawSurface; // eax
  LPDIRECTDRAW lpDDraw; // [esp+38h] [ebp-130h]
  IDirectDraw *ppvDDraw3; // [esp+38h] [ebp-130h]
  IDirectDrawSurface *ppvDDrawSurfaceC; // [esp+38h] [ebp-130h]
  IDirectDraw *lplpDD; // [esp+54h] [ebp-114h] BYREF
  IDirectDrawSurface *ppvDDrawSurfaceB; // [esp+58h] [ebp-110h] BYREF
  IDirectDraw2 *ppvDDraw2; // [esp+5Ch] [ebp-10Ch] BYREF
  IDirectDrawSurface3 *ppvDDrawSurface3; // [esp+60h] [ebp-108h] BYREF
  IDirectDrawSurface4 *ppvDDrawSurface4; // [esp+64h] [ebp-104h] BYREF
  DDSURFACEDESC surfaceDesc; // [esp+68h] [ebp-100h] BYREF
  struct _OSVERSIONINFOA VersionInformation; // [esp+D4h] [ebp-94h] BYREF

  lplpDD = 0;
  ppvDDraw2 = 0;
  ppvDDrawSurfaceB = 0;
  ppvDDrawSurface3 = 0;
  ppvDDrawSurface4 = 0;
  VersionInformation.dwOSVersionInfoSize = 148;
  if ( !GetVersionExA(&VersionInformation) )
  {
    *dxVersion = 0;
    *out_b = 0;
    return;
  }
  if ( VersionInformation.dwPlatformId == 2 )
  {
    result = VersionInformation.dwMajorVersion;
    *out_b = 2;
    if ( result < 4 )
    {
      *out_b = 0;
      return;
    }
    if ( result == 4 )
    {
      *dxVersion = 512;
      dinputDllHmod = LoadLibraryA(g_DINPUT_DLL);
      dinputDllHmod_2 = dinputDllHmod;
      if ( dinputDllHmod )
      {
        DirectInputCreateA = (HRESULT (__stdcall *)(HINSTANCE, DWORD, LPDIRECTINPUTA *, LPUNKNOWN))GetProcAddress(
                                                                                                     dinputDllHmod,
                                                                                                     aDirectinputcre);
        FreeLibrary(dinputDllHmod_2);
        if ( DirectInputCreateA )
          *dxVersion = 768;
        else
          OutputDebugStringA(aCouldnTGetproc);
      }
      else
      {
        OutputDebugStringA(aCouldnTLoadlib);
      }
      return;
    }
  }
  else
  {
    *out_b = 1;
  }
  drawDllHmod = LoadLibraryA(LibFileName);
  drawDllHmod_2 = drawDllHmod;
  if ( drawDllHmod )
  {
    DirectDrawCreatePA = (HRESULT (__stdcall *)(GUID *, LPDIRECTDRAW *, IUnknown *))GetProcAddress(
                                                                                      drawDllHmod,
                                                                                      aDirectdrawcrea);
    if ( DirectDrawCreatePA )
    {
      if ( DirectDrawCreatePA(0, &lplpDD, 0) >= 0 )
      {
        ddrawVtbl = lplpDD->lpVtbl;
        lpDDraw = lplpDD;
        *dxVersion = 256;
        if ( ddrawVtbl->QueryInterface(lpDDraw, &CLSID_IDirectDraw2, &ppvDDraw2) >= 0 )
        {
          ppvDDraw2->lpVtbl->Release(ppvDDraw2);
          *dxVersion = 512;
          dinputDllHmod_3 = LoadLibraryA(g_DINPUT_DLL);
          dinputDllHmod_4 = dinputDllHmod_3;
          if ( dinputDllHmod_3 )
          {
            DirectInputCreatePA = (HRESULT (__stdcall *)(HINSTANCE, DWORD, LPDIRECTINPUTA *, LPUNKNOWN))GetProcAddress(dinputDllHmod_3, aDirectinputcre);
            FreeLibrary(dinputDllHmod_4);
            if ( DirectInputCreatePA )
            {
              memset(&surfaceDesc, 0, sizeof(surfaceDesc));
              ppvDDraw = lplpDD;
              ppvDDraw3 = lplpDD;
              *dxVersion = 768;
              ddrawVtbl_2 = ppvDDraw->lpVtbl;
              surfaceDesc.dwSize = 108;         // sizeof(DDSURFACEDESC)
              surfaceDesc.dwFlags = 1;          // DDSD_CAPS
              surfaceDesc.ddsCaps.dwCaps = 512; // DDSCAPS_PRIMARYSURFACE
              if ( ddrawVtbl_2->SetCooperativeLevel(ppvDDraw3, 0, 8) >= 0 )
              {
                if ( lplpDD->lpVtbl->CreateSurface(lplpDD, &surfaceDesc, &ppvDDrawSurfaceB, 0) >= 0 )
                {
                  if ( ppvDDrawSurfaceB->lpVtbl->QueryInterface(
                         ppvDDrawSurfaceB,
                         &CLSID_IDirectDrawSurface3,
                         (LPVOID *)&ppvDDrawSurface3) >= 0 )
                  {
                    ppvDDrawSurfaceVtbl = ppvDDrawSurfaceB->lpVtbl;
                    ppvDDrawSurfaceC = ppvDDrawSurfaceB;
                    *dxVersion = 1280;
                    if ( ppvDDrawSurfaceVtbl->QueryInterface(
                           ppvDDrawSurfaceC,
                           &CLSID_IDirectDrawSurface4,
                           (LPVOID *)&ppvDDrawSurface4) >= 0 )
                    {
                      ppvDDrawSurface = ppvDDrawSurfaceB;
                      *dxVersion = 1536;
                      ppvDDrawSurface->lpVtbl->Release(ppvDDrawSurface);
                    }
                  }
                  lplpDD->lpVtbl->Release(lplpDD);
                  FreeLibrary(drawDllHmod_2);
                }
                else
                {
                  lplpDD->lpVtbl->Release(lplpDD);
                  FreeLibrary(drawDllHmod_2);
                  *dxVersion = 0;
                  OutputDebugStringA(aCouldnTCreates);
                }
              }
              else
              {
                lplpDD->lpVtbl->Release(lplpDD);
                FreeLibrary(drawDllHmod_2);
                *dxVersion = 0;
                OutputDebugStringA(aCouldnTSetCoop);
              }
            }
            else
            {
              FreeLibrary(drawDllHmod_2);
              lplpDD->lpVtbl->Release(lplpDD);
              OutputDebugStringA(aCouldnTGetproc);
            }
          }
          else
          {
            OutputDebugStringA(aCouldnTLoadlib);
            lplpDD->lpVtbl->Release(lplpDD);
            FreeLibrary(drawDllHmod_2);
          }
        }
        else
        {
          lplpDD->lpVtbl->Release(lplpDD);
          FreeLibrary(drawDllHmod_2);
          OutputDebugStringA(aCouldnTQiDdraw);
        }
      }
      else
      {
        *dxVersion = 0;
        *out_b = 0;
        FreeLibrary(drawDllHmod_2);
        OutputDebugStringA(aCouldnTCreateD);
      }
    }
    else
    {
      *dxVersion = 0;
      *out_b = 0;
      FreeLibrary(drawDllHmod_2);
      OutputDebugStringA(aCouldnTLoadlib_0);
    }
  }
  else
  {
    *dxVersion = 0;
    *out_b = 0;
    FreeLibrary(0);
  }
}
