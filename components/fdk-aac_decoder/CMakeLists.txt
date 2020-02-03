message("Build components/fdk_aac_decoder")
idf_component_register(SRC_DIRS . 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES common fdk-aac audio_player libm4a
                       )
   
					
target_compile_options(${COMPONENT_LIB} PRIVATE   
	-Wno-int-conversion -Wno-unused-variable -Wno-discarded-qualifiers
)
					