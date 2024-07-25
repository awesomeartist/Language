def mean(numbers):
    Sum = sum(numbers)
    num_len = len(numbers)
    if num_len == 0:
        return 0
    Mean = Sum/num_len
    return Mean

def median(numbers):
    num_len = len(numbers)
    numbers.sort()

    # Find the median
    if num_len % 2 == 0:
        m1 = int(num_len/2)
        m2 = int(m1 - 1)
        median = (numbers[m1] + numbers[m2])/2
    else:
        m = num_len // 2
        median = numbers[m]

    return median

from collections import Counter

def mode(numbers):
    c = Counter(numbers)
    mode = c.most_common(1)
    return mode[0][0]

def variance(numbers):
    num_len = len(numbers)
    num_sum = sum(numbers)
    num_mean = num_sum/num_len
    var_sum = 0

    for number in numbers:
        var_sum += (number - num_mean)**2

    variance = var_sum/num_len
    std_deviation = (var_sum/(num_len-1))**0.5

    return variance, std_deviation

def read_data(filename):
    numbers = []
    with open(filename) as f:
        for line in f:
            try:
                numbers.append(float(line))
            except:
                continue

    return numbers