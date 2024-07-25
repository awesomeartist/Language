import pandas as pd
import matplotlib.pyplot as plt

def scatter_plot(x, y):
    plt.scatter(x, y)
    plt.xlabel('Number')
    plt.ylabel('Squared')
    plt.show()

def read_csv(filename):
    reader = pd.read_excel(filename, sheet_name=0, header=0)
    numbers = reader.iloc[:, 0]
    squared = reader.iloc[:, 1]
    print(reader)
    return numbers, squared

if __name__ == '__main__':
    numbers, squared = read_csv('mydata.xlsx')
    scatter_plot(numbers, squared)