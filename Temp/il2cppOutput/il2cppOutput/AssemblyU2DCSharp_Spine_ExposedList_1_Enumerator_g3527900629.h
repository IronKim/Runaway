﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t723286955;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Subme3643321593.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ExposedList`1/Enumerator<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct  Enumerator_t3527900629 
{
public:
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t723286955 * ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	SubmeshInstruction_t3643321593  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3527900629, ___l_0)); }
	inline ExposedList_1_t723286955 * get_l_0() const { return ___l_0; }
	inline ExposedList_1_t723286955 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ExposedList_1_t723286955 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3527900629, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3527900629, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3527900629, ___current_3)); }
	inline SubmeshInstruction_t3643321593  get_current_3() const { return ___current_3; }
	inline SubmeshInstruction_t3643321593 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SubmeshInstruction_t3643321593  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
