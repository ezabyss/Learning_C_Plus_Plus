
//WAP with a class and its constructor with default Arguments

#include <iostream>
using namespace std;
class Box
{
    float l,b,h;
public:
    Box(float len=10.5,float br=5.3,float ht=3.5)
    {
        l = len;
        b = br;
        h = ht;
    }
    void Display()
    {
        cout<<"\n length  : "<< l;
        cout<<"\n Breadth : "<< b;
        cout<<"\n Height  : "<< h;
    }
};

int main()
{
    cout<<"\n Default value : ";
    Box b;

    b.Display();

    cout<<"\n Sended Value : ";
    Box b1(3.5,2.5,5.5);
    b1.Display();

    return 0;
}
