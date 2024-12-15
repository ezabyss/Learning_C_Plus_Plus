
//WAP to use 'this pointer' to return object of a class.

#include<iostream>
using namespace std;

class Complex
{
private:
    int img, real;
public:
    void GetComplex()
    {
        cout<<"\n Enter Real Part: ";
        cin >> real;
        cout<<"\n Enter Imaginary Part: ";
        cin >> img;

    }
    Complex AddComplex(Complex c)
    {
        real = real + c.real; //this sum the value and store it in the called object datamember i.e C1;
        img = img + c.img;
        return *this;
    }
    void DisplayValue()
    {
        cout<<" Imaginary Part(j): "<<img;
        cout<<" Real Part(i) :"<<real;
    }
    void Display()
    {
        cout<<"\nThe sum is: ";
        if(img >=0)
            cout<<real <<" +j "<<img;
        else
            cout<<real <<" -j "<<(-1) * img;
    }
};

int main()
{
    Complex C1, C2, result;

    cout<<"\nEnter first complex number \n";
    C1.GetComplex();
    cout<<"\n Second Complex number : \n";
    C2.GetComplex();

    cout<<" \nValue in C1: ";
    C1.DisplayValue();
    cout<<" \nValue in C2: ";
    C2.DisplayValue();

    result = C1.AddComplex(C2);
    result.Display();

    cout<<"\nValue in C1: ";
    C1.DisplayValue();


    return 0;
}
