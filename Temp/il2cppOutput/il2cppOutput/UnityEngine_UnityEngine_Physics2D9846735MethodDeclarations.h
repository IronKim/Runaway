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

// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t889400257;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m2087591309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D,System.Boolean)
extern "C"  void Physics2D_IgnoreCollision_m2198021525 (Il2CppObject * __this /* static, unused */, Collider2D_t1552025098 * ___collider10, Collider2D_t1552025098 * ___collider21, bool ___ignore2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D)
extern "C"  void Physics2D_IgnoreCollision_m4213588200 (Il2CppObject * __this /* static, unused */, Collider2D_t1552025098 * ___collider10, Collider2D_t1552025098 * ___collider21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m4294843026 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___origin0, Vector2_t4282066565  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, RaycastHit2D_t1374744384 * ___raycastHit6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m1210233913 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565 * ___origin0, Vector2_t4282066565 * ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, RaycastHit2D_t1374744384 * ___raycastHit6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t1374744384  Physics2D_Raycast_m1435321255 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___origin0, Vector2_t4282066565  ___direction1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t1374744384  Physics2D_Raycast_m301626417 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___origin0, Vector2_t4282066565  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_CircleCast_m2382954929 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___origin0, float ___radius1, Vector2_t4282066565  ___direction2, float ___distance3, int32_t ___layerMask4, float ___minDepth5, float ___maxDepth6, RaycastHit2D_t1374744384 * ___raycastHit7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_CircleCast(UnityEngine.Vector2&,System.Single,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_CircleCast_m922648100 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565 * ___origin0, float ___radius1, Vector2_t4282066565 * ___direction2, float ___distance3, int32_t ___layerMask4, float ___minDepth5, float ___maxDepth6, RaycastHit2D_t1374744384 * ___raycastHit7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t1374744384  Physics2D_CircleCast_m1344858070 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___origin0, float ___radius1, Vector2_t4282066565  ___direction2, float ___distance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t1374744384  Physics2D_CircleCast_m706939872 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___origin0, float ___radius1, Vector2_t4282066565  ___direction2, float ___distance3, int32_t ___layerMask4, float ___minDepth5, float ___maxDepth6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t889400257* Physics2D_GetRayIntersectionAll_m2520210479 (Il2CppObject * __this /* static, unused */, Ray_t3134616544  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t889400257* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m2968135304 (Il2CppObject * __this /* static, unused */, Ray_t3134616544 * ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;