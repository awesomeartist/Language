
import matplotlib.pyplot as plt

# generate fibonacci list
def fibo(n):
    if n == 1:
        return [1]
    if n == 2:
        return [1, 1]
    # n > 2
    a = 1
    b = 1
    # First two members of the series
    series = [a, b]
    for i in range(n):
        c = a + b
        series.append(c)
        a = b
        b = c
    return series

if __name__ == '__main__':
    fibo_len = 50
    fibo_list = fibo(fibo_len)
    fibo_ratio = []
    for i in range(fibo_len -1):
        fibo_ratio.append(fibo_list[i+1]/fibo_list[i])
    numbers = range(fibo_len-1)
    plt.plot(numbers, fibo_ratio)
    plt.title('ratio between consecutive Fibonacci numbers')
    plt.xlabel('No.')
    plt.ylabel('Ratio')
    fig = plt.gca()
    fig.spines['top'].set_visible(False)
    fig.spines['right'].set_visible(False) 
    plt.show()

