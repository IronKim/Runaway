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

// Spine.ColorTimeline
struct ColorTimeline_t308063626;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t1740365586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"

// System.Void Spine.ColorTimeline::.ctor(System.Int32)
extern "C"  void ColorTimeline__ctor_m3074662307 (ColorTimeline_t308063626 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.ColorTimeline::get_SlotIndex()
extern "C"  int32_t ColorTimeline_get_SlotIndex_m3569052553 (ColorTimeline_t308063626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::set_SlotIndex(System.Int32)
extern "C"  void ColorTimeline_set_SlotIndex_m1416517208 (ColorTimeline_t308063626 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.ColorTimeline::get_Frames()
extern "C"  SingleU5BU5D_t2316563989* ColorTimeline_get_Frames_m4118886263 (ColorTimeline_t308063626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::set_Frames(System.Single[])
extern "C"  void ColorTimeline_set_Frames_m73183764 (ColorTimeline_t308063626 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void ColorTimeline_SetFrame_m2900078311 (ColorTimeline_t308063626 * __this, int32_t ___frameIndex0, float ___time1, float ___r2, float ___g3, float ___b4, float ___a5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single)
extern "C"  void ColorTimeline_Apply_m3966947060 (ColorTimeline_t308063626 * __this, Skeleton_t2209335561 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t1740365586 * ___firedEvents3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
