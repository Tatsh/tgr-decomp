#include "types-win32.h"
//----- (10060030) --------------------------------------------------------
int __cdecl showMessageBox_0(HWND hWnd, HRESULT hr, LPCSTR lpText) {
    const CHAR *caption; // eax

    caption = GetStringWithIndex(0xAAu);
    return MessageBoxA(hWnd, lpText, caption, 0);
}
