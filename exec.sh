#!/bin/bash

set -e

echo 'Building...'
response=$(./worbench.sh g++ TripleX.cpp -o TripleX.out)

echo 'Executing...';
clear
./worbench.sh ./TripleX.out 