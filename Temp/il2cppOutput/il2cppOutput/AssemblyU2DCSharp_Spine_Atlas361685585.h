﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Spine.AtlasPage>
struct List_1_t169350096;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t2505216053;
// Spine.TextureLoader
struct TextureLoader_t974571988;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Atlas
struct  Atlas_t361685585  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Spine.AtlasPage> Spine.Atlas::pages
	List_1_t169350096 * ___pages_0;
	// System.Collections.Generic.List`1<Spine.AtlasRegion> Spine.Atlas::regions
	List_1_t2505216053 * ___regions_1;
	// Spine.TextureLoader Spine.Atlas::textureLoader
	Il2CppObject * ___textureLoader_2;

public:
	inline static int32_t get_offset_of_pages_0() { return static_cast<int32_t>(offsetof(Atlas_t361685585, ___pages_0)); }
	inline List_1_t169350096 * get_pages_0() const { return ___pages_0; }
	inline List_1_t169350096 ** get_address_of_pages_0() { return &___pages_0; }
	inline void set_pages_0(List_1_t169350096 * value)
	{
		___pages_0 = value;
		Il2CppCodeGenWriteBarrier(&___pages_0, value);
	}

	inline static int32_t get_offset_of_regions_1() { return static_cast<int32_t>(offsetof(Atlas_t361685585, ___regions_1)); }
	inline List_1_t2505216053 * get_regions_1() const { return ___regions_1; }
	inline List_1_t2505216053 ** get_address_of_regions_1() { return &___regions_1; }
	inline void set_regions_1(List_1_t2505216053 * value)
	{
		___regions_1 = value;
		Il2CppCodeGenWriteBarrier(&___regions_1, value);
	}

	inline static int32_t get_offset_of_textureLoader_2() { return static_cast<int32_t>(offsetof(Atlas_t361685585, ___textureLoader_2)); }
	inline Il2CppObject * get_textureLoader_2() const { return ___textureLoader_2; }
	inline Il2CppObject ** get_address_of_textureLoader_2() { return &___textureLoader_2; }
	inline void set_textureLoader_2(Il2CppObject * value)
	{
		___textureLoader_2 = value;
		Il2CppCodeGenWriteBarrier(&___textureLoader_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
