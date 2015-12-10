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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t345;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t369;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1971;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2268;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1712;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Predicate`1<System.Object>
struct Predicate_1_t1721;
// System.Comparison`1<System.Object>
struct Comparison_1_t1727;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10293_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1__ctor_m10293(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1__ctor_m10293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10295_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10295(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1__ctor_m10295_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10297_gshared (List_1_t345 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10297(__this, ___capacity, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1__ctor_m10297_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10299_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10299(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10301_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10301(__this, method) (( Object_t* (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10301_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10303_gshared (List_1_t345 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10303(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t345 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10303_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10305_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10305(__this, method) (( Object_t * (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10305_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10307_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10307(__this, ___item, method) (( int32_t (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10307_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10309_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10309(__this, ___item, method) (( bool (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10309_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10311_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10311(__this, ___item, method) (( int32_t (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10311_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10313_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10313(__this, ___index, ___item, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10313_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10315_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10315(__this, ___item, method) (( void (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10315_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10317_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10317(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10317_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10319_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10319(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10319_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10321_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10321(__this, method) (( Object_t * (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10321_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10323_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10323(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10325_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10325(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10325_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10327_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10327(__this, ___index, method) (( Object_t * (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10327_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10329_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10329(__this, ___index, ___value, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10329_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10331_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10331(__this, ___item, method) (( void (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_Add_m10331_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10333_gshared (List_1_t345 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10333(__this, ___newCount, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10333_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10335_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10335(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10335_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10337_gshared (List_1_t345 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10337(__this, ___enumerable, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10337_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10339_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10339(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_AddRange_m10339_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1712 * List_1_AsReadOnly_m10341_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10341(__this, method) (( ReadOnlyCollection_1_t1712 * (*) (List_1_t345 *, const MethodInfo*))List_1_AsReadOnly_m10341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10343_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_Clear_m10343(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_Clear_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10345_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10345(__this, ___item, method) (( bool (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_Contains_m10345_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10347_gshared (List_1_t345 * __this, ObjectU5BU5D_t295* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10347(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t345 *, ObjectU5BU5D_t295*, int32_t, const MethodInfo*))List_1_CopyTo_m10347_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10349_gshared (List_1_t345 * __this, Predicate_1_t1721 * ___match, const MethodInfo* method);
#define List_1_Find_m10349(__this, ___match, method) (( Object_t * (*) (List_1_t345 *, Predicate_1_t1721 *, const MethodInfo*))List_1_Find_m10349_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10351_gshared (Object_t * __this /* static, unused */, Predicate_1_t1721 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10351(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1721 *, const MethodInfo*))List_1_CheckMatch_m10351_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10353_gshared (List_1_t345 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1721 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10353(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t345 *, int32_t, int32_t, Predicate_1_t1721 *, const MethodInfo*))List_1_GetIndex_m10353_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1715  List_1_GetEnumerator_m10355_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10355(__this, method) (( Enumerator_t1715  (*) (List_1_t345 *, const MethodInfo*))List_1_GetEnumerator_m10355_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10357_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10357(__this, ___item, method) (( int32_t (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10359_gshared (List_1_t345 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10359(__this, ___start, ___delta, method) (( void (*) (List_1_t345 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10359_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10361_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10361(__this, ___index, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10361_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10363_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10363(__this, ___index, ___item, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10365_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10365(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10365_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10367_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10367(__this, ___item, method) (( bool (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_Remove_m10367_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10369_gshared (List_1_t345 * __this, Predicate_1_t1721 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10369(__this, ___match, method) (( int32_t (*) (List_1_t345 *, Predicate_1_t1721 *, const MethodInfo*))List_1_RemoveAll_m10369_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10371_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10371(__this, ___index, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10371_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10373_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_Reverse_m10373(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_Reverse_m10373_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10375_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_Sort_m10375(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_Sort_m10375_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10377_gshared (List_1_t345 * __this, Comparison_1_t1727 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10377(__this, ___comparison, method) (( void (*) (List_1_t345 *, Comparison_1_t1727 *, const MethodInfo*))List_1_Sort_m10377_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t295* List_1_ToArray_m10379_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_ToArray_m10379(__this, method) (( ObjectU5BU5D_t295* (*) (List_1_t345 *, const MethodInfo*))List_1_ToArray_m10379_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10381_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10381(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_TrimExcess_m10381_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10383_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10383(__this, method) (( int32_t (*) (List_1_t345 *, const MethodInfo*))List_1_get_Capacity_m10383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10385_gshared (List_1_t345 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10385(__this, ___value, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10385_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10387_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_get_Count_m10387(__this, method) (( int32_t (*) (List_1_t345 *, const MethodInfo*))List_1_get_Count_m10387_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10389_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10389(__this, ___index, method) (( Object_t * (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_get_Item_m10389_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10391_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10391(__this, ___index, ___value, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10391_gshared)(__this, ___index, ___value, method)
