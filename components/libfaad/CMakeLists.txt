message("Build components/libfaad")
idf_component_register(SRC_DIRS "."
                       INCLUDE_DIRS "." "include" "codebook" 
					   PRIV_REQUIRES nvs_flash url_parser
					   REQUIRES nghttp
                       )

target_compile_options(${COMPONENT_LIB} PRIVATE  -DHAVE_MEMCPY -DSTDC_HEADERS -DHAVE_INTTYPES_H -DHAVE_INTTYPES_H -DHAVE_STRINGS_H 
 -Wno-unused-function  -Wno-unused-variable 
  -Wno-maybe-uninitialized -Wno-error=unused-value -Wno-unused-but-set-variable 
 -Wno-type-limits -Wno-missing-field-initializers -Wno-implicit-fallthrough -Wno-uninitialized
 )
					