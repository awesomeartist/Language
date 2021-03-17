dict1 = {}
dict1 = dict1.fromkeys((1,2,3))
print(dict1)
dict1 = dict1.fromkeys((1,2,3),'number')
print(dict1)
dict1 = dict1.fromkeys((1,2,3),('one','two','three'))
print(dict1)
dict1 = dict1.fromkeys((1,2),'figure')
print(dict1)

dict2 = {}
dict2 = dict2.fromkeys(range(32),'zan')
for eachKey in dict2.keys():
    print(eachKey)
for eachValue in dict2.values():
    print(eachValue)
for eachItem in dict2.items():
    print(eachItem)


print(dict2.get(32))
#print(dict2[32])
print(dict2.get(32,'nothing'))
print(dict2.get(21,'nothing'))


dict3 = {'name':'liang'}
dict4 = dict3
print('dict3 = ',dict3)
print('dict4 = ',dict4)
dict3 = {}
print('dict3 = ',dict3)
print('dict4 = ',dict4)
dict3 = dict4
dict4.clear()
print('dict3 = ',dict3)
print('dict4 = ',dict4)

dict5 = {1:'one',2:'two',3:'three'}
dict6 = dict5
dict7 = dict5.copy()
print('dict5_ID:',id(dict5),'\ndict5_ID:',id(dict6),'\ndict7_ID:',id(dict7))
dict7[4] = 'four'
print('dict5 = ',dict5,'\ndict6 = ',dict6,'\ndict7 = ',dict7)
print(dict7.pop(2))
print(dict7.popitem())
dict7.setdefault(5,'five')
print('dict7 = ',dict7)
dict7.setdefault(6)
print('dict7 = ',dict7)
dict8 = {1:'first'}
dict7.update(dict8)
print('dict7 = ',dict7)


