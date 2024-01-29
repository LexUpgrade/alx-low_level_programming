#!/bin/bash
wget -P https://github.com/Lex9jar/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
