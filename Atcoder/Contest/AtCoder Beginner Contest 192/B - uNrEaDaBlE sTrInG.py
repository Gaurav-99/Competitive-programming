#Keep calm and carry on..

'''  Problem : B - uNrEaDaBlE sTrInG
    URL : https://atcoder.jp/contests/abc192/tasks/abc192_b
'''

if __name__ == '__main__':
	s = input()
	i  = 1
	for ch in s:
		if i % 2 == 0 and ch.isupper() == False:
			print("No")
			exit()
		elif i % 2 != 0 and ch.islower() == False:
			print("No")
			exit()
		i += 1

	print("Yes")
