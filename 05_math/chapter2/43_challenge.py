import math
from matplotlib import pyplot as plt


# Generate equally spaced floating point numbers between two given values
def frange(start, final, increment):
    numbers = []
    while start < final:
        numbers.append(start)
        start = start + increment
    return numbers


def draw_graph(x, y):
    plt.plot(x, y)
    fig = plt.gca()
    fig.spines['top'].set_visible(False)
    fig.spines['right'].set_visible(False) 
    plt.xlabel('x / m', loc='right')
    plt.ylabel('h / m', loc='top')
    plt.title('Projectile motion of a ball')

def draw_trajectory(u, theta):
    theta = math.radians(theta)
    g = 9.8

    # Info of flight
    t_flight = 2*u*math.sin(theta)/g
    x_max = t_flight*u*math.cos(theta)
    h_max = 0.5*g*(t_flight/2)**2
    

    # Find time intervals
    intervals = frange(0, t_flight, 0.001)

    # List of x and y coordinates
    x = []
    y = []
    for t in intervals:
        x.append(u*math.cos(theta)*t)
        y.append(u*math.sin(theta)*t - 0.5*g*t*t)
    draw_graph(x, y)
    return [t_flight, x_max, h_max]

if __name__ =='__main__':

    # List of three different initial velocities
    u_list = [] 
    theta_list = []
    try:
        bodies = int(input('How many trajectories? :'))
        if bodies < 0:
            raise Exception()
        for i in range(bodies):
            u = float(input('Enter the velocity of trajectory {0} (m/s): '.format(i+1)))
            theta = float(input('Enter the angle of trajectory {0} (degrees): '.format(i+1)))
            if u <= 0 or theta <= 0:
                raise Exception()
            u_list.append(u)
            theta_list.append(theta)
    except:
        print('Invalid input!')


    str_legend = []
    for index in range(len(u_list)):
        info = draw_trajectory(u_list[index], theta_list[index])
        print(  't{0} : {1:.2f} s'.format(index+1, info[0]),
                'x{0} : {1:.2f} m'.format(index+1, info[1]),
                'h{0} : {1:.2f} m'.format(index+1, info[2]), sep='\n')
        
        str_legend.append(str(u_list[index]) + 'm/s' + ',' + str(theta_list[index]) + 'degrees')

    # Add a legend and show the graph
    plt.legend(str_legend, loc='upper right')
    plt.show() 