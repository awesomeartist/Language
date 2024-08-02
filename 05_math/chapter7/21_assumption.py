'''
Assumptions in Sympy
'''

from sympy import Symbol


def do_something(x):
    if (x+5) > 0:
        print('Do Something')
    else:
        print('Do Something else')

if __name__ == '__main__':

    # x = Symbol('x')
    x = Symbol('x', positive=True)
    do_something(x)