import os

root_path = r'D:\\Download\\2023全年合集\\2023上半年合集'     #原始文件路径
path_new = r'D:\\Download\\2023全年合集\\'   #目标文件路径
list_name = os.listdir(root_path)
print(list_name)
print(len(list_name))

for dir in os.listdir(root_path):
    path = os.path.join(root_path,dir)
    for f in os.listdir(path):
        filename = os.path.join(path, f)
        if f.split(".")[-1] == "pdf":
            new_filename = path_new + dir + '.pdf'
            os.rename(filename, new_filename)
print("done")

