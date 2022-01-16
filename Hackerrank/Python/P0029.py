#!/usr/bin/python
#https://www.hackerrank.com/challenges/np-polynomials/problem
import numpy
l1 = list(map(float,input().split()))
x = int(input())
print(numpy.polyval(l1,x))


