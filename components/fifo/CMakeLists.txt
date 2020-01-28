message("Build components/fifo")
idf_component_register(SRCS "spiram_fifo.c" 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES http main
)

set_source_files_properties("spiram_fifo.c" 
    PROPERTIES COMPILE_FLAGS
  	-Wno-error=unused-label -Wno-error=return-type -Wno-error=missing-braces -Wno-error=pointer-sign -Wno-error=parentheses
)
