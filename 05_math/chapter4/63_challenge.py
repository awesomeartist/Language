

from sympy import sympify, summation, symbols
from IPython.display import display
from sympy.core.sympify import SympifyError


def sum_series(expr, cnt):
    n = symbols('n')
    s = summation(expr, (n, 1, cnt))
    display(s)

if __name__ == '__main__':
    expr = input('Enter the nth terms of the series:')
    cnt = float(input('Enter the integer number of terms:'))

    try:
        expr = sympify(expr)
    except SympifyError:
        print('Invalid expression!')

    if cnt.is_integer() and cnt > 0:
        cnt = int(cnt)
        sum_series(expr, cnt)
    else:
        print('Invalid number!')