#!/bin/bash
#https://www.hackerrank.com/challenges/bash-tutorials-concatenate-an-array-with-itself/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

s=($(cat))
answer=("${s[@]}" "${s[@]}" "${s[@]}")
echo ${answer[@]}

