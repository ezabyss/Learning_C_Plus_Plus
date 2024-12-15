/* Definition:
The operator that requires only one operand to perform its operation is known as unary operator. For example: unary minus(-), unary plus(+), increment(++), decrement(--), logical not( ! ), pointer indirection  of dereference ( * ) and address of ( & ). The operator function declared as member function can be used with following syntax:
return_type operator unary_operator()
{
    //Body
}

*/


//WAP to overload a unary minus operator(i.e)
#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imaginary;
public:
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void operator-() //changes sign of each data member of object;
    {
        real = -real;
        imaginary = -imaginary;
    }

    void Display()
    {
        cout<<" \n Real Part: " << real;
        cout<<" \n Imaginary Part: "<< imaginary;
    }
};

int main()
{
    Complex comp(5,4);

    cout<<"\n The Complex number is: ";
    comp.Display();

    -comp; //same as comp.operator-();

    cout<<"\n The complex number after Unary minus(-) operator: ";
    comp.Display();

    return 0;
}

/*
In this example, the unary minus operator has been applied in object of Complex class. Here, unary operator changes sign of each data member of the Complex class using operator function void operator-() {}. In this operator function, the return type is void, so we can't use statement like comp2=-comp1. To perform this operation, we can change our program
*/
