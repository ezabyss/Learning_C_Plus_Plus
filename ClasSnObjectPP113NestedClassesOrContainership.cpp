/*
Containership is technique in which one class contains object of another class as member data. The class which contains the object cannot access any protected or private member of the contained class. The relationship between the container and the contained object is "Hs-a" instead of"is-a".
*/
//Define a class Birthday with members : day, month &year. Use object of this class as member of another class Employee to read & display name and date of birth of an employee.
#include <iostream>
using namespace std;

class Birthday
{
private:
    int year;
    int month;
    int day;
public:
    void GetBirthday()
    {
        cout <<" \nEnter Year: ";
        cin >> year;
        cout <<" \n Enter month: ";
        cin >> month;
        cout <<"\n Enter Day: ";
        cin >> day;
    }

    void DisplayBirthday()
    {
        cout << day <<"/";
        cout << month <<"/";
        cout << year <<endl;
    }
};
class Employee
{
private:
    char Name[15];
    Birthday DOB;
    char ID;
public:
    void GetPerson();
    void DisplayPerson();
};

void Employee:: GetPerson()
{
    cout <<" Enter Name: ";
    cin >> Name;
    cout << "Enter Date of Birth: "<<endl;
    DOB.GetBirthday();
}
void Employee::DisplayPerson()
{
    cout<<endl<<"_________________________________________________"<< endl;
    cout <<" Name : "<< Name<<endl;
    cout <<" Date Of Birth : ";
    DOB.DisplayBirthday();
}


int main()
{
    Employee emp;
    cout<<"Enter Information of an employee: "<<endl;
    emp.GetPerson();
    cout<<" Your Entered Information : "<<endl;
    emp.DisplayPerson();


    return 0;
}
//In this example, there are two classes: Birthday and Employee. within definition of class Employee, there is object of Birthday as member of class Employee . So, class Employee caontain object of class Birthday(i.e dob);
