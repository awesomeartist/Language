#   Caculate 2^n
def recursion(n):
        if n > 1:
            return 2 * recursion(n - 1) 
        else:
            return 2

def factorial(n):
    if n > 1:
        return n * factorial(n - 1)
    else:
        return 1

def Fibonacii(n):
    if n < 1:
        print('input invalid!')
        return -1
    elif n < 3:
        return 1
    elif n > 2:
        return Fibonacii(n-1) + Fibonacii(n-2)

def fibonacii(n):
    m = 2
    num1 = 1
    num2 = 1
    if n < 1:
        print('input invalid!')
        return -1
    elif n < 3:
        Sum = 1
    elif n > 2:
        while m < n:
            Sum = num1 + num2
            num1 = num2
            num2 = Sum
            m += 1
    return Sum

def Hanoi(n,x,y,z):

    if n == 1:
        print(x,'->',z)
    else:
        Hanoi(n-1,x ,z ,y)
        print(x,'->',z)
        Hanoi(n-1,y ,x ,z)



num1 = 5
num2 = 12
print('2 ^ %d =' % 5,recursion(num1))
print('%d ! = ' % 5,factorial(num1))
print('Fibonacii %d' % 10 ,Fibonacii(num2))
print('fibonacii %d' % 10 ,fibonacii(num2))

x = 'A'
y = 'B'
z = 'Z'
Hanoi(10, x, y, z)
