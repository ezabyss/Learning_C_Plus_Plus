/*
When an object expires, the program first calls destructor in derived class, if any, and then destructor in base class. It is the same way as second floor destroyed before first i.e in reverse order of constructor. The destructor start at the most derived class and works its way down to base class. This is not only logical, but also safe. This can be
*/
//WAP to show execution order of Destructor in child and base class in inheritance.

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;


//MyWay
/*
class Person
{
protected:
    char name[20];
    int age;
public:
    Person()
    {
        //cout<<"\n I'm from empty constructor at class  Person. ";
        strcpy(name,"");
        age =0;
    }
    Person(char nm[], int ag)
    {
        cout<<"\n I'm from constructor in Person "<<endl;
        strcpy(name,nm);
        age = ag;
    }
    void DisplayPerson()
    {
        cout<<"\n Name : " << name;
        cout<<"\n Age  : " << age;
    }
};
class Employee: public Person
{
    char  post[20];
    float salary;
public:
    Employee()
    {
        //cout<<"\n I'm from Empty constructor from Employee ";
        strcpy(post," ");
        salary = 0;
    }
    Employee(char nm[],int ag,char pst[],float sal): Person(nm,ag)
    {
        cout<<"\n I'm from constructor Employee . ";
        strcpy(post,pst);
        salary = sal;
    }
    void DisplayEmployee()
    {
        cout<<"\n Post   : " << post;
        cout<<"\n Salary : " << salary;
    }
    ~Employee()
    {
        cout<<"\n I'm from Employees Destructor. \n ";
    }
};

class Student: public Person
{
    int roll;
    float marks;
public:
    Student()
    {
        roll = marks = 0;
    }
    Student(char nm[],int ag,int r, float m): Person(nm,ag)
    {
        roll = r;
        marks = m;
    }
    void DisplayStudent()
    {
        cout<<"\n Roll  : "<< roll;
        cout<<"\n Marks : "<< marks;
    }
    ~Student()
    {
        cout<<"\n I'm From Student Destructor. ";
    }
};

int main()
{


    char name[20], post[20];
    int age, roll;
    float salary,marks;

    cout<<"\n Enter Name   : ";
    cin >> name;
    cout<<"\n Enter Age    : ";
    cin >> age;
    cout<<"\n Enter roll   : ";
    cin >> roll;
    cout<<"\n Enter marks  : ";
    cin >> marks;
    Student s(name,age,roll,marks);
    s.DisplayPerson();
    s.DisplayStudent();

    _getch();
    //Employee e;
    cout<<"\n\n Employees Details : \n ";
    cout<<"\n Enter Name   : ";
    cin >> name;
    cout<<"\n Enter Age    : ";
    cin >> age;
    cout<<"\n Enter Post   : ";
    cin >> post;
    cout<<"\n Enter salary : ";
    cin >> salary;

    Employee e(name,age,post,salary);
    e.DisplayPerson();
    e.DisplayEmployee();

    return 0;
}

*/

class Person
{
protected:
    char name[20];
    int  age;
public:
    Person()
    {
        strcpy(name," ");

        age = 0;
    }
    Person(char nm[], int ag)
    {
        cout<<"\n I'm constructor from Person \n";
        strcpy(name, nm);
        age = ag;
    }
    void DisplayPerson()
    {
        cout<<"\n Name  : "<< name;
        cout<<"\n Age   : "<< age;
    }
    ~Person()
    {
        cout<<"\n I'm Destructor from Person. ";
    }

};
class Student: public Person
{
    int   roll;
    float marks;
public:
    Student()
    {
        roll = marks = 0;
    }
    Student(char nm[],int ag, int r, float m):Person(nm,ag)
    {
        cout<<"\n I'm constructor from Student. \n ";
        roll = r;
        marks =m;
        Person(nm,ag);
    }
    void DisplayStudent()
    {
        DisplayPerson();
        cout<<"\n Roll  : "<< roll;
        cout<<"\n Marks : "<< marks;
    }
    ~Student()
    {
        cout<<"\n I'm Destructor from Student. ";
    }
};

class Employee: public Person
{
    char  post[20];
    float salary;
public:
    Employee()
    {
        strcpy(post, " ");
        salary = 0;
    }
    Employee(char nm[], int ag, char pst[], float sal): Person(nm,ag)
    {
        cout<<"\n I'm constructor from Employee. \n";
        strcpy(post,pst);
        salary = sal;

    }
    void DisplayEmployee()
    {
        DisplayPerson();
        cout<<"\n Post  : "<< post;
        cout<<"\n Salary: "<< salary;
    }
    ~Employee()
    {
        cout<<"\n I'm Destructor from Employee. ";
    }

};

int main()
{
    Student  S("Obxk",21,1,99);
    Employee E("KoHoYo",21,"Artist",99000);


    cout<<"\n *************** Displaying Record. ******************* \n";
    cout<<"\n Student Details  : \n";
    S.DisplayStudent();

    cout<<"\n\n Employee Details : \n";

    E.DisplayEmployee(); //DisplayPerson() is inside it;

    cout<<"\n\n************************************************************* \n";


    return 0;
}
