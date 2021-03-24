#!/bin/bash
#https://www.hackerrank.com/challenges/bash-tutorials---getting-started-with-conditionals/problem

read character

case $character in
  Y|y)echo "YES";;
  N|n)echo "NO" ;;
  esac

