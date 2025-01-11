#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main()
{
    fs::path path = fs::current_path();
    cout << fs::create_directories(path / "aaa/bbb/ccc");
    fs::copy(path / "01_file.cpp", path / "aaa/bbb/ccc/01.cpp");

    return 0;
}