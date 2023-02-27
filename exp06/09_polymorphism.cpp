#include <iostream>
using namespace std;


// 多态
class Animal{
    public:
    void animalSound(){
        cout <<"The animal make a sound.\n";
    }
};

class Pig : public Animal{
    public:
    void animalSound(){
        cout <<"The pig says: wee wee ...\n";
    }
};

class Dog : public Animal{
    public:
    void animalSound(){
        cout <<"The dog says: wow wow ...\n";
    }
};

int main(void)
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();


    return 0;
}
