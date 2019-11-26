#!/bin/bash

echo 'Building...'
./worbench.sh g++ TripleX.cpp -o TripleX.out

echo 'Executing...'
clear
./worbench.sh ./TripleX.out 