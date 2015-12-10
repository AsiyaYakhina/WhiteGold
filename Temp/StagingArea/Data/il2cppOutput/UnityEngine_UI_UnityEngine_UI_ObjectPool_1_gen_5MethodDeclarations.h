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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m14821(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2043 *, UnityAction_1_t2044 *, UnityAction_1_t2044 *, const MethodInfo*))ObjectPool_1__ctor_m10667_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countAll()
#define ObjectPool_1_get_countAll_m14822(__this, method) (( int32_t (*) (ObjectPool_1_t2043 *, const MethodInfo*))ObjectPool_1_get_countAll_m10669_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14823(__this, ___value, method) (( void (*) (ObjectPool_1_t2043 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10671_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countActive()
#define ObjectPool_1_get_countActive_m14824(__this, method) (( int32_t (*) (ObjectPool_1_t2043 *, const MethodInfo*))ObjectPool_1_get_countActive_m10673_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14825(__this, method) (( int32_t (*) (ObjectPool_1_t2043 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10675_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Get()
#define ObjectPool_1_Get_m14826(__this, method) (( List_1_t247 * (*) (ObjectPool_1_t2043 *, const MethodInfo*))ObjectPool_1_Get_m10677_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Release(T)
#define ObjectPool_1_Release_m14827(__this, ___element, method) (( void (*) (ObjectPool_1_t2043 *, List_1_t247 *, const MethodInfo*))ObjectPool_1_Release_m10679_gshared)(__this, ___element, method)