#!/usr/bin/python
#https://www.hackerrank.com/challenges/np-arrays/problem
import numpy
def arrays(arr):
    return inumpy.array(arr[::-1], float)
arr = input().strip().split(' ')
result = arrays(arr)
print(result)
