'''
Find the variance and standard deviation of a list of numbers
'''

def calculate_variance(numbers):
    num_len = len(numbers)
    num_sum = sum(numbers)
    num_mean = num_sum/num_len
    var_sum = 0

    for number in numbers:
        var_sum += (number - num_mean)**2

    variance = var_sum/num_len
    std_deviation = (var_sum/(num_len-1))**0.5

    return variance, std_deviation


if __name__ == '__main__':
    donations = [100, 60, 70, 900, 100, 200, 500, 500, 503, 600, 1000, 1200]
    variance, std_deviation = calculate_variance(donations)
    print('variance: {0:.2f}'.format(variance))
    print('standard deviation: {0:.2f}'.format(std_deviation))