message("Build components/mp3_decoder")
idf_component_register(SRCS "mp3_decoder.c" 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES audio_renderer  fifo
					   REQUIRES audio_player
                       )
   
					