// runner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

extern "C"
{
	  int __cdecl opusinfo_wmain(int wargc, wchar_t *wargv[], wchar_t *wenvp[]);
	  int __cdecl opusenc_wmain(int wargc, wchar_t *wargv[], wchar_t *wenvp[]);
	  int __cdecl opusdec_wmain(int wargc, wchar_t *wargv[], wchar_t *wenvp[]);
	}

#define EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)


EXTERN_DLL_EXPORT int opusinfo(int wargc, wchar_t *wargv[], wchar_t *wenvp[])
{
	return opusinfo_wmain(wargc, wargv, wenvp);
}
EXTERN_DLL_EXPORT int opusenc(int wargc, wchar_t *wargv[], wchar_t *wenvp[])
{
	return opusenc_wmain(wargc, wargv, wenvp);
}
EXTERN_DLL_EXPORT int opusdec(int wargc, wchar_t *wargv[], wchar_t *wenvp[])
{
	return opusdec_wmain(wargc, wargv, wenvp);
}
 