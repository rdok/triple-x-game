#!/bin/bash

echo 'Building...'
response=$(./worbench.sh g++ TripleX.cpp -o TripleX.out)

if [ ! -z "${response}" ]; then
    echo 'Executing...';
    # clear
    ./worbench.sh ./TripleX.out 
fi