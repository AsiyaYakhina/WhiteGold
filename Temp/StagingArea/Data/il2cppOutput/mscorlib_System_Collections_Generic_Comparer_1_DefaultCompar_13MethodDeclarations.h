﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17053_gshared (DefaultComparer_t2260 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17053(__this, method) (( void (*) (DefaultComparer_t2260 *, const MethodInfo*))DefaultComparer__ctor_m17053_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17054_gshared (DefaultComparer_t2260 * __this, Guid_t1580  ___x, Guid_t1580  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17054(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2260 *, Guid_t1580 , Guid_t1580 , const MethodInfo*))DefaultComparer_Compare_m17054_gshared)(__this, ___x, ___y, method)