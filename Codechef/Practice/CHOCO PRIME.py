#Keep calm and carry on..

'''  Problem : CHOCO PRIME
    URL : https://www.codechef.com/problems/CPRIME
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
	
	t = int(input())
	for i in range(t):
		n = int(input())
		m = n + 1
		if n < 10:
		    if isprime(n) == True:
		        print("Yes")
		    else :
		        print("No")
		    continue
		dg =[]
		while n:
			dg.append(n%10)
			n //= 10
		rdg = dg[::-1]
		m -= 1
		if rdg == dg and isprime(m) == True:
			    print("Yes")
		else :
			print("No")  
