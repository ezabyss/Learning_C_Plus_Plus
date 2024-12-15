//WAP to illustrate Hierarchical Inhertance
#include <iostream>
using namespace std;
//Person-> Student, Person-> Employee

//Book
class Person
{

protected:
    char name[20];
    int age;
public:
    void GetPerson()
    {
        cout<< "\n Enter Name : ";
        cin >> name;
        cout<<"\n Enter Age: ";
        cin >> age;
    }
    void DisplayPerson()
    {
        cout<<"\n Name : "<< name;
        cout<<"\n Age : "<< age;
    }
};

class Student: public Person
{
  int roll;
  float marks;
  public:
      void GetStudent()
      {
          cout<<" Enter Roll : ";
          cin >> roll;
          cout<<" Enter Marks : ";
          cin >> marks;
      }
      void DisplayStudent()
      {
          cout<<" Roll : " << roll;
          cout<<" Marks : " << marks;
      }
};

class Employee: public Person
{
    char designation[20];
    float salary;
public:
    void GetEmployee()
    {
        cout<<" \n Enter Designation : ";
        cin >> designation;
        cout<<" \n Salary : ";
        cin >> salary;
    }
    void DisplayEmployee()
    {
        cout<<" Designation : "<< designation;
        cout<<" Salary : " << salary ;
    }
};
int main()
{
    Student S1;
    S1.GetPerson();
    S1.GetStudent(); // mailey yesko vitra nai GetPerson Rakheko thiye;

    Employee E1;
    E1.GetPerson();
    E1.GetEmployee();

    cout<<"\n ************************* Displaying Record ******* "<< endl;
    cout<<"\n The Record of student....... "<<endl;
    S1.DisplayPerson();
    S1.DisplayStudent();

    cout<<"\n The Record of Employee........... "<<endl;
    E1.DisplayPerson();
    E1.DisplayEmployee();



    return 0;
}

//Me
/*
class Person
{
protected:
    char name[20];
    int age;
public:
    void ReadPerson()
    {
        cout<<"\n Enter Name : ";
        cin >> name;
        cout<<"\n Enter Age : ";
        cin >> age;
    }
    void DisplayPerson()
    {
        cout<<"\n Name : "<< name;
        cout<<"\n Age : "<< age;
    }
};
class Student: public Person
{
    int roll;
    int grade;
    float marks;
public:
    void ReadStudent()
    {
        ReadPerson();
        cout<<"\n Enter Roll: ";
        cin >> roll;
        cout<<"\n Enter Grade: ";
        cin >> grade;
        cout<<"\n Enter Marks : ";
        cin >> marks;
    }
    void DisplayStudent()
    {
        DisplayPerson();
        cout<<"\n Roll : "<< roll;
        cout<<"\n Grade : "<< grade;
        cout<<"\n Marks : "<< marks;
    }
};
class Employee: public Person
{
  int eid;
  char post[20];
  float salary;
  public:
      void ReadEmployee()
      {
          ReadPerson();
          cout<<"\n Enter Employee ID : ";
          cin >> eid;
          cout<<"\n Enter Post : ";
          cin >> post;
          cout<<"\n Enter Salary : ";
          cin>> salary;
      }
      void DisplayEmployee()
      {
          DisplayPerson();
          cout<<"\n Employee Id : " <<eid;
          cout<<"\n Post : " << post;
          cout<<"\n Salary : " << salary;
      }
};

int main()
{
    Student S;
    Employee E;
    int key;
    cout<<"\n Enter \n 1. To Add Student.\n 2. to Add Employee. \n";
    cin >> key;

    if(key ==1)
    {

        cout<<"\n Enter Student Detail : ";
        S.ReadStudent();
        cout<<"\n The Detail of Student is : ";
        S.DisplayStudent();
    }
    else if(key == 2)
    {
        cout<<"\n Enter Employee Detail : ";
        E.ReadEmployee();
        cout<<"\n The Detail of Employee is: ";
        E.DisplayEmployee();
    }
    else
    {
        cout<<"\n Invalid Key. ";
    }


    return 0;
}
*/
