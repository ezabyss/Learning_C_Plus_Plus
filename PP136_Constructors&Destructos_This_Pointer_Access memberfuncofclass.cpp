//WAP to use 'this' pointer to access data member in member function of a class

#include <iostream>
using namespace std;
class Employee
{
private:
    double salary;
public:
    void getsalary(double salary)
    {
        this->salary = salary;
    }
    void display()
    {
        cout<<"\n The salary : "<< salary;
    }
};
int main()
{
    Employee programmer;
    Employee manager;
    manager.getsalary(60000.0);
    programmer.getsalary(3000.0);
    programmer.display();
    manager.d3isplay();
    return 0;

}
