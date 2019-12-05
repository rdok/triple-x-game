#!/bin/bash

opts=( )

if ! [ "$ENV" = "CI" ]; then
    opts+=( "-it" )
fi

docker run \
    --rm \
    --name tripple-x-workbench \
    "${opts[@]}" \
    --volume "/${PWD}":"/app/" \
    --workdir "//app" \
    gcc:9 "$@"