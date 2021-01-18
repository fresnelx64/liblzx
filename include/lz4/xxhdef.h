#pragma once

#ifndef XXH_DEF_790319210316	1
#define XXH_DEF_790319210316

#define XXH_VERSION_MAJOR  0
#define XXH_VERSION_MINOR  0
#define XXH_VERSION_TWEAK  1
#define XXH_VERSION_PATCH  0
#define XXH_VERSION_NUMBER ((XXH_VERSION_MAJOR*100*100*100)+(XXH_VERSION_MINOR*100*100)+(XXH_VERSION_TWEAK*100)+(XXH_VERSION_PATCH*1))

typedef enum { XXH_aligned = 0, XXH_unaligned = 1 } XXH_alignment;
typedef enum { XXH_bigEndian = 0, XXH_littleEndian = 1 } XXH_endianess;

#ifdef XXH_NAMESPACE
	#define XXH_CAT(A,B) A##B
	#define XXH_NAME2(A,B) XXH_CAT(A,B)
	#define XXH_versionNumber XXH_NAME2(XXH_NAMESPACE, XXH_versionNumber)
	#define XXH32 XXH_NAME2(XXH_NAMESPACE, XXH32)
	#define XXH32_createState XXH_NAME2(XXH_NAMESPACE, XXH32_createState)
	#define XXH32_freeState XXH_NAME2(XXH_NAMESPACE, XXH32_freeState)
	#define XXH32_reset XXH_NAME2(XXH_NAMESPACE, XXH32_reset)
	#define XXH32_update XXH_NAME2(XXH_NAMESPACE, XXH32_update)
	#define XXH32_digest XXH_NAME2(XXH_NAMESPACE, XXH32_digest)
	#define XXH32_copyState XXH_NAME2(XXH_NAMESPACE, XXH32_copyState)
	#define XXH32_canonicalFromHash XXH_NAME2(XXH_NAMESPACE, XXH32_canonicalFromHash)
	#define XXH32_hashFromCanonical XXH_NAME2(XXH_NAMESPACE, XXH32_hashFromCanonical)
	#define XXH64 XXH_NAME2(XXH_NAMESPACE, XXH64)
	#define XXH64_createState XXH_NAME2(XXH_NAMESPACE, XXH64_createState)
	#define XXH64_freeState XXH_NAME2(XXH_NAMESPACE, XXH64_freeState)
	#define XXH64_reset XXH_NAME2(XXH_NAMESPACE, XXH64_reset)
	#define XXH64_update XXH_NAME2(XXH_NAMESPACE, XXH64_update)
	#define XXH64_digest XXH_NAME2(XXH_NAMESPACE, XXH64_digest)
	#define XXH64_copyState XXH_NAME2(XXH_NAMESPACE, XXH64_copyState)
	#define XXH64_canonicalFromHash XXH_NAME2(XXH_NAMESPACE, XXH64_canonicalFromHash)
	#define XXH64_hashFromCanonical XXH_NAME2(XXH_NAMESPACE, XXH64_hashFromCanonical)
#endif

XXH_API unsigned XXH_getVersionNumber(void);

#ifdef (__cplusplus)
	extern "C" {
#endif

#include "..\..\api\lzxdef.h"
		
// TODO...

#ifdef (__cplusplus)
	}
#endif

#endif















































