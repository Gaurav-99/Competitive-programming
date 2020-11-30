#Keep calm and carry on..

'''  Problem : 
    URL : https://www.hackerrank.com/challenges/text-wrap/problem
'''

import textwrap

def wrap(string, max_width):
    wrapper = textwrap.TextWrapper(width= max_width) 
    word_list = wrapper.fill(text=string) 
    return word_list

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
