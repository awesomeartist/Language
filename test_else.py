
def showMaxFactor(num):
    count = num // 2
    while count > 1:
        if num % count == 0:
            print('The MaxFactor of %d is:  %d' %(num, count))
            break
        count-=1
    else:
        print('%d is a prime number!' % num)

num = int(input('Please input a number: '))

showMaxFactor(num)


# try:
#     int('abc')
# except ValueError as reason:
#     print('出错啦T_T:' + str(reason))
# else:
#     print('没有任何异常！')