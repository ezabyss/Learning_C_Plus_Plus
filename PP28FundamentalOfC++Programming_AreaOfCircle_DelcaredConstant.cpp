//WAP to calculate area of circle. Define constant for value of PI using keyword const.

#include <iostream>
using namespace std;

int main()
{
    float const pi = 3.14;
    float r;
    cout <<"\n Enter Radius : ";
    cin  >> r;
    float Area_Circle ;
    Area_Circle = pi * r * r ;
    cout<<"\n Area Of Circle Having Radius : "<<r <<" is : "<< Area_Circle;

    return 0;
}
