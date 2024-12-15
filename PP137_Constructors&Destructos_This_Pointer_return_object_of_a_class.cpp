//WAP to use this pointer to return object of a class.
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imj;
public:
    void GetComplex();
    Complex AddComplex(Complex);
    void Display();
};
void Complex::GetComplex()
{
    cout<<"\n Real Part : ";
    cin >> real;
    cout<<"\n Imaginary Part : ";
    cin >> imj;
}
void Complex::Display()
{
    cout<<"\n The sum is : ";
    if(imj > 0)
        cout<<real<<" +j "<<imj;
    else
        cout<<real<<"-j"<<(-1)*imj;
}
Complex Complex::AddComplex(Complex c)
{

    real = real + c.real;
    imj = imj + c.imj;
    return *this;
}

int main()
{
    Complex first ,second, result;
    cout<<"\n Enter First Complex number : ";
    first.GetComplex();
    cout<<"\n Enter Second Complex number : ";
    second.GetComplex();
    result = first.AddComplex(second);
    result.Display();
    return 0;
}
