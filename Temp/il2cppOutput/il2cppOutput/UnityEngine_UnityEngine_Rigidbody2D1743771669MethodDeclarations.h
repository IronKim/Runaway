﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_ForceMode2D665452726.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C"  Vector2_t4282066565  Rigidbody2D_get_position_m3766784193 (Rigidbody2D_t1743771669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_get_position_m80650910 (Rigidbody2D_t1743771669 * __this, Vector2_t4282066565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t4282066565  Rigidbody2D_get_velocity_m416159605 (Rigidbody2D_t1743771669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m100625302 (Rigidbody2D_t1743771669 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_get_velocity_m715507538 (Rigidbody2D_t1743771669 * __this, Vector2_t4282066565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_set_velocity_m136509638 (Rigidbody2D_t1743771669 * __this, Vector2_t4282066565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_mass()
extern "C"  float Rigidbody2D_get_mass_m3688503547 (Rigidbody2D_t1743771669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
extern "C"  void Rigidbody2D_set_mass_m610116752 (Rigidbody2D_t1743771669 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
extern "C"  void Rigidbody2D_set_gravityScale_m2024998120 (Rigidbody2D_t1743771669 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody2D_set_isKinematic_m222467693 (Rigidbody2D_t1743771669 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_freezeRotation(System.Boolean)
extern "C"  void Rigidbody2D_set_freezeRotation_m3797270003 (Rigidbody2D_t1743771669 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_AddForce_m4161385513 (Rigidbody2D_t1743771669 * __this, Vector2_t4282066565  ___force0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m312397382 (Rigidbody2D_t1743771669 * __this, Vector2_t4282066565  ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m2763823108 (Il2CppObject * __this /* static, unused */, Rigidbody2D_t1743771669 * ___self0, Vector2_t4282066565 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
