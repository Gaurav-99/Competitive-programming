#Keep calm and carry on..

'''  Problem : Arithmetic Progression
    URL : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/arithmetic-progression-1-81131fa7/
'''
#def solve():
from numpy import *
#import sympy as sp
from math import *

if __name__ == '__main__':
    t = int(input())
    while t > 0:
        a,b,c = map(int, input().split())
        print(ceil(abs((a+c)/2 - b)))
        t -= 1
