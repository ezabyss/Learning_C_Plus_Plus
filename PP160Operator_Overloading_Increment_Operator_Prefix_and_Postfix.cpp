
//Overloading of increment operator (++) in prefix and postfix notation using operator function as friend function.

#include <iostream>
using namespace std;
class Distance
{
    int meter,centi;
public:
    Distance()
    {
        meter = centi =0;
    }
    Distance(int m,int c)
    {
        meter = m;
        centi = c;
    }
    void Display()
    {
        cout<<"\n Meter : "<< meter;
        cout<<"\n Centi : "<< centi;
    }
    friend void operator++(Distance &);
    friend void operator++(Distance &,int);
};
void operator++(Distance &D)
{
        ++D.meter;
        ++D.centi;
        if(D.centi >=100)
        {
            ++D.meter;
            D.centi -= 100;
        }
}
void operator++(Distance &D,int)
{
    D.meter++;
    D.centi++;
    if(D.centi>=100)
    {
        ++D.meter;
        D.centi -= 100;
    }
    cout<<"\n Value of D2 in postfix operator : ";

}

int main()
{
    Distance D1(100,99),D2(55,57);
    cout<<"\n Previous value of d1 : ";
    D1.Display();

    cout<<"\n Prefix increment : ";
    ++D1;                            //operator++(D1);
    cout<<"\n Now Value of D1; ";
    D1.Display();

    cout<<"\n Before Post fix increment : ";
    D2.Display();
    D2++; // same as operator++(D2,int);
    cout<<"\n The value of object D2 : ";
    D2.Display();

    return 0;
}
