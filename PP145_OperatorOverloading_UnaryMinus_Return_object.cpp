//Modify example unary minus such that operator function returns object of type complex.

#include<iostream>
using namespace std;

class Complex
{
    float real, img;
public:
    void get()
    {
        cout<<"\n Enter real part : ";
        cin >> real;
        cout<<"\n Enter img  part : ";
        cin >> img;
    }
    void display()
    {
        cout<<"\n Real Part : "<< real;
        cout<<"\n img  Part : "<< img;
    }
    Complex operator-()
    {
        Complex com;
        com.real = -real;
        com.img  = -img;
        return com;
    }
};

int main()
{
    Complex c1, c2;
    cout<<"\n Enter Value for c1 : ";
    c1.get();
    c1.display();
    c2 = -c1;//same as c1.operator-();
    cout<<"\n Negative Value is : ";
    c2.display();
    return 0;
}
