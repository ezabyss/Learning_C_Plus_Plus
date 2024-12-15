//WAP to illustrate characteristics of Destructor

#include <iostream>
#include <conio.h>

using namespace std;
//Book Way
class Box
{
public:
    Box()
    {
        cout<<"\n I am from constructor ";
    }
    ~Box()
    {
        cout<<"\n I am from Destructor. ";
    }
};
int main()
{
    Box b1;
    int i = 2;
    if(i>0)
    {
        Box b2,b3;
    }
}
//My Way
/*
class Hello
{
public:
    Hello()
    {
        cout<<"\n Hello From constructor ";
    }
    ~Hello()
    {
        cout<<"\n Hello From Destructor ";
    }
};
int main()
{
    Hello H,h1,h2,h3;
    _getch();
    return 0;
}
*/
