message("Build components/http")
idf_component_register(SRCS "http.c" 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES nvs_flash url_parser
					   REQUIRES nghttp
                       )

set_source_files_properties("http.c" 
    PROPERTIES COMPILE_FLAGS
   	-Wno-error=unused-label -Wno-error=return-type -Wno-error=missing-braces -Wno-error=pointer-sign -Wno-error=parentheses
)
					   
					