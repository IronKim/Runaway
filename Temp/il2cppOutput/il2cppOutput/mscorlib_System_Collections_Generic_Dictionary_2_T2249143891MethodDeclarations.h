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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>
struct Transform_1_t2249143891;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21472635012.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData_Animati3461212529.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m931134226_gshared (Transform_1_t2249143891 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m931134226(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2249143891 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m931134226_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1472635012  Transform_1_Invoke_m1530091302_gshared (Transform_1_t2249143891 * __this, AnimationPair_t3461212529  ___key0, float ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1530091302(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1472635012  (*) (Transform_1_t2249143891 *, AnimationPair_t3461212529 , float, const MethodInfo*))Transform_1_Invoke_m1530091302_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2429338961_gshared (Transform_1_t2249143891 * __this, AnimationPair_t3461212529  ___key0, float ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2429338961(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2249143891 *, AnimationPair_t3461212529 , float, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2429338961_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Collections.Generic.KeyValuePair`2<Spine.AnimationStateData/AnimationPair,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1472635012  Transform_1_EndInvoke_m1160344996_gshared (Transform_1_t2249143891 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1160344996(__this, ___result0, method) ((  KeyValuePair_2_t1472635012  (*) (Transform_1_t2249143891 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1160344996_gshared)(__this, ___result0, method)
