#include "decls.h"

//----- (00401410) --------------------------------------------------------
bool IsPlaybackStateStopped2() {
    return gPlaybackState == PLAYBACK_STATE_STOPPED || gPlaybackState == PLAYBACK_STATE_2;
}

//----- (00401430) --------------------------------------------------------
bool IsPlaybackStateFailed() {
    return gPlaybackState == PLAYBACK_STATE_FAILED || gPlaybackState == PLAYBACK_STATE_2;
}

//----- (00401450) --------------------------------------------------------
bool IsPlaybackStateStopped() {
    return gPlaybackState == PLAYBACK_STATE_STOPPED;
}

//----- (00401460) --------------------------------------------------------
bool IsPlaybackInitialized() {
    return gPlaybackState != PLAYBACK_STATE_INIT;
}

//----- (00401470) --------------------------------------------------------
enum MACRO_PLAYBACK_STATE SetPlaybackState(enum MACRO_PLAYBACK_STATE newValue) {
    enum MACRO_PLAYBACK_STATE result; // eax
    result = newValue;
    gPlaybackState = newValue;
    return result;
}
