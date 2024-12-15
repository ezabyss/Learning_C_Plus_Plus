
//WAP to define a class named Employee with its data members ID, name and Salary. Read records of five employees and display the record in tabular form.

#include <iostream>
#include <iomanip>

using namespace std;
class Employee
{
private:
    int ID;
    char Name[15];
    float Salary;
public:
    void ReadData(int n)
    {
        cout<<endl<<"Employee "<<n <<endl;
        cout <<endl<< " Enter ID: ";
        cin >> ID;
        cout <<endl<<" Name: ";
        cin >> Name;
        cout <<endl<<" Salary : ";
        cin >> Salary;
    }
    void Display()
    {

        cout <<endl<<ID<<setw(10)<<Name<<setw(10)<<Salary<<endl;

    }
};

int main()
{
    Employee E[3];

    for(int i=0;i<3;i++)
    {
        E[i].ReadData(i+1);
    }

    cout<<endl<<"****** Records Of Employee ***********"<<endl;
    cout<<"Id"<<setw(10)<<"Name"<<setw(10)<<"Salary";
    cout<<endl<<"----------------------------------------"<<endl;
    for(int i=0;i<3;i++)
        E[i].Display();



    return 0;
}
