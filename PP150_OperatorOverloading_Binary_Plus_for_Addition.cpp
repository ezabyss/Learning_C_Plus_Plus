//WAP to overload a binary plus operator(+) of addition of two Complex numbers.

#include <iostream>
using namespace std;

class Complex
{
    float real,img;
public:
    void Get()
    {
        cout<<"\n Enter Real : ";
        cin >> real;
        cout<<"\n Enter Img  : ";
        cin >> img;
    }
    void Display()
    {
        cout<<"\n\t Real part : "<< real;
        cout<<"\n\t img  part : "<< img;
    }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.img  = img  + c2.img;
        return temp;
    }

};
int main()
{
    Complex c1,c2,c3;
    cout<<"\n Enter Value for c1 : ";
    c1.Get();
    cout<<"\n Enter Value for c2 : ";
    c2.Get();
    cout<<"\n Value at c1 : ";
    c1.Display();
    cout<<"\n Value at c2 : ";
    c2.Display();
    c3 = c1+c2; //same c3 = c1.operator+(c2);

    cout<<"\n Sum of Two Complex number is : ";
    c3.Display();
    return 0;
}
