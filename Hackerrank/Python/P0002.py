#https://www.hackerrank.com/challenges/py-if-else/problem

#!/bin/python

import math
import os
import random
import re
import sys

n = int(raw_input().strip())
if n % 2 == 1 or n >= 6 and n <= 20:
        print("Weird")
else: 
        print("Not Weird")
