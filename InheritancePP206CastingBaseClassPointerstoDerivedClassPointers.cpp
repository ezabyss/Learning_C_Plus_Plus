/*
Pointer to objects of a base class is type-compatible with pointer to object of derived classes. Therefore. a single pointer variable can be made to pint to objects belonging to different classes.For example, if B is a base class and D is derived class from B, then a pinter declared as a pinter to B can also be pointer to D. i.e
B * Bptr;
B b;
D d;

bptr = &
we can make bptr to pint to he object d  as follow:
bptr = &d; // This is valid;

to any object derived from that base class, the pointer can't be directly used to access all the member of the derived class. In this case, we have two options, they are:
a) Use of separate object of each derived  class to access its members
b) Cast base class pointer to derived class pointer

*/
//Casting base class pointer to derived class pointer

#include <iostream>
#include <conio.h>
using namespace std;
class Base
{
public:
    int b;
    void show()
    {
        cout<<" b = "<< b;
    }
};
class Derived: public Base
{
public:
    int d;
    void show()
    {
        cout<<"b = "<< b <<"\t d = "<<d;
    }
};

int main()
{
    Base *bptr;  // base pointer
    Base b;   // base object

    //bptr = &b;  //base address

    //bptr->b = 100; //access base class via the base pointer

    //cout<<"\n Base class bptr points to base class object: ";
    //bptr->show();

    Derived dr;  // object of derived class

    bptr = &dr;  //Address of derived class

    bptr->b = 200; //Access base class via base pointer

    cout<<" Base class pointer now points to derived object. ";
    cout<<" But It will call base class version function : ";
    bptr->show(); //points the derived object of the class but calls base function.

    Derived *dptr; // derived pointer
    dptr = &dr; //derived pointer points to derived class object;

    cout<<"\n\n Using Derived Class Pointer: ";
    dptr->d =300;
    dptr->show(); //points to the derived object.

    cout<<"\n\n Using Casting: ";
    ((Derived *)bptr)->d = 400;
    cout<<"\n Without Casting to Derived class :";
    bptr->show(); //without Casting to derived class

    cout<<"\n\n casting bptr to Derived class : ";
    ((Derived *)bptr)->show();


    _getch();
    return 0;
}


/*
In this example, base class pointer bptr can point to object of derived class dr. But base class pinter, when it is pointing to derived class object, can access only those members which aer inherited from base class. Thus, the statement: bptr-> show(); will call base class version of the function .To call original members of derived class using base class pointer, we can cast base class pointer to derived class. thus, the statement class pointer, we can cast base class pointer to derived class version of the function )
*/
