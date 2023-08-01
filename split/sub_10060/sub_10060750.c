//----- (10060750) --------------------------------------------------------
int __thiscall sub_10060750(_DWORD *this, int a2) {
    int result; // eax

    result = this[20];
    if (result && *((_DWORD *)dword_10AA2904 + 3)) {
        if (dword_10AA33E0)
            result = (*(int(__stdcall **)(int))(*(_DWORD *)result + 32))(result);
        else
            result = (*(int(__stdcall **)(int))(*(_DWORD *)result + 28))(result);
    }
    return result;
}
// 10AA33E0: using guessed type int dword_10AA33E0;
