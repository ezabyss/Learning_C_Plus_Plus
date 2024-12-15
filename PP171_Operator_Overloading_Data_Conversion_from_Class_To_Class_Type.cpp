//Object_of_Destination = Object_of_Source
//Routine in source Object
/* operator Destination_class_name()
{
    Body;
}
*/
//WAP to convert polar co-ordinate into rectangular co-ordinate(i.e convert object of class polar into object of class pointer.

#include <iostream>
#include <math.h>
using namespace std;
class Rectangular
{
    double xco,yco;
public:
    Rectangular()
    {
        xco = yco = 0;
    }
    Rectangular(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void Display()
    {
        cout<<"\n ("<<xco<<","<<yco<<")" ;
    }
};
class Polar
{
    float radius,angle;
public:
    Polar()
    {
        cout<<"\n Enter Radius : ";
        cin >> radius;
        cout<<"\n Enter Angle  : ";
        cin >> angle;
    }
    operator Rectangular()  //Casting Operator function
    {
        float x,y;
        x = radius * sin(angle);
        y = radius * cos(angle);

        return Rectangular(x,y);// temporary object;
    }
        void Display()
        {
            cout<<"\n ("<<radius<<","<<angle<<")";
        }
};
int main()
{
    Rectangular R;
    Polar P;
    cout<<"\n The Polar coordinate is : ";
    P.Display();
    R = P; // same as R=P.operator rectangular();
    cout<<endl<<"\n The Rectangular co-ordinate is : ";
    R.Display();

    return 0;
}
