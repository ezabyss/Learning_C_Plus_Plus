//WAP to define a class Complex with data members real and img. Define a member function within it to add two complex numbers and return sum of them.


#include <iostream>
#include <conio.h>

using namespace std;

class Complex
{

private:
    float real, img;
public:
    void GetComplex()
    {
        cout<<"\n Enter Real Part: ";
        cin >> real;
        cout<<"\n Enter Imaginary Part: ";
        cin >> img;
    }

    Complex Add(Complex);   // Prototype

    void Display()
    {
        cout<<"\n The Sum is:  ";
        if (img >= 0 )
            cout << real <<" i + " << img <<" j";
        else
            cout << real <<" i - " << (-1) * img <<" j";
    }
};

int main()
{

    Complex C1, C2, Result;

    cout<<"\n Enter Values for C1 : ";
    C1.GetComplex();
    cout<<"\n Enter Values for c2: ";
    C2.GetComplex();

    Result = C1.Add(C2);

    Result.Display();

    return 0;
}

Complex Complex::Add(Complex c2)
{
    Complex Total;
    Total.img = img + c2.img;
    Total.real = real + c2.real;

    return Total;
}

/*
In this example, the prototype o the function Add() has been Changed as complex Add(Complex);

Where its return type is  Complex (i.e it returns object of class Complex) and it takes one argument of type class Complex. This function adds two complex number(i.e two objeccts of complex class) but its prototype has only on object as argument. We have to know that the member function is always called by object of the class using dot opeator So, one object calls tothis function(i.e. first ) and other object(i.e. second ) is passed as argument. As its return type is also class complex the object returned by function is assigned to third object result.

NOTE: this is copied from book << Variable i've defined in above program may be different from this definition;

*/
