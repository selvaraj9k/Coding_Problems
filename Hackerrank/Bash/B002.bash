#!/bin/bash
//https://www.hackerrank.com/challenges/bash-tutorials---looping-and-skipping/problem

for((i=1;i<100;i++))
do
    rem=$(($i%2))
    if [ $rem -ne 0 ]
    then
    echo "$i"
    fi
done

