#!/bin/bash
#https://www.hackerrank.com/challenges/awk-3/problem

awk '{
    average = ($2 + $3 + $4)/3;
    if ( average >= 80)
        print $0,":","A"
    else if (average >= 60)
        print $0,":","B"
    else if (average >= 50)
        print $0,":","C"
    else
        print $0,":","FAIL"
}'
