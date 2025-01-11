#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main()
{
    fs::path path = fs::current_path();
    // fs::directory_iterator di(path);
    fs::recursive_directory_iterator di(path);

    // 1)
#if false

    for (const fs::directory_entry &entry : di)
    {
        cout << boolalpha;
        // cout << entry.exists() << " : " << entry.path() << endl;
        // cout << entry.is_directory() << " : " << entry.path() << endl;
        // cout << entry.is_regular_file() << " : " << entry.path() << endl;

        if (entry.path().string().ends_with("cpp"))
        {
            cout << entry.file_size() << " : " << entry.path() << endl;
        }
        
    }
#endif

    // 2)
#if true

    for (auto it  = begin(di); it != end(di); it++)
    {
        cout << it->path() << endl;
    }

#endif

    return 0;
}