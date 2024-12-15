//WAP to overload binary plus operator (+) for addition of two distances expressed in m and cm;

#include <iostream>
using namespace std;

class Distance
{
    float m, cm;
public:
    void Get()
    {
        cout<<"\n Enter Meter       : ";
        cin >> m;
        cout<<"\n Enter Centimeter  : ";
        cin >> cm;
    }
    void Display()
    {
        cout<<"\n "<< m <<" m "<< cm <<" cm ";
    }
    Distance operator+(Distance d2)
    {
        Distance temp;
        temp.m  = m + d2.m;
        temp.cm = cm + d2.cm;
        if(temp.cm >= 100)
        {
            ++temp.m;
            temp.cm -= 100;
        }
        return temp;
    }
};
int main()
{
    Distance D1,D2,sum;
    cout<<"\n Enter Distances : ";
    cout<<"\n For D1 : ";
    D1.Get();
    cout<<"\n For D2 : ";
    D2.Get();

    sum = D1 + D2; //same as sum = d1.operator+(d2);
    cout<<"\n Sum of These two distance is : ";
    sum.Display();
    return 0;
}
