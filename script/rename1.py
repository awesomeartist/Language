import os

# 文件位置
photopath = "C:/Users/liang/Desktop/0"

# 起始文件名编号
num = 106
# 文件名前缀
name = 'M'
filelist =  os.listdir(photopath)

for f in filelist:
    olddir = os.path.join(photopath,f)
    strnum = str(num)
    newname  = name + strnum.zfill(3) +'.webp'
    newdir = os.path.join(photopath,newname)
    os.rename(olddir,newdir)
    num+=1
    
