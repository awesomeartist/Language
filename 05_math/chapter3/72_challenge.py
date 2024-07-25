'''
you can not call a function from a file whose name start with digits
'''
import mylib

def statistic_calculate(numbers):
    mean = mylib.calculate_mean(numbers)
    median = mylib.calculate_median(numbers)
    mode = mylib.calculate_mode(numbers)
    variance, std_deviation = mylib.calculate_variance(numbers)

    return mean, median, mode, variance, std_deviation

if __name__ == '__main__':
    filename = 'mydata.txt'
    numbers = mylib.read_data(filename)
    id = statistic_calculate(numbers)
    print('mean: {0:.2f}, median: {1:.2f}, mode: {2:.2f}, variance: {3:.2f}, std_deviation: {4:.2f}'
          .format(id[0], id[1], id[2], id[3], id[4]))