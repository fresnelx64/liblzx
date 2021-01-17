# cmake minimum version req:
cmake_minimum_required (VERSION 3.12 FATAL_ERROR)

# project name + version:
project ("liblzx" VERSION 0.0.1.0)

# sub-projects tree:
add_subdirectory ("api")
add_subdirectory ("bench")
add_subdirectory ("bench\\corps")
add_subdirectory ("bench\\corps\\calgary")
add_subdirectory ("bench\\corps\\caldbury")
add_subdirectory ("bench\\corps\\silesia")
add_subdirectory ("bins")
add_subdirectory ("compilers")
add_subdirectory ("compilers\\CLang2")
add_subdirectory ("compilers\\FASM")
add_subdirectory ("compilers\\GCC")
add_subdirectory ("compilers\\IntelC")
add_subdirectory ("compilers\\MASM")
add_subdirectory ("compilers\\MinGW")
add_subdirectory ("compilers\\MSVC")
add_subdirectory ("compilers\\NASM")
add_subdirectory ("compilers\\TinyCC")
add_subdirectory ("compilers\\WatcomV2")
add_subdirectory ("core")
add_subdirectory ("dbg")
add_subdirectory ("docs")
add_subdirectory ("docs\\lz4")
add_subdirectory ("docs\\lzma")
add_subdirectory ("docs\\lzsse")
add_subdirectory ("docs\\entropy")
add_subdirectory ("dashes")
add_subdirectory ("extern")
add_subdirectory ("extern\\libmt")
add_subdirectory ("extern\\libpak")
add_subdirectory ("extern\\libsys")
add_subdirectory ("include")
add_subdirectory ("include\\arithmetic")
add_subdirectory ("include\\deflate")
add_subdirectory ("include\\huffman")
add_subdirectory ("include\\lz4")
add_subdirectory ("include\\lzo")
add_subdirectory ("include\\lzham")
add_subdirectory ("include\\lzma")
add_subdirectory ("include\\lzsse")
add_subdirectory ("include\\")
add_subdirectory ("langs")
add_subdirectory ("langs\\asm")
add_subdirectory ("langs\\c11")
add_subdirectory ("langs\\objc")
add_subdirectory ("manual")
add_subdirectory ("output")
add_subdirectory ("output\\cli")
add_subdirectory ("output\\libs")
add_subdirectory ("output\\sdk")
add_subdirectory ("output\\tools")
add_subdirectory ("results")
add_subdirectory ("results\\benchmarks")
add_subdirectory ("results\\debugging")
add_subdirectory ("results\\profiling")
add_subdirectory ("results\\testing")
add_subdirectory ("scripts")
add_subdirectory ("scripts\\perfs")
add_subdirectory ("scripts\\units")
add_subdirectory ("source")
add_subdirectory ("source\\arithmetic")
add_subdirectory ("source\\deflate")
add_subdirectory ("source\\huffman")
add_subdirectory ("source\\lz4")
add_subdirectory ("source\\lzo")
add_subdirectory ("source\\lzham")
add_subdirectory ("source\\lzma")
add_subdirectory ("source\\lzsse")
add_subdirectory ("test")
add_subdirectory ("test\\integration")
add_subdirectory ("test\\performance")
add_subdirectory ("test\\regression")
add_subdirectory ("test\\system")
add_subdirectory ("test\\unit")
add_subdirectory ("toolkits")
add_subdirectory ("toolkits\\datagen")
add_subdirectory ("toolkits\\diff")
add_subdirectory ("toolkits\\dump")
add_subdirectory ("toolkits\\entropy")
add_subdirectory ("toolkits\\lzbench")
add_subdirectory ("toolkits\\sysinfo")
add_subdirectory ("toolkits\\unpak")
add_subdirectory ("vtune")
add_subdirectory ("wrappers")
add_subdirectory ("wrappers\\java")
add_subdirectory ("wrappers\\jscript")

# features options:
option (LZX_SHARED_X86			"Featuring shared library <liblzx86.dll> x86-32"	ON)
option (LZX_SHARED_X64			"Featuring shared library <liblzx64.dll> x86-64"	ON)
option (LZX_STATIC_X86			"Featuring static library <liblzx86.lib> x86-32"	ON)
option (LZX_STATIC_X64			"Featuring static library <liblzx86.lib> x86-64"	ON)
option (LZX_BENCH_ALL			"Benchmark performance via all data-corps"			ON)
option (LZX_BENCH_SILESIA		""	ON)
option (LZX_BENCH_CARDBERY		""	ON)
option (LZX_BENCH_CALGARY		""	ON)
option (LZX_BUILD_DIRECTORY		""	ON)
option (LZX_COMPILER_FASM		""	ON)
option (LZX_COMPILER_GCC		""	ON)
option (LZX_COMPILER_IntelC		""	ON)
option (LZX_COMPILER_MASM		""	ON)
option (LZX_COMPILER_MinGW		""	ON)
option (LZX_COMPILER_MSVC		""	ON)
option (LZX_COMPILER_NASM		""	ON)
option (LZX_COMPILER_TinyCC		""	ON)
option (LZX_COMPILER_WatcomV2	""	ON)
option (LZX_DOCS_COMPILE_XML	"Compile all algorithms documentation to XML"		ON)
option (LZX_DOCS_COMPILE_JSON	"Compile all algorithms documentation to JSON"		ON)
option (LZX_MANUAL_DOXYGEN		""	ON)
option (LZX_LANG_ASM_X86		""	ON)
option (LZX_LANG_ASM_X64		""	ON)
option (LZX_LANG_C11_X86		""	ON)
option (LZX_LANG_C11_X64		""	ON)
option (LZX_OUTPUT_CLI			""	ON)
option (LZX_OUTPUT_LIBS			""	ON)
option (LZX_OUTPUT_SDK			""	ON)
option (LZX_OUTPUT_TOOLS		""	ON)
option (LZX_TOOLKITS_DIFF		"Build <diff.exe> toolkit for x86-64 platform"		ON)
option (LZX_TOOLKITS_DUMP		"Build <dump.exe> toolkit for x86-64 platform"		ON)
option (LZX_TOOLKITS_LZBENCH	"Build <lzbench.exe> toolkit for x86-64 platform"	ON)
option (LZX_TOOLKITS_SYSINFO	"Build <sysinfo.exe> toolkit for x86-64 platform"	ON)
option (LZX_TOOLKITS_UNPAK		"Build <unpak.exe> toolkit for x86-64 platform"		ON)

# compiler settings:
set (COMPILER_FASM_FLAGS		"-Wall")
set (COMPILER_GCC_FLAGS			"-o3")
set (COMPILER_IntelC_FLAGS		"-o3")
set (COMPILER_MASM_FLAGS		"-o3")
set (COMPILER_MinGW_FLAGS		"-o3")
set (COMPILER_MSVC_FLAGS		"-o3")
set (COMPILER_NASM_FLAGS		"-o3")
set (COMPILER_TinyCC_FLAGS		"-o3")
set (COMPILER_WatcomV2_FLAGS	"-o3")

# TODO...



































































































































































































































































































































































































































































































































































































































































































































































































































































































