
#Keep calm and carry on..

'''  Problem : Two Strings
    URL : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/
'''

t = int(input())
while t > 0:
    s1, s2 = input().split()
    a = ''.join(sorted(s1))
    b = ''.join(sorted(s2))
    if a == b:
        print("YES")
    else:
        print("NO")
    t -= 1
