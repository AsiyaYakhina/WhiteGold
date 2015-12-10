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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t178;
// UnityEngine.Component
struct Component_t21;
// UnityEngine.Transform
struct Transform_t18;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t177;
// UnityEngine.UI.IClippable
struct IClippable_t285;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t186;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m873 (MaskUtilities_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m874 (Object_t * __this /* static, unused */, Component_t21 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m875 (Object_t * __this /* static, unused */, Component_t21 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t18 * MaskUtilities_FindRootSortOverrideCanvas_m876 (Object_t * __this /* static, unused */, Transform_t18 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m877 (Object_t * __this /* static, unused */, Transform_t18 * ___transform, Transform_t18 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t177 * MaskUtilities_GetRectMaskForClippable_m878 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m879 (Object_t * __this /* static, unused */, RectMask2D_t177 * ___clipper, List_1_t186 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
