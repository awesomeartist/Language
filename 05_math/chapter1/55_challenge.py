'''
#5: Give Exit Power to the User
'''

def quadratic_roots(a, b, c):
    D = (b**2 - 4*a*c)**0.5
    x1 = (-b - D)/(2*a)
    x2 = (-b + D)/(2*a)

    print('x1 = {0:.3f}'.format(x1))
    print('x2 = {0:.3f}'.format(x2))

if __name__ == '__main__':
    while True:
        try:
            a = float(input('Enter a:'))
            b = float(input('Enter b:'))
            c = float(input('Enter c:'))
            if a == 0:
                raise Exception()
            quadratic_roots(a, b, c)
        except:
            print('Invalid input!')
        
        sChoice = input('Do you want to exit? (y) for yes and (n) for no:')
        if sChoice == 'y':
            break
