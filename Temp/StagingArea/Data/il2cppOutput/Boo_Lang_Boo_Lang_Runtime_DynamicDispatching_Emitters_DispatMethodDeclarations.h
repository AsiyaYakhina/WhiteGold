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

// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct DispatcherEmitter_t560;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t554;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::.ctor(System.Type,System.String)
extern "C" void DispatcherEmitter__ctor_m2927 (DispatcherEmitter_t560 * __this, Type_t * ___owner, String_t* ___dynamicMethodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::Emit()
extern "C" Dispatcher_t554 * DispatcherEmitter_Emit_m2928 (DispatcherEmitter_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::CreateMethodDispatcher()
extern "C" Dispatcher_t554 * DispatcherEmitter_CreateMethodDispatcher_m2929 (DispatcherEmitter_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitCastOrUnbox(System.Type)
extern "C" void DispatcherEmitter_EmitCastOrUnbox_m2930 (DispatcherEmitter_t560 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::BoxIfNeeded(System.Type)
extern "C" void DispatcherEmitter_BoxIfNeeded_m2931 (DispatcherEmitter_t560 * __this, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitReturn(System.Type)
extern "C" void DispatcherEmitter_EmitReturn_m2932 (DispatcherEmitter_t560 * __this, Type_t * ___typeOnStack, const MethodInfo* method) IL2CPP_METHOD_ATTR;
