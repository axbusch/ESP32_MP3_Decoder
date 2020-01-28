/*
 * app_main.h
 *
 *  Created on: 13.03.2017
 *      Author: michaelboeckling
 */

#ifndef MAIN_INCLUDE_APP_MAIN_H_
#define MAIN_INCLUDE_APP_MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "http.h"
#include "driver/i2s.h"
#include "web_radio.h"
#include "vector.h"
#include "ui.h"
#include "spiram_fifo.h"
#include "audio_renderer.h"

#include "playerconfig.h"
#include "wifi.h"

#ifdef CONFIG_BT_SPEAKER_MODE
#include "bt_speaker.h"
#endif
#include "playlist.h"




#endif /* MAIN_INCLUDE_APP_MAIN_H_ */
