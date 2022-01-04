#!/bin/bash
#https://www.hackerrank.com/challenges/lonely-integer-2/problem

read n
read -a array

for number in "${array[@]}"; do
  count=0

  for number2 in "${array[@]}"; do
    if [ $number2 -eq $number ]; then
      count=$(( $count + 1 ))
    fi
  done

  if [ $count -eq 1 ]; then
    echo $number
  fi
done
