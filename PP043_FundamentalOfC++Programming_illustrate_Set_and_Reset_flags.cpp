//WAP to set and reset various flags using manipulators.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num = 70.6775;
    cout<<"\n Num in scientific notation : "<<setiosflags(ios::scientific)<<num;
    cout<<num;
    cout<<endl<< resetiosflags(ios::scientific)<<" With Normal notation = "<< num;

    return 0;
}
