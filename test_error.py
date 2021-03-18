# try:
#     # int('abc')
#     sun = 1+'1'
#     f = open('这是一个文件.txt')
#     print(f.read())
#     f.close()

# except OSError as reason:
#         print('文件出错啦T_T\n错误的原因是：' + str(reason))
# except TypeError as reason:
#         print('文件出错啦T_T\n错误的原因是：' + str(reason))


try:
    f = open('test_file.txt', 'wb')
    print(f.write('This is a test file.'))
    sum = 1 + '1'
    # f.close()
except (OSError,TypeError):
    print('文件出错啦T_T')
finally:
    f.close()

            