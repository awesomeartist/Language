'''
Print the series:
x + x**2 + x**3 + ... + x**n
    ____  _____         _____
      2     3             n
'''

from sympy import Symbol, pprint, init_printing
from IPython.display import display

def print_series(n):
    # initialize printing system with reverse order
    init_printing(order='rev-lex')

    x = Symbol('x')
    series = x
    for i in range(2, n+1):
        series = series + (x**i)/i
    pprint(series)
    display(series)

if __name__ == '__main__':
    n = input('Enter the number of terms you want in the series:')
    print_series(int(n))
    