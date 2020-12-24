#Keep calm and carry on..

'''  Problem : Help santa
    URL : https://www.codechef.com/NQST2020/problems/HELPSANT
'''
#def solve():
#import numpy as np
import math
#import sympy as sp

def isprime(n):
    for i in range(2,n):
        if n % i == 0:
            return False
            break
    else:
        return True

if __name__ == '__main__':
	n = int(input())
	ls = list(map(int,input().split()))
	st = set(ls)
	for i in st:
	    print(i,end=" ")
