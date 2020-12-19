#Keep calm and carry on..

'''  Problem : B - Blocks on Grid
    URL : https://atcoder.jp/contests/abc186/tasks/abc186_b
'''
#def solve():

if __name__ == '__main__':

	h, w = map(int,input().split())
	mainls = []
	for i in range(h):
		num = list(int(num) for num in input().strip().split())[:w]
		mainls += num
	mainls.sort()
	sum = 0
	for x in mainls:
		sum += x - mainls[0]
	print(sum)
