#!/bin/sh

PROGRAM=$1
SOURCE="./src/$PROGRAM.cpp"
OUTPUT="./build/$PROGRAM.out"

g++ $SOURCE -o $OUTPUT

if [ $2 = "-r" ] || [ $2 = "--run" ]
then
  exec $OUTPUT
fi