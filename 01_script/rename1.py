import os

# 文件名前缀
def rename1(path_dir, pre, start_num = 1):
    try:
        os.chdir(path_dir)  # 切换目录
        print("working directory : ", os.getcwd())
    except:
        return

    num = start_num
    for f in os.listdir(os.curdir):
        path_src = os.path.join(path_dir, f)
        if os.path.isdir(path_src):
            break
        strnum = str(num)
        newname  = pre + strnum.zfill(3) + '.' + f.split('.')[-1]
        print(newname)
        path_dst = os.path.join(path_dir, newname)
        os.rename(path_src, path_dst)
        num += 1

if __name__ == "__main__":
    root_dir = 'E:\\MediaSpace\\zPrivate\\album'

    # rename1(root_dir, 'AX_')
    
    for dir in os.listdir(root_dir):
        path_dir = os.path.join(root_dir, dir)
        rename1(path_dir, dir + '_')
    print("mission complete!")

