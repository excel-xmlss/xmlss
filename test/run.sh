#!/bin/bash

rm -rf ./build
mkdir build
cd ./build
cmake ..
make 
cd -
./build/google_test/TestXMLSS
gcovr -r .
rm -rf ./build