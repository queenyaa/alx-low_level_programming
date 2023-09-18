#!/bin/bash
gcc -shared -o 101-win.so -fPIC 101-test.c
export LD_PRELOAD=$PWD/101-win.so
