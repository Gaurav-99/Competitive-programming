#Keep calm and carry on..

'''  Problem :Trapezoid Sum
    URL :https://atcoder.jp/contests/abc181/tasks/abc181_b
'''
n = int(input())
sum = 0
for i in range(0,n):
    a,b = map(int,input().split())
    sum += ((b-a+1) * (a+b))//2
print(sum)

