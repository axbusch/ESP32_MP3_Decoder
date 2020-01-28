message("Build components/url_parser")
idf_component_register(SRCS "url_parser.c" 
                       INCLUDE_DIRS "include" 
					   PRIV_REQUIRES nghttp
					   )

					