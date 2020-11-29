#Keep calm and carry on..

'''  Problem : sWAP cASE
    URL : https://www.hackerrank.com/challenges/swap-case/problem
''

def swap_case(s):
    l = len(s)
    new_s = ''
    for i in range(l):
        if (s[i].isupper()) == True:
            new_s += (s[i].lower())
        else:
            new_s += (s[i].upper())
    return new_s
    
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
