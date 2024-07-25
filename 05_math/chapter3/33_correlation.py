'''
Calculate correlation between two pair sets of numbers
'''

import matplotlib.pyplot as plt

def scatter_plot(x_list, y_list):
    plt.scatter(x_list, y_list)
    plt.show()

def calculate_correlation(x_list, y_list):

    N = len(x_list)
    
    x_sum = 0 
    y_sum = 0
    xx_sum = 0
    yy_sum = 0
    xy_sum = 0
    for x, y in zip(x_list, y_list):
        x_sum += x
        y_sum += y
        xx_sum += x*x
        yy_sum += y*y
        xy_sum += x*y

    cov_x_y =  N*xy_sum - x_sum*y_sum
    x_diff = N*xx_sum - x_sum*x_sum
    y_diff = N*yy_sum - y_sum*y_sum

    correlation = cov_x_y / (x_diff*y_diff)**0.5
    return correlation

if __name__ == '__main__':
    # x_list = [90, 92, 95, 96, 87, 87, 90, 95, 98, 96]
    # y_list = [85, 87, 86, 97, 96, 88, 89, 98, 98, 87]
    x_list = [83, 85, 84, 96, 94, 86, 87, 97, 97, 85]
    y_list = [85, 87, 86, 97, 96, 88, 89, 98, 98, 87]
    scatter_plot(x_list, y_list)
    print(calculate_correlation(x_list, y_list))
