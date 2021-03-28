#!/bin/bash
#https://www.hackerrank.com/challenges/bash-tutorials-display-the-third-element-of-an-array/problem

s=($(cat))
echo "${s[@]:3:1}"

