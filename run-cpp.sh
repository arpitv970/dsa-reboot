#!/bin/bash

if [ -z "$1" ]; then
  echo "Usage: run-cpp <file.cpp>"
  exit 1
fi

FILE=$1
OUTPUT=$(basename "$FILE" .cpp)

#g++ "$FILE" -o "$OUTPUT" && ./"$OUTPUT"

/opt/homebrew/bin/g++-15 "$FILE" -o "$OUTPUT" && ./"$OUTPUT" && rm "$OUTPUT"
