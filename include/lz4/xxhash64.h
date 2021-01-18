#pragma once

#ifndef XXH_H64_7903192103161108	1
#define XXH_H64_7903192103161108	

#include <stdint.h>

#include "..\..\api\lzxapi.h"
#include "..\..\core\lzxdef.h"
#include "lz4def.h"
#include "lz4err.h"

#ifdef (__cplusplus)	
	extern "C" {	
#endif

static const uint64_t XXH64_PRIME_1 = 11400714785074694791ULL;
static const uint64_t XXH64_PRIME_2 = 14029467366897019727ULL;
static const uint64_t XXH64_PRIME_3 = 1609587929392839161ULL;
static const uint64_t XXH64_PRIME_4 = 9650029242287828579ULL;
static const uint64_t XXH64_PRIME_5 = 2870177450012600261ULL;

typedef struct { unsigned char digest[8]; } XXH64_canonical_t;

static uint64_t XXH64_round(const uint64_t& acc, const uint64_t& input);
static uint64_t XXH64_mergeRound(const uint64_t& acc, const uint64_t& val);
static uint64_t XXH64_avalanche(const uint64_t& h64);

#define XXH_get64bits(p) XXH_readLE64_align(p, endian, align);

struct XXH64_state_s 
{
	uint64_t total_len;
	uint64_t v1;
	uint64_t v2;
	uint64_t v3;
	uint64_t v4;
	uint64_t mem64[4];
	uint32_t memsize;
	uint32_t reserved[2];
};

typedef unsigned long long XXH64_hash_t;
typedef struct XXH64_state_s XXH64_state_t;

LZX_API XXH64_hash_t XXH64(const void* input, size_t length, unsigned long long seed);

LZX_API XXH64_state_t* XXH64_createState(void);
LZX_API XXH_errorCode  XXH64_freeState(XXH64_state_t* statePtr);
LZX_API void XXH64_copyState(XXH64_state_t* dst_state, const XXH64_state_t* src_state);

LZX_API XXH_errorCode XXH64_reset(XXH64_state_t* statePtr, unsigned long long seed);
LZX_API XXH_errorCode XXH64_update(XXH64_state_t* statePtr, const void* input, size_t length);
LZX_API XXH64_hash_t  XXH64_digest(const XXH64_state_t* statePtr);

LZX_API void XXH64_canonicalFromHash(XXH64_canonical_t* dst, XXH64_hash_t hash);
LZX_API XXH64_hash_t XXH64_hashFromCanonical(const XXH64_canonical_t* src);

#ifdef (__cplusplus)
	}
#endif

#endif
















































