//The constructor with no arguments is a constructor that has no parameters or arguments. This type of constructor initializes data members with some fixed values.

//WAP to define a class Box with its data members: l, b and h. Initialize object of the class with some fixed values through constructor with no argument.

#include <iostream>

using namespace std;

class Box
{
    float l,b,h;
public:
    Box()
    {
        l = 5.5;
        b = 10.3;
        h = 5.9;
    }
    void DisplayMember()
    {
        cout <<endl<< " length: "<<l;
        cout <<endl<<" Breadth: "<<b;
        cout <<endl<< " Height: "<<h;
    }
    float volume()
    {
        return l*b*h;
    }

};
int main()
{
    Box B1;
    B1.DisplayMember();
    float volume;
    volume = B1.volume();
    cout<<"\n Volume: "<< volume;
    return 0;
}

/*
In this example, there is a constructor with no arguments: box(). This constructor initialized data member with some fixed value i.e 1 with 10, b with 5, h with 3.
When an object is created with class Box, we don't supply arguments. thus, in case of constructor with no arguments, the value of data members is same for any objects of the class.


Note: some authors argue that the constructor with no arguemnts and default constructors are same.
*/
