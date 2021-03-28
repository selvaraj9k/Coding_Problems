#!/bin/bash

#https://www.hackerrank.com/challenges/bash-tutorials-count-the-number-of-elements-in-an-array/problem?h_r=next-challenge&h_v=zen

s=($(cat))
echo ${#s[@]}

