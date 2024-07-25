
import csv
from mylib import mean, median, variance
import matplotlib.pyplot as plt

def read_csv(filename):
    years = []
    population = []
    with open(filename) as f:
        reader = csv.reader(f)
        next(reader)
        for row in reader:
            year = row[0].split('-')[0]
            years.append(year)
            population.append(float(row[1]))

    years = years[::-1]
    population = population[::-1]

    return years, population

def plot_population(years, population):
    plt.figure(1)
    plt.plot(population, 'r-')
    plt.title('Popuplation in US between 1960 and 2012')
    plt.xlabel('Year')
    plt.ylabel('Population')
    xaxis_position = range(0, len(years))
    plt.xticks(xaxis_position, years, rotation=45)


def population_stat(population):
    growth = []
    for i in range(0, len(population)-1):
        growth.append(population[i+1] - population[i])
    print('mean groth: {0:2f}'.format(mean(growth)))
    print('median groth: {0:2f}'.format(median(growth)))
    print('variance/Sd growth: {0:2f} / {1:2f}'.format(*variance(growth)))
    return growth

def plot_population_diff(growth, years):

    xaxis_positions = range(0, len(years)-1)
    xaxis_labels = ['{0}-{1}'.format(years[i], years[i+1])
                    for i in range(len(years)-1)]
    plt.figure(2)
    plt.plot(growth, 'r-')
    plt.title('Population Growth in consecutive years')
    plt.ylabel('Population Growth')
    plt.xticks(xaxis_positions, xaxis_labels, rotation=45)

if __name__ == '__main__':
    filename = 'USA_SP_POP_TOTL.csv'
    years, population = read_csv(filename)
    plot_population(years, population)
    growth = population_stat(population)
    plot_population_diff(growth, years)
    plt.show()