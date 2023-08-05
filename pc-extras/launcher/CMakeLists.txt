set(GCC_CLANG_SHARED_C_FLAGS "-fno-builtin")
set(GCC_CLANG_DEBUG_C_FLAGS "-ggdb;\
-O0;\
-pedantic;\
-Wall;\
-Wdeprecated-declarations;\
-Wempty-body;\
-Werror;\
-Werror=conversion;\
-Werror=float-conversion;\
-Werror=implicit-function-declaration;\
-Werror=incompatible-pointer-types;\
-Werror=int-conversion;\
-Werror=return-type;\
-Werror=sign-conversion;\
-Wmissing-braces;\
-Wmissing-field-initializers;\
-Wno-maybe-uninitialized;\
-Wno-missing-prototypes;\
-Wno-strict-prototypes;\
-Wno-trigraphs;\
-Wno-unknown-pragmas;\
-Wparentheses;\
-Wpointer-sign;\
-Wshadow;\
-Wsign-compare;\
-Wswitch;\
-Wuninitialized;\
-Wunknown-pragmas;\
-Wunreachable-code;\
-Wunused-function;\
-Wunused-label;\
-Wunused-parameter;\
-Wunused-value;\
-Wunused-variable")

add_executable(BossRally main.c media-events.c playback.c setup.c sub_401230.c video.c)
target_compile_definitions(BossRally PUBLIC STRSAFE_NO_DEPRECATE=0)
target_compile_options(BossRally PUBLIC -mno-unicode)
target_link_options(BossRally PUBLIC "-Wl,-subsystem,windows")
if(CMAKE_COMPILER_IS_GNUCC OR ${CMAKE_C_COMPILER_ID} STREQUAL "Clang")
  target_compile_options(BossRally
                         PRIVATE ${GCC_CLANG_SHARED_C_FLAGS}
                                 $<$<CONFIG:Debug>:${GCC_CLANG_DEBUG_C_FLAGS}>)
endif()
target_link_libraries(BossRally gdi32 ole32 strmiids quartz)
