#Keep calm and carry on..

'''  Problem :Billiards
    URL :https://atcoder.jp/contests/abc183/tasks/abc183_b
'''
import decimal as dc

dc.getcontext().prec = 6

sx, sy, gx, gy = map(int, input().split())

ans = dc.Decimal((gy*sx + sy*gx)/(sy + gy))

print(ans)
