


def create_classes(numbers, n):
    low = min(numbers)
    high = max(numbers)

    # Width of each class
    width = (high - low)/n
    a = low
    b = low + width
    classes = []
    while a < (high-width):
        classes.append((a, b))
        a = b
        b = a + width
    classes.append((a, high+1))
    return classes

def create_grouped_freq_table(numbers, classes):
    count = [0]*len(classes)
    for n in numbers:
        for index, c in enumerate(classes):
            if n >= c[0] and n < c[1]:
                count[index] += 1
                break
    return count

if __name__ == '__main__':
    numbers = [7, 8, 9, 2, 10, 9, 9, 9, 9, 4, 5, 6, 1, 5, 6, 7, 8, 6, 1, 10]
    classes = create_classes(numbers, 2)
    count = create_grouped_freq_table(numbers, classes)
    print('Grouped  \ Frequency')
    for c, cnt in zip(classes, count):
        print('{0:.2f} - {1:.2f} \t {2}'.format(c[0], c[1], cnt))
    