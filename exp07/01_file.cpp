#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    // create and open a text file
    ofstream MyFile("filename.txt");

    // write into the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // close the file
    MyFile.close();


    return 0;
}