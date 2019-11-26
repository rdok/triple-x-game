#!/bin/bash

docker run --rm -v "/${PWD}":"/app/" -w "//app" gcc:9 "$@"