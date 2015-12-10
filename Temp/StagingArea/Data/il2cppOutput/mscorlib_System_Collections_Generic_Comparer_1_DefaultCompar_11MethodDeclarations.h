#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17015_gshared (DefaultComparer_t2252 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17015(__this, method) (( void (*) (DefaultComparer_t2252 *, const MethodInfo*))DefaultComparer__ctor_m17015_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17016_gshared (DefaultComparer_t2252 * __this, DateTime_t647  ___x, DateTime_t647  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17016(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2252 *, DateTime_t647 , DateTime_t647 , const MethodInfo*))DefaultComparer_Compare_m17016_gshared)(__this, ___x, ___y, method)
