//WAP to find larger integer, fractional number and character among two using function template.

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

template <class DT>
DT Larger(DT x, DT y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a,b;
    float m,n;
    char p,q;
    cout<<"\n Enter Two Integers  : ";
    cin>> a>> b;
    cout<<"\n Enter Two Fractional Numbers : ";
    cin>> m>> n;
    cout<<"\n Enter Two Characters : ";
    cin >>p>> q;
    cout<<"\n The larger integer is : "<<Larger(a,b)<<endl;
    cout<<"\n The Larger fractional is : "<<Larger(m,n);
    cout<<"\n The Larger character is : "<< Larger(p,q);

    //In this example, the function Larger() finds larger value for two values of any data type: int or float or char.
}
//BOOK WAY



//MY WAY
/*
template <class DT>

DT Larger(DT a, DT b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int ia, ib;
    float fa, fb;
    char ca, cb;
    cout<<"\n Enter two Integer   : ";
    cin >> ia >> ib;
    cout<<"\n Enter Two Float     : ";
    cin >> fa >> fb;
    cout<<"\n Enter Two Character : ";
    cin >> ca >> cb;

    cout<<"\n Larger Between : ";
    cout<<"\n Integer   a & b  : "<< Larger(ia,ib);
    cout<<"\n Float     a & b  : "<< Larger(fa,fb);
    cout<<"\n Character a & b  : "<< Larger(ca,cb);


    return 0;
}
*/
