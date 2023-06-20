#!/bin/bash
wget -P .. https://github.com/ThaKookieMansta/zero_day/blob/master/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
