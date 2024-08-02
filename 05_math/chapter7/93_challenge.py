

from sympy import Integral, Symbol, sympify, solve
from sympy.core.sympify import sympifyError

def calculate_area(f, g, var, var1, var2):
    solutions = solve(f-g, var)
    sol = []
    for solution in solutions:
        if solution > var1 and solution < var2:
            sol.append(solution)
    sol.sort()
    sol.append(var2)

    area_sum = 0
    down = var1

    for point in sol:
        up = point
        area_sum += abs(Integral(f-g, (var, down, up)).doit())
        down = point
    
    return area_sum



if __name__ == '__main__':

    f = input('Enter the 1st function in one variable: ')
    g = input('Enter the 2nd function in one variable: ')
    var = input('Enter the variable to differentiate with respect to: ')
    var1 = float(input('Enter the start value of the variable: '))
    var2 = float(input('Enter the end value of the variable: '))

    try:
        f = sympify(f)
        g = sympify(g)
    except SympifyError:
        print('Invalid function entered')
    else:
        var = Symbol(var)
        area = calculate_area(f, g, var, var1, var2)
        print('Area between {0} and {1} from {2} to {3}: {4}'.format(f, g, var1, var2, area))
        