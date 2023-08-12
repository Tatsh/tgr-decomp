#include "types-win32.h"
//----- (1007A590) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_WINDOWPOSCHANGING(HWND hWnd, WPARAM wParam, LPARAM lParam) {
  HWND v3;             // esi
  LONG v4;             // eax
  unk00334 *v5;        // ebp
  unsigned int v6;     // esi
  unsigned int v7;     // edi
  int v8;              // ebp
  unsigned int v9;     // ecx
  unsigned int v10;    // eax
  int v11;             // eax
  int v12;             // edx
  int v14;             // [esp+10h] [ebp-20h] BYREF
  int v15;             // [esp+14h] [ebp-1Ch]
  int v16;             // [esp+18h] [ebp-18h]
  int v17;             // [esp+1Ch] [ebp-14h]
  struct tagRECT Rect; // [esp+20h] [ebp-10h] BYREF

  v3 = hWnd;
  v4 = GetWindowLongA(hWnd, GWL_USERDATA);
  v5 = (unk00334 *)v4;
  if (v4 && (*(_BYTE *)(v4 + 28) & 2) != 0 && !dword_118AC230 && lParam) {
    if (IsIconic(hWnd)) {
      dword_118AC230 = 1;
    } else {
      GetWindowRect(hWnd, &Rect);
      v6 = abs32(Rect.right - Rect.left);
      v7 = abs32(Rect.bottom - Rect.top);
      meth_unk00334_1000B350(v5, &v14);
      v8 = v14;
      v9 = abs32(v16 - v14);
      v10 = abs32(v17 - v15);
      if (v9 < 0x140)
        v9 = 320;
      if (v10 < 0xC8)
        v10 = 200;
      if (v9 == v6 && v10 == v7) {
        v11 = *(_DWORD *)(lParam + 24);
        LOBYTE(v11) = v11 | 3;
      } else {
        v12 = v15;
        *(_DWORD *)(lParam + 20) = v10;
        v11 = *(_DWORD *)(lParam + 24);
        *(_DWORD *)(lParam + 8) = v8;
        *(_DWORD *)(lParam + 12) = v12;
        *(_DWORD *)(lParam + 16) = v9;
        LOBYTE(v11) = v11 & 0xFC;
      }
      v3 = hWnd;
      *(_DWORD *)(lParam + 24) = v11;
    }
  }
  return DefWindowProcA(v3, 0x46u, wParam, lParam);
}
// 118AC230: using guessed type int dword_118AC230;
