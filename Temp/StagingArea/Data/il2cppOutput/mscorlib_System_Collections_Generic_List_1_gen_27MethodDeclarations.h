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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t464;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2318;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2319;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2320;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2076;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t525;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2080;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2083;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15070_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1__ctor_m15070(__this, method) (( void (*) (List_1_t464 *, const MethodInfo*))List_1__ctor_m15070_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15071_gshared (List_1_t464 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15071(__this, ___collection, method) (( void (*) (List_1_t464 *, Object_t*, const MethodInfo*))List_1__ctor_m15071_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2863_gshared (List_1_t464 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2863(__this, ___capacity, method) (( void (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1__ctor_m2863_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15072_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15072(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15072_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15073_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15073(__this, method) (( Object_t* (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15073_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15074_gshared (List_1_t464 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15074(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t464 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15074_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15075_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15075(__this, method) (( Object_t * (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15075_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15076_gshared (List_1_t464 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15076(__this, ___item, method) (( int32_t (*) (List_1_t464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15077_gshared (List_1_t464 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15077(__this, ___item, method) (( bool (*) (List_1_t464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15077_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15078_gshared (List_1_t464 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15078(__this, ___item, method) (( int32_t (*) (List_1_t464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15078_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15079_gshared (List_1_t464 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15079(__this, ___index, ___item, method) (( void (*) (List_1_t464 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15079_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15080_gshared (List_1_t464 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15080(__this, ___item, method) (( void (*) (List_1_t464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15080_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15081_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15081(__this, method) (( bool (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15081_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15082_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15082(__this, method) (( bool (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15082_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15083_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15083(__this, method) (( Object_t * (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15084_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15084(__this, method) (( bool (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15085_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15085(__this, method) (( bool (*) (List_1_t464 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15086_gshared (List_1_t464 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15086(__this, ___index, method) (( Object_t * (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15087_gshared (List_1_t464 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15087(__this, ___index, ___value, method) (( void (*) (List_1_t464 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15087_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15088_gshared (List_1_t464 * __this, UICharInfo_t339  ___item, const MethodInfo* method);
#define List_1_Add_m15088(__this, ___item, method) (( void (*) (List_1_t464 *, UICharInfo_t339 , const MethodInfo*))List_1_Add_m15088_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15089_gshared (List_1_t464 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15089(__this, ___newCount, method) (( void (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15089_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15090_gshared (List_1_t464 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15090(__this, ___collection, method) (( void (*) (List_1_t464 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15090_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15091_gshared (List_1_t464 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15091(__this, ___enumerable, method) (( void (*) (List_1_t464 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15091_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15092_gshared (List_1_t464 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15092(__this, ___collection, method) (( void (*) (List_1_t464 *, Object_t*, const MethodInfo*))List_1_AddRange_m15092_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2076 * List_1_AsReadOnly_m15093_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15093(__this, method) (( ReadOnlyCollection_1_t2076 * (*) (List_1_t464 *, const MethodInfo*))List_1_AsReadOnly_m15093_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15094_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_Clear_m15094(__this, method) (( void (*) (List_1_t464 *, const MethodInfo*))List_1_Clear_m15094_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15095_gshared (List_1_t464 * __this, UICharInfo_t339  ___item, const MethodInfo* method);
#define List_1_Contains_m15095(__this, ___item, method) (( bool (*) (List_1_t464 *, UICharInfo_t339 , const MethodInfo*))List_1_Contains_m15095_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15096_gshared (List_1_t464 * __this, UICharInfoU5BU5D_t525* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15096(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t464 *, UICharInfoU5BU5D_t525*, int32_t, const MethodInfo*))List_1_CopyTo_m15096_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t339  List_1_Find_m15097_gshared (List_1_t464 * __this, Predicate_1_t2080 * ___match, const MethodInfo* method);
#define List_1_Find_m15097(__this, ___match, method) (( UICharInfo_t339  (*) (List_1_t464 *, Predicate_1_t2080 *, const MethodInfo*))List_1_Find_m15097_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15098_gshared (Object_t * __this /* static, unused */, Predicate_1_t2080 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15098(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2080 *, const MethodInfo*))List_1_CheckMatch_m15098_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15099_gshared (List_1_t464 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2080 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15099(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t464 *, int32_t, int32_t, Predicate_1_t2080 *, const MethodInfo*))List_1_GetIndex_m15099_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2075  List_1_GetEnumerator_m15100_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15100(__this, method) (( Enumerator_t2075  (*) (List_1_t464 *, const MethodInfo*))List_1_GetEnumerator_m15100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15101_gshared (List_1_t464 * __this, UICharInfo_t339  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15101(__this, ___item, method) (( int32_t (*) (List_1_t464 *, UICharInfo_t339 , const MethodInfo*))List_1_IndexOf_m15101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15102_gshared (List_1_t464 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15102(__this, ___start, ___delta, method) (( void (*) (List_1_t464 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15103_gshared (List_1_t464 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15103(__this, ___index, method) (( void (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15103_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15104_gshared (List_1_t464 * __this, int32_t ___index, UICharInfo_t339  ___item, const MethodInfo* method);
#define List_1_Insert_m15104(__this, ___index, ___item, method) (( void (*) (List_1_t464 *, int32_t, UICharInfo_t339 , const MethodInfo*))List_1_Insert_m15104_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15105_gshared (List_1_t464 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15105(__this, ___collection, method) (( void (*) (List_1_t464 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15105_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15106_gshared (List_1_t464 * __this, UICharInfo_t339  ___item, const MethodInfo* method);
#define List_1_Remove_m15106(__this, ___item, method) (( bool (*) (List_1_t464 *, UICharInfo_t339 , const MethodInfo*))List_1_Remove_m15106_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15107_gshared (List_1_t464 * __this, Predicate_1_t2080 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15107(__this, ___match, method) (( int32_t (*) (List_1_t464 *, Predicate_1_t2080 *, const MethodInfo*))List_1_RemoveAll_m15107_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15108_gshared (List_1_t464 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15108(__this, ___index, method) (( void (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15109_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_Reverse_m15109(__this, method) (( void (*) (List_1_t464 *, const MethodInfo*))List_1_Reverse_m15109_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15110_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_Sort_m15110(__this, method) (( void (*) (List_1_t464 *, const MethodInfo*))List_1_Sort_m15110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15111_gshared (List_1_t464 * __this, Comparison_1_t2083 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15111(__this, ___comparison, method) (( void (*) (List_1_t464 *, Comparison_1_t2083 *, const MethodInfo*))List_1_Sort_m15111_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t525* List_1_ToArray_m15112_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_ToArray_m15112(__this, method) (( UICharInfoU5BU5D_t525* (*) (List_1_t464 *, const MethodInfo*))List_1_ToArray_m15112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15113_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15113(__this, method) (( void (*) (List_1_t464 *, const MethodInfo*))List_1_TrimExcess_m15113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15114_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15114(__this, method) (( int32_t (*) (List_1_t464 *, const MethodInfo*))List_1_get_Capacity_m15114_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15115_gshared (List_1_t464 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15115(__this, ___value, method) (( void (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15115_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15116_gshared (List_1_t464 * __this, const MethodInfo* method);
#define List_1_get_Count_m15116(__this, method) (( int32_t (*) (List_1_t464 *, const MethodInfo*))List_1_get_Count_m15116_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t339  List_1_get_Item_m15117_gshared (List_1_t464 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15117(__this, ___index, method) (( UICharInfo_t339  (*) (List_1_t464 *, int32_t, const MethodInfo*))List_1_get_Item_m15117_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15118_gshared (List_1_t464 * __this, int32_t ___index, UICharInfo_t339  ___value, const MethodInfo* method);
#define List_1_set_Item_m15118(__this, ___index, ___value, method) (( void (*) (List_1_t464 *, int32_t, UICharInfo_t339 , const MethodInfo*))List_1_set_Item_m15118_gshared)(__this, ___index, ___value, method)
