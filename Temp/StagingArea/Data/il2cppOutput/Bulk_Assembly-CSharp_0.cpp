#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// PlayAgain
struct PlayAgain_t1;
// CameraFit
struct CameraFit_t4;
// UnityEngine.Camera
struct Camera_t6;
// System.Object
struct Object_t;
// CottonGenerator
struct CottonGenerator_t8;
// bgndScrolling
struct bgndScrolling_t11;
// UnityEngine.Collider2D
struct Collider2D_t17;
// cottonCollider
struct cottonCollider_t12;
// cottonPicker
struct cottonPicker_t13;
// scoreTracker
struct scoreTracker_t14;
// scrolling
struct scrolling_t16;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayAgain.h"
#include "AssemblyU2DCSharp_PlayAgainMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "AssemblyU2DCSharp_CameraFit_Constraint.h"
#include "AssemblyU2DCSharp_CameraFit_ConstraintMethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraFit.h"
#include "AssemblyU2DCSharp_CameraFitMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "mscorlib_System_Boolean.h"
#include "AssemblyU2DCSharp_CottonGenerator.h"
#include "AssemblyU2DCSharp_CottonGeneratorMethodDeclarations.h"
#include "AssemblyU2DCSharp_cottonPickerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "AssemblyU2DCSharp_bgndScrolling.h"
#include "AssemblyU2DCSharp_bgndScrollingMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "AssemblyU2DCSharp_cottonCollider.h"
#include "AssemblyU2DCSharp_cottonColliderMethodDeclarations.h"
#include "AssemblyU2DCSharp_cottonPicker.h"
#include "AssemblyU2DCSharp_scoreTracker.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "AssemblyU2DCSharp_scoreTrackerMethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
#include "mscorlib_System_SingleMethodDeclarations.h"
#include "AssemblyU2DCSharp_scrolling.h"
#include "AssemblyU2DCSharp_scrollingMethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m86_gshared (Component_t21 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m86(__this, method) (( Object_t * (*) (Component_t21 *, const MethodInfo*))Component_GetComponent_TisObject_t_m86_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t6_m44(__this, method) (( Camera_t6 * (*) (Component_t21 *, const MethodInfo*))Component_GetComponent_TisObject_t_m86_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m87_gshared (GameObject_t9 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m87(__this, method) (( Object_t * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m87_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<scoreTracker>()
#define GameObject_GetComponent_TisscoreTracker_t14_m81(__this, method) (( scoreTracker_t14 * (*) (GameObject_t9 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m87_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayAgain::.ctor()
extern "C" void PlayAgain__ctor_m0 (PlayAgain_t1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayAgain::playAgain()
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" void PlayAgain_playAgain_m1 (PlayAgain_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m42(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFit::.ctor()
extern "C" void CameraFit__ctor_m2 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Color_t5  L_0 = Color_get_white_m43(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___wireColor_2 = L_0;
		__this->___UnitsSize_3 = (1.0f);
		__this->___constraint_4 = 1;
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single CameraFit::get_Width()
extern "C" float CameraFit_get_Width_m3 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->____width_7);
		return L_0;
	}
}
// System.Single CameraFit::get_Height()
extern "C" float CameraFit_get_Height_m4 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->____height_8);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_BottomLeft()
extern "C" Vector3_t7  CameraFit_get_BottomLeft_m5 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____bl_9);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_BottomCenter()
extern "C" Vector3_t7  CameraFit_get_BottomCenter_m6 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____bc_10);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_BottomRight()
extern "C" Vector3_t7  CameraFit_get_BottomRight_m7 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____br_11);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_MiddleLeft()
extern "C" Vector3_t7  CameraFit_get_MiddleLeft_m8 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____ml_12);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_MiddleCenter()
extern "C" Vector3_t7  CameraFit_get_MiddleCenter_m9 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____mc_13);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_MiddleRight()
extern "C" Vector3_t7  CameraFit_get_MiddleRight_m10 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____mr_14);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_TopLeft()
extern "C" Vector3_t7  CameraFit_get_TopLeft_m11 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____tl_15);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_TopCenter()
extern "C" Vector3_t7  CameraFit_get_TopCenter_m12 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____tc_16);
		return L_0;
	}
}
// UnityEngine.Vector3 CameraFit::get_TopRight()
extern "C" Vector3_t7  CameraFit_get_TopRight_m13 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t7  L_0 = (__this->____tr_17);
		return L_0;
	}
}
// System.Void CameraFit::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t6_m44_MethodInfo_var;
extern "C" void CameraFit_Awake_m14 (CameraFit_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t6_m44_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t6 * L_0 = Component_GetComponent_TisCamera_t6_m44(__this, /*hidden argument*/Component_GetComponent_TisCamera_t6_m44_MethodInfo_var);
		__this->___camera_6 = L_0;
		CameraFit_ComputeResolution_m15(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFit::ComputeResolution()
extern TypeInfo* CameraFit_t4_il2cpp_TypeInfo_var;
extern "C" void CameraFit_ComputeResolution_m15 (CameraFit_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraFit_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t7  V_8 = {0};
	Vector3_t7  V_9 = {0};
	{
		int32_t L_0 = Screen_get_width_m45(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_0)));
		int32_t L_1 = Screen_get_height_m46(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_1)));
		int32_t L_2 = (__this->___constraint_4);
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		Camera_t6 * L_3 = (__this->___camera_6);
		Camera_t6 * L_4 = (__this->___camera_6);
		float L_5 = Camera_get_aspect_m47(L_4, /*hidden argument*/NULL);
		float L_6 = (__this->___UnitsSize_3);
		Camera_set_orthographicSize_m48(L_3, ((float)((float)((float)((float)((float)((float)(1.0f)/(float)L_5))*(float)L_6))/(float)(2.0f))), /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0047:
	{
		Camera_t6 * L_7 = (__this->___camera_6);
		float L_8 = (__this->___UnitsSize_3);
		Camera_set_orthographicSize_m48(L_7, ((float)((float)L_8/(float)(2.0f))), /*hidden argument*/NULL);
	}

IL_005e:
	{
		Camera_t6 * L_9 = (__this->___camera_6);
		float L_10 = Camera_get_orthographicSize_m49(L_9, /*hidden argument*/NULL);
		__this->____height_8 = ((float)((float)(2.0f)*(float)L_10));
		float L_11 = (__this->____height_8);
		Camera_t6 * L_12 = (__this->___camera_6);
		float L_13 = Camera_get_aspect_m47(L_12, /*hidden argument*/NULL);
		__this->____width_7 = ((float)((float)L_11*(float)L_13));
		Camera_t6 * L_14 = (__this->___camera_6);
		Transform_t18 * L_15 = Component_get_transform_m50(L_14, /*hidden argument*/NULL);
		Vector3_t7  L_16 = Transform_get_position_m51(L_15, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->___x_1);
		V_6 = L_17;
		Camera_t6 * L_18 = (__this->___camera_6);
		Transform_t18 * L_19 = Component_get_transform_m50(L_18, /*hidden argument*/NULL);
		Vector3_t7  L_20 = Transform_get_position_m51(L_19, /*hidden argument*/NULL);
		V_9 = L_20;
		float L_21 = ((&V_9)->___y_2);
		V_7 = L_21;
		float L_22 = V_6;
		float L_23 = (__this->____width_7);
		V_2 = ((float)((float)L_22-(float)((float)((float)L_23/(float)(2.0f)))));
		float L_24 = V_6;
		float L_25 = (__this->____width_7);
		V_3 = ((float)((float)L_24+(float)((float)((float)L_25/(float)(2.0f)))));
		float L_26 = V_7;
		float L_27 = (__this->____height_8);
		V_4 = ((float)((float)L_26+(float)((float)((float)L_27/(float)(2.0f)))));
		float L_28 = V_7;
		float L_29 = (__this->____height_8);
		V_5 = ((float)((float)L_28-(float)((float)((float)L_29/(float)(2.0f)))));
		float L_30 = V_2;
		float L_31 = V_5;
		Vector3_t7  L_32 = {0};
		Vector3__ctor_m52(&L_32, L_30, L_31, (0.0f), /*hidden argument*/NULL);
		__this->____bl_9 = L_32;
		float L_33 = V_6;
		float L_34 = V_5;
		Vector3_t7  L_35 = {0};
		Vector3__ctor_m52(&L_35, L_33, L_34, (0.0f), /*hidden argument*/NULL);
		__this->____bc_10 = L_35;
		float L_36 = V_3;
		float L_37 = V_5;
		Vector3_t7  L_38 = {0};
		Vector3__ctor_m52(&L_38, L_36, L_37, (0.0f), /*hidden argument*/NULL);
		__this->____br_11 = L_38;
		float L_39 = V_2;
		float L_40 = V_7;
		Vector3_t7  L_41 = {0};
		Vector3__ctor_m52(&L_41, L_39, L_40, (0.0f), /*hidden argument*/NULL);
		__this->____ml_12 = L_41;
		float L_42 = V_6;
		float L_43 = V_7;
		Vector3_t7  L_44 = {0};
		Vector3__ctor_m52(&L_44, L_42, L_43, (0.0f), /*hidden argument*/NULL);
		__this->____mc_13 = L_44;
		float L_45 = V_3;
		float L_46 = V_7;
		Vector3_t7  L_47 = {0};
		Vector3__ctor_m52(&L_47, L_45, L_46, (0.0f), /*hidden argument*/NULL);
		__this->____mr_14 = L_47;
		float L_48 = V_2;
		float L_49 = V_4;
		Vector3_t7  L_50 = {0};
		Vector3__ctor_m52(&L_50, L_48, L_49, (0.0f), /*hidden argument*/NULL);
		__this->____tl_15 = L_50;
		float L_51 = V_6;
		float L_52 = V_4;
		Vector3_t7  L_53 = {0};
		Vector3__ctor_m52(&L_53, L_51, L_52, (0.0f), /*hidden argument*/NULL);
		__this->____tc_16 = L_53;
		float L_54 = V_3;
		float L_55 = V_4;
		Vector3_t7  L_56 = {0};
		Vector3__ctor_m52(&L_56, L_54, L_55, (0.0f), /*hidden argument*/NULL);
		__this->____tr_17 = L_56;
		((CameraFit_t4_StaticFields*)CameraFit_t4_il2cpp_TypeInfo_var->static_fields)->___Instance_5 = __this;
		return;
	}
}
// System.Void CameraFit::Update()
extern "C" void CameraFit_Update_m16 (CameraFit_t4 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CameraFit::OnDrawGizmos()
extern "C" void CameraFit_OnDrawGizmos_m17 (CameraFit_t4 * __this, const MethodInfo* method)
{
	Matrix4x4_t19  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Color_t5  L_0 = (__this->___wireColor_2);
		Gizmos_set_color_m53(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Matrix4x4_t19  L_1 = Gizmos_get_matrix_m54(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t18 * L_2 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Vector3_t7  L_3 = Transform_get_position_m51(L_2, /*hidden argument*/NULL);
		Transform_t18 * L_4 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_5 = Transform_get_rotation_m55(L_4, /*hidden argument*/NULL);
		Vector3_t7  L_6 = Vector3_get_one_m56(NULL /*static, unused*/, /*hidden argument*/NULL);
		Matrix4x4_t19  L_7 = Matrix4x4_TRS_m57(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/NULL);
		Gizmos_set_matrix_m58(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Camera_t6 * L_8 = (__this->___camera_6);
		bool L_9 = Camera_get_orthographic_m59(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ca;
		}
	}
	{
		Camera_t6 * L_10 = (__this->___camera_6);
		float L_11 = Camera_get_farClipPlane_m60(L_10, /*hidden argument*/NULL);
		Camera_t6 * L_12 = (__this->___camera_6);
		float L_13 = Camera_get_nearClipPlane_m61(L_12, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_11-(float)L_13));
		Camera_t6 * L_14 = (__this->___camera_6);
		float L_15 = Camera_get_farClipPlane_m60(L_14, /*hidden argument*/NULL);
		Camera_t6 * L_16 = (__this->___camera_6);
		float L_17 = Camera_get_nearClipPlane_m61(L_16, /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)((float)L_15+(float)L_17))*(float)(0.5f)));
		float L_18 = V_2;
		Vector3_t7  L_19 = {0};
		Vector3__ctor_m52(&L_19, (0.0f), (0.0f), L_18, /*hidden argument*/NULL);
		Camera_t6 * L_20 = (__this->___camera_6);
		float L_21 = Camera_get_orthographicSize_m49(L_20, /*hidden argument*/NULL);
		Camera_t6 * L_22 = (__this->___camera_6);
		float L_23 = Camera_get_aspect_m47(L_22, /*hidden argument*/NULL);
		Camera_t6 * L_24 = (__this->___camera_6);
		float L_25 = Camera_get_orthographicSize_m49(L_24, /*hidden argument*/NULL);
		float L_26 = V_1;
		Vector3_t7  L_27 = {0};
		Vector3__ctor_m52(&L_27, ((float)((float)((float)((float)L_21*(float)(2.0f)))*(float)L_23)), ((float)((float)L_25*(float)(2.0f))), L_26, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m62(NULL /*static, unused*/, L_19, L_27, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00ca:
	{
		Vector3_t7  L_28 = Vector3_get_zero_m63(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t6 * L_29 = (__this->___camera_6);
		float L_30 = Camera_get_fieldOfView_m64(L_29, /*hidden argument*/NULL);
		Camera_t6 * L_31 = (__this->___camera_6);
		float L_32 = Camera_get_farClipPlane_m60(L_31, /*hidden argument*/NULL);
		Camera_t6 * L_33 = (__this->___camera_6);
		float L_34 = Camera_get_nearClipPlane_m61(L_33, /*hidden argument*/NULL);
		Camera_t6 * L_35 = (__this->___camera_6);
		float L_36 = Camera_get_aspect_m47(L_35, /*hidden argument*/NULL);
		Gizmos_DrawFrustum_m65(NULL /*static, unused*/, L_28, L_30, L_32, L_34, L_36, /*hidden argument*/NULL);
	}

IL_0100:
	{
		Matrix4x4_t19  L_37 = V_0;
		Gizmos_set_matrix_m58(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CottonGenerator::.ctor()
extern "C" void CottonGenerator__ctor_m18 (CottonGenerator_t8 * __this, const MethodInfo* method)
{
	{
		__this->___yMin_11 = (-2.89f);
		__this->___yMax_12 = (2.89f);
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CottonGenerator::.cctor()
extern "C" void CottonGenerator__cctor_m19 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CottonGenerator::reduceCoutner()
extern TypeInfo* CottonGenerator_t8_il2cpp_TypeInfo_var;
extern "C" void CottonGenerator_reduceCoutner_m20 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CottonGenerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CottonGenerator_t8_StaticFields*)CottonGenerator_t8_il2cpp_TypeInfo_var->static_fields)->___visibleCounter_15;
		((CottonGenerator_t8_StaticFields*)CottonGenerator_t8_il2cpp_TypeInfo_var->static_fields)->___visibleCounter_15 = ((int32_t)((int32_t)L_0-(int32_t)1));
		return;
	}
}
// System.Void CottonGenerator::Start()
extern TypeInfo* CottonGenerator_t8_il2cpp_TypeInfo_var;
extern "C" void CottonGenerator_Start_m21 (CottonGenerator_t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CottonGenerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___maxTimer_14 = 3;
		int32_t L_0 = (__this->___maxTimer_14);
		__this->___timer_13 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		((CottonGenerator_t8_StaticFields*)CottonGenerator_t8_il2cpp_TypeInfo_var->static_fields)->___visibleCounter_15 = 0;
		__this->___maxCounter_16 = ((int32_t)50);
		return;
	}
}
// System.Void CottonGenerator::Update()
extern TypeInfo* cottonPicker_t13_il2cpp_TypeInfo_var;
extern TypeInfo* CottonGenerator_t8_il2cpp_TypeInfo_var;
extern "C" void CottonGenerator_Update_m22 (CottonGenerator_t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		cottonPicker_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		CottonGenerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(cottonPicker_t13_il2cpp_TypeInfo_var);
		int32_t L_0 = cottonPicker_seeIfDead_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_2 = (__this->___timer_13);
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_3 = (__this->___maxTimer_14);
		__this->___timer_13 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		int32_t L_4 = ((CottonGenerator_t8_StaticFields*)CottonGenerator_t8_il2cpp_TypeInfo_var->static_fields)->___visibleCounter_15;
		int32_t L_5 = (__this->___maxCounter_16);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		CottonGenerator_createRandomCotton_m23(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		int32_t L_6 = ((CottonGenerator_t8_StaticFields*)CottonGenerator_t8_il2cpp_TypeInfo_var->static_fields)->___visibleCounter_15;
		((CottonGenerator_t8_StaticFields*)CottonGenerator_t8_il2cpp_TypeInfo_var->static_fields)->___visibleCounter_15 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0046:
	{
		goto IL_0059;
	}

IL_004b:
	{
		int32_t L_7 = (__this->___timer_13);
		__this->___timer_13 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0059:
	{
		return;
	}
}
// System.Void CottonGenerator::createRandomCotton()
extern "C" void CottonGenerator_createRandomCotton_m23 (CottonGenerator_t8 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector2_t10  V_1 = {0};
	int32_t V_2 = 0;
	Vector3_t7  V_3 = {0};
	{
		float L_0 = Random_Range_m66(NULL /*static, unused*/, (-2.7f), (2.7f), /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t18 * L_1 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Vector3_t7  L_2 = Transform_get_position_m51(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = ((&V_3)->___x_1);
		float L_4 = V_0;
		Vector2__ctor_m67((&V_1), L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = Random_Range_m68(NULL /*static, unused*/, 1, ((int32_t)9), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		GameObject_t9 * L_7 = (__this->___cottonPiece1_2);
		Vector2_t10  L_8 = V_1;
		Vector3_t7  L_9 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Transform_t18 * L_10 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_11 = Transform_get_rotation_m55(L_10, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_005d:
	{
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0086;
		}
	}
	{
		GameObject_t9 * L_13 = (__this->___cottonPiece2_3);
		Vector2_t10  L_14 = V_1;
		Vector3_t7  L_15 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Transform_t18 * L_16 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_17 = Transform_get_rotation_m55(L_16, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_0086:
	{
		int32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_00af;
		}
	}
	{
		GameObject_t9 * L_19 = (__this->___cottonPiece3_4);
		Vector2_t10  L_20 = V_1;
		Vector3_t7  L_21 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Transform_t18 * L_22 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_23 = Transform_get_rotation_m55(L_22, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_19, L_21, L_23, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_00af:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)4))))
		{
			goto IL_00d8;
		}
	}
	{
		GameObject_t9 * L_25 = (__this->___cottonPiece4_5);
		Vector2_t10  L_26 = V_1;
		Vector3_t7  L_27 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Transform_t18 * L_28 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_29 = Transform_get_rotation_m55(L_28, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_25, L_27, L_29, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_00d8:
	{
		int32_t L_30 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)5))))
		{
			goto IL_0101;
		}
	}
	{
		GameObject_t9 * L_31 = (__this->___cottonPiece5_6);
		Vector2_t10  L_32 = V_1;
		Vector3_t7  L_33 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		Transform_t18 * L_34 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_35 = Transform_get_rotation_m55(L_34, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_31, L_33, L_35, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_0101:
	{
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)6))))
		{
			goto IL_012a;
		}
	}
	{
		GameObject_t9 * L_37 = (__this->___cottonPiece6_7);
		Vector2_t10  L_38 = V_1;
		Vector3_t7  L_39 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		Transform_t18 * L_40 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_41 = Transform_get_rotation_m55(L_40, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_37, L_39, L_41, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_012a:
	{
		int32_t L_42 = V_2;
		if ((!(((uint32_t)L_42) == ((uint32_t)7))))
		{
			goto IL_0153;
		}
	}
	{
		GameObject_t9 * L_43 = (__this->___cottonPiece7_8);
		Vector2_t10  L_44 = V_1;
		Vector3_t7  L_45 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		Transform_t18 * L_46 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_47 = Transform_get_rotation_m55(L_46, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_43, L_45, L_47, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_0153:
	{
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)8))))
		{
			goto IL_0177;
		}
	}
	{
		GameObject_t9 * L_49 = (__this->___cottonPiece8_9);
		Vector2_t10  L_50 = V_1;
		Vector3_t7  L_51 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		Transform_t18 * L_52 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Quaternion_t20  L_53 = Transform_get_rotation_m55(L_52, /*hidden argument*/NULL);
		Object_Instantiate_m70(NULL /*static, unused*/, L_49, L_51, L_53, /*hidden argument*/NULL);
	}

IL_0177:
	{
		return;
	}
}
// System.Void bgndScrolling::.ctor()
extern "C" void bgndScrolling__ctor_m24 (bgndScrolling_t11 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (0.2f);
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void bgndScrolling::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CottonGenerator_t8_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern "C" void bgndScrolling_OnTriggerEnter2D_m25 (bgndScrolling_t11 * __this, Collider2D_t17 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		CottonGenerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m71(NULL /*static, unused*/, _stringLiteral1, /*hidden argument*/NULL);
		Collider2D_t17 * L_0 = ___col;
		GameObject_t9 * L_1 = Component_get_gameObject_m72(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m73(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m74(NULL /*static, unused*/, L_2, _stringLiteral2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		MonoBehaviour_print_m71(NULL /*static, unused*/, _stringLiteral3, /*hidden argument*/NULL);
		Transform_t18 * L_4 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Vector2_t10  L_5 = {0};
		Vector2__ctor_m67(&L_5, (43.73f), (0.0f), /*hidden argument*/NULL);
		Vector3_t7  L_6 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Transform_Translate_m75(L_4, L_6, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0052:
	{
		Collider2D_t17 * L_7 = ___col;
		GameObject_t9 * L_8 = Component_get_gameObject_m72(L_7, /*hidden argument*/NULL);
		String_t* L_9 = GameObject_get_tag_m73(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m74(NULL /*static, unused*/, L_9, _stringLiteral4, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		MonoBehaviour_print_m71(NULL /*static, unused*/, _stringLiteral5, /*hidden argument*/NULL);
		Collider2D_t17 * L_11 = ___col;
		GameObject_t9 * L_12 = Component_get_gameObject_m72(L_11, /*hidden argument*/NULL);
		Object_Destroy_m76(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		CottonGenerator_reduceCoutner_m20(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void bgndScrolling::Update()
extern TypeInfo* cottonPicker_t13_il2cpp_TypeInfo_var;
extern "C" void bgndScrolling_Update_m26 (bgndScrolling_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		cottonPicker_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(cottonPicker_t13_il2cpp_TypeInfo_var);
		int32_t L_0 = cottonPicker_seeIfDead_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		Transform_t18 * L_2 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Vector2_t10  L_3 = {0};
		Vector2__ctor_m67(&L_3, (-1.0f), (0.0f), /*hidden argument*/NULL);
		float L_4 = (__this->___speed_2);
		Vector2_t10  L_5 = Vector2_op_Multiply_m77(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m78(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t10  L_7 = Vector2_op_Multiply_m77(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t7  L_8 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Transform_Translate_m75(L_2, L_8, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_0046:
	{
		return;
	}
}
// System.Void cottonCollider::.ctor()
extern "C" void cottonCollider__ctor_m27 (cottonCollider_t12 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cottonCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CottonGenerator_t8_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void cottonCollider_OnTriggerEnter2D_m28 (cottonCollider_t12 * __this, Collider2D_t17 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		CottonGenerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t17 * L_0 = ___col;
		GameObject_t9 * L_1 = Component_get_gameObject_m72(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m73(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m74(NULL /*static, unused*/, L_2, _stringLiteral4, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Collider2D_t17 * L_4 = ___col;
		GameObject_t9 * L_5 = Component_get_gameObject_m72(L_4, /*hidden argument*/NULL);
		Object_Destroy_m76(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		CottonGenerator_reduceCoutner_m20(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void cottonPicker::.ctor()
extern "C" void cottonPicker__ctor_m29 (cottonPicker_t13 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cottonPicker::.cctor()
extern TypeInfo* cottonPicker_t13_il2cpp_TypeInfo_var;
extern "C" void cottonPicker__cctor_m30 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		cottonPicker_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		((cottonPicker_t13_StaticFields*)cottonPicker_t13_il2cpp_TypeInfo_var->static_fields)->___liveDie_3 = 1;
		return;
	}
}
// System.Void cottonPicker::Start()
extern const MethodInfo* GameObject_GetComponent_TisscoreTracker_t14_m81_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void cottonPicker_Start_m31 (cottonPicker_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisscoreTracker_t14_m81_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t18 * L_0 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Object_set_name_m79(L_0, _stringLiteral6, /*hidden argument*/NULL);
		GameObject_t9 * L_1 = GameObject_FindGameObjectWithTag_m80(NULL /*static, unused*/, _stringLiteral7, /*hidden argument*/NULL);
		scoreTracker_t14 * L_2 = GameObject_GetComponent_TisscoreTracker_t14_m81(L_1, /*hidden argument*/GameObject_GetComponent_TisscoreTracker_t14_m81_MethodInfo_var);
		__this->___st_2 = L_2;
		return;
	}
}
// System.Void cottonPicker::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CottonGenerator_t8_il2cpp_TypeInfo_var;
extern TypeInfo* cottonPicker_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void cottonPicker_OnTriggerEnter2D_m32 (cottonPicker_t13 * __this, Collider2D_t17 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		CottonGenerator_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		cottonPicker_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Collider2D_t17 * L_0 = ___col;
		GameObject_t9 * L_1 = Component_get_gameObject_m72(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m73(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m74(NULL /*static, unused*/, L_2, _stringLiteral4, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CottonGenerator_t8_il2cpp_TypeInfo_var);
		CottonGenerator_reduceCoutner_m20(NULL /*static, unused*/, /*hidden argument*/NULL);
		Collider2D_t17 * L_4 = ___col;
		GameObject_t9 * L_5 = Component_get_gameObject_m72(L_4, /*hidden argument*/NULL);
		Object_Destroy_m76(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Debug_Log_m82(NULL /*static, unused*/, _stringLiteral8, /*hidden argument*/NULL);
		int32_t L_6 = Random_Range_m68(NULL /*static, unused*/, 1, 5, /*hidden argument*/NULL);
		V_0 = L_6;
		scoreTracker_t14 * L_7 = (__this->___st_2);
		scoreTracker_t14 * L_8 = (__this->___st_2);
		float L_9 = (L_8->___score_2);
		int32_t L_10 = V_0;
		L_7->___score_2 = ((float)((float)L_9+(float)((float)((float)(((float)((float)L_10)))*(float)(0.25f)))));
		goto IL_00c8;
	}

IL_0060:
	{
		Collider2D_t17 * L_11 = ___col;
		GameObject_t9 * L_12 = Component_get_gameObject_m72(L_11, /*hidden argument*/NULL);
		String_t* L_13 = GameObject_get_tag_m73(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m74(NULL /*static, unused*/, L_13, _stringLiteral9, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		MonoBehaviour_print_m71(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		GameObject_t9 * L_15 = Component_get_gameObject_m72(__this, /*hidden argument*/NULL);
		Object_Destroy_m76(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(cottonPicker_t13_il2cpp_TypeInfo_var);
		((cottonPicker_t13_StaticFields*)cottonPicker_t13_il2cpp_TypeInfo_var->static_fields)->___liveDie_3 = 0;
		Debug_Log_m82(NULL /*static, unused*/, _stringLiteral8, /*hidden argument*/NULL);
		goto IL_00c8;
	}

IL_00a4:
	{
		Collider2D_t17 * L_16 = ___col;
		GameObject_t9 * L_17 = Component_get_gameObject_m72(L_16, /*hidden argument*/NULL);
		String_t* L_18 = GameObject_get_tag_m73(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m74(NULL /*static, unused*/, L_18, _stringLiteral2, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		MonoBehaviour_print_m71(NULL /*static, unused*/, _stringLiteral11, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		return;
	}
}
// System.Int32 cottonPicker::seeIfDead()
extern TypeInfo* cottonPicker_t13_il2cpp_TypeInfo_var;
extern "C" int32_t cottonPicker_seeIfDead_m33 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		cottonPicker_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(cottonPicker_t13_il2cpp_TypeInfo_var);
		int32_t L_0 = ((cottonPicker_t13_StaticFields*)cottonPicker_t13_il2cpp_TypeInfo_var->static_fields)->___liveDie_3;
		return L_0;
	}
}
// System.Void cottonPicker::replay()
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" void cottonPicker_replay_m34 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m42(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void scoreTracker::.ctor()
extern "C" void scoreTracker__ctor_m35 (scoreTracker_t14 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void scoreTracker::Start()
extern Il2CppCodeGenString* _stringLiteral12;
extern "C" void scoreTracker_Start_m36 (scoreTracker_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t15 * L_0 = (__this->___finalScoreText_3);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral12);
		return;
	}
}
// System.Void scoreTracker::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void scoreTracker_Update_m37 (scoreTracker_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t15 * L_0 = (__this->___scoreText_4);
		float* L_1 = &(__this->___score_2);
		String_t* L_2 = Single_ToString_m83(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m84(NULL /*static, unused*/, L_2, _stringLiteral13, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_t15 * L_4 = (__this->___finalScoreText_3);
		float* L_5 = &(__this->___score_2);
		String_t* L_6 = Single_ToString_m83(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m85(NULL /*static, unused*/, _stringLiteral14, L_6, _stringLiteral13, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		return;
	}
}
// System.Void scrolling::.ctor()
extern "C" void scrolling__ctor_m38 (scrolling_t16 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (10.0f);
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void scrolling::Start()
extern "C" void scrolling_Start_m39 (scrolling_t16 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void scrolling::Update()
extern TypeInfo* cottonPicker_t13_il2cpp_TypeInfo_var;
extern "C" void scrolling_Update_m40 (scrolling_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		cottonPicker_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(cottonPicker_t13_il2cpp_TypeInfo_var);
		int32_t L_0 = cottonPicker_seeIfDead_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		Transform_t18 * L_2 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Vector2_t10  L_3 = {0};
		Vector2__ctor_m67(&L_3, (-1.0f), (0.0f), /*hidden argument*/NULL);
		float L_4 = (__this->___speed_2);
		Vector2_t10  L_5 = Vector2_op_Multiply_m77(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m78(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t10  L_7 = Vector2_op_Multiply_m77(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t7  L_8 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Transform_Translate_m75(L_2, L_8, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_0046:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
