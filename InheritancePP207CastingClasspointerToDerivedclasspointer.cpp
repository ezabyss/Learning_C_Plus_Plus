//Casting base class pointer to derived class pointer

#include <iostream>
using namespace std;

//MyWay
class Person
{
protected:
    char name[20];
public:
    void GetPerson()
    {
        cout<<"\n Name  : ";
        cin >> name;
    }
    void DisplayPerson()
    {
        cout<<"\n Name  : "<<name;
    }
};
class Student: public Person
{
    int id;
    char level[10];
public:
    void GetStudent()
    {
        cout<<"\n Enter Id    : ";
        cin >> id;
        cout<<"\n Enter level : ";
        cin >> level;
    }
    void DisplayStudent()
    {
        cout<<"\n Id    : "<< id;
        cout<<"\n Level : "<< level ;
    }
};
class Employee: public Person
{
    char post[10];
    float salary;
public:
    void GetEmployee()
    {
        cout<<"\n Enter Post   : ";
        cin >> post;
        cout<<"\n Enter Salary : ";
        cin >> salary;
    }
    void DisplayEmployee()
    {
        cout<<"\n Post   : "<< post;
        cout<<"\n Salary : "<< salary;
    }
};

int main()
{
    Person *bptr;
    Student S;
    bptr = &S;

    cout<<"\n ******* Enter Details of Student ************ \n";
    bptr->GetPerson();
    ((Student*)bptr)->GetStudent();

    cout<<"\n ******** Details of Student *********** \n";
    bptr->DisplayPerson();
    ((Student*)bptr)->DisplayStudent();

    Employee E;
    bptr = &E;

    cout<<"\n\n ********* Enter Details of Employee ********* \n";
    bptr->GetPerson();
    ((Employee*)bptr)->GetEmployee();

    cout<<"\n\n ********* Details of Employee ********* \n";
    bptr->DisplayPerson();
    ((Employee*)bptr)->DisplayEmployee();

    return 0;
}
//Book

/*
class Polygon
{
protected:
    int width, height;
public:
    Polygon(int a, int b)
    {
        width = a;
        height = b;
    }
};

class Rectangle: public Polygon
{
public:
    Rectangle(int l, int b):Polygon(l,b)
    {
    }
    int Area()
    {
        return (width * height);
    }
};

class Triangle: public Polygon
{
public:
    Triangle(int l, int b):Polygon(l,b)
    {
    }
    int Area()
    {
        return (width * height) /2 ;
    }
};

int main()
{
    Rectangle rect(10,11);
    Triangle tr(5,6);
    Polygon *poly;

    float ar;

    poly = &rect;
    ar =((Rectangle*)poly)->Area();
    cout<<"Area of rectangle: "<<ar<<endl;

    poly = &tr;
    ar = ((Triangle*)poly)->Area();

    cout<<"Area of rectangle: "<<ar <<endl;

    return 0;

}
*/
/*
In this Example, base class pointer poly can pint to object of derived class. But base class pointer when it is pointing to derived class object, it can access only those members which are inherited from base class. To call original member of derived class using base class pointer, we can cast base class pointer to derived class. The statement ((Triangle*)poly)->Area(); is casting poly pointer to Triangle class pointer. So, the member function Area() of Triangle class is called. Similarly, The Statement:((Rectangle*)poly)->Area(); is casting poly pointer to Rectangle class pointer So, the member function Area() of Rectangle class is called.

*/
