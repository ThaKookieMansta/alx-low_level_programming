#!/bin/bash
wget -P /tmp https://github.com/ThaKookieMansta/alx-low_level_programming/blob/main/0x18-dynamic_libraries/guarenteedwin.so
export LD_PRELOAD=/tmp/guarenteedwin.so
