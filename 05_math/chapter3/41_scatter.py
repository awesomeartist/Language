'''
Scatter Plot
'''
import matplotlib.pyplot as plt

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
    x1_list = [10.0, 8.0, 13.0, 9.0, 11.0, 14.0, 6.0, 4.0, 12.0, 7.0, 5.0]
    y1_list = [8.04, 6.95, 7.58, 8.81, 8.33, 9.96, 7.24, 4.26, 10.84, 4.82, 5.68]
    x2_list = [10.0, 8.0, 13.0, 9.0, 11.0, 14.0, 6.0, 4.0, 12.0, 7.0, 5.0]
    y2_list = [9.14, 8.14, 8.74, 8.77, 9.26, 8.10, 6.13, 3.10, 9.13, 7.26, 4.74]
    x3_list = [10.0, 8.0, 13.0, 9.0, 11.0, 14.0, 6.0, 4.0, 12.0, 7.0, 5.0]
    y3_list = [7.46, 6.77, 12.74, 7.11, 7.81, 8.84, 6.08, 5.39, 8.15, 6.42, 5.73]
    x4_list = [8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 19.0, 8.0, 8.0, 8.0]
    y4_list = [6.58, 5.76, 7.71, 8.84, 8.47, 7.04, 5.25, 12.50, 5.56, 7.91, 6.89]
    print('correlation between x1 and y1:', calculate_correlation(x1_list, y1_list))
    print('correlation between x2 and y2:', calculate_correlation(x2_list, y2_list))
    print('correlation between x3 and y3:', calculate_correlation(x3_list, y3_list))
    print('correlation between x4 and y4:', calculate_correlation(x4_list, y4_list))
    
    plt.subplot(2, 2, 1)
    plt.xlim(0, 20)
    plt.ylim(0, 20)
    plt.xlabel('X1')
    plt.ylabel('Y1')
    plt.scatter(x1_list, y1_list)

    plt.subplot(2, 2, 2)
    plt.xlim(0, 20)
    plt.ylim(0, 20)
    plt.xlabel('X2')
    plt.ylabel('Y2')
    plt.scatter(x2_list, y2_list)

    plt.subplot(2, 2, 3)
    plt.xlim(0, 20)
    plt.ylim(0, 20)
    plt.xlabel('X3')
    plt.ylabel('Y3')
    plt.scatter(x3_list, y3_list)

    plt.subplot(2, 2, 4)
    plt.xlim(0, 20)
    plt.ylim(0, 20)
    plt.xlabel('X4')
    plt.ylabel('Y4')
    plt.scatter(x4_list, y4_list)

    plt.subplots_adjust(wspace=0.4, hspace=0.5)
    plt.show()
