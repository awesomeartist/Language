'''
Verify the Continuity of a Function at a Point
'''

from sympy import Symbol, sympify, Limit

def verify_continuity(f, x, x0):
    r_l = Limit(f, x, x0, dir='+').doit()
    l_l = Limit(f, x, x0, dir='-').doit()
    x0_l = f.subs({x:0})

    print('r_l = {0} \nl_l = {1} \nx0_l = {2}'.format(r_l, l_l, x0_l))

    if x0_l == r_l and x0_l == l_l:
        return True
    
    return False

if __name__ == '__main__':
    f = input('Enter a function in one variable: ')
    var = input('Enter the variable: ')
    var0 = float(input('Enter the point to check the continuity at: '))

    try:
        f = sympify(f)
    except SympifyError:
        print('Invalid function entered')
    else:
        var = Symbol(var)
        check = verify_continuity(f, var, var0)
    if check:
        print('{0} is continuous at {1}'.format(f, var0))
    else:
        print('{0} is not continuous at {1}'.format(f, var0))