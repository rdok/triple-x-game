#!/bin/bash

docker run --rm -it -v "/${PWD}":"/app/" -w "//app" gcc:9 "$@"