#!/bin/bash
num=`find raw -maxdepth 2 -mindepth 2 -type d -printf '%f\n' | wc -l`

actual=`ls -1q generated/*.zip`

if [ "$num" == "$actual" ]; then
    return 0;
else
    echo "Number of generated models is not equal to number of simulink models."
    return 1;
fi
