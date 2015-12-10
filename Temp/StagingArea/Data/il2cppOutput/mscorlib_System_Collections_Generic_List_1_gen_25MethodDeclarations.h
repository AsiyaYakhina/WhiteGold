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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t250;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2311;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2279;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2312;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2031;
// System.Int32[]
struct Int32U5BU5D_t368;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2034;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2038;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m14657_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1__ctor_m14657(__this, method) (( void (*) (List_1_t250 *, const MethodInfo*))List_1__ctor_m14657_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14658_gshared (List_1_t250 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14658(__this, ___collection, method) (( void (*) (List_1_t250 *, Object_t*, const MethodInfo*))List_1__ctor_m14658_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14659_gshared (List_1_t250 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14659(__this, ___capacity, method) (( void (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1__ctor_m14659_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14660_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14660(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14660_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14661_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14661(__this, method) (( Object_t* (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14661_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14662_gshared (List_1_t250 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14662(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t250 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14662_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14663_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14663(__this, method) (( Object_t * (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14664_gshared (List_1_t250 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14664(__this, ___item, method) (( int32_t (*) (List_1_t250 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14664_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14665_gshared (List_1_t250 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14665(__this, ___item, method) (( bool (*) (List_1_t250 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14665_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14666_gshared (List_1_t250 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14666(__this, ___item, method) (( int32_t (*) (List_1_t250 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14666_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14667_gshared (List_1_t250 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14667(__this, ___index, ___item, method) (( void (*) (List_1_t250 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14667_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14668_gshared (List_1_t250 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14668(__this, ___item, method) (( void (*) (List_1_t250 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14668_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14669_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14669(__this, method) (( bool (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14669_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14670_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14670(__this, method) (( bool (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14670_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14671_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14671(__this, method) (( Object_t * (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14672_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14672(__this, method) (( bool (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14672_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14673_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14673(__this, method) (( bool (*) (List_1_t250 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14673_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14674_gshared (List_1_t250 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14674(__this, ___index, method) (( Object_t * (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14674_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14675_gshared (List_1_t250 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14675(__this, ___index, ___value, method) (( void (*) (List_1_t250 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14675_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14676_gshared (List_1_t250 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14676(__this, ___item, method) (( void (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_Add_m14676_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14677_gshared (List_1_t250 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14677(__this, ___newCount, method) (( void (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14677_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14678_gshared (List_1_t250 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14678(__this, ___collection, method) (( void (*) (List_1_t250 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14678_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14679_gshared (List_1_t250 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14679(__this, ___enumerable, method) (( void (*) (List_1_t250 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14679_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2080_gshared (List_1_t250 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2080(__this, ___collection, method) (( void (*) (List_1_t250 *, Object_t*, const MethodInfo*))List_1_AddRange_m2080_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2031 * List_1_AsReadOnly_m14680_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14680(__this, method) (( ReadOnlyCollection_1_t2031 * (*) (List_1_t250 *, const MethodInfo*))List_1_AsReadOnly_m14680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14681_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_Clear_m14681(__this, method) (( void (*) (List_1_t250 *, const MethodInfo*))List_1_Clear_m14681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14682_gshared (List_1_t250 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14682(__this, ___item, method) (( bool (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_Contains_m14682_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14683_gshared (List_1_t250 * __this, Int32U5BU5D_t368* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14683(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t250 *, Int32U5BU5D_t368*, int32_t, const MethodInfo*))List_1_CopyTo_m14683_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14684_gshared (List_1_t250 * __this, Predicate_1_t2034 * ___match, const MethodInfo* method);
#define List_1_Find_m14684(__this, ___match, method) (( int32_t (*) (List_1_t250 *, Predicate_1_t2034 *, const MethodInfo*))List_1_Find_m14684_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14685_gshared (Object_t * __this /* static, unused */, Predicate_1_t2034 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14685(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2034 *, const MethodInfo*))List_1_CheckMatch_m14685_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14686_gshared (List_1_t250 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2034 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14686(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t250 *, int32_t, int32_t, Predicate_1_t2034 *, const MethodInfo*))List_1_GetIndex_m14686_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2030  List_1_GetEnumerator_m14687_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14687(__this, method) (( Enumerator_t2030  (*) (List_1_t250 *, const MethodInfo*))List_1_GetEnumerator_m14687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14688_gshared (List_1_t250 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14688(__this, ___item, method) (( int32_t (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_IndexOf_m14688_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14689_gshared (List_1_t250 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14689(__this, ___start, ___delta, method) (( void (*) (List_1_t250 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14689_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14690_gshared (List_1_t250 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14690(__this, ___index, method) (( void (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14690_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14691_gshared (List_1_t250 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14691(__this, ___index, ___item, method) (( void (*) (List_1_t250 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14691_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14692_gshared (List_1_t250 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14692(__this, ___collection, method) (( void (*) (List_1_t250 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14692_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14693_gshared (List_1_t250 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14693(__this, ___item, method) (( bool (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_Remove_m14693_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14694_gshared (List_1_t250 * __this, Predicate_1_t2034 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14694(__this, ___match, method) (( int32_t (*) (List_1_t250 *, Predicate_1_t2034 *, const MethodInfo*))List_1_RemoveAll_m14694_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14695_gshared (List_1_t250 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14695(__this, ___index, method) (( void (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14696_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_Reverse_m14696(__this, method) (( void (*) (List_1_t250 *, const MethodInfo*))List_1_Reverse_m14696_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14697_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_Sort_m14697(__this, method) (( void (*) (List_1_t250 *, const MethodInfo*))List_1_Sort_m14697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14698_gshared (List_1_t250 * __this, Comparison_1_t2038 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14698(__this, ___comparison, method) (( void (*) (List_1_t250 *, Comparison_1_t2038 *, const MethodInfo*))List_1_Sort_m14698_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t368* List_1_ToArray_m14699_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_ToArray_m14699(__this, method) (( Int32U5BU5D_t368* (*) (List_1_t250 *, const MethodInfo*))List_1_ToArray_m14699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14700_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14700(__this, method) (( void (*) (List_1_t250 *, const MethodInfo*))List_1_TrimExcess_m14700_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14701_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14701(__this, method) (( int32_t (*) (List_1_t250 *, const MethodInfo*))List_1_get_Capacity_m14701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14702_gshared (List_1_t250 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14702(__this, ___value, method) (( void (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14702_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14703_gshared (List_1_t250 * __this, const MethodInfo* method);
#define List_1_get_Count_m14703(__this, method) (( int32_t (*) (List_1_t250 *, const MethodInfo*))List_1_get_Count_m14703_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14704_gshared (List_1_t250 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14704(__this, ___index, method) (( int32_t (*) (List_1_t250 *, int32_t, const MethodInfo*))List_1_get_Item_m14704_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14705_gshared (List_1_t250 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14705(__this, ___index, ___value, method) (( void (*) (List_1_t250 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14705_gshared)(__this, ___index, ___value, method)