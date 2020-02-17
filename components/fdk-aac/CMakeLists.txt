message("Build components/fdk-aac")
idf_component_register(SRC_DIRS "libAACdec/src"
								"libFDK/src"
								"libMpegTPDec/src"
								"libPCMutils/src"
								"libSBRdec/src"
								"libSYS/src"
								
					INCLUDE_DIRS 
								 "libAACdec/include"
								 "libFDK/include"
								 "libMpegTPDec/include"
								 "libPCMutils/include"
								 "libSBRdec/include"
								 "libSYS/include"
					   
                       )
 
target_compile_options(${COMPONENT_LIB} PRIVATE  
	-Wno-implicit-fallthrough -Wno-maybe-uninitialized 
	 -Wno-unused-label -Wno-error=unused-function -Wno-unused-function -Wno-unused-but-set-variable -Wno-unused-variable )
		