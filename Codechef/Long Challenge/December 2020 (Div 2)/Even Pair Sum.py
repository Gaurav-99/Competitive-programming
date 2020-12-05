#Keep calm and carry on..

'''  Problem : Even Pair Sum
    URL : https://www.codechef.com/DEC20B/problems/EVENPSUM
'''
try:
    t = int(input())
    while t > 0:
        a, b = map(int, input().split())
        ans = 0
        aev = 0
        aod = 0
        bev = 0
        bod = 0
        if a % 2 == 0:
            aev = aod = a // 2;
        else:
            aev = a // 2
            aod = a // 2 + 1
        if (b % 2 == 0):
            bev = bod = b // 2
        else:
            bev = b // 2
            bod = b // 2 + 1
        ans  = aev * bev + aod * bod;
        print(int(ans))
    
except:
    pass
