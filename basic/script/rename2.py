import os

# 文件位置
path = "C:\\Users\\liang\\Documents\\Workspace\\MyData\\我的图片\\look"
dirs = os.listdir(path)
for dir in dirs:
    dir_path = path + '/' + dir
    for file in dir_path: 
        # 起始文件名编号
        num = 1
        # 文件名前缀
        pre = dir
        filelist =  os.listdir(dir_path)
        for f in filelist:
            olddir = os.path.join(dir_path, f)
            strnum = str(num)
            newname  = dir + '_'+strnum.zfill(3) + '.jpg'
            newdir = os.path.join(dir_path, newname)
            os.rename(olddir, newdir)
            num += 1
    
