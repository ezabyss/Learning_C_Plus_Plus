//Conversion from Class type to Basic type and Vice-Versa

 /*   //Conversion from basic type to user defined type;

    A constructor can be used to convert basic data type to user defined data type(i.e class type). It is important to remember that an object can be initialized  using one argument constructor ass

    Distance dist(10.5);
    Here let us assume Distance is name of a class. Alternatively, we can also call the following way,
    Distance dist = 10.5;

    thus, the use of Distance dist(10.5); is equivalent to Distance dist 10.5
    */
//WAP to convert meter value into object of a class  Distance which has feet and inch as members.
#include <iostream>

const float MTF = 3.2808;

using namespace std;

class Distance
{
    int feet, inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(float m)
    {
        float total_feet = m * MTF;
        feet = int(total_feet); //truncate fractional part
        inch = (total_feet-feet) * 12;
    }
    void Display()
    {
        cout<<"\n "<<feet<<" ft "<<inch<<" inch ";
    }

};

int main()
{
    float meter;
    cout<<"\n Enter Meter: ";
    cin >> meter;

    Distance Dis;

    Dis = meter;  //Same as Dis(meter);if we directly do this it throws error. saying Dis is obj & meter is float.

    cout<<"\n Displaying Values in Dis: ";
    Dis.Display();


    return 0;
}



/* In this example, we have one argument constructor of class Distance. It receives single value in meter as argument. The single value received as argument has been divided in two parts: feet and inch using conversion factor 3.28083 (i.e conversion formula to convert from meter to feet value). The statement dist = meter; calls one argument constructor and thus single meter value in converted into object of Distance class.

*/
