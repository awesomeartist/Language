
list1 = [123]
list2 = [234]
print(list1 > list2)


list1 = [123,234]
list2 = [234,345]
list3 = [234,345]
print(list2 == list3)       #compare all members

print((list1 < list2) and (list2 == list3))

list4 = list2 + list3
print(list4)

list4 .append(['apple','bus'])
print(list4)
print(33 not in list4)
print(234 not in list4)
print('bus'not in list4)
print(list4[4][1])


print("\nList Methods")
print(list4.count(234))
print(list4.index(345,2,4))
list4.reverse()
print(list4)

list5 = [3 ,55 ,9 ,45 ,22 ,90]
list5.sort()
print(list5)
list5.sort(reverse = True)
print(list5)

print("\nDiffer copy and '='")
list6 = list5
list7 = list5.copy()
list5.reverse()
print(list5)
print(list6)
print(list7)
