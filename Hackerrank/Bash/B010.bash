#!/bin/bash
//https://www.hackerrank.com/challenges/bash-tutorials---compute-the-average/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

read N
SUM=0
for ((I=1;I<=N;I++))
do
    read NUMBERS
    SUM=$((SUM+NUMBERS))
done
AVG=$(echo $SUM / $N | bc -l)
printf "%.3f" "$AVG"

