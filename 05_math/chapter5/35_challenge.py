
import random
from sympy import pi
from IPython.display import display

def simulate_throw(x_interval, y_interval):

    x = random.uniform(x_interval[0], x_interval[1])
    y = random.uniform(y_interval[0], y_interval[1])

    return x, y

if __name__ == '__main__':
    radius = 2
    trials_list = [1000, 5000, 10000, 100000, 1000000]
    for trials in trials_list:
        inside_cnt = 0
        for i in range(trials):
            x, y = simulate_throw((-radius, radius), (-radius, radius))
            if x*x + y*y < radius*radius:
                inside_cnt += 1
        print('Area: {0:.3f}, Trials: {1:^10} Estimate Area:{2:^10.3f}, Estimate $\pi$: {3:.3f}'.
              format(3.1415*radius**2, trials, 4*radius**2*inside_cnt/trials, 4*inside_cnt/trials))
