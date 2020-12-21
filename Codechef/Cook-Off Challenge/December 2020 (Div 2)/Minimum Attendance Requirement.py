#Keep calm and carry on..

'''  Problem : Minimum Attendance Requirement 
    URL : https://www.codechef.com/COOK125B/problems/ATTENDU
'''
#def solve():

if __name__ == '__main__':
	t = int(input())

	for i in range(t):
		n = int(input())
		s = input()
		pre = s.count('1')
		if 120 - n + pre >= 90:
			print("YES")
		else :
			print("NO")
