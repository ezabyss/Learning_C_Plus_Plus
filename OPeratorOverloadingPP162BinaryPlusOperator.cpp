//WAP to overload plus operator to  add two complex numbers using friend function.

/*
hamley 3 kisim ley garnw Sakxay:
1. void return type garauney ani argument ma object ko address pass garney;

2. Complex return type ma naya object create garney;

3 Complex return type ma argument lai object jasto treat garney
*/

#include<iostream>
using namespace std;


class Complex
{
    int real, img;
public:
    void GetData()
    {
        cout<<"\n Enter Real: ";
        cin >> real;
        cout<<"\n Enter Imaginary : ";
        cin >> img;
    }
    void Display()
    {
        cout<<" Real: "<<real;
        cout<<" imaginary :" <<img;
    }

    friend Complex operator+(Complex,Complex);
    //friend void operator+(Complex &, Complex); //Way1
};

/*
Complex operator+(Complex Com1,Complex Com2)
{
    Com1.real += Com2.real;
    Com1.img += Com2.img;
    return Com1;//it changes value at Com1;
}
*/
/* // Way1
void operator+(Complex &Com1, Complex Com2)
{
    Com1.img += Com2.img;
    Com1.real += Com2.real; //we can also return com1 as object return type;
}
*/


Complex operator+(Complex Com1, Complex Com2)
{
    Complex Sum;
    Sum.real = Com1.real + Com2.real;
    Sum.img = Com2.img + Com2.img;
    return Sum;
}




int main()
{
    Complex C1,C2,Sum;
    cout<<"\n Enter Complex 1 :";
    C1.GetData();

    cout<<"\n Enter Complex 2 :";
    C2.GetData();

    cout<<"\n Object C1 : "; C1.Display();
    cout<<"\n Object C2 : "; C2.Display();

    Sum = C1 + C2; //Same as operator+(C1,C2);

    //C1 + C2; //Way1

    cout<<"\n The Sum is :";
    //C1.Display(); //Way1

    Sum.Display(); //Way2


    return 0;
}

/*
The independent function which is friend  of class Complex is acting as operator function. As the operation function is independent, the both operands C1 & C2 are being passed as argument.
*/
