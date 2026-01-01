#pragma once

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <intrin.h>
#include <sstream>
#include <array>
#include <tlhelp32.h>
#include <future>
#include <set>
#include "SDK/SDK.hpp"
using namespace SDK;
#include "MinHook.h"

class Options
{
public:
	static inline bool bCreative = false;
	static inline bool bLategame = false;
	static inline bool bArenaSolo = false;
	static inline bool bUseIris = false;
};