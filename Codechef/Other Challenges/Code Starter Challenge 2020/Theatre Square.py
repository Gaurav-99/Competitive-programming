#Keep calm and carry on..

'''  Problem : Theatre Square
    URL : https://www.codechef.com/CSTR2020/problems/MALLTILE
'''
#def solve():

if __name__ == '__main__':
    n, m, a = map(int,input().split())
    x = n // a if n % a == 0 else ((n // a) + 1)
    y = m // a if m % a == 0 else ((m // a) + 1)
    print(x*y)
