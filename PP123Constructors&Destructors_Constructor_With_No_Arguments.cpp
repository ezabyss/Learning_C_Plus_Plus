//WAP to define a class Box with its data members: l,b & h. Initialize object of the class with some fixed values through constructor with no argument.

#include <iostream>
using namespace std;

//My Way
class Box
{
private:
    float l,b,h;
public:
    Box()
    {
        l = 10;
        b = 5;
        h = 3;
    }
    void DisplayMembers()
    {
        cout<<"\n Length : "<<l;
        cout<<"\n breadth: "<<b;
        cout<<"\n Height : "<<h;
    }
    float getvolume()
    {
        return l*b*h;
    }
};
int main()
{
    float vol;
    Box b;
    b.DisplayMembers();
    vol = b.getvolume();
    cout<<"\n The volume of box : "<<vol;
    return 0;
}
/*
class Box
{
    float l,b,h;
public:
    Box()
    {
        l = 10.5;
        b = 5.2;
        h = 3.2;
    }
    void Volume()
    {
        cout<<"\n Volume : "<<l * b * h;
    }
};

int main()
{
    Box B;
    B.Volume();
    return 0;
}
*/
