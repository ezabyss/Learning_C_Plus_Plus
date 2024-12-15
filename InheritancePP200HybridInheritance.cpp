//WAP as your choice to use Hybrid Inheritance.

#include <iostream>
using namespace std;

class Person
{
protected:
    char name[20];
    int age;
public:
    void GetPerson()
    {
        cout<<"\n Enter Name: ";
        cin >> name;
        cout<<"\n Enter Age : ";
        cin >> age;
    }
    void DisplayPerson()
    {
        cout<<"\n Name : "<< name;
        cout<<"\n Age  : "<< age;
    }
};

class Student: public Person
{
    int roll;
public:
    void GetStudent()
    {
        cout<<"\n Enter Roll : ";
        cin >> roll;
    }
    void DisplayStudent()
    {
        cout<< " Roll " << roll << endl;
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
        cout<<" \n Enter Salary : ";
        cin >> salary;
    }
    void DisplayEmployee()
    {
        cout<<" \n Designation : "<< designation;
        cout<<" \n Salary      : "<< salary;
    }
};
class Examination:public Student
{
protected:
    float Theory_Marks, Lab_Marks;
public:
    void GetMarks()
    {
        cout<<"\n Enter Theory Marks : ";
        cin >> Theory_Marks;
        cout<<"\n Enter Lab Marks    : ";
        cin >> Lab_Marks;
    }
    void DisplayMarks()
    {
        cout<<" \n Theory Marks : "<< Theory_Marks ;
        cout<<" \n Lab Marks    : "<< Lab_Marks;
    }
};

class Result : public Examination
{
private:
    float total_marks;
public:
    void CalculateTotalMarks()
    {
        total_marks = Theory_Marks + Lab_Marks;
    }
    void DisplayResult()
    {
        cout<<"\n Total Marks : "<< total_marks;
        if(total_marks < 32)
            cout<<"\n Congratulation!~ You've Passed "<<endl;
        else
            cout<<"\n\t Sorry!~ You've Failed . "<< endl;
    }
};

int main()
{
    Result R;
    cout<<"\n\t\t Reading Students Detail: ";
    R.GetPerson();
    R.GetStudent();
    R.GetMarks();

    cout<<"\n\t\t Reading Information of Employee... ";
    Employee emp;
    emp.GetPerson();
    emp.GetEmployee();

    cout<<"\n *************** Displaying Records ************** \n ";
    cout<<" The Record of Student................"<<endl;
    R.DisplayPerson();
    R.DisplayStudent();
    R.DisplayMarks();
    R.DisplayMarks();
    R. DisplayResult();

    cout<<" ************************** *****************"<< endl;
    cout<<" The record of Employee............."<<endl;
    emp.DisplayPerson();
    emp.DisplayEmployee();

    return 0;

}
//My-way
/*
class Person
{
protected:
    char name[20];
    int age;
public:
    void GetPerson()
    {
        cout<<"\n Enter Name: ";
        cin >> name;
        cout<<"\n Enter Age: ";
        cin >> age;
    }
    void DisplayPerson()
    {
        cout<<"\n Name: " << name;
        cout<<"\n Age : " << age;
    }
};
class Student: public Person
{
protected:
    int id;
    char grade[10];
public:
    void GetStudent()
    {
        GetPerson();
        cout<<"\n Enter Id : ";
        cin >> id;
        cout<<"\n Enter Grade : ";
        cin >> grade;
    }
    void DisplayStudent()
    {
        DisplayPerson();
        cout<<"\n Id : "<< id;
        cout<<"\n Grade : "<< grade;
    }
};

class Examination: public Student
{
protected:
    float pmarks;
    float tmarks;
public:
    void GetMarks()
    {
        cout<<"\n Enter Theory Marks : ";
        cin >> tmarks;
        cout<<"\n Enter Practical Marks :" ;
        cin >> pmarks;
    }
    void DisplayMarks()
    {
        cout<<"\n Theory Marks : "<< tmarks;
        cout<<"\n Practical Marks : "<< pmarks;
    }
};

class Result : public Examination
{
    float totalmarks;
public:
    void CalculateTotal()
    {
        totalmarks = tmarks + pmarks;
    }
    void DisplayTotal()
    {
        DisplayMarks();
        cout << " The Total marks is : "<< totalmarks;
    }
};
class Employee : public Person
{
    float salary;
    char post[5];
public:
    void GetEmployee()
    {
        GetPerson();
        cout<<"\n Enter Salary : ";
        cin >> salary;
        cout<<"\n Enter Post : ";
        cin >> post;
    }
    void DisplayEmployee()
    {
        DisplayPerson();
        cout<<"\n post : "<< post;
        cout<<"\n salary : "<< salary;
    }
};

int main()
{
    Employee E;
    Result R;
    cout<<"\n Enter Employees Details : "<< endl;
    E.GetEmployee(); //ReadPerson() is also inside ReadEmployee();
    E.DisplayEmployee(); //DisplayPerson is also inside DisplayEmployee();

    cout<<"\n Enter Students Details : " << endl;
    R.GetStudent(); //ReadPerson() is inside it;
    R.GetMarks();
    R.CalculateTotal();
    R.DisplayPerson();
    R.DisplayStudent();
    R.DisplayTotal(); // DisplayMarks is inside it;


    return 0;
}
*/

/*
There are two types of inheritances in this example: multi-level and hierarchical Inheritance. The characteristics of class Person are shared by two classes: Student and Employee. Again, The characteristics of student are shared by class Examination and that of Examination by class Result
*/
