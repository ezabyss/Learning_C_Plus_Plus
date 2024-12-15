//WAP to illustrate the use of typeid and dynamic_cast operator.

#include <iostream>
#include <typeinfo>

using namespace std;

class Base
{
public:
    virtual void Print()
    {
        cout<<" From Base Class "<< endl;
    }
};

class Derived : public Base
{
public:
    void Print()
    {
        cout<<"\n From Derived Class . " << endl;
    }
};

int main()
{
    cout<<"\n Type of 100   : " << typeid(100).name();
    cout<<"\n Type of 100.1 : "<< typeid(100.1).name();

    Base* b1 = new Base();
    Base* d1 = new Derived();

    Base* ptr1;
    ptr1 = d1;

    cout <<"\n\n Base *b1 = new Base()    :    "<< typeid(*b1).name();
    cout <<"\n\n Base *d1 = new Derived() :    "<< typeid(*d1).name();
    cout <<"\n\n Base *ptr1 = d1          :    "<< typeid(*ptr1).name();

    if(typeid(*ptr1) == typeid(Derived))
    {
        cout<< "\n\n ptr has Derived object ";
    }
    Derived* ptr2 = dynamic_cast<Derived*> (d1);
    if(ptr2)
    {
        cout<<"\n\n ptr2 has Derived object. ";
    }
}
