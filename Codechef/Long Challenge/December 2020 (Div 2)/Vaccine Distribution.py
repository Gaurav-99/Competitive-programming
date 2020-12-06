#Keep calm and carry on..

'''  Problem : Vaccine Distribution
    URL : https://www.codechef.com/DEC20B/problems/VACCINE2
'''

t = int(input())
while t > 0:
    n, d = map(int, input().split())
    ans = 0
    rsk = 0
    sfe = 0
    arr = list(map(int, input().split()))
    for i in arr:
        if (i >= 80 or i <= 9):
            rsk += 1 
        else :
            sfe += 1 
    ans  = rsk // d + sfe // d;
    if (rsk % d != 0):
        ans += 1
    if (sfe % d != 0):
        ans += 1 
    print(ans)
    t -= 1
 
