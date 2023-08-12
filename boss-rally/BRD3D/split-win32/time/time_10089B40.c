#include "types-win32.h"
//----- (10089B40) --------------------------------------------------------
BOOL __cdecl time_10089B40(_DWORD *a1) {
    BOOL result; // eax
    int year;    // eax
    int v3;      // ecx
    int v4;      // eax
    int year_1;  // [esp-24h] [ebp-2Ch]
    int v6;      // [esp-20h] [ebp-28h]
    int v7;      // [esp-1Ch] [ebp-24h]
    int v8;      // [esp-18h] [ebp-20h]
    int v9;      // [esp-10h] [ebp-18h]
    int v10;     // [esp-Ch] [ebp-14h]
    int v11;     // [esp-8h] [ebp-10h]
    int v12;     // [esp-4h] [ebp-Ch]

    if (!dword_100C0C44)
        return 0;
    year = a1[5];
    if (year != dword_100C0CD8 || year != dword_100C0CE8) {
        if (dword_118AC608) {
            if (TimeZoneInformation.DaylightDate.wYear)
                cvtdate(1,
                        0,
                        year,
                        TimeZoneInformation.DaylightDate.wMonth,
                        0,
                        0,
                        TimeZoneInformation.DaylightDate.wDay,
                        TimeZoneInformation.DaylightDate.wHour,
                        TimeZoneInformation.DaylightDate.wMinute,
                        TimeZoneInformation.DaylightDate.wSecond,
                        TimeZoneInformation.DaylightDate.wMilliseconds);
            else
                cvtdate(1,
                        1,
                        year,
                        TimeZoneInformation.DaylightDate.wMonth,
                        TimeZoneInformation.DaylightDate.wDay,
                        TimeZoneInformation.DaylightDate.wDayOfWeek,
                        0,
                        TimeZoneInformation.DaylightDate.wHour,
                        TimeZoneInformation.DaylightDate.wMinute,
                        TimeZoneInformation.DaylightDate.wSecond,
                        TimeZoneInformation.DaylightDate.wMilliseconds);
            if (TimeZoneInformation.StandardDate.wYear) {
                cvtdate(0,
                        0,
                        a1[5],
                        TimeZoneInformation.StandardDate.wMonth,
                        0,
                        0,
                        TimeZoneInformation.StandardDate.wDay,
                        TimeZoneInformation.StandardDate.wHour,
                        TimeZoneInformation.StandardDate.wMinute,
                        TimeZoneInformation.StandardDate.wSecond,
                        TimeZoneInformation.StandardDate.wMilliseconds);
                goto LABEL_14;
            }
            v12 = TimeZoneInformation.StandardDate.wMilliseconds;
            v11 = TimeZoneInformation.StandardDate.wSecond;
            v10 = TimeZoneInformation.StandardDate.wMinute;
            v9 = TimeZoneInformation.StandardDate.wHour;
            v8 = TimeZoneInformation.StandardDate.wDayOfWeek;
            v7 = TimeZoneInformation.StandardDate.wDay;
            v6 = TimeZoneInformation.StandardDate.wMonth;
            year_1 = a1[5];
        } else {
            cvtdate(1, 1, year, 4, 1, 0, 0, 2, 0, 0, 0);
            v12 = 0;
            v11 = 0;
            v10 = 0;
            v9 = 2;
            v8 = 0;
            v7 = 5;
            v6 = 10;
            year_1 = a1[5];
        }
        cvtdate(0, 1, year_1, v6, v7, v8, 0, v9, v10, v11, v12);
    }
LABEL_14:
    v3 = a1[7];
    if (dword_100C0CDC < dword_100C0CEC) {
        if (v3 >= dword_100C0CDC && v3 <= dword_100C0CEC) {
            if (v3 > dword_100C0CDC && v3 < dword_100C0CEC)
                return 1;
            goto LABEL_25;
        }
        return 0;
    }
    if (v3 < dword_100C0CEC || v3 > dword_100C0CDC)
        return 1;
    if (v3 > dword_100C0CEC && v3 < dword_100C0CDC)
        return 0;
LABEL_25:
    v4 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2]));
    if (v3 == dword_100C0CDC)
        result = v4 >= dword_100C0CE0;
    else
        result = v4 < dword_100C0CF0;
    return result;
}
// 100C0C44: using guessed type int dword_100C0C44;
// 100C0CD8: using guessed type int dword_100C0CD8;
// 100C0CDC: using guessed type int dword_100C0CDC;
// 100C0CE0: using guessed type int dword_100C0CE0;
// 100C0CE8: using guessed type int dword_100C0CE8;
// 100C0CEC: using guessed type int dword_100C0CEC;
// 100C0CF0: using guessed type int dword_100C0CF0;
// 118AC608: using guessed type int dword_118AC608;

// nfuncs=1971 queued=1562 decompiled=1562 lumina nreq=0 worse=0 better=0
#error "There were 4 decompilation failure(s) on 1562 function(s)"
