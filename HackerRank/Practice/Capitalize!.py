#!/bin/python3

#Keep calm and carry on..

'''  Problem : Capitalize!
    URL : https://www.hackerrank.com/challenges/capitalize/problem
''
import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    news = ''
    for i in range(0,len(s)):
        if i == 0 or s[i-1] == " ":
            news += s[i].upper()
        else:
            news += s[i]
            
    return news

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
