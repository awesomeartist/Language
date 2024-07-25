
def calculate_correlation(x_list, y_list):
    N = len(x_list)
    try:
        if N == len(y_list):
            pass
        else:
            raise Exception()
    except:
        print('The length of the lists are not equal!')
        return 0
    
    x_sum = 0 
    y_sum = 0
    xx_sum = 0
    yy_sum = 0
    xy_sum = 0
    try:
        for x, y in zip(x_list, y_list):
            x_sum += x
            y_sum += y
            xx_sum += x*x
            yy_sum += y*y
            xy_sum += x*y
    except:
        print('The item of the list are not mathch!')
        return 0

    cov_x_y =  N*xy_sum - x_sum*y_sum
    x_diff = N*xx_sum - x_sum*x_sum
    y_diff = N*yy_sum - y_sum*y_sum

    correlation = cov_x_y / (x_diff*y_diff)**0.5
    return correlation

if __name__ == '__main__':
    x_list = [90, 92, 95, 96, 87, 87, 90, 95, 98, 'a', 96]
    y_list = [85, 87, 86, 97, 96, 88, 89, 98, 98, 87, 100]
    # x_list = [83, 85, 84, 96, 94, 86, 87, 97, 97, 85]
    # y_list = [85, 87, 86, 97, 96, 88, 89, 98, 98, 87]
    print(calculate_correlation(x_list, y_list))