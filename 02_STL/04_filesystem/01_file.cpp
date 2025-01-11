#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
    string win_path_str = "D:\\WorkSpace\\Space-for-Code\\CPP\\Basic\\02_STL\\04_filesystem";
    string unix_path_str = "D:/WorkSpace/Space-for-Code/CPP/Basic/02_STL/04_filesystem";
    fs::path path = unix_path_str;
    fs::path path1 = win_path_str;
    fs::path path2 = fs::current_path();
    

    // 1)
#if false    

    path1.append("aaa").append("bbb");
    path1 /= "ccc";
    cout << path1 << endl;

    path2 += "/aaa";
    path2.concat("/bbb/ccc").make_preferred();
    cout << path2 << endl;

#endif

    // 2)
#if true

    // path1.remove_filename();
    // path1.replace_filename("aaa");
    path1.replace_extension("aaa");

    cout << path1 << endl;
    cout << path2 << endl;

#endif

    // 3)
#if true

    cout << path1.root_directory() << endl;
    cout << path1.root_name() << endl;
    cout << path1.root_path() << endl;
    cout << path1.relative_path() << endl;
    cout << path1.filename() << endl;
    cout << path1.stem() << endl;
    cout << path1.extension() << endl;
    cout << path1.empty() << endl;

#endif

    return 0;
}