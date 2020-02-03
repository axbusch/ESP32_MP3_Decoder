message("Build components/inih")
idf_component_register(SRC_DIRS "inih" 
                       INCLUDE_DIRS "inih"
					   )
					   
					   
target_compile_options(${COMPONENT_LIB} PRIVATE  -DHAVE_MEMCPY -DSTDC_HEADERS -DHAVE_INTTYPES_H -DHAVE_INTTYPES_H -DHAVE_STRINGS_H 
 -Wno-unused-function  -Wno-unused-variable 
  -Wno-maybe-uninitialized -Wno-unused-value -Wno-unused-but-set-variable 
 -Wno-type-limits -Wno-missing-field-initializers -Wno-implicit-fallthrough -Wno-uninitialized
 )
					
   
					