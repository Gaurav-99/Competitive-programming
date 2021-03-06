#Keep calm and carry on..

'''  Problem : A - I Scream
    URL : https://atcoder.jp/contests/abc194/tasks/abc194_a
'''
a,b = map(int, input().split())
x = a + b
if x >= 15 and b >= 8:
    print(1)
elif x >= 10 and b >= 3:
    print(2)
elif x >= 3:
    print(3)
else :
    print(4)
