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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2080;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15200_gshared (Predicate_1_t2080 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15200(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2080 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15200_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15201_gshared (Predicate_1_t2080 * __this, UICharInfo_t339  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15201(__this, ___obj, method) (( bool (*) (Predicate_1_t2080 *, UICharInfo_t339 , const MethodInfo*))Predicate_1_Invoke_m15201_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15202_gshared (Predicate_1_t2080 * __this, UICharInfo_t339  ___obj, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15202(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2080 *, UICharInfo_t339 , AsyncCallback_t161 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15202_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15203_gshared (Predicate_1_t2080 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15203(__this, ___result, method) (( bool (*) (Predicate_1_t2080 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15203_gshared)(__this, ___result, method)
