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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1813;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1801;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11597_gshared (ShimEnumerator_t1813 * __this, Dictionary_2_t1801 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11597(__this, ___host, method) (( void (*) (ShimEnumerator_t1813 *, Dictionary_2_t1801 *, const MethodInfo*))ShimEnumerator__ctor_m11597_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11598_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11598(__this, method) (( bool (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_MoveNext_m11598_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t955  ShimEnumerator_get_Entry_m11599_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11599(__this, method) (( DictionaryEntry_t955  (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Entry_m11599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11600_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11600(__this, method) (( Object_t * (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Key_m11600_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11601_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11601(__this, method) (( Object_t * (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Value_m11601_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11602_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11602(__this, method) (( Object_t * (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_get_Current_m11602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m11603_gshared (ShimEnumerator_t1813 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11603(__this, method) (( void (*) (ShimEnumerator_t1813 *, const MethodInfo*))ShimEnumerator_Reset_m11603_gshared)(__this, method)
