#Keep calm and carry on..

'''  Problem : Find the imposter
    URL :https://www.codechef.com/CSTR2020/problems/AMONGUS
'''
#def solve():

if __name__ == '__main__':
	n = int(input())
	a = list(map(int, input().split()))
	b = list(map(int, input().split()))

	print(int(sum(b) - sum(a)))
