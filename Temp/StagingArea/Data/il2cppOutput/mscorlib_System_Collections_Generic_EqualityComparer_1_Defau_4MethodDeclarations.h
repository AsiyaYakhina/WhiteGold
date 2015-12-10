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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2004;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m14346_gshared (DefaultComparer_t2004 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14346(__this, method) (( void (*) (DefaultComparer_t2004 *, const MethodInfo*))DefaultComparer__ctor_m14346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14347_gshared (DefaultComparer_t2004 * __this, Color32_t283  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14347(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2004 *, Color32_t283 , const MethodInfo*))DefaultComparer_GetHashCode_m14347_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14348_gshared (DefaultComparer_t2004 * __this, Color32_t283  ___x, Color32_t283  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14348(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2004 *, Color32_t283 , Color32_t283 , const MethodInfo*))DefaultComparer_Equals_m14348_gshared)(__this, ___x, ___y, method)
