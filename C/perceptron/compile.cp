#!/bin/sh

gcc -O3 -Wno-unused-result ext_module.c iris.c -o iris
gcc -O3 -Wno-unused-result ext_module.c pima.c -o pima
