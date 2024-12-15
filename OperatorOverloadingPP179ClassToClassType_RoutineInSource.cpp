//Create a Class named DistanceF with data members: feet and inch and another class named DistanceM with data members: m and cm.

//WAP to convert object of DistanceF class into object of another class DistanceM. Use 1 meter = 3.23 feet for conversion.

//M = F; //source
//Option 1: When conversion routine is to source class( i.e in class DistanceF )

#include <iostream>

using namespace std;

class  DistanceM
{
    int m; float cm;
public:
    DistanceM()
    {
        m = cm = 0;
    }
    DistanceM(int m, float cm)
    {
        this->m = m;
        this->cm = cm;
    }
    void Display()
    {
        cout<< m << " m " << cm <<" cm ";
    }

};

class DistanceF
{
    int feet; float inch;
public:
    DistanceF()
    {
        feet = inch = 0;
    }
    DistanceF(float f, float i)
    {
        feet = f;
        inch = i;
    }
    void ReadData()
    {
        cout<<"\n Enter feet : ";
        cin >> feet;
        cout<<"\n Enter inch : ";
        cin >> inch;
    }
    void Display()
    {
        cout<< feet << " ft "<< inch <<" inch ";
    }

    operator DistanceM()
    {
        float total_meter = (feet + inch/12) / 3.28;
        int meter = int(total_meter) ;//truncate fractional part;
        float centi = (total_meter - meter) * 100;

        return DistanceM(meter , centi);

    }


};


int main()
{
    DistanceM M;
    DistanceF F;

    F.ReadData();

    F.Display();
    M = F;

    cout<<"\n Equivalent in Meter and feet: ";
    M.Display();

    return 0;
}
