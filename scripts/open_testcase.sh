#!/bin/bash

# This will prepare the current test case folder for analysis

# Some vars
SHARED_DIR=../../shared/tsid

ctags -R * ${SHARED_DIR}/src/{aes.c,ansi_x931_aes128.c,libcgc.c} ${SHARED_DIR}/include/{ansi_x931_aes128.h,libcgc.h,tiny-AES128-C}
