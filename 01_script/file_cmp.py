from filecmp import dircmp

def print_diff_files(dcmp):
    for name in dcmp.diff_files:
        print("diff_file %s found in %s and %s" % (name, dcmp.left,
              dcmp.right))

    for sub_dcmp in dcmp.subdirs.values():
        print_diff_files(sub_dcmp)

if __name__ == "__main__":
    dir1 = "D:/MySpace/Collection/Music/mylist/zh"
    dir2 = "D:/MySpace/Collection/Music/mylist/nz"
    dcmp = dircmp(dir1, dir2) 
    print_diff_files(dcmp)