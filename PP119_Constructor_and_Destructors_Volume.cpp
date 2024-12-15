//WAP to define a class Box with data members:  l, b &h. Define appropriate member functions to read its data members and calculate volume of a box.

#include <iostream>
using namespace std;

class Box
{
private:
    float l,b,h;
public:
    Box()
    {
        cout<<"\n Enter length : ";
        cin >>l;
        cout<<"\n Enter Breadth : ";
        cin >>b;
        cout<<"\n Enter Height  : ";
        cin >> h;
    }
    void Volume()
    {
        cout<<"\n Volume is : "<<(l*b*h);
    }
};
int main()
{
    Box B;
    B.Volume();
    return 0;
}
