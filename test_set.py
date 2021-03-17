
num1 = {1,2,4,4,3,5,0}
num2 = [2,3,3,3,4,5,6,6,7,0]
print('type(num) = ',type(num1),'\nnum = :',num1)
print('num2 = ',num2)
temp = set(num2)
print('type(temp) = ',type(temp),'\ntemp = ',temp)
num1.add(9)
print('num1 = ',num1)
num1.remove(5)
print('num1 = ',num1)

num3 = frozenset([1,2,3,4,5])
print('num3 = ',num3)
# num3.add(5)