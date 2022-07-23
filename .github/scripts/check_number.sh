#!/bin/bash
num=`find raw -maxdepth 2 -mindepth 2 -type d -printf '%f\n' | wc -l`

actual=`ls -1q generated/*.zip | wc -l`
if [ "$num" == "$actual" ]; then
    exit 0;
else
    echo "Number of generated models is not equal to number of simulink models."
    exit 1;
fi
