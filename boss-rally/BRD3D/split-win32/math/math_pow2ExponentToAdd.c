#include "types-win32.h"
//----- (100251A0) --------------------------------------------------------
int __cdecl math_pow2ExponentToAdd(DWORD *outExponent, int a2, int a3) {
    int result; // eax

    if (a2 <= a3) {
        if (a3 > 1) {
            if (a3 > 2) {
                if (a3 > 4) {
                    if (a3 > 8) {
                        if (a3 > 16) {
                            if (a3 > 32) {
                                if (a3 > 64) {
                                    if (a3 > 128) {
                                        if (a3 > 256) {
                                            result = 0;
                                            *outExponent = 0;
                                        } else {
                                            *outExponent = 0;
                                            result = 1;
                                        }
                                    } else {
                                        result = 1;
                                        *outExponent = 1;
                                    }
                                } else {
                                    result = 1;
                                    *outExponent = 2;
                                }
                            } else {
                                *outExponent = 3;
                                result = 1;
                            }
                        } else {
                            result = 1;
                            *outExponent = 4;
                        }
                    } else {
                        result = 1;
                        *outExponent = 5;
                    }
                } else {
                    *outExponent = 6;
                    result = 1;
                }
            } else {
                result = 1;
                *outExponent = 7;
            }
        } else {
            result = 1;
            *outExponent = 8;
        }
    } else if (a2 > 1) {
        if (a2 > 2) {
            if (a2 > 4) {
                if (a2 > 8) {
                    if (a2 > 16) {
                        if (a2 > 32) {
                            if (a2 > 64) {
                                if (a2 > 128) {
                                    if (a2 > 256) {
                                        *outExponent = 0;
                                        result = 0;
                                    } else {
                                        result = 1;
                                        *outExponent = 0;
                                    }
                                } else {
                                    result = 1;
                                    *outExponent = 1;
                                }
                            } else {
                                *outExponent = 2;
                                result = 1;
                            }
                        } else {
                            result = 1;
                            *outExponent = 3;
                        }
                    } else {
                        result = 1;
                        *outExponent = 4;
                    }
                } else {
                    *outExponent = 5;
                    result = 1;
                }
            } else {
                result = 1;
                *outExponent = 6;
            }
        } else {
            result = 1;
            *outExponent = 7;
        }
    } else {
        *outExponent = 8;
        result = 1;
    }
    return result;
}
