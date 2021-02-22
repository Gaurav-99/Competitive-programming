#Keep calm and carry on..

'''  Problem : B - Magic 3
    URL : https://atcoder.jp/contests/abc190/tasks/abc190_b
'''

n, s, d = map(int, input().split())
xy = [list(map(int,input().split())) for _ in range(n)]
ans = 'No'
for x, y in xy:
    if x < s and d < y:
        ans = 'Yes'
        break
print(ans)
