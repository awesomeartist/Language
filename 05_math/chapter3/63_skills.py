import openpyxl
import matplotlib.pyplot as plt


def scatter_plot(x, y):
    plt.scatter(x, y)
    plt.xlabel('Number')
    plt.ylabel('Squared')
    plt.show()

def read_csv(filename):
    numbers = []
    squared = []
    workbook = openpyxl.load_workbook(filename)
    worksheet = workbook.worksheets[0]
    row_it = worksheet.iter_rows()
    next(row_it)
    for row in row_it:
        numbers.append(row[0].value)
        squared.append(row[1].value)


    return numbers, squared

if __name__ == '__main__':
    numbers, squared = read_csv('mydata.xlsx')
    scatter_plot(numbers, squared)