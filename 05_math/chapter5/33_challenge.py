
import random

def toss():
    if random.randint(1, 2) < 2:
        return 0
    return 1


if __name__ == '__main__':
    input_amount = float(input('Enter your start amount:'))
    trials_list = [100, 1000, 5000, 10000, 50000, 100000]
    
    for trials in trials_list:
        toss_sum = 0
        for i in range(trials):
            toss_cnt = 0
            amount = input_amount
            while True:
                toss_cnt += 1
                if toss() > 0:
                    amount += 1
                    # print('Heads! Current amount: {0}'.format(amount))
                else:
                    amount -= 1.5
                    # print('Tails! Current amount: {0}'.format(amount))
                if amount <= 0:
                    toss_sum += toss_cnt
                    # print('Game Over! Current amount: {0}, total toss: {1}'.format(amount, toss_cnt))
                    break
        print('Trials: {0:^10}, Average toss with start amount {1}: {2}'.format(trials, input_amount, toss_sum/trials))
                    
