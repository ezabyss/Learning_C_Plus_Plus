//WAP to define a class Complex with data members real and img. Define a member function within it to add two complex numbers and return sum of them.

#include <iostream>
using namespace std;
//Book Way
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
    cout<<"\n Real Part      : ";
    cin>>real;
    cout<<"\n Imaginary Part : ";
    cin>>imj;
}

Complex Complex::AddComplex(Complex c)
{
    Complex ob;
    ob.real = real + c.real;
    ob.imj  =  imj+c.imj;
    return ob;
}
void Complex::Display()
{
    cout<<"\n The sum : ";
    if(imj>0)
        cout<<real<<"+j"<<imj;
    else
        cout<<real<<"-j"<<(-1)*imj;
}
int main()
{
    Complex first,second,result;
    cout<<"\n Enter first complex number : ";
    first.GetComplex();

    cout<<"\n Enter Second Complex number : ";
    second.GetComplex();

    result =first.AddComplex(second);
    result.Display();
}
//My Way
/*
using namespace std;
class Complex
{
    float real,img;
public:
    void GetComplex()
    {
        cout<<"\n Real Part      : ";
        cin>>real;
        cout<<"\n Imaginary Part : ";
        cin >>img;
    }
    Complex AddComplex(Complex c2)
    {
        Complex sum;
        sum.real = real + c2.real;
        sum.img  = img  + c2.img;
        return sum;
    }

    void Display()
    {
        cout<<"\n The Sum is : ";
        if(img>=0)
            cout<<"\n" <<real <<" +j"<<img;
        else
            cout<<"\n" <<real <<" -j"<<(-1)*img;
    }
};
int main()
{

    Complex c1,c2,sum;
    cout<<"\n Enter Data For Complex 1 : ";
    c1.GetComplex();
    cout<<"\n Enter Data For Complex 2 : ";
    c2.GetComplex();
    sum = c1.AddComplex(c2);
    sum.Display();

    return 0;
}
*/
