#Keep calm and carry on..

'''  Problem : B - Quizzes
    URL : https://atcoder.jp/contests/abc184/tasks/abc184_b
'''
#def solve():

if __name__ == '__main__':
   n, x = map(int, input().split())
   s = input()
   for i in s:
      if i == 'o' :
        x += 1
      elif i == 'x':
          if x > 0:
              x -= 1
        
   print(x)
