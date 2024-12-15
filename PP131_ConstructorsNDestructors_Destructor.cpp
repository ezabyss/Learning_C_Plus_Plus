//WAP to illustrate characteristics of a destructor;

#include<iostream>
#include<conio.h>
using namespace std;

class Hello
{
public:
    Hello()
    {
        cout<<"\n I'm from Constructor. ";
    }

    ~Hello()
    {
        cout<<"\n I'm from Destructor. ";
    }
};

int main()
{
    Hello H1;

    int i = 2;
    if(i>0)
    {
        Hello H2, H3;
    }
    _getch(); //This Holds the program from finishing.
    return 0; //Destructor gets executed as soon as the existence of object gets destroyed (here. i.e return 0 );

    /*
    In this example, there are three objects of the class Hello. here objects H1 is defined with main() and outside the if block. but objects H2 and H3 are defined within if block. The constructor is called three times as there are three objects created. The objects H2 and H3 are destroyed when control goes outside if block and now they are not recognized outside if block. Te destructor is called  two times when object b2 and b3 are destroyed and control goes outside if block.

    The object b1 is destroyed after termination of main() block. the final call to destructor is not seen in normal run of the program. but we can see the previous output by pressin gAlt +F5 in Turbo C++
    */
}




/*

A destructor is special member function ofa  class that is executed when an object of that class is destroyed. It is the counter part of constructor. When a variable or object goes out of scope, or a dynamically allocated variable or object is explicitly deleted using  the delete keyword, the destructor is called to clean up the class before it is removed from memory. for simple classes, a destructor is not needed because C++ will automatically clean up the memory. However, if we have dynamically allocated memory, or if we need to dod some kind of maintenance/ operations before the class is destroyed(e.g. closing a file in file handling). the destructor is the perfect place to do so)

Like constructors, destructor have specific characteristics :
 The destructor  must have smae name as class, preceded by a tile(~)
 the destructor can't take arguments.
 has no return type
 automatically called whenever instance of the class to which it belongs, goes out of existence
 can't be declared as static.
 defined with in public or protected section of class.

 only destructor may exist in a class i.e there is no way to overload destructor as they can't be differentiated from each other based on arguments. if no user-defined destructor exists for a class and one is needed, the compiler implicitly declares destructor. This implicitly declared destructor is an inline public member of its class. suppose a class A has an implicitly declared destructor. The complier would implicitly define the following destructor function for class A:

 A::~A;

 Syntax:

 class Class_name
 {
 ~Class_name()
 {
 //Destructor code

 }
*/
