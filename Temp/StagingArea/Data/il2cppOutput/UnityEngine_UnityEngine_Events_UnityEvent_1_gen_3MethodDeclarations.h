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
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
#define UnityEvent_1__ctor_m1822(__this, method) (( void (*) (UnityEvent_1_t155 *, const MethodInfo*))UnityEvent_1__ctor_m11183_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m13212(__this, ___call, method) (( void (*) (UnityEvent_1_t155 *, UnityAction_1_t1932 *, const MethodInfo*))UnityEvent_1_AddListener_m11185_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m13213(__this, ___call, method) (( void (*) (UnityEvent_1_t155 *, UnityAction_1_t1932 *, const MethodInfo*))UnityEvent_1_RemoveListener_m11187_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m13214(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t155 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m11189_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m13215(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t505 * (*) (UnityEvent_1_t155 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m11191_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m13216(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t505 * (*) (Object_t * /* static, unused */, UnityAction_1_t1932 *, const MethodInfo*))UnityEvent_1_GetDelegate_m11193_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m1876(__this, ___arg0, method) (( void (*) (UnityEvent_1_t155 *, String_t*, const MethodInfo*))UnityEvent_1_Invoke_m11194_gshared)(__this, ___arg0, method)