
//WAP to calculate area of circle. Define constant for value of PI using keyword const.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float r, area;
    const float PI = 3.14; //This become permanent value
    cout << " Enter area of circle : ";
    cin >> r;

    //PI  = 2; This become invalid as PI is read only value
    //cout << " Value of PI is : " << PI;

    area = PI * r * r;

    cout << " \nThe area of circle is : "<<area;

    _getch();
    return 0;
}
