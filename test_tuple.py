

tuple1 = (1,2,3,4,5,6,7,8,9,0)
tuple2 = (1)
tuple3 = (1,)
tuple4 = 'a','b','c','d'
print(tuple1[2:7])
print(type(tuple1))
print(type(tuple2))
print(type(tuple3))
print(type(tuple4))

print("\nTuple Methods")
print(tuple4)
tuple4 = tuple4[:3] + ('e',) + tuple4[3:]
print(tuple4)
