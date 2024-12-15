//WAP to display only three digits after decimal point in fractional number.

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float num = 1.234567;
    cout<<" num :"<<setprecision(4)<<num;

    return 0;
}
