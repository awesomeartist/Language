
import random


def calculate_E(trials):

    sum_expect = 0
    for cnt in range(trials):
        die_side = random.randint(1, 6)
        sum_expect += die_side
    
    return sum_expect/trials


if __name__ == '__main__':
    trials_list = [100, 1000, 5000, 10000, 100000, 500000, 1000000]
    for trials in trials_list:
        print('Trials: {0} Trial average {1:.5f}'.format(trials, calculate_E(trials)))
