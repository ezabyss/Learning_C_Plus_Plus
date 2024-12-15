//WAP to overload a unary minus operator using friend function.

#include <iostream>
using namespace std;
class Complex
{
    float real, img;
public:
    void Get()
    {
        cout<<"\n Real : ";
        cin >> real;
        cout<<"\n Image: ";
        cin >> img;
    }
    void Display()
    {
        if(img>=0)
            cout<<"\n "<<real <<" + j"<<img;
        else
            cout<<"\n "<<real <<" - j "<<(-1)*img;
    }
    friend Complex operator-(Complex);
};
 Complex operator-(Complex Com)
{
    Complex temp;
    temp.real = -Com.real;
    temp.img =  -Com.img;
    return temp;
}
int main()
{
    Complex C,nC;
    cout<<"\n Enter for object C : ";
    C.Get();
    C.Display();

    nC = -C; // same as operator-(C);
    cout<<"\n Now Negative Value : ";
    nC.Display();
    return 0;
}
