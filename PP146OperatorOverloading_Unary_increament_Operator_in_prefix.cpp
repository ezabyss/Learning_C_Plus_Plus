//WAP to overload an increment operator i.e(++) in prefix notation.

#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float  inch ;
public:
    void Get()
    {
        cout<<"\n Enter Feet : ";
        cin >> feet;
        cout<<"\n Enter Inch : ";
        cin >> inch;
    }
    void Display()
    {

        cout<<"\n"<<feet<<" ft "<<inch <<" in. ";
    }
    Distance operator++()
    {
        Distance dis;
        dis.feet = ++feet;
        dis.inch = ++inch;
        if(dis.inch >= 12)
        {
            ++dis.feet;
            dis.inch -= 12;
        }
        return dis;
    }
};
int main()
{
    Distance D1,D2;
    D1.Get();
    cout<<"\n Value in D1 : ";
    D1.Display();

    cout<<"\n After prefix increment Distance D2 : ";
    D2 = ++D1; //D1.operator++();
    D2.Display();

    cout<<"\n Value in D1 after increment : ";
    D1.Display();
    return 0;
}
//My Way
/*
class Complex
{
    float real,img;
public:
    void Get()
    {
        cout<<"\n Enter Real : ";
        cin >> real;
        cout<<"\n Enter Img  : ";
        cin >> img;
    }
    void Display()
    {
        cout<<"\n  Real : "<< real;
        cout<<"\n  Img  : "<< img;
    }
    void operator++()
    {
        ++real;
        ++img;
    }
};
int main()
{
    Complex c1;
    cout<<"\n Enter Value for c1 : ";
    c1.Get();
    cout<<"\n C1 : ";
    c1.Display();
    cout<<"\n After increment : ";
    ++c1; // Same as c1.operator++();
    c1.Display();
    return 0;
}
*/
