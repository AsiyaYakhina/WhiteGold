#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraFit
struct CameraFit_t4;
// UnityEngine.Camera
struct Camera_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_CameraFit_Constraint.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CameraFit
struct  CameraFit_t4  : public MonoBehaviour_t2
{
	// UnityEngine.Color CameraFit::wireColor
	Color_t5  ___wireColor_2;
	// System.Single CameraFit::UnitsSize
	float ___UnitsSize_3;
	// CameraFit/Constraint CameraFit::constraint
	int32_t ___constraint_4;
	// UnityEngine.Camera CameraFit::camera
	Camera_t6 * ___camera_6;
	// System.Single CameraFit::_width
	float ____width_7;
	// System.Single CameraFit::_height
	float ____height_8;
	// UnityEngine.Vector3 CameraFit::_bl
	Vector3_t7  ____bl_9;
	// UnityEngine.Vector3 CameraFit::_bc
	Vector3_t7  ____bc_10;
	// UnityEngine.Vector3 CameraFit::_br
	Vector3_t7  ____br_11;
	// UnityEngine.Vector3 CameraFit::_ml
	Vector3_t7  ____ml_12;
	// UnityEngine.Vector3 CameraFit::_mc
	Vector3_t7  ____mc_13;
	// UnityEngine.Vector3 CameraFit::_mr
	Vector3_t7  ____mr_14;
	// UnityEngine.Vector3 CameraFit::_tl
	Vector3_t7  ____tl_15;
	// UnityEngine.Vector3 CameraFit::_tc
	Vector3_t7  ____tc_16;
	// UnityEngine.Vector3 CameraFit::_tr
	Vector3_t7  ____tr_17;
};
struct CameraFit_t4_StaticFields{
	// CameraFit CameraFit::Instance
	CameraFit_t4 * ___Instance_5;
};
