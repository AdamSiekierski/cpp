#!/bin/sh

PROGRAM=$1
SOURCE="./src/$PROGRAM.cpp"
OUTPUT="./build/$PROGRAM.out"

mkdir -p "$(dirname "$OUTPUT")"

g++ $SOURCE -o $OUTPUT

if [ "$2" = "-r" ] || [ "$2" = "--run" ]
then
  exec $OUTPUT
fi