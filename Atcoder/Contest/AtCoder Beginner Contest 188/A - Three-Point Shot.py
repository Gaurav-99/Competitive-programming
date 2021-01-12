#Keep calm and carry on..

'''  Problem : 
    URL : 
'''
#def solve():
from numpy import *
#import sympy as sp


if __name__ == '__main__':
	x, y = map(int, input().split())

	if abs(x -y) >= 3:
		print("No")
	else :
		print("Yes")
