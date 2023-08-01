//----- (10003290) --------------------------------------------------------
void __cdecl CHK_FClose(CHK_File *cFile) {
    CHAR debugMessage[1024]; // [esp+8h] [ebp-400h] BYREF

    if (debugOutput) {
        sprintf(debugMessage, "CHK_FClose(%s)\n", cFile->szName);
        OutputDebugStringA(debugMessage);
    }
    if (fclose(cFile->pfil) == -1) {
        sprintf(debugMessage, "CHK_FClose(): error closing file %s.\n", cFile->szName);
        OutputDebugStringA(debugMessage);
        exit(1);
    }
    free((void *)cFile->szName);
    free(cFile);
}
// 10220CE0: using guessed type int debugOutput;
