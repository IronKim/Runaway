﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "AssemblyU2DCSharp_Spine_CurveTimeline3832230678.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TransformConstraintTimeline
struct  TransformConstraintTimeline_t682225104  : public CurveTimeline_t3832230678
{
public:
	// System.Int32 Spine.TransformConstraintTimeline::transformConstraintIndex
	int32_t ___transformConstraintIndex_15;
	// System.Single[] Spine.TransformConstraintTimeline::frames
	SingleU5BU5D_t2316563989* ___frames_16;

public:
	inline static int32_t get_offset_of_transformConstraintIndex_15() { return static_cast<int32_t>(offsetof(TransformConstraintTimeline_t682225104, ___transformConstraintIndex_15)); }
	inline int32_t get_transformConstraintIndex_15() const { return ___transformConstraintIndex_15; }
	inline int32_t* get_address_of_transformConstraintIndex_15() { return &___transformConstraintIndex_15; }
	inline void set_transformConstraintIndex_15(int32_t value)
	{
		___transformConstraintIndex_15 = value;
	}

	inline static int32_t get_offset_of_frames_16() { return static_cast<int32_t>(offsetof(TransformConstraintTimeline_t682225104, ___frames_16)); }
	inline SingleU5BU5D_t2316563989* get_frames_16() const { return ___frames_16; }
	inline SingleU5BU5D_t2316563989** get_address_of_frames_16() { return &___frames_16; }
	inline void set_frames_16(SingleU5BU5D_t2316563989* value)
	{
		___frames_16 = value;
		Il2CppCodeGenWriteBarrier(&___frames_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
