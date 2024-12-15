
//WAP to use 'this pointer' in member function of a class

#include<iostream>

using namespace std;

//without using 'this' pointer
/*
class Employee
{
private:
    float salary;
public:
    void GetSalary(double sal)
    {
        salary = sal;
    }
    void Display()
    {
        cout << "\n The salary: "<<salary;
    }
};

int main()
{
    Employee programmer;
    Employee manager;
    manager.GetSalary(6000.0);
    programmer.GetSalary(333333);
    manager.Display();
    programmer.Display();

    return 0;
}
*/
//Using 'this' pointer

class Employee
{
private:
    float Salary;
public:
    void ReadSalary(float Salary)
    {
        this->Salary = Salary;
    }
    void Display()
    {
        cout<<"\n The Salary:"<<Salary;

    }
};


int main()
{
    Employee Programmer;
    Employee Manager;

    Programmer.ReadSalary(50000);
    Manager.ReadSalary(10000);

    Programmer.Display();
    Manager.Display();

    return 0;
}


/*
In this example, there are two objects of Employee class. so, each object has its own copy of data member (i.e. data member salary of programmer object allocates memory address different than memroy address allocated by data member salary of manager object). But each object(i.e. programmer and manager) shares single version of member function GetSalary() and Display();

When GetSalary(6000.0) function is called by manager object, the member function GetSalary() assign value 6000.0 to salary data member of programmer object.similarly, when getSalary(33333) function is called programmer object, the member function GetSalary() assign value 33333 to salary data member of programmer object.

Thus we can replace the statement :

Salary = sal; in GetSalary() function by
this -> Salary = sal;

it means that it assigns value(i.e sal) to salary data member of current object.
thus, when manager object calls member function, 'this' means manager object and when programmer object calls it, 'this' means programmer object.

Similarly, the member function Display() displays correct version of salary data member of calling object the member function knows correct version of data member by using implicit parameter i.e. 'this' pointer.

//characteristics of 'this ' pointer;
 a) this pointer stores the address of invoking object of the class.
 b) this pointers are not accessible for static member functions;
 c) this pointers are not modifiable.

 Uses:
  a) to specify memory address of an object
  b) to access data members
  c) to return objects

  When name of data members of a class and name of local variables (i.e name of arguments) in constructor or other normal member function is same, the use of this pointer is mandatory to differentiate data members from arguments, otherwise its use is optional.
*/

