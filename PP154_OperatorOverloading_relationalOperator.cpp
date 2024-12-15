//WAP to overload less that relation operator (i.e <)

#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;
public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void ReadData()
    {
        cout<<"\nEnter feet: ";
        cin >>feet;
        cout<<"\nEnter inch: ";
        cin >>inch;
    }
    void Display()
    {
        cout<<feet<<"\'"<<inch<<"\""; // just to make look like :- 3' 12"
    }
    int operator<(Distance D2)
    {
        float f1 = feet + inch/12;  // 1feet = 12 inch;
        float f2 = D2.feet + D2.inch/12;

        return (f1<f2); //it returns 1 if f1 is less that f2 & vice versa.
        /*
        if (feet <D2.feet && inch < D2.inch)
            return true;
        else
            return false;
        */
    }

};


int main()
{
    Distance D1, D2;

    cout<<"\nEnter 1st Distance: ";
    D1.ReadData();
    cout<<"\nEnter 2nd Distance: ";
    D2.ReadData();

    cout<<"\n1st Distance in feet, and inch :  ";
    D1.Display();
    cout<<"\n2nd Distance in feet, and inch :  ";
    D2.Display();

    if(D1<D2) //D1.operator<(D2);
        cout<<"\n The 1st Distance is less than 2nd Distance ";
        12
    else
        cout<<"\n The 1st Distance is Greater than 2nd Distance ";

    return 0;
}

/*
class Distance
{
    float meter, centi;
public:
    void ReadData()
    {
        cout<<"\n Enter Meter: ";
        cin >> meter;
        cout<<"\n Enter Centimeter: ";
        cin >> centi;
    }
    void Display()
    {
        cout<< meter <<" m "<< centi <<" cm ";
    }

    int operator<(Distance D2)
    {
        float m1 = meter + centi/100;
        float m2 = D2.meter + D2.centi/100;

        return (m1<m2); //it sends 1 if m1 is less that m2 & vice versa;
    }
};

int main()
{
    Distance D1,D2;

    cout<<"\nEnter 1st Distance: ";
    D1.ReadData();
    cout<<"\nEnter 2nd Distance: ";
    D2.ReadData();
    cout<<"\n 1st Distance in meter and centimeter :   ";
    D1.Display();
    cout<<"\n 2nd Distance in meter and centimeter :   ";
    D2.Display();

    if(D1<D2) //D1.operator(D2);
        cout<<"\n\n Second Distance is greater than first Distance. "<<endl;
    else
        cout<<"\n\n First Distance is greater than second Distance. "<<endl;


    return 0;
}
*/
