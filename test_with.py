try:
    with open('test_file.txt', 'wb') as f:
        for each_line in f:
            print(each_line)

except OSError as reason:
    print('文件出错啦T_T' + str(reason))
# finally:
#     f.close()