#Keep calm and carry on..

'''  Problem :Almost GCD
    URL :https://atcoder.jp/contests/abc182/tasks/abc182_b
'''
n = int(input())
arr  = list(map(int, input().split()))
arr.sort()
gcd = 2
maxc = 0
for i in range(2, arr[n-1] + 1):
    cnt = 0
    for j in arr:
        if j % i == 0:
            cnt += 1
    if i == 2:
        maxc = cnt
    if cnt > maxc:
        gcd = i
print(gcd)


