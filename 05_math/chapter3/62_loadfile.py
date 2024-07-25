import csv
import matplotlib.pyplot as plt


def scatter_plot(x, y):
    plt.scatter(x, y)
    plt.xlabel('Number')
    plt.ylabel('Squared')
    plt.show()

def read_csv(filename):
    numbers = []
    squared = []
    with open(filename) as f:
        reader = csv.reader(f)
        next(reader)
        for row in reader:
            numbers.append(int(row[0]))
            squared.append(int(row[1]))
        f.close()
    return numbers, squared

if __name__ == '__main__':
    numbers, squared = read_csv('mydata.csv')
    scatter_plot(numbers, squared)