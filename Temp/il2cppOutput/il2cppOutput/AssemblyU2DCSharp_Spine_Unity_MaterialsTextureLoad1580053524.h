﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.AtlasAsset
struct AtlasAsset_t1266833143;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MaterialsTextureLoader
struct  MaterialsTextureLoader_t1580053524  : public Il2CppObject
{
public:
	// Spine.Unity.AtlasAsset Spine.Unity.MaterialsTextureLoader::atlasAsset
	AtlasAsset_t1266833143 * ___atlasAsset_0;

public:
	inline static int32_t get_offset_of_atlasAsset_0() { return static_cast<int32_t>(offsetof(MaterialsTextureLoader_t1580053524, ___atlasAsset_0)); }
	inline AtlasAsset_t1266833143 * get_atlasAsset_0() const { return ___atlasAsset_0; }
	inline AtlasAsset_t1266833143 ** get_address_of_atlasAsset_0() { return &___atlasAsset_0; }
	inline void set_atlasAsset_0(AtlasAsset_t1266833143 * value)
	{
		___atlasAsset_0 = value;
		Il2CppCodeGenWriteBarrier(&___atlasAsset_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
