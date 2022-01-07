#!/usr/bin/python
#https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

N=int(input())
list=list(set(map(int,input().strip().split(" "))))
list.sort(reverse=True)
print (list[1])
