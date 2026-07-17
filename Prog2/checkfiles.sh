#!/bin/bash

echo "Number of arguments supplied: $#"

for item in "$@"
do
    if [ -f "$item" ]; then
        echo "$item is a file."
        lines=$(wc -l < "$item")
        echo "Number of lines in $item: $lines"
    elif [ -d "$item" ]; then
        echo "$item is a directory."
    else
        echo "$item is not a valid file or directory."
    fi
done