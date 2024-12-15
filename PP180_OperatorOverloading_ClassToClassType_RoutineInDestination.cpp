//Option 2 When conversion routine is in destination class(i.e in class DistanceM)
//M(R) = F
#include <iostream>

using namespace std;
//BookWay

class DistanceF
{
    int feet, inch;
public:
    DistanceF()
    {
        feet = inch = 0;
    }
    void ReadData()
    {
        cout<<" Enter feet value: ";
        cin >> feet;
        cout<<" Enter inch value: ";
        cin >> inch;
    }
    void Display()
    {
        cout<< feet <<"\' " << inch <<" \" ";
    }
    int getfeet()
    {
        return feet;
    }
    float getinch()
    {
        return inch;
    }
};
class DistanceM
{
    int m;
    float cm;
public:
    DistanceM()
    {
        m = cm = 0;
    }
    DistanceM(DistanceF &DF)
    {
        float total_meter;
        total_meter = (DF.getfeet() + DF.getinch()/12) / 3.28;
        m = (int) total_meter; //to truncate fractional value;
        cm =(total_meter - m);
    }
    void Display()
    {
        cout<< m << " m "<< cm << " cm ";
    }
};
int main()
{
    DistanceF df;
    DistanceM dm;
    df.ReadData();
    dm = df; //same as dm(df);

    cout<<"\n equivalent in Meter and cm: ";
    dm.Display();

    return 0;
}
//MyWay
/*
class DistanceF
{
    int feet;
    float inch;
public:
    void ReadValue()
    {
        cout<<"\n Enter Feet : ";
        cin >> feet;
        cout <<"\n Enter Inch : ";
        cin >> inch;
    }
    void Display()
    {
        cout<< feet << " ft "<< inch <<" inch ";
    }

    float getfeet()
    {
        float total_feet = (feet + inch/12) ;
        return total_feet;
    }
};

class DistanceM
{
    int m; float cm;
    public:
    DistanceM()
    {
        m = cm = 0;
    }
    DistanceM(int M , float C)
    {
        m = M;
        cm = C;
    }
    DistanceM(DistanceF F)
    {
        float total_meter = F.getfeet() / 3.28;

        m = (int)total_meter ; //or m = total_meter; as m is int var;
        cm = (total_meter - m) * 100; //1m = 100 cm;
    }
    void Display()
    {
        cout<< m <<" m "<< cm << " cm ";
    }
};

int main()
{
    DistanceF F;
    //DistanceM M;

    F.ReadValue();
    cout<<"\n Values in F  ";
    F.Display();

    DistanceM M(F);
    //M = F ; //Same as M(F);
    cout<<"\n Equivalent Value: ";
    M.Display();
    return 0;
}
*/
