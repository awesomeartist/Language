import os 
import pandas as pd


"""
此脚本用于给已排好顺序的文件重新按照列表名单命名
例如：
	获得编号为01-99的照片，同时有对应的与内容相关的名单
	先得到原照片名列表以及新名字的列表
	最后将照片按照新名字列表重新命名
"""


def rename0(path_src, path_dst, name_file):

	#读取文本格式(*.txt)的名单
	# with open(name_file, encoding='utf-8') as f:
	# name_list = f.read().splitlines()

	#读取表格格式(*.xls,*.xlsx)的名单
	df = pd.read_excel(name_file, header=None)
	name_list = df.iloc[:, 0]
	

	for name_src, name_dst in zip(os.listdir(path_src), name_list):

		file_src = os.path.join(path_src, name_src)	
		if os.path.isdir(file_src):
			continue

		#将图片名切片,比如 xxx.bmp 切成xxx和.bmp
		filetype = os.path.splitext(file_src)[-1]
		name_dst = name_dst + filetype
		file_dst = os.path.join(path_dst, name_dst)
		os.rename(file_src, file_dst)

if __name__ == "__main__":
	# 原始文件路径
	path_src = 'C:/Users/liang/Desktop/Wallpaper'
	# 保存目标文件路径
	path_dst = 'C:/Users/liang/Desktop/dst'
	# 新名单文件路径
	name_file = "C:/Users/liang/Desktop/list.xlsx"
	rename0(path_src, path_dst, name_file)
	print("mission complete!")