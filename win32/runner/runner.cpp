// runner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)

extern "C" int __cdecl opusinfo_wmain(int wargc, wchar_t *wargv[], wchar_t *wenvp[]);

EXTERN_DLL_EXPORT int opusinfo(int wargc, wchar_t *wargv[], wchar_t *wenvp[])
{
	return opusinfo_wmain(wargc, wargv, wenvp);
}

/* 
extern "C"
{
	int __cdecl opusencoder_wmain(int wargc, wchar_t *wargv[], wchar_t *wenvp[]);
}
EXTERN_DLL_EXPORT int opusencoder(int wargc, wchar_t *wargv[], wchar_t *wenvp[])
{
	return opusencoder_wmain(wargc, wargv, wenvp);
}


extern "C"
{
	int __cdecl opusdec_wmain(int wargc, wchar_t *wargv[], wchar_t *wenvp[]);
}

EXTERN_DLL_EXPORT int opusdec(int wargc, wchar_t *wargv[], wchar_t *wenvp[])
{
	return opusdec_wmain(wargc, wargv, wenvp);
}
 */