#include <iostream>
using namespace std;

// Basic class
class Employee{
    protected:
        int salary;
};

class Programer:public Employee{
    public:
        int bonus;
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};

int main(void)
{
    Programer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 10000;

    cout <<"Salary : " <<myObj.getSalary() <<endl;
    cout <<"Bonus : " <<myObj.bonus <<endl;


    return 0;
}
