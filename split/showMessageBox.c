//----- (1003DBC0) --------------------------------------------------------
int __cdecl showMessageBox(LPCSTR format, int errno) {
    char *v2;       // eax
    LPCSTR caption; // eax
    CHAR text[200]; // [esp+0h] [ebp-C8h] BYREF

    v2 = errorString(errno);
    wsprintfA(text, format, v2);
    caption = getCaptionString(0x126u);
    return MessageBoxA(0, text, caption, 0);
}
