#!/bin/bash

opts=( )

if ! [ "$ENV" = "CI" ]; then
    opts+=( "-it" )
fi

docker run --rm "${opts[@]}" -v "/${PWD}":"/app/" -w "//app" gcc:9 "$@"