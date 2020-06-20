#!/bin/bash

if [ $# -eq 1 ]; then
    if [ "$1" == "arm" ]; then
        echo "Compiling for arm"
        . /opt/correaos/1.0/environment-setup-arm1176jzfshf-vfp-poky-linux-gnueabi
    fi
fi

cmake .
make 
