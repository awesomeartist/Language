'''
	author:daihui
'''
import os
 
def finddir(startdir, target):
    try:
        os.chdir(startdir)  #切换目录
    except:
        return
    for new_dir in os.listdir(os.curdir):   #列表出该目录下的所有文件(返回当前目录'.')
        print(new_dir)
        if new_dir == target :
            print("当当当 找到啦！！！！！！！！！")
            print (os.getcwd() + os.sep + new_dir)
            exit()
        if os.path.isdir(new_dir) :  #判断路径是否存在
            finddir(new_dir, target)
            os.chdir(os.pardir)   #切换到当前目录的父目录

if __name__ == '__main__':
    # startdir = str(input('Please input startdir: '))
    # target = str(input('Please input target: '))
    lis = ['d:','e:','f:','g']  #更具具体需要，你可以在这里修改查找的目录
    target = r'要查找的文件名'
    for i in lis:
        startdir = i
        finddir(startdir, target)