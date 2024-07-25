'''
Calculate the median
'''

def calculate_median(numbers):
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

if __name__ == '__main__':
    numbers = []
    print('Enter a set of numbers, press the key \'Enter\' twice to finish')
    while True:
        try:
            number = float(input())
            numbers.append(number)
        except:
            break

    mean = calculate_median(numbers)
    print('median = {0}'.format(mean))    