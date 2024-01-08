import os
num = 1
# 文件名前缀
pre = 'AW_'
dir_path = 'C:\\Users\\liang\\Documents\\Workspace\\MyData\\我的图片\\look\\AW'
filelist =  os.listdir(dir_path)
for f in filelist:
    olddir = os.path.join(dir_path, f)
    strnum = str(num)
    newname  = pre + strnum.zfill(3) + '.jpg'
    newdir = os.path.join(dir_path, newname)
    os.rename(olddir, newdir)
    num += 1