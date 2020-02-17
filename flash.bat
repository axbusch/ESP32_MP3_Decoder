call D:\esp\idf\export.bat

openocd -f interface/ftdi/esp32_ft232h_interface.cfg -f board/esp-wroom-32.cfg -c "program_esp32 build/blink.bin 0x10000 verify exit"