//WAP to overload binary plus operator(+) for addition of two distances.

#include <iostream>
using namespace std;

class Distance
{
private:
    int meter, centi;
public:
    void ReadDistance()
    {
        cout <<"\n Enter Meter: ";
        cin >> meter;
        cout <<"\n Enter Centimeter: ";
        cin >> centi;
    }
    void Display()
    {
        cout<<meter <<" M "<< centi << " C.M ";
    }

    Distance operator+(Distance D2)
    {

        Distance temp;
        temp.meter = meter + D2.meter;
        temp.centi = centi + D2.centi;
        if(temp.centi >= 100)
        {
            ++temp.meter;
            temp.centi -= 100;
        }
        return temp;

    }

};
int main()
{
    Distance D1, D2, Sum;
    cout<<endl<<" Enter Value for object D1: ";
    D1.ReadDistance();

    cout<<endl<<" Enter Value for Object D2: ";
    D2.ReadDistance();


    Sum = D1 + D2; // Sum = D1.operator+(D2);
    cout<<"\nThe Sum is: ";
    Sum.Display();

    return 0;

}
