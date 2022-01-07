#!/usr/bin/python
#https://www.hackerrank.com/challenges/incorrect-regex/problem

import re
n = int(input())
for i in range(n):
    string = input()
    try:
        regex = re.compile(string)
        print(True)
    except re.error:
        print(False)
