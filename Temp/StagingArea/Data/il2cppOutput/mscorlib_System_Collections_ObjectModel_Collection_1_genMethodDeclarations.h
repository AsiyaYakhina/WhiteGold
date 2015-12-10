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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1717;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1971;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1716;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10435_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10435(__this, method) (( void (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1__ctor_m10435_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10436_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10436(__this, method) (( bool (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10436_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10437_gshared (Collection_1_t1717 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10437(__this, ___array, ___index, method) (( void (*) (Collection_1_t1717 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10437_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10438_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10438(__this, method) (( Object_t * (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10438_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10439_gshared (Collection_1_t1717 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10439(__this, ___value, method) (( int32_t (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10439_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10440_gshared (Collection_1_t1717 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10440(__this, ___value, method) (( bool (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10440_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10441_gshared (Collection_1_t1717 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10441(__this, ___value, method) (( int32_t (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10441_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10442_gshared (Collection_1_t1717 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10442(__this, ___index, ___value, method) (( void (*) (Collection_1_t1717 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10442_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10443_gshared (Collection_1_t1717 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10443(__this, ___value, method) (( void (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10443_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10444_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10444(__this, method) (( bool (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10444_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10445_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10445(__this, method) (( Object_t * (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10445_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10446_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10446(__this, method) (( bool (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10446_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10447_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10447(__this, method) (( bool (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10447_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10448_gshared (Collection_1_t1717 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10448(__this, ___index, method) (( Object_t * (*) (Collection_1_t1717 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10448_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10449_gshared (Collection_1_t1717 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10449(__this, ___index, ___value, method) (( void (*) (Collection_1_t1717 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10449_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10450_gshared (Collection_1_t1717 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10450(__this, ___item, method) (( void (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_Add_m10450_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10451_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10451(__this, method) (( void (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_Clear_m10451_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10452_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10452(__this, method) (( void (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_ClearItems_m10452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10453_gshared (Collection_1_t1717 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10453(__this, ___item, method) (( bool (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10453_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10454_gshared (Collection_1_t1717 * __this, ObjectU5BU5D_t295* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10454(__this, ___array, ___index, method) (( void (*) (Collection_1_t1717 *, ObjectU5BU5D_t295*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10454_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10455_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10455(__this, method) (( Object_t* (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_GetEnumerator_m10455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10456_gshared (Collection_1_t1717 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10456(__this, ___item, method) (( int32_t (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10456_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10457_gshared (Collection_1_t1717 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10457(__this, ___index, ___item, method) (( void (*) (Collection_1_t1717 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10457_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10458_gshared (Collection_1_t1717 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10458(__this, ___index, ___item, method) (( void (*) (Collection_1_t1717 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10458_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10459_gshared (Collection_1_t1717 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10459(__this, ___item, method) (( bool (*) (Collection_1_t1717 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10459_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10460_gshared (Collection_1_t1717 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10460(__this, ___index, method) (( void (*) (Collection_1_t1717 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10460_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10461_gshared (Collection_1_t1717 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10461(__this, ___index, method) (( void (*) (Collection_1_t1717 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10461_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10462_gshared (Collection_1_t1717 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10462(__this, method) (( int32_t (*) (Collection_1_t1717 *, const MethodInfo*))Collection_1_get_Count_m10462_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10463_gshared (Collection_1_t1717 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10463(__this, ___index, method) (( Object_t * (*) (Collection_1_t1717 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10463_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10464_gshared (Collection_1_t1717 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10464(__this, ___index, ___value, method) (( void (*) (Collection_1_t1717 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10464_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10465_gshared (Collection_1_t1717 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10465(__this, ___index, ___item, method) (( void (*) (Collection_1_t1717 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10465_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10466_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10466(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10466_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10467_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10467(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10467_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10468_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10468(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10468_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10469_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10469(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10469_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10470_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10470(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10470_gshared)(__this /* static, unused */, ___list, method)
