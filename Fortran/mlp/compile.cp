#!/bin/sh

gfortran -O3 ext_module.f90 iris.f90 -o iris
gfortran -O3 ext_module.f90 pima.f90 -o pima
gfortran -O3 ext_module.f90 spectra_online.f90 -o spectra_online
gfortran -O3 ext_module.f90 spectra_sgd.f90 -o spectra_sgd
gfortran -O3 ext_module.f90 spectra_batch.f90 -o spectra_batch
gfortran -O3 ext_module.f90 spectra_rebalance.f90 -o spectra_rebalance


