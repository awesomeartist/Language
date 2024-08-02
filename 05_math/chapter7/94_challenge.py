from sympy import Derivative, Integral, Symbol, sympify, sqrt
from sympy.core.sympify import SympifyError

def calculate_length(f,  var, var1, var2):
    f1x = Derivative(f, var)

    fl = sqrt(1+f1x**2)

    length = Integral(fl, (var, var1, var2)).doit()
    
    
    return length



if __name__ == '__main__':

    f = input('Enter a function in one variable: ')
    var = input('Enter the variable to differentiate with respect to: ')
    var1 = float(input('Enter the start value of the variable: '))
    var2 = float(input('Enter the end value of the variable: '))

    try:
        f = sympify(f)
    except SympifyError:
        print('Invalid function entered')
    else:
        var = Symbol(var)
        length = calculate_length(f, var, var1, var2)
        print('Length of function {0} from {1} to {2}: {3}'.format(f, var1, var2, length))