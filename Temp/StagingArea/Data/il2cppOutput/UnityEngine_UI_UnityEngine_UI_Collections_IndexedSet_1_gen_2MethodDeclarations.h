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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1828;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1971;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Predicate`1<System.Object>
struct Predicate_1_t1721;
// System.Comparison`1<System.Object>
struct Comparison_1_t1727;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11781_gshared (IndexedSet_1_t1828 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11781(__this, method) (( void (*) (IndexedSet_1_t1828 *, const MethodInfo*))IndexedSet_1__ctor_m11781_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11783_gshared (IndexedSet_1_t1828 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11783(__this, method) (( Object_t * (*) (IndexedSet_1_t1828 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11783_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11785_gshared (IndexedSet_1_t1828 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11785(__this, ___item, method) (( void (*) (IndexedSet_1_t1828 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11785_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11787_gshared (IndexedSet_1_t1828 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11787(__this, ___item, method) (( bool (*) (IndexedSet_1_t1828 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11787_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11789_gshared (IndexedSet_1_t1828 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11789(__this, method) (( Object_t* (*) (IndexedSet_1_t1828 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11789_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11791_gshared (IndexedSet_1_t1828 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11791(__this, method) (( void (*) (IndexedSet_1_t1828 *, const MethodInfo*))IndexedSet_1_Clear_m11791_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11793_gshared (IndexedSet_1_t1828 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11793(__this, ___item, method) (( bool (*) (IndexedSet_1_t1828 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11793_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11795_gshared (IndexedSet_1_t1828 * __this, ObjectU5BU5D_t295* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11795(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1828 *, ObjectU5BU5D_t295*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11795_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11797_gshared (IndexedSet_1_t1828 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11797(__this, method) (( int32_t (*) (IndexedSet_1_t1828 *, const MethodInfo*))IndexedSet_1_get_Count_m11797_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11799_gshared (IndexedSet_1_t1828 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11799(__this, method) (( bool (*) (IndexedSet_1_t1828 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11799_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11801_gshared (IndexedSet_1_t1828 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11801(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1828 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11801_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11803_gshared (IndexedSet_1_t1828 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11803(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1828 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11803_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11805_gshared (IndexedSet_1_t1828 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11805(__this, ___index, method) (( void (*) (IndexedSet_1_t1828 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11805_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11807_gshared (IndexedSet_1_t1828 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11807(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1828 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11807_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11809_gshared (IndexedSet_1_t1828 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11809(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1828 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11809_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11810_gshared (IndexedSet_1_t1828 * __this, Predicate_1_t1721 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11810(__this, ___match, method) (( void (*) (IndexedSet_1_t1828 *, Predicate_1_t1721 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11810_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11811_gshared (IndexedSet_1_t1828 * __this, Comparison_1_t1727 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11811(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1828 *, Comparison_1_t1727 *, const MethodInfo*))IndexedSet_1_Sort_m11811_gshared)(__this, ___sortLayoutFunction, method)
