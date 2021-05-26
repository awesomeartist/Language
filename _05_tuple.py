

tuple1 = (1, 2, 3, 4, 5, 6, 7, 8, 9, 0,)
tuple2 = (1)
tuple3 = (1,)
tuple4 = 'a','b','c','d'
print('tuple1[2:7] =', tuple1[2:7])
print('Datatype of tuple1 is:', type(tuple1))
print('Datatype of tuple2 is:', type(tuple2))
print('Datatype of tuple3 is:', type(tuple3))
print('Datatype of tuple4 is:', type(tuple4))

print("\nTuple Methods")
print('tuple4 =', tuple4)
tuple4 = tuple4[:3] + ('e',) + tuple4[3:]
print('tuple4 =', tuple4)
