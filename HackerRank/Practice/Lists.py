
#Keep calm and carry on..

'''  Problem : Lists
    URL : https://www.hackerrank.com/challenges/python-lists/problem
''

n = int(input())

nums = []
for i in range(n):
    val = input().split()

    if val[0] == 'insert':
            nums.insert(int(val[1]),int(val[2]))

    elif val[0] == 'append':
            nums.append(int(val[1]))

    elif val[0] == 'remove':
            nums.remove(int(val[1]))

    elif val[0] == 'pop':
            nums.pop(-1)

    elif val[0] == 'sort':
            nums.sort()

    elif val[0] == 'reverse':
            nums.reverse()

    elif val[0] == 'print':
            print(nums)
