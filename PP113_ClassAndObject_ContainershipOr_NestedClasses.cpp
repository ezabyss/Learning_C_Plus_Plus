//Define a class Birthday with members: day, month & year. Use object of this class as member of another class Employee to read & display name and data of birth of an employee.

#include <iostream>
using namespace std;

//My Way
/*
class Birthday
{
    int Day;
    int Month;
    int Year;
public:
    void GetDate()
    {
        cout<<"\n Enter Year  : ";
        cin >>Year;
        cout<<"\n Enter Month : ";
        cin >> Month;
        cout<<"\n Enter Day   : ";
        cin >> Day;
    }
    void DisplayDate()
    {
        cout<<"\n DOB    : "<< Month <<"/"<<Day <<"/"<<Year;
    }

};
class Employee
{
    Birthday B;
    char name[20];
    int  age;
    float salary;
public:
    void GetEmployee()
    {
        cout<<"\n Enter BirthDates : ";
        B.GetDate();
        cout<<"\n Enter Name : ";
        cin >> name;
        cout<<"\n Age        : ";
        cin >> age;
        cout<<"\n Salary     : ";
        cin >> salary;
    }
    void DisplayEmployee()
    {
        cout<<"\n Detail of Employee : ";
        B.DisplayDate();
        cout<<"\n Name   : "<< name;
        cout<<"\n Age    : "<< age ;
        cout<<"\n Salary : "<< salary;
    }

};
int main()
{
    Employee E;
    E.GetEmployee();
    E.DisplayEmployee();
    return 0;
}
*/
//Book Way
class Birthday
{
    int day;
    int month;
    int year;
public:
    void GetBirthday();
    void DisplayBirthday();
};

void Birthday :: GetBirthday()
{
    cout<<"\n Enter Day : ";
    cin >>day;
    cout<<"\n Enter Month : ";
    cin >> month;
    cout<<"\n Enter Year : ";
    cin >> year;
}
void Birthday :: DisplayBirthday()
{
    cout<< day << " \ ";
    cout<< month << "\ ";
    cout<< year ;
}
class Employee
{
    char name[20];
    Birthday dob;
public:
    void GetPerson();
    void DisplayPerson();
};
void Employee :: DisplayPerson()
{
    cout<<endl<< " _________________ "<<endl;
    cout<< " Name  : "<< name <<endl;
    cout<< " DOB   : ";
    dob.DisplayBirthday();
}
int main()
{
    Employee emp;
    cout<<"\n Enter Information of an Employee : "<<endl;
    emp.GetPerson();
    cout<<"\n Your Entered Information  :  "<<endl;
    emp.DisplayPerson();
    return 0;
}
