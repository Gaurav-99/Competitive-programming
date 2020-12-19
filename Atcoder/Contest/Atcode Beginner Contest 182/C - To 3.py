#Keep calm and carry on..

'''  Problem : C - To 3
    URL : https://atcoder.jp/contests/abc182/tasks/abc182_c
'''
#def solve():

if __name__ == '__main__':

	n = int(input())
	remdrs = [0, 0, 0]
	
	while n > 0:
		x = n % 10
		remdrs[x % 3] += 1
		n //= 10

	remdr = (remdrs[1] + 2 * remdrs[2]) % 3
	k = sum(remdrs)
	res = -1
	if remdr == 0:
		res = 0
	elif remdr == 1:
		if remdrs[1] > 0:
			if k == 1:
				res = -1
			else :
				res = 1
		else :
			if k == 2:
				res = -1
			else :
				res = 2
	else :
		if remdrs[2] > 0:
			if k == 1:
				res = -1
			else :
				res = 1
		else :
			if k == 2:
				res = -1
			else:
				res = 2
	print(res)

