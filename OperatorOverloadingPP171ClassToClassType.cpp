

//Conversion from One class Type to Another Class Type

//WAP to convert polar co-ordinate into rectangular co-ordinate(i.e Convert object of class Polar into object of class Rectangular.

#include <iostream>
#include <math.h>
using namespace std;
//My Way

class MeterCenti
{
    int Meter,Centi;
public:
    MeterCenti()
    {
        Meter = Centi =0;
    }
    MeterCenti(float M, float C)
    {
        Meter = M;
        Centi = C;
    }
    void Display()
    {
        cout<<Meter <<" M " << Centi <<" CM. ";
    }
};

class FeetInch
{
    int Feet;
    float Inch;
public:
    FeetInch()
    {
        Feet= Inch = 0;
    }
    FeetInch(float F, float I)
    {
        Feet = F;
        Inch = I;
    }
    void ReadData()
    {
        cout<<"\n Enter Feet :";
        cin>>Feet;
        cout<<"\n Enter Inch :";
        cin>>Inch;
    }
    void Display()
    {
        cout<< Feet <<" Ft. "<< Inch << " inch. ";
    }
    operator MeterCenti()
    {
        float Total_meter = (Feet + Inch/12) / 3.2808;
        float Meter = int(Total_meter); //truncate fractional Part.
        float Centi = (Total_meter-Meter)*100;

        return MeterCenti(Meter,Centi);
    }
};

int main()
{
    MeterCenti MC; //Destination_Class
    FeetInch FI;    //Source_Class
    cout<<"\n Enter Value In Feet & Inch: ";
    FI.ReadData();
    cout<<"\n Value in Object FI & MC: ";

    cout<<"\n\n FI : " ; FI.Display();
    cout<<"\n\n MC : " ; MC.Display();

    MC = FI; //MC = FI.Operator MeterCenti();

    cout<<"\n Now Value in object FI & MC: ";
    cout<<"\n\n FI " ;FI.Display();
    cout<<"\n\n MC ";MC.Display();

    return 0;

}



//Book Way
/*
class Rectangular
{
    double xco, yco;  // x and y coordinate
public:
    Rectangular()
    {
        xco = yco = 0;
    }
    Rectangular(double x, double y)
    {
        xco = x;
        yco = y;
    }
    void Display()

    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};
class Polar
{
    double radius, angle;
public:
    Polar()
    {
        radius = angle = 0;
    }
    Polar(double r ,double a)
{
    radius = r;
    angle = a;
}
    void Display()
    {
        cout<<"("<<radius<<","<<angle<<")";
    }
    operator Rectangular()
    {
        double x,y;
        x= radius * cos(angle);
        y = radius * sin(angle);
        return Rectangular(x,y);
    }

};


int main()
{
    Rectangular R;
    Polar P(50,53.3);
    cout<<"\n Value in object P: ";
    P.Display();
    cout<<"\n Value in object R: ";
    R.Display();

    R = P ; //same as R = P.operator Rectangular()

    cout<<"\n\n Value in object P: ";
    P.Display();
    cout<<"\n\n Value in object R: ";
    R.Display();

    return 0;
}
*/

/*
The conversion from object of one class to object of another class can be performed using either a one- argument constructor or a conversion function. The choice depends upon whether the conversion routine is declared in the source class or in the destination class. Let us consider two classed Source and Destination. Then , the object of Destination class can be converted into object of Source class as follow :

object_of_Destination  = Object_of_Source;
For the conversion ,the user can use either a conversion function or ta constructor with one argument, depending on whether it is specified in the source class or the destination class. .

If class Source handles the conversion routine, it will use conversion function.

On the other hand, if class Destination handles the conversion activity activity, it will convert through constructor that takes one argument of type class Source activity, it will convert through constructor that takes one argument of type class Source.
*/
//Routine in Source object
/* When the conversion routine is in the source class, it is performed using a conversion function. The syntax of conversion function will be:
Operator Destination_class_name()
{
    body
}
*/

//WAP to convert polar co-ordinate into rectangular co-ordinate(i.e Convert object of class Polar into object of class Rectangular).



/*
In this example, two classed Rectangular and Polar hav been used. The Rectangular represents x and y co-ordinates in a two dimensional plane and it uses a rectangular coordinate system, where the location of each point is specified by x and y coordinates. Similarly, the Polar class represents points' location in term of radius and angle. To convert Polar values to rectangular values, the conversion routine has been defined in class Polar which is source class for the conversion statement r=p(i.e assign object p into object r). The conversion function operator Rectangular() implies conversion of lcass type(i.e here Polar) to Rectangular type.
*/
