# YOUR CODE HERE

#!/bin/bash
# Set dir_path to current directory to support execution without arguments
dir_path="."
if [ $# -eq 1 ]; then
  dir_path="$1"
fi

num_of_files=$(ls -1F $dir_path | grep -v / | wc -l)

echo "${dir_path} has ${num_of_files} files"
