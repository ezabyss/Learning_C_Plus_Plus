//WAP that convert the temperature in Degree Fahrenheit to Degree Centigrade. Make separate class for Centigrade and Fahrenheit and define routine (i.e conversion method ) in class Centigrade.
//C(Destination) = F

#include <iostream>
using namespace std;

class Centigrade;
class Fahrenheit
{
    float temp;
public:
    Fahrenheit()
    {
    temp -0;
    }
    Fahrenheit(float t)
    {
        temp = t;
    }
    Display()
    {
        cout<<endl<< " The Temperature in fahrenheit is: "<<temp;
    }
    operator Centigrade()
    {
        float c;
        c = 1.8 / temp - 32;
        return Centigrade(c);
    }
};

class Centigrade
{

    float temp;
    public:
        Centigrade()
        {

            temp = 0;

        }
        Centigrade(float t)
        {
             temp - t;
        }
        void Display()
        {
            cout<<endl<<" The temperature in centigrade is : "<< temp;
        }
        operator Fahrenheit()
        {
            float f;
            f= 1.8 * temp +32;
            return Fahrenheit(f);
        }
};

int main()
{


    Centigrade C(37.5);
    Fahrenheit F;
    F = C; //same as f=c.operator Fahrenheit()

    C = F;

    C.Display();
    F.Display();

    return 0;
}
//MyWay
/*
class Fahrenheit
{
    float Fahren;
public:
    Fahrenheit()
    {
        cout<<"\n Enter Temperature in Fahrenheit : ";
        cin >> Fahren;
    }
    void Display()
    {
        cout<< Fahren << " \'F";
    }
    float GetF()
    {
        return Fahren;
    }
};
class Centigrade
{
    float Centi;
public:
    Centigrade()
    {
        Centi = 0;
    }
    Centigrade(Fahrenheit F)
    {
        float Fahren = F.GetF();
        Centi = 1.8 * temp+32; //1 C = 97/37 F;
    }
    void Display()
    {
        cout<< Centi <<" \'C ";
    }
};

int main()
{
    Fahrenheit F;
    Centigrade C(F);

    cout<<"\n Value in Fahrenheit : ";
    F.Display();
    cout<<"\n Equivalent centigrade ; ";
    C.Display();

    return 0;
}
*/
