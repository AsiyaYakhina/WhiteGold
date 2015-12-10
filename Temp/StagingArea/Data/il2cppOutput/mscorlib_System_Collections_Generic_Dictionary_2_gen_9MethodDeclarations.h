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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1831;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t753;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2277;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2278;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t765;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1834;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11812_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11812(__this, method) (( void (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2__ctor_m11812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11813_gshared (Dictionary_2_t1829 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11813(__this, ___comparer, method) (( void (*) (Dictionary_2_t1829 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11813_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11814_gshared (Dictionary_2_t1829 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11814(__this, ___capacity, method) (( void (*) (Dictionary_2_t1829 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11814_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11815_gshared (Dictionary_2_t1829 * __this, SerializationInfo_t753 * ___info, StreamingContext_t754  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11815(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1829 *, SerializationInfo_t753 *, StreamingContext_t754 , const MethodInfo*))Dictionary_2__ctor_m11815_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11816_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11816(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11817_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11817(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1829 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11817_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11818_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11818(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1829 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11818_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11819_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11819(__this, ___key, method) (( bool (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11820_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11820(__this, ___key, method) (( void (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11820_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11821_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11821(__this, method) (( bool (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11822_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11822(__this, method) (( Object_t * (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11823_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11823(__this, method) (( bool (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11824_gshared (Dictionary_2_t1829 * __this, KeyValuePair_2_t1832  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11824(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1829 *, KeyValuePair_2_t1832 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11824_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11825_gshared (Dictionary_2_t1829 * __this, KeyValuePair_2_t1832  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11825(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1829 *, KeyValuePair_2_t1832 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11825_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11826_gshared (Dictionary_2_t1829 * __this, KeyValuePair_2U5BU5D_t2277* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1829 *, KeyValuePair_2U5BU5D_t2277*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11826_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11827_gshared (Dictionary_2_t1829 * __this, KeyValuePair_2_t1832  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11827(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1829 *, KeyValuePair_2_t1832 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11827_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11828_gshared (Dictionary_2_t1829 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11828(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1829 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11828_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11829_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11829(__this, method) (( Object_t * (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11829_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11830_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11830(__this, method) (( Object_t* (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11831_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11831(__this, method) (( Object_t * (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11831_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11832_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11832(__this, method) (( int32_t (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_get_Count_m11832_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11833_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11833(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11833_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11834_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11834(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1829 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11834_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11835_gshared (Dictionary_2_t1829 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11835(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1829 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11835_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11836_gshared (Dictionary_2_t1829 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11836(__this, ___size, method) (( void (*) (Dictionary_2_t1829 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11836_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11837_gshared (Dictionary_2_t1829 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11837(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1829 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11837_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1832  Dictionary_2_make_pair_m11838_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11838(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1832  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11838_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11839_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11839(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11839_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11840_gshared (Dictionary_2_t1829 * __this, KeyValuePair_2U5BU5D_t2277* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11840(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1829 *, KeyValuePair_2U5BU5D_t2277*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11840_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11841_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11841(__this, method) (( void (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_Resize_m11841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11842_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11842(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1829 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11842_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11843_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11843(__this, method) (( void (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_Clear_m11843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11844_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11844(__this, ___key, method) (( bool (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11844_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11845_gshared (Dictionary_2_t1829 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11845(__this, ___value, method) (( bool (*) (Dictionary_2_t1829 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11845_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11846_gshared (Dictionary_2_t1829 * __this, SerializationInfo_t753 * ___info, StreamingContext_t754  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11846(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1829 *, SerializationInfo_t753 *, StreamingContext_t754 , const MethodInfo*))Dictionary_2_GetObjectData_m11846_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11847_gshared (Dictionary_2_t1829 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11847(__this, ___sender, method) (( void (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11847_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11848_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11848(__this, ___key, method) (( bool (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11848_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11849_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11849(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1829 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11849_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1834 * Dictionary_2_get_Values_m11850_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11850(__this, method) (( ValueCollection_t1834 * (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_get_Values_m11850_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11851_gshared (Dictionary_2_t1829 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11851(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11851_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11852_gshared (Dictionary_2_t1829 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11852(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1829 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11852_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11853_gshared (Dictionary_2_t1829 * __this, KeyValuePair_2_t1832  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11853(__this, ___pair, method) (( bool (*) (Dictionary_2_t1829 *, KeyValuePair_2_t1832 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11853_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1836  Dictionary_2_GetEnumerator_m11854_gshared (Dictionary_2_t1829 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11854(__this, method) (( Enumerator_t1836  (*) (Dictionary_2_t1829 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11854_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t955  Dictionary_2_U3CCopyToU3Em__0_m11855_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11855(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t955  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11855_gshared)(__this /* static, unused */, ___key, ___value, method)
