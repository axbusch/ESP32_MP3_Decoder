
message("Build components/main")
idf_component_register(SRCS  "app_main.c" "wifi.c"
                       INCLUDE_DIRS "include"
					   REQUIRES  audio_player nvs_flash http vector ui fifo playlist 
					   
                       )