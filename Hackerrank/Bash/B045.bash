#!/bin/bash
#https://www.hackerrank.com/challenges/bash-tutorials-filter-an-array-with-patterns/problem?h_r=next-challenge&h_v=zen

s=($(cat))
answer=(${s[@]/*a*/})
echo $answer

