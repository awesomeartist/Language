
import os
import shutil


def FileScreen(path_src, path_dst):
    try:
        os.chdir(path_src)  # 切换目录
        print("working directory : ", os.getcwd())
    except:
        return

    for dir in os.listdir(os.curdir):
        if os.path.isdir(os.path.join(path_src, dir)): # isdir() 在判定前会检查是否存在，直接判断 dir 容易判定错误
            print("change working directory.")
            path = os.path.join(path_src, dir)
            FileScreen(path, path_dst)
            
        if dir.split('.')[-1] == 'pdf':
            print("filename end with pdf : ", dir)
            filename_src = os.path.join(path_src, dir)
            filename_dst = os.path.join(path_dst, dir)
            shutil.copyfile(filename_src, filename_dst)


if __name__ == "__main__":

    print("查找并集中 PDF 文件")
    path_src = r'D:\\Download\\2023全年合集'     # 原始文件路径
    path_dst = r'C:\\Users\\liang\\Desktop'     # 目标文件路径

    FileScreen(path_src, path_dst)

    print("mission completed!")