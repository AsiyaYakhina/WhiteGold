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

// System.Reflection.Binder
struct Binder_t534;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t539;
// System.Globalization.CultureInfo
struct CultureInfo_t536;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t538;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1652;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m7681 (Binder_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m7682 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t534 * Binder_get_DefaultBinder_m7683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m7684 (Object_t * __this /* static, unused */, Binder_t534 * ___binder, ObjectU5BU5D_t295* ___args, ParameterInfoU5BU5D_t539* ___pinfo, CultureInfo_t536 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m7685 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t538 * Binder_FindMostDerivedMatch_m7686 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1652* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
