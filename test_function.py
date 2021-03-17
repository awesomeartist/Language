def MyFirstFunction():
    print('This is my first function!')

def MySecondFunction(name):
    print(name + ' I LOVE YOU.')

def Sum(num1,num2):
    return num1+num2

def SaySome(name = 'xiang ',words = ' hello world!'):
    print(name + '->' + words)

def test(*params,exp=8):
    print('The length of this parameter is:', len(params),'\nexp = ',exp)
    print('The second parameter is:',params[1])

MyFirstFunction()
MySecondFunction('liang')
print(Sum(1,7))
SaySome()
SaySome('huang ')
SaySome('zhang ', ' happy new year!')
SaySome('liang ',' make the world better!')
SaySome(' make the world better!','liang ')
SaySome(words = ' make the world better!',name = ' liang')  #key words parameter
test(1,'abc')
test(1,'liang ',3,3,5,exp = 9)
