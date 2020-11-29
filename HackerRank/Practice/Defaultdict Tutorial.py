#Keep calm and carry on..

'''  Problem : Defaultdict Tutorial
    URL : https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
''

n, m = map(int, input().split())
arr  = []
#arr = list(map(str, input().strip().split()))[:n] 
for i in range(n):
    ele = input()
    arr.append(ele)
    
brr = []
#brr = list(map(str, input().strip().split()))[:m] 

for i in range(m):
    ele = input()
    brr.append(ele)

for i in brr:
    x = 1
    cnt = 0
    for j in arr:
        if j == i:
            print(x, end=" ")
            cnt += 1
        elif x == n and cnt == 0:
            print(-1,end='')
        x += 1
    print()

