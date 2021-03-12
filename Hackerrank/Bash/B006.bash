#!/bin/bash

//https://www.hackerrank.com/challenges/bash-tutorials---comparing-numbers/problem

read X
read Y

if [[ $X -eq $Y ]]
then
echo "X is equal to Y"
elif [[ $X -gt $Y ]]
then
echo "X is greater than Y"
else
echo "X is less than Y"
fi

