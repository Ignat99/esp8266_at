#!/bin/sh

nccgen  -ncoo -ncfabs $1  -Idriver -Iuser -Idriver/include -Iuser/include -Iinclude -I/opt/Espressif/include -I/opt/Espressif/ESP8266_SDK/include -I/opt/Espressif/ESP8266_SDK/include/json -I../include 

