//WAP to illustrate the use of function overriding .

#include <iostream>
using namespace std;

//My Understanding
/*
class Person
{
protected:
    char Name[20];
public:
    void ReadPerson()
    {
        cout<<"\n Enter Name : ";
        cin.getline(Name,20);
    }
    void Display()
    {
        cout<<"\n Name : "<< Name;
    }
};

class Student: public Person
{
    int id;
    char grade[20];
public:
    void ReadStudent()
    {
        cout<<" \n Enter id : ";
        cin >> id;
        cout<<"\n Enter grade : ";
        cin >> grade;
    }
    void Display()
    {
        cout <<"\n Id   : " << id;
        cout <<"\n Grade: "<< grade ;
    }
};

int main()
{
    Student S;
    cout<<"\n Enter Student Details: ";
    S.ReadPerson();
    S.ReadStudent();
    //S.Person::Display(); //This call the base class function;
    S.Display(); //This Displays the derived class function;

    return 0;
}
*/

//Book
class Person
{
protected:
    char Name[20];
public:
    void Read()
    {
        cout<<" Enter Name of Person: ";
        cin >>  Name;
    }
    void Display()
    {
        cout<<" Name : "<< Name << endl;
    }
};

class Student: public Person
{
    int roll;
public:
    void Read()
    {
        cout<<" Enter Roll no. of student : ";
        cin >> roll;
    }
    void Display()
    {
        cout<<" Roll No. : "<< roll <<endl;
    }
};
int main()
{
    Student st;

    st.Person::Read(); //Base class function;
    st.Read(); // Derived class function;
    st.Person::Display(); // Base class fucntion;
    st.Display(); // Derived class function;
    return 0;
}
