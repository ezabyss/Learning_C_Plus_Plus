//This is a parameterized constructor which has default values in arguments. Thus, the arguments defined in such constructor are optional. This type of constructor can be considered as special type of parameterized constructor. So, some authors exclude this from type of constructor.

//WAP with a class and its constructor with default arguments

#include <iostream>

using namespace std;

class Box
{
    float l,b,h;
public:
    Box(float len =10,float br = 5, float he = 3)
    {
        l = len;
        b = br;
        h = he;
    }
    void Display()
    {
        cout <<"\n Length: "<< l;
        cout <<"\n Breadth: "<< b;
        cout <<"\n Height: "<< h;
    }
    void Volume()
    {
        cout <<"\n Volume: "<<(l*b*h);
    }
};

int main()
{
    Box B1, B2(2.3,4.3,5.3);
    cout<<"\nValue of B1: ";
    B1.Display();
    B1.Volume();

    cout<<"\nValue of B2: ";
    B2.Display();
    B2.Volume();

    return 0;
}
/*
In this example, the constructor Box() has arguments: len, br, and e. They are defined as default values. So, we may or may not pass arguments  wile defining objects of the class. When an object is created with no supplied valued, the default values are used. Here, the default values 10,5 and 5 are being used as values of data members: l, b and h of the objects. The other rules are same as default arguments in normal function
*/
