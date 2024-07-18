'''
Exploring a Quadratic Function Visually
'''
import matplotlib.pyplot as plt
import mpl_toolkits.axisartist as axisartist

# Generate equally spaced floating point numbers between two given values
def frange(start, final, increment):
    numbers = []
    while start < final:
        numbers.append(start)
        start = start + increment
    return numbers


def plot_quadratic(a, b, c):
    if b**2 - 4*a*c > 0:
        D = (b**2 - 4*a*c)**0.5
        x1 = (-b - D)/(2*a)
        x2 = (-b + D)/(2*a)
        x_value = frange(x1//1-1, x2//1+1, 0.1)
    else:
        x_value = frange(-b/(2*a)-5, -b/(2*a)+5, 0.1)

    y_value = []
    for x in x_value:
        y = a*(x**2) + b*x + c
        y_value.append(y)

    plt.plot(x_value, y_value)
    fig = plt.gca()
    fig.spines['top'].set_visible(False)
    fig.spines['right'].set_visible(False)
    fig.spines['bottom'].set_position(('data', 0))
    fig.spines['left'].set_position(('outward', 0))
    fig.plot(x_value, y_value)
    plt.show()

    plt.show()

if __name__ == '__main__':
    try:
        a = float(input('Enter a:'))
        b = float(input('Enter b:'))
        c = float(input('Enter c:'))
        if a == 0:
            raise Exception()
    except:
            print('Invalid input!')
    plot_quadratic(a, b, c)