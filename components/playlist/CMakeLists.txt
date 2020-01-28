message("Build components/playlist")
idf_component_register(SRCS "playlist.c" 
                       INCLUDE_DIRS "include"
                       REQUIRES vector
					   PRIV_REQUIRES common fifo  inih_port
					   EMBED_FILES "./../../main/playlist.pls"
                       )
   
					