﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<UnityEngine.Material>
struct ExposedList_1_t950565469;
// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ExposedList`1/Enumerator<UnityEngine.Material>
struct  Enumerator_t3755179143 
{
public:
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t950565469 * ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	Material_t3870600107 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3755179143, ___l_0)); }
	inline ExposedList_1_t950565469 * get_l_0() const { return ___l_0; }
	inline ExposedList_1_t950565469 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ExposedList_1_t950565469 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3755179143, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3755179143, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3755179143, ___current_3)); }
	inline Material_t3870600107 * get_current_3() const { return ___current_3; }
	inline Material_t3870600107 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Material_t3870600107 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
