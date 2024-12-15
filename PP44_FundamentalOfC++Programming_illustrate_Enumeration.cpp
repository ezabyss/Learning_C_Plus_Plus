//WAP to define enumerator and use it.

#include <iostream>

using namespace std;
int main()
{
    enum color
    {
        Red = 10,
        Green = 20,
        Blue=30
    };
    color c;
    c = Red;

    cout<<"\n You color code is : "<< c;
    cout<<endl<<" Red   : "<< Red;
    cout<<endl<<" Green : "<< Green;
    cout<<endl<<" Blue  : "<< Blue;
    return 0;
}
