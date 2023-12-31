#pragma once
#ifdef _WIN64
#pragma comment(lib, "../x64/debug/OS10_HTAPI.lib")
#else
#pragma comment(lib, "../debug/OS10_HTAPI.lib")
#endif

#include "../OS10_HTAPI/pch.h"
#include "../OS10_HTAPI/HT.h"

namespace tests
{
	BOOL insertTest(ht::HtHandle* htHandle);
	BOOL deleteTest(ht::HtHandle* htHandle);
	BOOL getTest(ht::HtHandle* htHandle);
	BOOL test4(ht::HtHandle* htHandle);
}
