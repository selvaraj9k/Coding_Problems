#!/bin/bash
#https://www.hackerrank.com/challenges/awk-2/problem

awk '{print $1 ,":",($2>=50 && $3>=50 && $4>=50)? "Pass":"Fail"}'

