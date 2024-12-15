//WAP to cast integer value to float.

#include <iostream>

using namespace std;

int main()
{
    int num = 123;
    float f1,f2,f3;

    f1 = num / 12;
    f2 = float(num)/12;
    f3 = (float)num/12;

    cout<<"\n Without Typecasting : "<< f1;
    cout<<"\n Typecasting in functional Notation : "<<f2;
    cout<<"\n Typecasting in C-like Notation     : "<<f3;
    return 0;
}








