//WAP such that operator function returns object of type complex;

#include<iostream>

using namespace std;

class Complex
{
    int real, img;
public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void Display()
    {
        cout<<"\n  Real Part: "<< real;
        cout<<"\n  Imaginary Part: "<< img <<endl<<endl;
    }
    Complex operator-()
    {

        Complex C;
        C.real = - real;
        C.img = - img;
        return C;

        /*
        real = -real;
        img = -img;
        return *this;
        // This changes the original value of the C1;
        */
    }
};

int main()
{
    Complex C1(5,3),C2;

    cout<<"\n\n  The Complex number at object C1 is: ";
    C1.Display();
    cout<<"\n\n  The Complex number at object C2 is: ";
    C2.Display();

    C2 = -C1; // C2 = C1.operator-();

    cout<<"\n The Complex number at object C1 after Unary minus is: ";
    C1.Display();

    cout<<"\n The complex number at object C2 after Unary minus is: \n";
    C2.Display();
    return 0;
}
/*
The output of this program is same as previous program. The different is that the operator function in this program returns object of Complex class So, we can use c2 = -c1;
This statement is treated as c2 = c1.operator-() i.e the operator-() is called using object c1 and its return value is assigned to another object c2.
*/
