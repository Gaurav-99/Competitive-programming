#Keep calm and carry on..

'''  Problem : 
    URL : 
'''
#def solve():
from numpy import *
#import sympy as sp


if __name__ == '__main__':
	n = int(input())
	a = list(map(int, input().split()))
	b = list(map(int, input().split()))
	res = 0

	for i in range(n):
		res += a[i] *b[i]

	if res == 0:
		print("Yes")
	else :
		print("No")
