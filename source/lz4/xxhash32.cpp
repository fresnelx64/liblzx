#include "stdafx.h"

#include "..\..\include\lz4\xxhash32.h"

typedef union { uint32_t u32; } __attribute__((packed)) unalign;

/**
 *	@brief	force direct memory access, only works on CPU which support unaligned memory access in hardware
 *	@param  untyped memory pointer
 *  @return unaligned memory pointer
 */

static uint32_t XXH_read32_unaligned(const void* memPtr) { return *(const uint32_t*)memPtr; }

/**
 *	@brief
 *  @param
 *	@return
 */
static uint32_t XXH_read32_packed(const vo

/**
 *	@brief
 *	@param
 *	@return
 */

static uint32_t XXH_read32_safe(const void* memPtr)
{
	uint32_t val;
	
		memcpy(&val, memPtr, sizeof(val));
	
	return val;
}


































































