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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1768;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m10985_gshared (Predicate_1_t1768 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m10985(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1768 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10985_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m10986_gshared (Predicate_1_t1768 * __this, RaycastResult_t65  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m10986(__this, ___obj, method) (( bool (*) (Predicate_1_t1768 *, RaycastResult_t65 , const MethodInfo*))Predicate_1_Invoke_m10986_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m10987_gshared (Predicate_1_t1768 * __this, RaycastResult_t65  ___obj, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m10987(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1768 *, RaycastResult_t65 , AsyncCallback_t161 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10987_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m10988_gshared (Predicate_1_t1768 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m10988(__this, ___result, method) (( bool (*) (Predicate_1_t1768 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10988_gshared)(__this, ___result, method)
