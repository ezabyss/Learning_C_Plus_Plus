
//WAP which contains a class named Box with Appropriate data members and function members. Initialize  an object of the class with parameterized constructor and copy this object into another object using copy constructor.

#include <iostream>
using namespace std;
//Book Way
class Box
{
private:
    float l,b,h;
public:
    Box(float len,float br, float he) //Parameterized Constructor
    {
        l = len;
        b = br;
        h = he;
    }
    Box(Box &b2)
    {
        l = b2.l;
        b  = b2.b;
        h  = b2.h;
    }
    void displaymembers()
    {
        cout<<"\n l : "<< l;
        cout<<"\n b : "<< b;
        cout<<"\n h : "<< h;
    }
    float getvolume()
    {
        return l*b*h;
    }
};
int main()
{
    float vol;
    Box b1(10.5,5.5,6.5);
    Box b2(b1);
    cout<<"\n.... For First Object b1..... : ";
    b1.displaymembers();
    vol = b1.getvolume();
    cout<<"\n The Volume of box is : "<<vol;
    cout<<"\n ..... for Second object b2 ... ";
    b2.displaymembers();
    vol = b2.getvolume();
    cout<<"\n The volume of box is : "<< vol;
    return 0;
}
//My Way
/*
class Box
{
    float len,br,ht;
public:
    Box()
    {
        len = br = ht = 0;
    }
    Box(float l,float b,float h)
    {
        len = l;
        br  = b;
        ht  = h;
    }
    Box (Box &B1)
    {
        len = B1.len;
        br  = B1.br;
        ht  = B1.ht;
    }
    void Display()
    {
        cout<<"\n Length  : "<<len;
        cout<<"\n Breadth : "<< br;
        cout<<"\n Height  : "<< ht;
    }
    void Volume()
    {
        cout<<(len * br * ht) ;
    }
};
int main()
{
    Box B1(5,10,15);
    cout<<"\n Value at B1 : ";
    B1.Display();
    Box B2(B1);
    cout<<"\n Value at B2 After B2(B1): ";
    B2.Display();
    cout<<"\n Volume is : ";
    B2.Volume();
    return 0;
}
*/
