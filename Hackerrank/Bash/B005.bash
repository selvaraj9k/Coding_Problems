#!/bin/bash
#https://www.hackerrank.com/challenges/bash-tutorials---the-world-of-numbers/problem

read X;
read Y;

sum=$(($X+$Y))
difference=$(($X-$Y))
product=$(($X*$Y))
quotient=$(($X/$Y))

echo "$sum"
echo "$difference"
echo "$product"
echo "$quotient"
