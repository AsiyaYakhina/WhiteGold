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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1889;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1880;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12544_gshared (ShimEnumerator_t1889 * __this, Dictionary_2_t1880 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12544(__this, ___host, method) (( void (*) (ShimEnumerator_t1889 *, Dictionary_2_t1880 *, const MethodInfo*))ShimEnumerator__ctor_m12544_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12545_gshared (ShimEnumerator_t1889 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12545(__this, method) (( bool (*) (ShimEnumerator_t1889 *, const MethodInfo*))ShimEnumerator_MoveNext_m12545_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t955  ShimEnumerator_get_Entry_m12546_gshared (ShimEnumerator_t1889 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12546(__this, method) (( DictionaryEntry_t955  (*) (ShimEnumerator_t1889 *, const MethodInfo*))ShimEnumerator_get_Entry_m12546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12547_gshared (ShimEnumerator_t1889 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12547(__this, method) (( Object_t * (*) (ShimEnumerator_t1889 *, const MethodInfo*))ShimEnumerator_get_Key_m12547_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12548_gshared (ShimEnumerator_t1889 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12548(__this, method) (( Object_t * (*) (ShimEnumerator_t1889 *, const MethodInfo*))ShimEnumerator_get_Value_m12548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12549_gshared (ShimEnumerator_t1889 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12549(__this, method) (( Object_t * (*) (ShimEnumerator_t1889 *, const MethodInfo*))ShimEnumerator_get_Current_m12549_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12550_gshared (ShimEnumerator_t1889 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12550(__this, method) (( void (*) (ShimEnumerator_t1889 *, const MethodInfo*))ShimEnumerator_Reset_m12550_gshared)(__this, method)