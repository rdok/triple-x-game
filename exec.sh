#!/bin/bash

set -e

echo 'Building...'
./workbench.sh g++ TripleX.cpp -o TripleX.out

# clear
echo 'Executing...';
./workbench.sh ./TripleX.out