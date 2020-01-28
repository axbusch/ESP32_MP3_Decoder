message("Build components/audio_player")
idf_component_register(SRCS "audio_player.c" "fdk_aac_decoder.c" "libfaad_decoder.c" "mp3_decoder.c" "web_radio.c" 
                       INCLUDE_DIRS "include"
					   REQUIRES common audio_renderer
					   PRIV_REQUIRES   mad libm4a fdk-aac libfaad playlist vector http url_parser fifo controls
                       )
   
					
set_source_files_properties("libfaad_decoder.c" 
    PROPERTIES COMPILE_FLAGS
  	 -DHAVE_MEMCPY -DSTDC_HEADERS -DHAVE_INTTYPES_H -DHAVE_INTTYPES_H -DHAVE_STRINGS_H -Wno-unused-variable -Wno-unused-but-set-variable
)