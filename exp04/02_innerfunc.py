
def FunX(x):
    def FunY(y):
        return x*y
    return FunY

def fun1():
    x=5
    def fun2():
        x*=x
        return x
    return fun2()

def Fun1():
    x=5
    def Fun2():
        nonlocal x
        x*=x
        return x
    return Fun2()


print(FunX(5)(8))
#print(fun1())
print(Fun1())