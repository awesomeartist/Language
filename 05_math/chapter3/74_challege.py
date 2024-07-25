

def find_percentile_score(data, percentile):
    if percentile < 0 or percentile >100:
        return None
    
    data.sort()
    N = len(data)

    if percentile == 0:
        return data[0]
    if percentile == 100:
        return data[N-1]
    
    idx = N*percentile/100 + 0.5

    if idx.is_integer():
        real_idx = int(idx-1)
        return data[real_idx]
    else:
        k = int(idx)
        f = idx - k
        real_idx_1 = k - 1
        real_idx_2 = k 
        return (1-f)*data[real_idx_1] + f*data[real_idx_2]
    
def read_data(filename):
    numbers = []
    with open(filename) as f:
        for line in f:
            try:
                numbers.append(float(line))
            except:
                continue
    return numbers

if __name__ == '__main__':
    filename = 'mydata.txt'
    percentile = 50
    numbers = read_data(filename)
    percentile_score = find_percentile_score(numbers, percentile)
    if percentile_score:
        print('The score at {0} percentile: {1}'.format(percentile, percentile_score))
    else:
        print('Could not find the score corresponding to {0} percentile'.format(percentile))
