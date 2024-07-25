'''
Calculate the mean
'''

def calculate_mean(numbers):
    Sum = sum(numbers)
    num_len = len(numbers)
    if num_len == 0:
        return 0
    Mean = Sum/num_len
    return Mean

if __name__ == '__main__':
    numbers = []
    print('Enter a set of numbers, press the key \'Enter\' twice to finish')
    while True:
        try:
            number = float(input())
            numbers.append(number)
        except:
            break

    mean = calculate_mean(numbers)
    print('mean = {0:.2f}'.format(mean))