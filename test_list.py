

mix=[1,'apple',3.14,[1,2,3]]
print(mix)

mix.append('car')
print(mix)

mix.extend(['bus',4])
print(mix)

# mix.append(['bus',3])
# print(mix)

mix.insert(1,'dog')
print(mix)

print(mix[1])

temp=mix.index('dog')
print(temp)

mix.remove('dog')
print(mix)


del mix[6]
print(mix)

temp=mix.pop()
print(temp)
print(mix)

print(mix[1:4])
print(mix[:])