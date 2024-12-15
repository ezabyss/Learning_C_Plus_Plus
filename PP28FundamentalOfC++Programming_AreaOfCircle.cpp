//WAP to calculate area of circle. Use symbolic constant for value of PI;

#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    float radius;
    float AOC; //Area Of Circle
    cout<<"\n Enter Radius of Circle : ";
    cin >> radius;

    AOC = PI * radius * radius;

    cout<<"\n Area of Circle : "<< AOC;

    return 0;
}
