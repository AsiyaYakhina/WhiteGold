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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1829;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11888_gshared (Enumerator_t1836 * __this, Dictionary_2_t1829 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11888(__this, ___dictionary, method) (( void (*) (Enumerator_t1836 *, Dictionary_2_t1829 *, const MethodInfo*))Enumerator__ctor_m11888_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11889_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11889(__this, method) (( Object_t * (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m11890_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m11890(__this, method) (( void (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m11890_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t955  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11891_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11891(__this, method) (( DictionaryEntry_t955  (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11891_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11892_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11892(__this, method) (( Object_t * (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11892_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11893_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11893(__this, method) (( Object_t * (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11894_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11894(__this, method) (( bool (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_MoveNext_m11894_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1832  Enumerator_get_Current_m11895_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11895(__this, method) (( KeyValuePair_2_t1832  (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_get_Current_m11895_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11896_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11896(__this, method) (( Object_t * (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_get_CurrentKey_m11896_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11897_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11897(__this, method) (( int32_t (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_get_CurrentValue_m11897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m11898_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_Reset_m11898(__this, method) (( void (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_Reset_m11898_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11899_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11899(__this, method) (( void (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_VerifyState_m11899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11900_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11900(__this, method) (( void (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_VerifyCurrent_m11900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11901_gshared (Enumerator_t1836 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11901(__this, method) (( void (*) (Enumerator_t1836 *, const MethodInfo*))Enumerator_Dispose_m11901_gshared)(__this, method)
