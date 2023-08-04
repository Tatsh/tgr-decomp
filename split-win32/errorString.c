#include "../types-win32.h"
//----- (1003DC10) --------------------------------------------------------
char *__cdecl errorString(int a1)
{
  if ( a1 <= -2147467263 )
  {
    if ( a1 == -2147467263 )
      return aDperrUnsupport;
    if ( a1 == -2147483638 )
      return aDperrPending;
    goto LABEL_143;
  }
  if ( a1 <= -2147467259 )
  {
    if ( a1 == -2147467259 )
      return aDperrGeneric;
    if ( a1 == -2147467262 )
      return aDperrNointerfa;
    goto LABEL_143;
  }
  if ( a1 <= -2147024809 )
  {
    if ( a1 == -2147024809 )
      return aDperrInvalidpa;
    if ( a1 == -2147024882 )
      return aDperrOutofmemo;
    goto LABEL_143;
  }
  if ( a1 <= -2005467126 )
  {
    if ( a1 == -2005467126 )
      return aDperrAccessden;
    if ( a1 == -2005467131 )
      return aDperrAlreadyin;
    goto LABEL_143;
  }
  if ( a1 <= -2005467106 )
  {
    if ( a1 == -2005467106 )
      return aDperrBuffertoo;
    if ( a1 == -2005467116 )
      return aDperrActivepla;
    goto LABEL_143;
  }
  if ( a1 <= -2005467086 )
  {
    if ( a1 == -2005467086 )
      return aDperrCantcreat;
    if ( a1 == -2005467096 )
      return aDperrCantaddpl;
    goto LABEL_143;
  }
  if ( a1 <= -2005467066 )
  {
    if ( a1 == -2005467066 )
      return aDperrCantcreat_1;
    if ( a1 == -2005467076 )
      return aDperrCantcreat_0;
    goto LABEL_143;
  }
  if ( a1 <= -2005467046 )
  {
    if ( a1 == -2005467046 )
      return aDperrException;
    if ( a1 == -2005467056 )
      return aDperrCapsnotav;
    goto LABEL_143;
  }
  if ( a1 <= -2005467006 )
  {
    if ( a1 == -2005467006 )
      return aDperrInvalidob;
    if ( a1 == -2005467016 )
      return aDperrInvalidfl;
    goto LABEL_143;
  }
  if ( a1 <= -2005466981 )
  {
    if ( a1 == -2005466981 )
      return aDperrInvalidgr;
    if ( a1 == -2005466986 )
      return aDperrInvalidpl;
    goto LABEL_143;
  }
  if ( a1 <= -2005466966 )
  {
    if ( a1 == -2005466966 )
      return aDperrNoconnect;
    if ( a1 == -2005466976 )
      return aDperrNocaps;
    goto LABEL_143;
  }
  if ( a1 <= -2005466936 )
  {
    if ( a1 == -2005466936 )
      return aDperrNonameser;
    if ( a1 == -2005466946 )
      return aDperrNomessage;
    goto LABEL_143;
  }
  if ( a1 <= -2005466916 )
  {
    if ( a1 == -2005466916 )
      return aDperrNosession;
    if ( a1 == -2005466926 )
      return aDperrNoplayers;
    goto LABEL_143;
  }
  if ( a1 <= -2005466896 )
  {
    if ( a1 == -2005466896 )
      return aDperrTimeout;
    if ( a1 == -2005466906 )
      return aDperrSendtoobi;
    goto LABEL_143;
  }
  if ( a1 <= -2005466866 )
  {
    if ( a1 == -2005466866 )
      return aDperrBusy;
    if ( a1 == -2005466886 )
      return aDperrUnavailab;
    goto LABEL_143;
  }
  if ( a1 <= -2005466846 )
  {
    if ( a1 == -2005466846 )
      return aDperrCannotcre;
    if ( a1 == -2005466856 )
      return aDperrUsercance;
    goto LABEL_143;
  }
  if ( a1 <= -2005466826 )
  {
    if ( a1 == -2005466826 )
      return aDperrSessionlo;
    if ( a1 == -2005466836 )
      return aDperrPlayerlos;
    goto LABEL_143;
  }
  if ( a1 <= -2005466806 )
  {
    if ( a1 == -2005466806 )
      return aDperrNonewplay;
    if ( a1 == -2005466816 )
      return aDperrUninitial;
    goto LABEL_143;
  }
  if ( a1 <= -2005466786 )
  {
    if ( a1 == -2005466786 )
      return aDperrConnectin;
    if ( a1 == -2005466796 )
      return aDperrInvalidpa_0;
    goto LABEL_143;
  }
  if ( a1 <= -2005466126 )
  {
    if ( a1 == -2005466126 )
      return aDperrCantcreat_2;
    if ( a1 == -2005466136 )
      return aDperrBuffertoo_0;
    goto LABEL_143;
  }
  if ( a1 <= -2005466106 )
  {
    if ( a1 == -2005466106 )
      return aDperrInvalidin;
    if ( a1 == -2005466116 )
      return aDperrAppnotsta;
    goto LABEL_143;
  }
  if ( a1 <= -2005466086 )
  {
    if ( a1 == -2005466086 )
      return aDperrUnknownap;
    if ( a1 == -2005466096 )
      return aDperrNoservice;
    goto LABEL_143;
  }
  if ( a1 <= -2005466056 )
  {
    if ( a1 == -2005466056 )
      return aDperrServicepr;
    if ( a1 == -2005466066 )
      return aDperrNotlobbie;
    goto LABEL_143;
  }
  if ( a1 <= -2005466036 )
  {
    if ( a1 == -2005466036 )
      return aDperrNotregist;
    if ( a1 == -2005466046 )
      return aDperrAlreadyre;
    goto LABEL_143;
  }
  if ( a1 <= -2005465126 )
  {
    if ( a1 == -2005465126 )
      return aDperrCantloads;
    if ( a1 == -2005465136 )
      return aDperrAuthentic;
    goto LABEL_143;
  }
  if ( a1 <= -2005465106 )
  {
    if ( a1 == -2005465106 )
      return aDperrSignfaile;
    if ( a1 == -2005465116 )
      return aDperrEncryptio;
    goto LABEL_143;
  }
  if ( a1 <= -2005465086 )
  {
    if ( a1 == -2005465086 )
      return aDperrEncryptio_0;
    if ( a1 == -2005465096 )
      return aDperrCantloads_0;
    goto LABEL_143;
  }
  if ( a1 <= -2005465066 )
  {
    if ( a1 == -2005465066 )
      return aDperrNotlogged;
    if ( a1 == -2005465076 )
      return aDperrCantloadc;
    goto LABEL_143;
  }
  if ( a1 == -2005465056 )
    return aDperrLogondeni;
  if ( a1 )
  {
LABEL_143:
    wsprintfA(byte_10A9BFE0, "0x%08X", a1);
    return byte_10A9BFE0;
  }
  return aDpOk;
}
