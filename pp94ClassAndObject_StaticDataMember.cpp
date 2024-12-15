//WAP to use static data member in a class to count the number of times,a public member function is called.

#include <iostream>
using namespace std;
class Book
{
private:
    static int cn;
    char name[15];
    int id;
public:
    void ReadData()
    {
        cout<<"\n Enter ID : ";
        cin >> id;
        cout<<"\n Enter Name of Book : ";
        cin >> name;
        cn++;
    }
    void Display()
    {
        cout<<endl<<id<<"\t"<<name;
    }
    void DisplayCount()
    {
        cout<<" The number of objects which called ReadData() : "<<cn;
    }
};
int Book::cn; //definition of static data member
int main()
{
    Book b1,b2,b3;
    b1.ReadData();
    b1.DisplayCount();

    b2.ReadData();
    b2.DisplayCount();

    b3.ReadData();
    b2.DisplayCount();

    cout<<"\n ID\t"<<"Name: ";
    cout<<endl<<"_______________ ";
    b1.Display();
    b2.Display();
    b3.Display();
    return 0;
}


//My Way
/*
class Person
{
    char name[10];
    int age;
    int static Count;
public:
    void GetData()
    {
        Count++;
        cout<<"\n Public Member Called : "<<Count;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Age  : ";
        cin>>age;

    }
    void DisplayData()
    {
        Count++;
        cout<<"\n Public Member Called : "<<Count;

        cout<<"\n Name : "<< name;
        cout<<"\n Age  : "<< age;
    }
};
int Person::Count;
int main()
{
    Person P;
    P.GetData();
    P.DisplayData();
    cout<<"\n Number of Time Public Function Called : "<<P.Count;
    return 0;
}
*/
