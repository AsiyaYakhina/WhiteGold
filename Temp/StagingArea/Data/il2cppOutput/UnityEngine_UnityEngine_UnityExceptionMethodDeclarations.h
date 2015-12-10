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

// UnityEngine.UnityException
struct UnityException_t332;
// System.String
struct String_t;
// System.Exception
struct Exception_t301;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m2769 (UnityException_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m2770 (UnityException_t332 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m2771 (UnityException_t332 * __this, String_t* ___message, Exception_t301 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
