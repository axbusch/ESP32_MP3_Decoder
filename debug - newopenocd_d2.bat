call D:\esp\idf\export.bat

set OPENOCD_SCRIPTS=D:\esp\toolchain\.espressif\tools\openocd-esp32\v0.10.0-esp32-20191114\openocd-esp32\share\openocd\scripts
set PATH=D:\esp\toolchain\.espressif\tools\openocd-esp32\v0.10.0-esp32-20191114\openocd-esp32\bin;%PATH%
openocd.exe -l openocd_log_d2.txt -d2   -f board/esp32-wrover-kit-3.3v.cfg