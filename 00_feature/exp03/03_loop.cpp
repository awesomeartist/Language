#include <iostream>

using namespace std;

int main(void)
{
    int count = 10;
    
    int i = count;
    while(i > 0)
        {    
            cout <<"count = " <<i <<endl;
            i--;
        }


    i = count;
    do{   
        cout << "count = " << i << endl;
        i--;

    }while(i > 0);

    i = count;
    for(; i>0; i--)
        {
            cout << "count = " << i << endl;
        }

    return 0;
}