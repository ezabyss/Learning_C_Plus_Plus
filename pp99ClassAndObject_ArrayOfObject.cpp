//WAP to define a class named Employee with its data members ID, Name & Salary. Read Records of five Employees and display the records in tabular form.

#include <iostream>
#include <iomanip>

using namespace std;
class Employee
{
    int ID;
    char Name[20];
    float Salary;
public:
    void ReadData()
    {
        cout<<"\n ID     : ";
        cin >> ID;
        cout<<"\n Name   : ";
        cin >> Name;
        cout<<"\n Salary : ";
        cin >> Salary;
    }
    void Display()
    {
        cout<<endl<<setw(10)<<ID<<setw(10)<<Name<<setw(10)<<Salary;
    }
};
int main()
{
    Employee E[5];

    for(int i =0;i<5;i++)
    {
        cout<<"\n Enter Employee "<<i+1<<" Detail : ";
        E[i].ReadData();
    }
    cout<<"\n"<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Salary";
    for(int i =0;i<5;i++)
    {
        E[i].Display();
    }

    return 0;
}

/*
    cout<<setw(1)<<"abc"<<setw(1)<<"abc"<<endl;
    cout<<setw(2)<<"abc"<<setw(2)<<"abc"<<endl;
    cout<<setw(3)<<"abc"<<setw(3)<<"abc"<<endl;
    cout<<setw(4)<<"abc"<<setw(4)<<"abc"<<endl;
    cout<<setw(5)<<"abc"<<setw(5)<<"abc"<<endl;
    cout<<setw(6)<<"abc"<<setw(6)<<"abc"<<endl;
    cout<<setw(7)<<"abc"<<setw(7)<<"abc"<<endl;
    cout<<setw(8)<<"abc"<<setw(8)<<"abc"<<endl;
*/
