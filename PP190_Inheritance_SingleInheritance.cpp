//Create a class named Person which has name & age as data members and appropriate function members to read and display its data. Create another class Employee derived from class Person to use features of base class.

#include <iostream>
using namespace std;
/*

//My Way
class Person
{
protected:
    int id;
    char name[20];
    int age;
public:
    void ReadData()
    {
        cout<<"\n Enter Id : ";
        cin >> id;
        cout<<"\n Enter Employee name: ";
        cin >> name;
        cout<<"\n Enter Age: ";
        cin >> age;
    }
    void Display()
    {
        cout<<"\n ID : "<< id;
        cout<<"\n Name : " << name;
        cout<<"\n Age : "<< age;
    }
};
class Employee: public Person
{
private:
    char Post[20];
    float Salary;
public:
    void ReadEmployeeData()
    {
        ReadData();
        cout<<"\n Enter Post : ";
        cin >> Post;
        cout<<"\n Enter Salary ; ";
        cin >> Salary;
    }
    void DisplayEmployee()
    {
        Display();
        cout<<"\n Post : "<< Post;
        cout<<"\n Salary : "<< Salary;
    }
};

int main()
{
    Employee E;
    E.ReadEmployeeData();

    cout<<"\n\n Details of the Employees are: ";

    E.DisplayEmployee();

    return 0;

}
*/
//Book
class Person
{
protected:
    char name[20];
    int age;
public:
    void ReadPersonData()
    {
        cout <<" Enter Name : ";
        cin >> name;
        cout<<" Enter Age : " ;
        cin >> age;
    }
    void DisplayPersonData()
    {
        cout<<"\n Name : "<< name;
        cout<<"\n Age : "<< age;
    }
};

class Employee: public Person
{
private:
    float Salary;
    char Designation[20];
public:
    void ReadEmployeeData()
    {
        ReadPersonData();
        cout<<"\n Enter Salary : ";
        cin >> Salary;
        cout<<"\n Enter Designation : ";
        cin >> Designation;
    }
    void DisplayEmployeeData()
    {
        DisplayPersonData();
        cout<<"\n Designation : "<< Designation;
        cout<<"\n Salary : "<< Salary;
    }

};

int main()
{
    Employee E;
    E.ReadEmployeeData();
    E.DisplayEmployeeData();

    return 0;
}
