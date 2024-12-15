//Define a class named complex with data member real and img. Use appropriate member function of the class which accepts two objects of the class and add them .

#include <iostream>

using namespace std;

class Complex
{

private:
    float real, img;
public:
    void ReadData();
    void Add(Complex C1, Complex C2);
    void Display();
};

int main()
{
    Complex C1,C2, Total;

    cout<<endl<<" Enter Real and Imaginary Part for C1\n";
    C1.ReadData();

    cout<<endl<<" Enter Real and Imaginary Part for  C2\n";
    C2.ReadData();

    Total.Add(C1,C2); //Passing two objects as argument
    Total.Display();

    return 0;
}

void Complex::ReadData()
{
    cout<<"\n Enter Real Part: ";
    cin >> real;
    cout<<"\n Enter Imaginary Part :";
    cin >> img;
}

void Complex::Add(Complex C1,Complex C2)
{
    real = C1.real + C2.real;
    img = C1.img + C2.img;
}

void Complex::Display()
{
    if (img>=0)
        cout<<"\n The Result is: " << real <<" i + "<< img <<" j";
    else
        cout<<"\n The Result is: "<< real <<" i - "<< (-1)*img <<" j";
}


/*
first = c1, second C2, AddComplex = Add();

In Above example, we have defined two objects first and second of a class complex. These two objects are passed in function Add(). The Addcomplex() function adds real part and imaginary parts of two objects passed as arguments. The function AddComplex() is called by third object result in statemnt resullt. AddComplex(first, second); So, within function definition of Addcomplex(), the follwing two lines of codes adds real and img part of two objects and assign sum in real and img part of calling object.
real = c1.real + c2.real;
img  c1.img+c2.img;

Here, real and img denotes real and img data member of calling object i.e result, So, when result objects calls another member function Display(), it shows the sum of two complex numbers first and second.

)
*/
