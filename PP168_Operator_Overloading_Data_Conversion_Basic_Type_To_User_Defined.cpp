//WAP to convert meter value into object of a class Distance which has feet and inch as members;

#include <iostream>
using namespace std;
const float MTF = 3.280833;

class Distance
{
public:
    int feet;
    float inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(float mtr)
    {
        float total_feet = mtr * MTF;
        feet = int(total_feet);
        inch = (total_feet-feet)*12;
    }
    void Display()
    {
        cout<<"\n Feet : "<<feet;
        cout<<"\n Inch : "<<inch;
    }
};
int main()
{
    float meter;
    cout<<"\n Enter Meter : ";
    cin >> meter;
    Distance Dis;
    Dis = meter; // same as Dis(meter);

    cout<<"\n Meter : "<<meter<<" in Feet & Inch : ";
    Dis.Display();


    return 0;
}
//My Way
/*
class Distance
{
    int feet;
    float inch,meter;
public:
    void Get()
    {
        cout<<"\n Enter Distance in Meter : ";
        cin >> meter;
        float total_feet = meter * MTF;
        feet = int(total_feet);
        inch = (total_feet - feet) * 12;
    }
    void Display()
    {
        cout<<"\n Feet : "<<feet;
        cout<<"\n Inch : "<<inch;
    }
};
int main()
{
    Distance D;
    D.Get();
    D.Display();
    return 0;
}
*/
