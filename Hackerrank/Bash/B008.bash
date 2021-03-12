#!/bin/bash

//https://www.hackerrank.com/challenges/bash-tutorials---more-on-conditionals/problem?h_r=next-challenge&h_v=zen

read X
read Y
read Z

if ((X==Y&&Y==Z))
then
    echo "EQUILATERAL"
elif ((X==Y||X==Z||Y==Z))
then
    echo "ISOSCELES"
else
    echo "SCALENE"
fi
