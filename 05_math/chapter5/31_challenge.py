

from matplotlib_venn import venn2
import matplotlib.pyplot as plt
from sympy  import FiniteSet
import csv

def draw_venn(sets):
    venn2(subsets=sets, set_labels=['Football', 'Other'])
    plt.title('Venn Graph')
    plt.show()

def read_csv(filename):
    football = []
    other = []
    with open(filename) as f:
        reader = csv.reader(f)
        next(reader)
        for row in reader:
            print(row)
            if row[1] == '1':
                football.append(row[0])
            if row[2] == '1':
                other.append(row[0])
    return football, other

if __name__ == '__main__':
    filename = 'data.csv'
    football, other = read_csv(filename)
    football = FiniteSet(*football)
    other = FiniteSet(*other)
    draw_venn([football, other])