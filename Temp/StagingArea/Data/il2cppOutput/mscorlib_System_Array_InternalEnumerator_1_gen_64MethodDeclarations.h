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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
#include "mscorlib_System_Collections_Hashtable_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16394_gshared (InternalEnumerator_1_t2192 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16394(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2192 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16394_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16395_gshared (InternalEnumerator_1_t2192 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16395(__this, method) (( void (*) (InternalEnumerator_1_t2192 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16395_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_gshared (InternalEnumerator_1_t2192 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2192 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16397_gshared (InternalEnumerator_1_t2192 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16397(__this, method) (( void (*) (InternalEnumerator_1_t2192 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16397_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16398_gshared (InternalEnumerator_1_t2192 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16398(__this, method) (( bool (*) (InternalEnumerator_1_t2192 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16398_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t1090  InternalEnumerator_1_get_Current_m16399_gshared (InternalEnumerator_1_t2192 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16399(__this, method) (( Slot_t1090  (*) (InternalEnumerator_1_t2192 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16399_gshared)(__this, method)