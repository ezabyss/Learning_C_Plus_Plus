//Routine In Destination
//When the conversion routine is in the destination class. we use a one-argument constructor.
//R = P ->R is destination, P is source; source function, destination construction


#include <iostream>
#include <math.h>
using namespace std;

class Polar
{
    double radius, angle;
public:
    Polar()
    {
        radius = angle = 0;
    }
    Polar(double r, double a)
    {
        radius = r;
        angle =a;
    }
    void Display()
    {
        cout<<" ( "<<radius <<" , "<<angle<<" ) ";
    }
    double getr()
    {
        return radius;
    }
    double geta()
    {
        return angle;
    }
};
class Rectangular
{
    double xco, yco;
public:
    Rectangular()
    {
        xco = yco =0;
    }
    Rectangular( double x, double y)
    {
        xco = x;
        yco = y;
    }
    Rectangular(Polar P)
    {
        double a, r;
        a = P.geta();
        r = P.getr();
        xco = r + cos(a);
        yco = r + sin(a);
    }
    void Display()
    {
        cout<< " ( "<<xco<<" , "<<yco << " )";
    }
};

int main()
{
    Rectangular R;
    Polar P(15,0.55);
    cout<<" \n Value At Polar :(Radius, Angle) : ";
    P.Display();

    R = P;
    cout<<"\n Value At Rectangular:(Xco, Yco) : ";
    R.Display();



    return 0;
}




/* In this example, two classes same as previous program have been defined. But the conversion routine has been defined in destination class Rectangular Instead of Polar. Thus, we are using constructor for conversion from one class type Polar to another class Rectangular when conversion routine is in destination class. One point to understand is that the constructor in the destination class Rectangular must be able  to access the data in source class Polar to perform the conversion. The Polar dta- radius & angle- are private, so we are using special member function: getr() and geta() to allow access to it.

*/
