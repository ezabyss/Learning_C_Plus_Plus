//Same program as pp92 but members function outside class body
/*
The syntax for defining member function outside the class is as follow

return_type class_name :: function_name(argument list)
{
//function body
}

Here, class_name:: is known as a membership identify label which tells the compiler about class name that the function belongs to (i.e. function_name belongs to class_name). The symbol :: is called Scope resolution operator.
*/


#include <iostream>
#include <conio.h>
using namespace std;

class Box
{

private:
    float length, breadth, height;
public:
    void ReadData(); //Function Prototype
    void Volume();   //Function Prototype
};

int main()
{
    Box B;

    B.ReadData();
    B.Volume();

    return 0;
}

void Box::ReadData() //Function definition
{

    cout << " Enter Length, Breadth, Height : ";
    cin >> length >> breadth >> height ;
}

void Box::Volume()  //Function definition
{
    cout << " \n Volume of the Box is : " << (length * breadth * height);
}


