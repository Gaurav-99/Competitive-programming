#Keep calm and carry on..

'''  Problem : A - Very Very Primitive Game
    URL : https://atcoder.jp/contests/abc190/tasks/abc190_a
'''

if __name__ == '__main__':
	a,b,c = map(int, input().split())

	if c == 0:
		if a > b:
			print("Takahashi")
		else :
			print("Akoi")
	else :
		if b > a:
			print("Akoi")
		else :
			pritn("Takahashi")
