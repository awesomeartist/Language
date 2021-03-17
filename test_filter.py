
def odd(x):
    return x % 2
temp = range(10)
show = filter(odd,temp)
print(list(show))

print(list(filter(lambda x : x % 2,range(10))))