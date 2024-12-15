//WAP to use setw() manipulator for formatting output.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1 = 1234, num2 = 5678;

    cout<<"num1 :"<<setw(5)<<setfill('*')<<num1 <<endl;

    cout<<"num2 :"<<setw(10)<<setfill('$')<<num2;

    return 0;
}
