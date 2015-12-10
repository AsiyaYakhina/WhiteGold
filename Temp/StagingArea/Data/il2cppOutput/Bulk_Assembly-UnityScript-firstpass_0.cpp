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

// followTouch
struct followTouch_t23;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_followTouch.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_followTouchMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_SingleMethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Transform.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void followTouch::.ctor()
extern "C" void followTouch__ctor_m88 (followTouch_t23 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void followTouch::Start()
extern TypeInfo* RuntimeServices_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" void followTouch_Start_m89 (followTouch_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeServices_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t10 * L_0 = &(__this->___pos_2);
		float* L_1 = &(L_0->___x_1);
		String_t* L_2 = Single_ToString_m83(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t24_il2cpp_TypeInfo_var);
		String_t* L_3 = RuntimeServices_op_Addition_m93(NULL /*static, unused*/, _stringLiteral15, L_2, /*hidden argument*/NULL);
		String_t* L_4 = RuntimeServices_op_Addition_m93(NULL /*static, unused*/, L_3, _stringLiteral16, /*hidden argument*/NULL);
		Vector2_t10 * L_5 = &(__this->___pos_2);
		float* L_6 = &(L_5->___y_2);
		String_t* L_7 = Single_ToString_m83(L_6, /*hidden argument*/NULL);
		String_t* L_8 = RuntimeServices_op_Addition_m93(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		MonoBehaviour_print_m71(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void followTouch::Update()
extern "C" void followTouch_Update_m90 (followTouch_t23 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(6 /* System.Void followTouch::MoveUpdate() */, __this);
		return;
	}
}
// System.Void followTouch::MoveUpdate()
extern TypeInfo* Input_t26_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void followTouch_MoveUpdate_m91 (followTouch_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RuntimeServices_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t25  V_0 = {0};
	Vector2_t10  V_1 = {0};
	Touch_t25  V_2 = {0};
	Vector2_t10  V_3 = {0};
	Vector3_t7  V_4 = {0};
	Vector3_t7  V_5 = {0};
	{
		int32_t L_0 = Application_get_platform_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a4;
		}
	}
	{
		MonoBehaviour_print_m71(NULL /*static, unused*/, _stringLiteral17, /*hidden argument*/NULL);
		Camera_t6 * L_1 = Camera_get_main_m95(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t26_il2cpp_TypeInfo_var);
		Touch_t25  L_2 = Input_GetTouch_m96(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t10  L_3 = Touch_get_position_m97((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ((&V_1)->___x_1);
		Touch_t25  L_5 = Input_GetTouch_m96(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_5;
		Vector2_t10  L_6 = Touch_get_position_m97((&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___y_2);
		Vector2_t10  L_8 = {0};
		Vector2__ctor_m67(&L_8, L_4, L_7, /*hidden argument*/NULL);
		Vector3_t7  L_9 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3_t7  L_10 = Camera_ScreenToWorldPoint_m98(L_1, L_9, /*hidden argument*/NULL);
		Vector2_t10  L_11 = Vector2_op_Implicit_m99(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->___pos_2 = L_11;
		Vector2_t10 * L_12 = &(__this->___pos_2);
		float* L_13 = &(L_12->___x_1);
		String_t* L_14 = Single_ToString_m83(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t24_il2cpp_TypeInfo_var);
		String_t* L_15 = RuntimeServices_op_Addition_m93(NULL /*static, unused*/, _stringLiteral18, L_14, /*hidden argument*/NULL);
		String_t* L_16 = RuntimeServices_op_Addition_m93(NULL /*static, unused*/, L_15, _stringLiteral19, /*hidden argument*/NULL);
		Vector2_t10 * L_17 = &(__this->___pos_2);
		float* L_18 = &(L_17->___y_2);
		String_t* L_19 = Single_ToString_m83(L_18, /*hidden argument*/NULL);
		String_t* L_20 = RuntimeServices_op_Addition_m93(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		MonoBehaviour_print_m71(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_00a4:
	{
		Camera_t6 * L_21 = Camera_get_main_m95(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t26_il2cpp_TypeInfo_var);
		Vector3_t7  L_22 = Input_get_mousePosition_m100(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = ((&V_4)->___x_1);
		Vector3_t7  L_24 = Input_get_mousePosition_m100(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_24;
		float L_25 = ((&V_5)->___y_2);
		Vector2_t10  L_26 = {0};
		Vector2__ctor_m67(&L_26, L_23, L_25, /*hidden argument*/NULL);
		Vector3_t7  L_27 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Vector3_t7  L_28 = Camera_ScreenToWorldPoint_m98(L_21, L_27, /*hidden argument*/NULL);
		Vector2_t10  L_29 = Vector2_op_Implicit_m99(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		__this->___pos_2 = L_29;
	}

IL_00df:
	{
		Transform_t18 * L_30 = Component_get_transform_m50(__this, /*hidden argument*/NULL);
		Vector2_t10 * L_31 = &(__this->___pos_2);
		float L_32 = (L_31->___x_1);
		Vector2_t10 * L_33 = &(__this->___pos_2);
		float L_34 = (L_33->___y_2);
		Vector2_t10  L_35 = {0};
		Vector2__ctor_m67(&L_35, L_32, ((float)((float)L_34+(float)(1.0f))), /*hidden argument*/NULL);
		Vector3_t7  L_36 = Vector2_op_Implicit_m69(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		Transform_set_position_m101(L_30, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void followTouch::Main()
extern "C" void followTouch_Main_m92 (followTouch_t23 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
