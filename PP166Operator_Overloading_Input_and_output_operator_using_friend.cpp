//WAP to overload input(>>) and output(<<) operator using friend.
#include<iostream>
using namespace std;
class Distance
{
    float feet, inch;
public:
    void Get()
    {
        feet =0;
        inch =0;
    }
    friend void operator>>(istream &,Distance &);
    friend void operator<<(ostream &,Distance);

};
void operator>>(istream &input,Distance &Dis)
{
    cout<<"\n Enter Data For Object : ";
    cout<<"\n Feet : ";
    input>>Dis.feet;
    cout<<"\n Inch : ";
    input>>Dis.inch;
}
void operator<<(ostream &output,Distance Dis)
{
    output<<"\n Distance is : ";
    output<<"\n Feet : "<< Dis.feet;
    output<<"\n Inch : "<< Dis.inch;
}
int main()
{
    Distance D;
    cin>>D;
    cout<<D;
    return 0;
}
/*

class Distance
{
private:
    int feet,inch;
public:
    Distance()
    {
        feet = inch =0;
    }
    friend void operator>>(istream &, Distance &);
    friend void operator<<(ostream &, Distance);
};
void operator>>(istream &in,Distance &dis)
{
    cout<<"\n Enter Data member of the object : ";
    cout<<"\n feet : ";
    in >>dis.feet;
    cout<<"\n inch : ";
    in>>dis.inch;
}

void operator<<(ostream &out, Distance dis)
{
    cout<<endl<<"\n The data members of the object : ";
    out<<dis.feet<<"\'";
    out<<dis.inch<<"\'";
}
int main()
{
    Distance d;
    cin>>d; // same as operator(cin.d);
    cout<<d; //same as operator<<cot,d);
}
*/
