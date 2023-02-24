import os 
import xdrlib


"""
此脚本用于给已排好顺序的文件重新按照列表名单命名
例如：
	获得编号为01-99的照片，同时有对应的与内容相关的名单
	先得到原照片名列表以及新名字的列表
	最后将照片按照新名字列表重新命名
"""


#新名单文件路径
path_list = "C:/Users/liang/Desktop/list3.txt"

#原始图片路径
path_photos = 'C:/Users/liang/Desktop/list3'

#读取文本格式(*.txt)的名单
with open(path_list, encoding='utf-8') as f:
	lines = f.read().splitlines()

#读取表格格式(*.xls,*.xlsx)的名单


#获取该路径下所有图片
filelist = os.listdir(path_photos)

for files, Newname in zip(filelist, lines):
	#原始路径 
	Olddir = os.path.join(path_photos,files)
		
	#if os.path.isdir(Olddir):
	#	continue
	#将图片名切片,比如 xxx.bmp 切成xxx和.bmp
	#xxx
	#filename = os.path.splitext(files)[0]
	#.bmp
	filetype = os.path.splitext(files)[1]
	Newname = Newname + filetype
	Newdir=os.path.join(path_photos,str(Newname))
	os.rename(Olddir,Newdir)
