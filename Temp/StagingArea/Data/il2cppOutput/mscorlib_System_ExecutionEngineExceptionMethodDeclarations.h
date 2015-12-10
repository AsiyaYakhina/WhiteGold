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

// System.ExecutionEngineException
struct ExecutionEngineException_t1575;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t753;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ExecutionEngineException::.ctor()
extern "C" void ExecutionEngineException__ctor_m9823 (ExecutionEngineException_t1575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.String)
extern "C" void ExecutionEngineException__ctor_m9824 (ExecutionEngineException_t1575 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionEngineException__ctor_m9825 (ExecutionEngineException_t1575 * __this, SerializationInfo_t753 * ___info, StreamingContext_t754  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
