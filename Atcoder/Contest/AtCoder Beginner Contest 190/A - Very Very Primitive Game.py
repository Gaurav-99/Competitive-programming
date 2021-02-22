#Keep calm and carry on..

'''  Problem : B - uNrEaDaBlE sTrInG
    URL : https://atcoder.jp/contests/abc192/tasks/abc192_b
'''

a, b, c = map(int, input().split())
if a < b:
    print('Aoki')
elif a > b:
    print('Takahashi')
else:
    print('Aoki' if c == 0 else 'Takahashi')
