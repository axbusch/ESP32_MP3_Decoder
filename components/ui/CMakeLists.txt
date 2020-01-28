message("Build components/ui")
idf_component_register(SRCS "ui.c" 
                       INCLUDE_DIRS "include"
					   REQUIRES nvs_flash
)
