message("Build components/nghttp")
idf_component_register(SRCS "port/http_parser.c" 
                       INCLUDE_DIRS "include" "port/include"
                       )
					   
set_source_files_properties("port/http_parser.c" 
    PROPERTIES COMPILE_FLAGS
   	-Wno-implicit-fallthrough
)
					