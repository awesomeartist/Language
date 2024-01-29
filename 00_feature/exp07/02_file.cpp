#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(void)
{   
    // create a tex string, which is used to output the text file
    string MyText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file lien by line
    while(getline(MyReadFile, MyText))
        {
            // output the text from the file
            cout << MyText;
        }

    // close the file
    MyReadFile.close();

    return 0;
}