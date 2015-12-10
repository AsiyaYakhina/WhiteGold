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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t465;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2321;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2322;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t341;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2085;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t526;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2089;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2092;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15214_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1__ctor_m15214(__this, method) (( void (*) (List_1_t465 *, const MethodInfo*))List_1__ctor_m15214_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15215_gshared (List_1_t465 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15215(__this, ___collection, method) (( void (*) (List_1_t465 *, Object_t*, const MethodInfo*))List_1__ctor_m15215_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2864_gshared (List_1_t465 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2864(__this, ___capacity, method) (( void (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1__ctor_m2864_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15216_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15216(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15216_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15217_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15217(__this, method) (( Object_t* (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15218_gshared (List_1_t465 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15218(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t465 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15218_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15219_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15219(__this, method) (( Object_t * (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15219_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15220_gshared (List_1_t465 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15220(__this, ___item, method) (( int32_t (*) (List_1_t465 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15221_gshared (List_1_t465 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15221(__this, ___item, method) (( bool (*) (List_1_t465 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15222_gshared (List_1_t465 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15222(__this, ___item, method) (( int32_t (*) (List_1_t465 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15222_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15223_gshared (List_1_t465 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15223(__this, ___index, ___item, method) (( void (*) (List_1_t465 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15223_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15224_gshared (List_1_t465 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15224(__this, ___item, method) (( void (*) (List_1_t465 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15224_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15225_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15225(__this, method) (( bool (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15226(__this, method) (( bool (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15227_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15227(__this, method) (( Object_t * (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15228_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15228(__this, method) (( bool (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15229_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15229(__this, method) (( bool (*) (List_1_t465 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15229_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15230_gshared (List_1_t465 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15230(__this, ___index, method) (( Object_t * (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15230_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15231_gshared (List_1_t465 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15231(__this, ___index, ___value, method) (( void (*) (List_1_t465 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15231_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15232_gshared (List_1_t465 * __this, UILineInfo_t337  ___item, const MethodInfo* method);
#define List_1_Add_m15232(__this, ___item, method) (( void (*) (List_1_t465 *, UILineInfo_t337 , const MethodInfo*))List_1_Add_m15232_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15233_gshared (List_1_t465 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15233(__this, ___newCount, method) (( void (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15233_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15234_gshared (List_1_t465 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15234(__this, ___collection, method) (( void (*) (List_1_t465 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15234_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15235_gshared (List_1_t465 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15235(__this, ___enumerable, method) (( void (*) (List_1_t465 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15235_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15236_gshared (List_1_t465 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15236(__this, ___collection, method) (( void (*) (List_1_t465 *, Object_t*, const MethodInfo*))List_1_AddRange_m15236_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2085 * List_1_AsReadOnly_m15237_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15237(__this, method) (( ReadOnlyCollection_1_t2085 * (*) (List_1_t465 *, const MethodInfo*))List_1_AsReadOnly_m15237_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15238_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_Clear_m15238(__this, method) (( void (*) (List_1_t465 *, const MethodInfo*))List_1_Clear_m15238_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15239_gshared (List_1_t465 * __this, UILineInfo_t337  ___item, const MethodInfo* method);
#define List_1_Contains_m15239(__this, ___item, method) (( bool (*) (List_1_t465 *, UILineInfo_t337 , const MethodInfo*))List_1_Contains_m15239_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15240_gshared (List_1_t465 * __this, UILineInfoU5BU5D_t526* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15240(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t465 *, UILineInfoU5BU5D_t526*, int32_t, const MethodInfo*))List_1_CopyTo_m15240_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t337  List_1_Find_m15241_gshared (List_1_t465 * __this, Predicate_1_t2089 * ___match, const MethodInfo* method);
#define List_1_Find_m15241(__this, ___match, method) (( UILineInfo_t337  (*) (List_1_t465 *, Predicate_1_t2089 *, const MethodInfo*))List_1_Find_m15241_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15242_gshared (Object_t * __this /* static, unused */, Predicate_1_t2089 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15242(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2089 *, const MethodInfo*))List_1_CheckMatch_m15242_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15243_gshared (List_1_t465 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2089 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15243(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t465 *, int32_t, int32_t, Predicate_1_t2089 *, const MethodInfo*))List_1_GetIndex_m15243_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2084  List_1_GetEnumerator_m15244_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15244(__this, method) (( Enumerator_t2084  (*) (List_1_t465 *, const MethodInfo*))List_1_GetEnumerator_m15244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15245_gshared (List_1_t465 * __this, UILineInfo_t337  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15245(__this, ___item, method) (( int32_t (*) (List_1_t465 *, UILineInfo_t337 , const MethodInfo*))List_1_IndexOf_m15245_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15246_gshared (List_1_t465 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15246(__this, ___start, ___delta, method) (( void (*) (List_1_t465 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15246_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15247_gshared (List_1_t465 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15247(__this, ___index, method) (( void (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15247_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15248_gshared (List_1_t465 * __this, int32_t ___index, UILineInfo_t337  ___item, const MethodInfo* method);
#define List_1_Insert_m15248(__this, ___index, ___item, method) (( void (*) (List_1_t465 *, int32_t, UILineInfo_t337 , const MethodInfo*))List_1_Insert_m15248_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15249_gshared (List_1_t465 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15249(__this, ___collection, method) (( void (*) (List_1_t465 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15249_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15250_gshared (List_1_t465 * __this, UILineInfo_t337  ___item, const MethodInfo* method);
#define List_1_Remove_m15250(__this, ___item, method) (( bool (*) (List_1_t465 *, UILineInfo_t337 , const MethodInfo*))List_1_Remove_m15250_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15251_gshared (List_1_t465 * __this, Predicate_1_t2089 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15251(__this, ___match, method) (( int32_t (*) (List_1_t465 *, Predicate_1_t2089 *, const MethodInfo*))List_1_RemoveAll_m15251_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15252_gshared (List_1_t465 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15252(__this, ___index, method) (( void (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15252_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15253_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_Reverse_m15253(__this, method) (( void (*) (List_1_t465 *, const MethodInfo*))List_1_Reverse_m15253_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15254_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_Sort_m15254(__this, method) (( void (*) (List_1_t465 *, const MethodInfo*))List_1_Sort_m15254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15255_gshared (List_1_t465 * __this, Comparison_1_t2092 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15255(__this, ___comparison, method) (( void (*) (List_1_t465 *, Comparison_1_t2092 *, const MethodInfo*))List_1_Sort_m15255_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t526* List_1_ToArray_m15256_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_ToArray_m15256(__this, method) (( UILineInfoU5BU5D_t526* (*) (List_1_t465 *, const MethodInfo*))List_1_ToArray_m15256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15257_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15257(__this, method) (( void (*) (List_1_t465 *, const MethodInfo*))List_1_TrimExcess_m15257_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15258_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15258(__this, method) (( int32_t (*) (List_1_t465 *, const MethodInfo*))List_1_get_Capacity_m15258_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15259_gshared (List_1_t465 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15259(__this, ___value, method) (( void (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15259_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15260_gshared (List_1_t465 * __this, const MethodInfo* method);
#define List_1_get_Count_m15260(__this, method) (( int32_t (*) (List_1_t465 *, const MethodInfo*))List_1_get_Count_m15260_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t337  List_1_get_Item_m15261_gshared (List_1_t465 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15261(__this, ___index, method) (( UILineInfo_t337  (*) (List_1_t465 *, int32_t, const MethodInfo*))List_1_get_Item_m15261_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15262_gshared (List_1_t465 * __this, int32_t ___index, UILineInfo_t337  ___value, const MethodInfo* method);
#define List_1_set_Item_m15262(__this, ___index, ___value, method) (( void (*) (List_1_t465 *, int32_t, UILineInfo_t337 , const MethodInfo*))List_1_set_Item_m15262_gshared)(__this, ___index, ___value, method)
