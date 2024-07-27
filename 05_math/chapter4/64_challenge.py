
from sympy import *
from sympy.core.sympify import SympifyError

def isolve(ineq):

    x = Symbol('x')
    lhs = ineq.lhs

    if lhs.is_polynomial():
        p = Poly(lhs, x)
        rel = ineq.rel_op
        solution = solve_poly_inequality(p, rel)

    elif lhs.is_rational_function():
        numer, denom = lhs.as_numer_denom()
        p1 = Poly(numer)
        p2 = Poly(denom)
        rel = ineq.rel_op
        solution = solve_rational_inequalities([[((p1, p2), rel)]])

    else: 
        solution = solve_univariate_inequality(ineq, x, relational=False)

    print(solution)


if __name__ == '__main__':

    ineq = input('Enter your equation to solve:')
    
    try:
        ineq = sympify(ineq)
    except SympifyError:
        print('Invalid input!')
    else:
        isolve(ineq)