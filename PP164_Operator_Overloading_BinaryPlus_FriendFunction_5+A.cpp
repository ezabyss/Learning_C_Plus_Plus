//overload binary plus operator(+) to evaluate following expression B = 5+A,Where B and A are object of a class Distance having members feet and inch and add 5 to each member of the object A.

#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;
public:
    void Get()
    {
        cout<<"\n Enter Feet : ";
        cin >>feet;
        cout<<"\n Enter inch : ";
        cin >>inch;
    }
    void Display()
    {
        cout<<"\n Feet : "<<feet;
        cout<<"\n Inch : "<<inch;
    }
    friend Distance operator+(int,Distance);
};
Distance operator+(int n,Distance D)
{
    Distance temp;
    temp.feet = 5 + D.feet;
    temp.inch = 5 + D.inch;
    if(temp.inch>=12)
    {
        ++temp.feet;
        temp.inch -= 12;
    }
    return temp;
}

int main()
{
    Distance A,B;
    cout<<"\n Enter Distance for A : ";
    A.Get();
    cout<<"\n Distance at A : ";
    A.Display();
    B = 5 + A;

    cout<<"\n Now Distance at B : ";
    B.Display();
    return 0;
}
