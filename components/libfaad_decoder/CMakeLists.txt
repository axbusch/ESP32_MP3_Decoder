message("Build components/libfaad_decoder")
idf_component_register(SRCS "libfaad_decoder.c" 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES libfaad common libm4a audio_renderer audio_player fifo
)

target_compile_options(${COMPONENT_LIB} PRIVATE   -DHAVE_MEMCPY -DSTDC_HEADERS -DHAVE_INTTYPES_H 
	-DHAVE_INTTYPES_H -DHAVE_STRINGS_H 
	-Wno-unused-variable -Wno-unused-but-set-variable
)
