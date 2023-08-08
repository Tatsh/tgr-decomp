#include "../types-win32.h"
//----- (1002A8A0) --------------------------------------------------------
HMODULE __cdecl loadEARDLL(int useEarpdsDll) {
    HMODULE result;           // eax
    const char *dllFilename;  // edi
    CHAR finalModuleName[12]; // [esp+10h] [ebp-Ch] BYREF

    if (hModule && EAR_DLL_UpdateEar)
        return (HMODULE)1;
    if (useEarpdsDll) {
        dword_105754DC = 1;
        dllFilename = aEarpdsDll;
    } else {
        dllFilename = aEariasDll;
    }
    strcpy(finalModuleName, dllFilename);
    result = GetModuleHandleA(finalModuleName);
    hModule = result;
    if (result)
        goto LABEL_12;
    dword_105754D4 = 1;
    result = LoadLibraryA(finalModuleName);
    hModule = result;
    if (result || useEarpdsDll ||
        (dword_105754D4 = 0,
         dword_105754D8 = 1,
         result = GetModuleHandleA(aEarpdsDll),
         (hModule = result) != 0) ||
        (dword_105754D4 = 1, result = LoadLibraryA(aEarpdsDll), (hModule = result) != 0)) {
    LABEL_12:
        if (!EAR_DLL_UpdateEar) {
            EAR_DLL_AAA_Validate = (int(__stdcall *)(_DWORD))GetProcAddress(result, ProcName);
            EAR_DLL_AssignHwnd = (int(__stdcall *)(_DWORD))GetProcAddress(hModule, aEarDllAssignhw);
            EAR_DLL_ChangeChannelControl =
                (int(__stdcall *)(_DWORD, _DWORD))GetProcAddress(hModule, aEarDllChangech);
            EAR_DLL_ClearChannel =
                (int(__stdcall *)(_DWORD, _DWORD))GetProcAddress(hModule, aEarDllClearcha);
            EAR_DLL_EarInactive = (int)GetProcAddress(hModule, aEarDllEarinact);
            EAR_DLL_GetEventStatus = (int)GetProcAddress(hModule, aEarDllGetevent);
            EAR_DLL_GetLastError = GetProcAddress(hModule, aEarDllGetlaste);
            EAR_DLL_GetVersion = (int)GetProcAddress(hModule, aEarDllGetversi);
            EAR_DLL_InitializeEar =
                (int(__stdcall *)(_DWORD))GetProcAddress(hModule, aEarDllInitiali);
            EAR_DLL_MixEvent = (int(__stdcall *)(_DWORD))GetProcAddress(hModule, aEarDllMixevent);
            EAR_DLL_MoveEvent = (int)GetProcAddress(hModule, aEarDllMoveeven);
            EAR_DLL_RegisterBank = (int)GetProcAddress(hModule, aEarDllRegister);
            EAR_DLL_RegisterChannel =
                (int(__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(hModule,
                                                                                 aEarDllRegister_0);
            EAR_DLL_RegisterEnvironment = (int)GetProcAddress(hModule, aEarDllRegister_1);
            EAR_DLL_RegisterMatrix =
                (int(__stdcall *)(_DWORD))GetProcAddress(hModule, aEarDllRegister_2);
            EAR_DLL_RegisterPreset = (int)GetProcAddress(hModule, aEarDllRegister_3);
            EAR_DLL_ResetEar = (int)GetProcAddress(hModule, aEarDllResetear);
            EAR_DLL_SetAttenuationLevel =
                (int(__stdcall *)(_DWORD, _DWORD))GetProcAddress(hModule, aEarDllSetatten);
            EAR_DLL_SetUserDistanceUnit = (int)GetProcAddress(hModule, aEarDllSetuserd);
            EAR_DLL_ShowLastError = GetProcAddress(hModule, aEarDllShowlast);
            EAR_DLL_ShutDownBank = (int)GetProcAddress(hModule, aEarDllShutdown);
            EAR_DLL_ShutDownChannel =
                (int(__stdcall *)(_DWORD))GetProcAddress(hModule, aEarDllShutdown_0);
            EAR_DLL_ShutDownEar = GetProcAddress(hModule, aEarDllShutdown_1);
            EAR_DLL_ShutDownEnvironment = (int)GetProcAddress(hModule, aEarDllShutdown_2);
            EAR_DLL_ShutDownEvent = (int)GetProcAddress(hModule, aEarDllShutdown_3);
            EAR_DLL_ShutDownMatrix = (int)GetProcAddress(hModule, aEarDllShutdown_4);
            EAR_DLL_ShutDownPreset = (int)GetProcAddress(hModule, aEarDllShutdown_5);
            EAR_DLL_StartEvent = (int)GetProcAddress(hModule, aEarDllStarteve);
            EAR_DLL_StartTimer = (int)GetProcAddress(hModule, aEarDllStarttim);
            EAR_DLL_ShutDownTimer = (int)GetProcAddress(hModule, aEarDllShutdown_6);
            EAR_DLL_UpdateEar = (int)GetProcAddress(hModule, aEarDllUpdateea);
            if (EAR_DLL_EarInactive == 0 || EAR_DLL_GetEventStatus == 0 ||
                EAR_DLL_ChangeChannelControl == 0 || EAR_DLL_ClearChannel == 0 ||
                EAR_DLL_AAA_Validate == 0 || EAR_DLL_AssignHwnd == 0 || EAR_DLL_ShutDownBank == 0 ||
                EAR_DLL_ShutDownChannel == 0 || EAR_DLL_SetUserDistanceUnit == 0 ||
                EAR_DLL_ShowLastError == 0 || EAR_DLL_ResetEar == 0 ||
                EAR_DLL_SetAttenuationLevel == 0 || EAR_DLL_RegisterMatrix == 0 ||
                EAR_DLL_RegisterPreset == 0 || EAR_DLL_RegisterChannel == 0 ||
                EAR_DLL_RegisterEnvironment == 0 || EAR_DLL_MoveEvent == 0 ||
                EAR_DLL_RegisterBank == 0 || EAR_DLL_InitializeEar == 0 || EAR_DLL_MixEvent == 0 ||
                EAR_DLL_GetLastError == 0 || EAR_DLL_GetVersion == 0 || EAR_DLL_UpdateEar == 0 ||
                EAR_DLL_StartEvent == 0 || EAR_DLL_StartTimer == 0 || EAR_DLL_ShutDownPreset == 0 ||
                EAR_DLL_ShutDownTimer == 0 || EAR_DLL_ShutDownEvent == 0 ||
                EAR_DLL_ShutDownMatrix == 0 || EAR_DLL_ShutDownEar == 0 ||
                EAR_DLL_ShutDownEnvironment == 0) {
                return 0;
            }
            aEarInteractiveMessageID = RegisterWindowMessageA(aEarInteractive);
        }
        result = (HMODULE)1;
    }
    return result;
}
// 10575450: using guessed type int EAR_DLL_GetVersion;
// 10575454: using guessed type int (__stdcall *EAR_DLL_SetAttenuationLevel)(_DWORD, _DWORD);
// 10575458: using guessed type int EAR_DLL_ShutDownBank;
// 1057545C: using guessed type int EAR_DLL_ShutDownMatrix;
// 10575460: using guessed type int EAR_DLL_EarInactive;
// 10575468: using guessed type int EAR_DLL_ShutDownTimer;
// 1057546C: using guessed type int (__stdcall *EAR_DLL_MixEvent)(_DWORD);
// 10575470: using guessed type int (__stdcall *EAR_DLL_ShutDownChannel)(_DWORD);
// 10575474: using guessed type int (*EAR_DLL_ShutDownEar)(void);
// 10575478: using guessed type int aEarInteractiveMessageID;
// 1057547C: using guessed type int EAR_DLL_StartEvent;
// 10575480: using guessed type int (__stdcall *EAR_DLL_ClearChannel)(_DWORD, _DWORD);
// 10575484: using guessed type int (__stdcall *EAR_DLL_ChangeChannelControl)(_DWORD, _DWORD);
// 10575488: using guessed type int EAR_DLL_MoveEvent;
// 1057548C: using guessed type int (__stdcall *EAR_DLL_AssignHwnd)(_DWORD);
// 10575490: using guessed type int EAR_DLL_ShutDownPreset;
// 10575494: using guessed type int EAR_DLL_ResetEar;
// 10575498: using guessed type int EAR_DLL_ShutDownEvent;
// 1057549C: using guessed type int EAR_DLL_StartTimer;
// 105754A0: using guessed type int (__stdcall *EAR_DLL_RegisterChannel)(_DWORD, _DWORD, _DWORD, _DWORD);
// 105754A4: using guessed type int EAR_DLL_ShutDownEnvironment;
// 105754A8: using guessed type int (*EAR_DLL_ShowLastError)(void);
// 105754AC: using guessed type int EAR_DLL_RegisterEnvironment;
// 105754B0: using guessed type int (__stdcall *EAR_DLL_AAA_Validate)(_DWORD);
// 105754B4: using guessed type int EAR_DLL_GetEventStatus;
// 105754B8: using guessed type int EAR_DLL_SetUserDistanceUnit;
// 105754BC: using guessed type int EAR_DLL_UpdateEar;
// 105754C0: using guessed type int (__stdcall *EAR_DLL_InitializeEar)(_DWORD);
// 105754C4: using guessed type int (*EAR_DLL_GetLastError)(void);
// 105754C8: using guessed type int EAR_DLL_RegisterPreset;
// 105754CC: using guessed type int EAR_DLL_RegisterBank;
// 105754D0: using guessed type int (__stdcall *EAR_DLL_RegisterMatrix)(_DWORD);
// 105754D4: using guessed type int dword_105754D4;
// 105754D8: using guessed type int dword_105754D8;
// 105754DC: using guessed type int dword_105754DC;
