//WAP to illustrate overloaded constructors to initialize different objects of a class.


#include <iostream>
using namespace std;
//Book Way

class Box
{
private:
    float l,b,h;
public:
    Box() //constructor with No Argument
    {
        l = b= h = 0;
    }
    Box(float side) //constructor with three arguments
    {
        l = b =h = side;
    }
    Box(float len, float br, float ht)
    {
        l = len;
        b = br;
        h = ht;
    }
    Box(Box &OB)
    {
        l = OB.l;
        b = OB.b;
        h = OB.h;
    }
    void DisplayMembers()
    {
        cout<<"\n len     : "<< l;
        cout<<"\n Breadth : "<< b;
        cout<<"\n Height  : "<< h;
    }
    float getvolume()
    {
        return l *b *h;
    }
};
int main()
{
    float vol;
    Box b1,b2(10),b3(10.5,3.5,5.5),b4(b2);
    cout<<"\n For Constructor with one argument i.e object b1 : ";
    b1.DisplayMembers();
    vol = b1.getvolume();
    cout<<"\n The volume of box is : "<< vol;

    cout<<"\n For constructor with one argument i.e object b2: ";
    b2.DisplayMembers();
    vol = b2.getvolume();
    cout<<"\n the volume of box is : "<<vol;

    cout<"\n for constructor with 3 arguments i.e object b3 : ";
    b3.DisplayMembers();
    vol = b3.getvolume();
    cout<<"\n The Volume of box is : "<<vol;

    cout<<"\n\n For Copy constructor i.e object b4 : ";
    b4.DisplayMembers();
    vol = b4.getvolume();
    cout<<"\n the volume of box is : "<< vol;
    return 0;
}
//My Way
/*
class Box
{
   private:
       float l,b,h;
   public:
       Box() //no argument
       {
           l = b = h = 0;
       }
       Box(float side) // one argument
       {
           l = b = h = side;
       }
       Box(Box &ob) //Copy Constructor
       {
           l = ob.l;
           b = ob.b;
           h = ob.h;
       }
       Box(float len,float br, float ht)
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
       void Volume()
       {
           cout<<"\n Volume : "<< (l*b*h);
       }

};
int main()
{
    Box B1;
    Box B2(3); // one argument;
    Box B3(2,3.5,7);
    Box B4(B3);

    B1.Volume();
    B2.Volume();
    B3.Volume();
    B4.Volume();
    return 0;
}
*/
