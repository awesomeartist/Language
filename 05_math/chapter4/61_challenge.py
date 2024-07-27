'''
Factor Finder
'''

from sympy import factor, sympify
from sympy.core.sympify import SympifyError
from IPython.display import display

def factor_finder(expr):
    expr = factor(expr)
    display(expr)


if __name__ == '__main__':
    expr = input('Enter your expression:')
    try:
        expr = sympify(expr)
    except SympifyError:
        print('Invalid input!')
    else:
        factor_finder(expr)
