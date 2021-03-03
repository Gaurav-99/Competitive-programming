#Keep calm and carry on..

'''  Problem : A. Shifting Stacks
    URL : https://codeforces.com/problemset/problem/1486/A
'''
def mysum(a,j):
    x = 0
    for i in range(j+1):
        x += a[i]
    return x
	
t = int(input())


while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    t -= 1
    j = n -1
    flag = 1
    while j >= 0:
	    min_sum = j*(j+1)//2
	    #print(j,mysum(a,j),end=" ")
	    if mysum(a,j) < min_sum:
	        print("No")
	        flag = 0
	        break
	    j -= 1
    if flag == 1:
        print("Yes")
