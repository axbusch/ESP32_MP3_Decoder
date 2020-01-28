message("Build components/fdk_aac_decoder")
idf_component_register(SRC_DIRS . 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES common fdk-aac audio_player libm4a
                       )
   
					