﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonBinary/Vertices
struct  Vertices_t1382898063  : public Il2CppObject
{
public:
	// System.Int32[] Spine.SkeletonBinary/Vertices::bones
	Int32U5BU5D_t3230847821* ___bones_0;
	// System.Single[] Spine.SkeletonBinary/Vertices::vertices
	SingleU5BU5D_t2316563989* ___vertices_1;

public:
	inline static int32_t get_offset_of_bones_0() { return static_cast<int32_t>(offsetof(Vertices_t1382898063, ___bones_0)); }
	inline Int32U5BU5D_t3230847821* get_bones_0() const { return ___bones_0; }
	inline Int32U5BU5D_t3230847821** get_address_of_bones_0() { return &___bones_0; }
	inline void set_bones_0(Int32U5BU5D_t3230847821* value)
	{
		___bones_0 = value;
		Il2CppCodeGenWriteBarrier(&___bones_0, value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(Vertices_t1382898063, ___vertices_1)); }
	inline SingleU5BU5D_t2316563989* get_vertices_1() const { return ___vertices_1; }
	inline SingleU5BU5D_t2316563989** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(SingleU5BU5D_t2316563989* value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
