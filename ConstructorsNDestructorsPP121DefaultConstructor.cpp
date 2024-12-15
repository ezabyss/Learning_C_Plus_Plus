
/*
the default constructor is a constructor that is automatically generated in the absence of explicit constructors(i.e. no user defined constructor). the automatically provided constructor is called sometimes a nullary constructor. If no user-defined constructor exists for a class A and one is needed, the compiler  implicitly declares a default parameter less constructor A::A(). This constructor is an inline public member of its class.
The compiler will implicitly define A::A() when the compiler uses this constructor to create an object of type A. the constructor has no constructor initializer and has a null body.
*/

//WAP in C++ to illustrate the use of default constructor.

#include <iostream>
using namespace std;

class Box
{
private:
    float l,b,h;
public:
    void DisplayMembers()
    {
        cout <<" Length : "<<l <<endl;
        cout <<" Breadth : "<< b<<endl;
        cout <<" Height : "<< h<<endl;
    }
    float GetVolume()
    {
        return (l*b*h);
    }
};

int main()
{
    float vol;
    Box b;
    b.DisplayMembers();
    vol = b.GetVolume();
    cout <<"\n The Volume of box is: "<< vol;

    return 0;

    //In this example, there is neither member function nor constructor to assign values to data members of object b. If there is no user defined constructor to initialize data members one constructor is automatically generated. In this example, the automatically generated constructor looks like box(){} i.e. there is constructor but it does not initialize data members to any values. Thus, this example shows the value of data members is random even though the default constructor is called. The important point to be noted down is the default constructor doesn't initialize data members to zero.
}
