//WAP to use setw() manipulator for formatting output.

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num = 1234, num2 = 2356;
    cout<<"num1 :"<<setw(5)<<num <<endl;
    cout<<"num2 :"<<setw(10)<<num2;
    return 0;
}
