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

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1083;
// System.Collections.ArrayList
struct ArrayList_t620;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t956;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.IComparer
struct IComparer_t809;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ArrayListWrapper__ctor_m6439 (ArrayListWrapper_t1083 * __this, ArrayList_t620 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ArrayListWrapper_get_Item_m6440 (ArrayListWrapper_t1083 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ArrayListWrapper_set_Item_m6441 (ArrayListWrapper_t1083 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C" int32_t ArrayListWrapper_get_Count_m6442 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Capacity()
extern "C" int32_t ArrayListWrapper_get_Capacity_m6443 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Capacity(System.Int32)
extern "C" void ArrayListWrapper_set_Capacity_m6444 (ArrayListWrapper_t1083 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
extern "C" bool ArrayListWrapper_get_IsFixedSize_m6445 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C" bool ArrayListWrapper_get_IsReadOnly_m6446 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C" bool ArrayListWrapper_get_IsSynchronized_m6447 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C" Object_t * ArrayListWrapper_get_SyncRoot_m6448 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C" int32_t ArrayListWrapper_Add_m6449 (ArrayListWrapper_t1083 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C" void ArrayListWrapper_Clear_m6450 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C" bool ArrayListWrapper_Contains_m6451 (ArrayListWrapper_t1083 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t ArrayListWrapper_IndexOf_m6452 (ArrayListWrapper_t1083 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m6453 (ArrayListWrapper_t1083 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m6454 (ArrayListWrapper_t1083 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void ArrayListWrapper_Insert_m6455 (ArrayListWrapper_t1083 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayListWrapper_InsertRange_m6456 (ArrayListWrapper_t1083 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C" void ArrayListWrapper_Remove_m6457 (ArrayListWrapper_t1083 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C" void ArrayListWrapper_RemoveAt_m6458 (ArrayListWrapper_t1083 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C" void ArrayListWrapper_CopyTo_m6459 (ArrayListWrapper_t1083 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m6460 (ArrayListWrapper_t1083 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m6461 (ArrayListWrapper_t1083 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C" Object_t * ArrayListWrapper_GetEnumerator_m6462 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void ArrayListWrapper_AddRange_m6463 (ArrayListWrapper_t1083 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
extern "C" Object_t * ArrayListWrapper_Clone_m6464 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C" void ArrayListWrapper_Sort_m6465 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ArrayListWrapper_Sort_m6466 (ArrayListWrapper_t1083 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t295* ArrayListWrapper_ToArray_m6467 (ArrayListWrapper_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * ArrayListWrapper_ToArray_m6468 (ArrayListWrapper_t1083 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;