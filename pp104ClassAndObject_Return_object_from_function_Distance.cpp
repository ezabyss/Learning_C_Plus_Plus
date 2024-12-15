//WAP which has class Distance with data members feet and inch of appropriate type. Define a member function of the class to add two distance expressed in feet and inch and return sum in main program.

#include <iostream>

using namespace std;
//BookWay
class Distance
{
private:
    int feet;
    float inches;
public:
    void Read();
    Distance Add(Distance);
    void Display();
};
void Distance::Read()
{
    cout<<"\n Feet : ";
    cin >> feet;
    cout<<"\n Inches : ";
    cin >> inches;
}

Distance Distance::Add(Distance d)
{
    Distance sum;
    sum.inches= inches+d.inches;
    if(sum.inches>=12)
    {
        sum.inches -= 12;
        sum.feet = 1;
    }
    sum.feet += feet+d.feet;
    return sum;
}
void Distance::Display()
{
    cout<<"\n The Sum is : ";
    cout<<feet<<"\' "<<inches<<"\"";

}
int main()
{
    Distance d1,d2,d3;
    cout<<"\n Enter first Distance : ";
    d1.Read();
    cout<<"\n Enter Second Distance : ";
    d2.Read();

    d3 =d1.Add(d2);

    d3.Display();
    return 0;
}
//My Way
/*
class Distance
{
    int feet;
    float inch;
public:
    void GetDistance()
    {
        cout<<"\n Feet : ";
        cin >> feet;
        cout<<"\n Inch : ";
        cin >> inch;
    }
    Distance Add(Distance D2)
    {
        Distance Sum;
        Sum.feet = feet + D2.feet;
        Sum.inch = inch + D2.inch;
        if(Sum.inch >= 12)
        {
            Sum.feet++;
            Sum.inch -= 12;
        }
        return Sum;
    }
    void Display()
    {
        cout<<endl<<feet<<" ft " <<inch<<" in.";
    }
};

int main()
{
    Distance D1,D2,sum;

    cout<<"\n Enter Distance    : ";
    D1.GetDistance();
    cout<<"\n Enter Distance D2 : ";
    D2.GetDistance();

    sum = D1.Add(D2);

    sum.Display();

    return 0;
}*/
