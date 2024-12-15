//WAP in C++ to add two numbers and display sum of these number.
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int a,b,sum;

    cout << " Enter value for a: ";
    cin  >> a;
    cout << " Enter value for b: ";
    cin  >> b;

    sum = a + b;

    cout << " The sum is : " << sum;

    _getch();
    return 0;
}
