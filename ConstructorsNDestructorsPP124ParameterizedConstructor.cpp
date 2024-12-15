//The constructor which has parameter  or arguments is known as parameterized constructor. In this type of constructor, we should supply/pass arguments while defining object of class. The values of arguments are assigned to data members of the class. with the help of parameterized constructor, we can initialize the data members of different objects of a class with different values when they are created.


// WAP to modify constructor with no arguments with parameterized constructor;
#include <iostream>
using namespace std;

class Box
{
    float l, b, h;
public:
    Box(float len, float br, float he)
    {
        l = len;
        b = br;
        h = he;
    }
    void Display()
    {
        cout <<endl<< " length :" << l;
        cout <<endl<< " Breadth:" << b;
        cout <<endl<< " Height: " << h;
    }
    void Volume()
    {
        cout <<endl<<" Volume "<< (l*b*h);
    }

};
int main()
{
    Box B1(5,2,3),B2(5,4,1);

    cout<<"\nValue of Object B1: ";
    B1.Display();
    B1.Volume();

    cout <<"\nValue of Object B2: ";
    B2.Display();
    B2.Volume();

    return 0;
}

/*
He the constructor is parameterized constructor. The constructor has three arguments: len, br and he. when object of a class is created, values are also passed as arguments using statement Box B1(5,4,3);. We can create different objects with different arguments using parameterized constructor.
*/
