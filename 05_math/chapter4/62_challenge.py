
from sympy import sympify, solve, symbols
from sympy.plotting import plot
from sympy.core.sympify import SympifyError


def graph_solve(expr1, expr2):
    x, y = symbols('x, y')
    soln = solve((expr1, expr2), dict=True)
    if soln:
        print('x: {0} y: {1}'.format(soln[0][x], soln[0][y]))
    else:
        print('No solution found!')
        
    
    expr1_y = solve(expr1, y)[0]
    expr2_y = solve(expr2, y)[0]
    p = plot(expr1_y, expr2_y, legend=True, show=False, title = 'Graph_Solver')
    p[0].line_color = 'r'
    p[1].line_color = 'b'
    p.show()
    pass


if __name__ == '__main__':
    expr1 = input('Enter the 1st expression in terns of x and y:')
    expr2 = input('Enter the 2nd expression in terns of x and y:')
    try:
        expr1 = sympify(expr1)
        expr2 = sympify(expr2)
    except SympifyError:
        print('Invalid input!')
    else:
        x = Symbol('x')
        y = Symbol('y')
        # check if the expressions consist of only two variables
        eq1_symbols = expr1.atoms(Symbol)
        eq2_symbols = expr2.atoms(Symbol)
        
        if len(eq1_symbols)> 2 or len(eq2_symbols) > 2:
            print('The equations must have only two variables - x and y')
        elif x not in eq1_symbols or y not in eq1_symbols:
            print('First equation must have only x and y variables')
        elif x not in eq2_symbols or y not in eq2_symbols:
            print('Second equation must have only x and y variables')       
        else:
            graph_solve(expr1, expr2)