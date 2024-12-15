//WAP to use this pointer to represent address of object;

#include <iostream>
using namespace std;
// Book Way
class Box
{
private:
    float l,b,h;
public:
    void getaddress()
    {
        cout<<"\n Address of object using this pointer : "<< this;
    }
};
int main()
{
    Box b;
    b.getaddress();
    return 0;
}
//My Way
/*
class Box
{
    float l,b,h;
public:
    Box(float l,float b,float h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void Display()
    {
        cout<<"\n len    : "<<l;
        cout<<"\n br     : "<<b;
        cout<<"\n height : "<<h;
    }
};

int main()
{
    Box b(10.1,10.2,3.3);
    b.Display();

    return 0;
}
*/
