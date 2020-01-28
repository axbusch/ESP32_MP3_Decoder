message("Build components/audio_renderer")

idf_component_register(SRCS "audio_renderer.c" 
                       INCLUDE_DIRS "include"
					   PRIV_REQUIRES MerusAudio audio_player
					   REQUIRES common
					   )
