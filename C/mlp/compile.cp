#!/bin/sh

gcc -O3 -Wno-unused-result ext_module.c iris.c -o iris -lm
gcc -O3 -Wno-unused-result ext_module.c pima.c -o pima -lm
gcc -O3 -Wno-unused-result ext_module.c spectra_online.c -o spectra_online -lm
gcc -O3 -Wno-unused-result ext_module.c spectra_sgd.c -o spectra_sgd -lm


