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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1900;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12781_gshared (DefaultComparer_t1900 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12781(__this, method) (( void (*) (DefaultComparer_t1900 *, const MethodInfo*))DefaultComparer__ctor_m12781_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12782_gshared (DefaultComparer_t1900 * __this, UIVertex_t173  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12782(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1900 *, UIVertex_t173 , const MethodInfo*))DefaultComparer_GetHashCode_m12782_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12783_gshared (DefaultComparer_t1900 * __this, UIVertex_t173  ___x, UIVertex_t173  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12783(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1900 *, UIVertex_t173 , UIVertex_t173 , const MethodInfo*))DefaultComparer_Equals_m12783_gshared)(__this, ___x, ___y, method)
