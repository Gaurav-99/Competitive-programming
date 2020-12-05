#Keep calm and carry on..

'''  Problem : Vaccine Production
    URL : https://www.codechef.com/DEC20B/problems/VACCINE1
'''

if __name__ == '__main__':
    d1, v1, d2, v2, p = map(int, input().split())
    vac = 0
    de = 0
    while vac < p:
        de += 1
        if de >= d1:
            vac += v1
        if de >= d2:
            vac += v2
    print(de)
