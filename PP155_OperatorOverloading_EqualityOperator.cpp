//WAP to overload equality operator(i.e ==)

#include<iostream>
using namespace std;


class Distance
{
    int feet,inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void ReadData()
    {
        cout<<"\n Enter Feet : ";
        cin >> feet;
        cout<<"\n Enter Inch : ";
        cin >> inch;
    }
    void Display()
    {
        cout<< feet <<"\' "<<inch <<"\"";
    }
    bool operator==(Distance D2)
    {
        if( feet == D2.feet && inch == D2.inch)
            return true;
        else
            return false;
        /*
            float f1 = feet + inch/12;
            float f2 = D2.feet + D2.inch/12; //1 feet = 12 inch
        */
    }
} ;

int main()
{
    Distance D1,D2;

    cout<<"\n Enter distance 1 : ";
    D1.ReadData();
    cout<<"\n Enter distance 2 : ";
    D2.ReadData();

    cout<<"\n 1st Distance is : "; D1.Display();
    cout<<"\n 2nd Distance is : "; D2.Display();

    if(D1==D2)
        cout<<"\n 1st Distance is EQUAL to 2nd Distance. ";
    else
        cout<<"\n 1st Distance is NOT-EQUAL to 2nd Distance. ";

    return 0;
}
//My Way
/*
class Distance
{
    int feet, inch;
public:
    void ReadDistance()
    {
        cout<<"\n Enter feet: ";
        cin >>feet;
        cout<<"\n Enter inch: ";
        cin >> inch;
    }
    void Display()
    {
        cout<< feet <<"\' "<<inch<<"\" ";
    }

    bool operator==(Distance D2)
    {
        float f1 = feet + inch/12 ; // 1feet = 12 inch
        float f2 = D2.feet + D2.inch/12;
        return (f1 == f2);  // return true if f1 is equal to f2;
    }
};

int main()
{
    Distance D1,D2;

    cout<<"\n Enter 1st Distance: ";
    D1.ReadDistance();

    cout <<"\n Enter 2nd Distance: ";
    D2.ReadDistance();

    cout<<"\n The 1st Distance in feet & inch :  ";
    D1.Display();
    cout<<"\n The 2nd Distance in feet & inch :  ";
    D2.Display();

    if(D1 == D2) // i.e.D1.operator==(D2);
        cout<<"\n 1st Distance is EQUAL to 2nd Distance.\n";
    else
        cout<<"\n 1st Distance is NOT EQUAL to 2nd Distance.\n";


    return 0;

}
*/
