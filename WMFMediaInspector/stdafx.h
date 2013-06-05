// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <windows.h>
#include <strsafe.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>
#include <mfobjects.h>
#include <stdio.h>
#include <mferror.h>
#include <propvarutil.h>
#include <wmcodecdsp.h>
#include <initguid.h>
#include <comdef.h>
#include <atlbase.h>
#include <vector>

#define ENSURE_SUCCESS(res, rv) \
{ \
  if (!SUCCEEDED(res)) { \
    printf("Error %s:%d\n", __FILE__, __LINE__); \
    return rv; \
  } \
}

#define ENSURE_TRUE(condition, rv) \
{ \
  if (!(condition)) { \
    printf("Error !(#condition) %s:%d\n", __FILE__, __LINE__); \
    return rv; \
  } \
}
