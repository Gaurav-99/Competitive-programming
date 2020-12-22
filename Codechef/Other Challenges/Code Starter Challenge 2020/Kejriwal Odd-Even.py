#Keep calm and carry on..

'''  Problem : Kejriwal Odd-Even
    URL : https://www.codechef.com/CSTR2020/problems/DELHI
'''
#def solve():

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        cr = int(input())
        evn = 0
        od = 0
        while cr:
            dg = cr % 10
            if dg % 2 == 0:
                evn += dg
            else :
                od += dg
            cr = cr // 10
        if evn % 4 == 0 or od % 3 == 0:
            print("Yes")
        else :
            print("No")
