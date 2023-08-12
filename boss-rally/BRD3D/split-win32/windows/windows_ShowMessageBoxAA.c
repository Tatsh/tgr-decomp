#include "types-win32.h"
//----- (10060030) --------------------------------------------------------
int __cdecl windows_ShowMessageBoxAA(HWND hWnd, HRESULT hr, LPCSTR lpText) {
    const CHAR *caption; // eax

    caption = text_GetStringWithIndex(0xAAu);
    return MessageBoxA(hWnd, lpText, caption, 0);
}
