#Keep calm and carry on..

'''  Problem : Catch the Thief
    URL : https://www.codechef.com/COOK125B/problems/CATHIEF
'''
#def solve():

if __name__ == '__main__':
	t = int(input())

	for i in range(t):
		x, y, k, n = map(int, input().split())
		if (abs(x-y) % (2*k))== 0:
			print("Yes")
		else :
			print("No")

