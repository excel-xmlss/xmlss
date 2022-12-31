#!/bin/bash
rm -rf ./build && mkdir ./build && cd ./build && cmake .. && make && ./google_test/TestXMLSS && gcovr -r ./google_test -f ../../orange_xmlss/ && cd .. && ./build/dummy/DummyExecutable && rm -rf ./build && echo Done 
