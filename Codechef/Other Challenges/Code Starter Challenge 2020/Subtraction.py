#Keep calm and carry on..

'''  Problem : Subtraction
    URL : https://www.codechef.com/CSTR2020/problems/SUBTRACT
'''
#def solve():

if __name__ == '__main__':
	n, k = map(int, input().split())
	for i in range(k):
		if n % 10 == 0:
			n //= 10
		else:
			n -= 1
	print(n)	

