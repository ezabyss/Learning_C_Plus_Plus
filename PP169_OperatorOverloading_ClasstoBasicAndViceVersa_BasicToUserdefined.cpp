//WAP to convert Nepali Rupees (i.e. single value expressed in Rs) in Dollar and Cent. Assume 1$ = 120.73 & 1$ = 100cents;

#include <iostream>
using namespace std;
//My Way
/*
class Money
{
    int Dollar;
    float Cent;
public:
    Money()
    {
        Dollar = Cent =0;
    }
    Money(float RS)
    {
        float Total_Dollar = RS/120.73;
        Dollar = (int)Total_Dollar; //truncate fraction part-> Dollar is already int you an also ignore typeCasting.
        Cent = (Total_Dollar-Dollar) * 100;
    }
    void Display()
    {
        cout<<"\n You Have : ";
        cout<< Dollar <<" $ And " << Cent << " Cent ";
    }
};

int main()
{
    Money M;
    float RS;
    cout<<"\n Enter Money in RS: ";
    cin >> RS;

    M = RS; //same as M(RS);

    cout<<"RS Converted to Dollar & Cents: ";
    M.Display();

    return 0;
}
*/

//Book

class Dollar
{
    int dol;
    float cent;
public:
    Dollar()
    {
        dol = cent = 0;
    }
    Dollar(float RS)
    {
        float Equiv_Dol = RS/120.73;
        dol = int(Equiv_Dol);
        cent = (Equiv_Dol - dol) * 100;
    }
    void Display()
    {
        cout<<" $ "<<dol <<" And "<< cent <<" cent.";
    }
};

int main()
{
    Dollar D1;
    float RS, RS2;

    cout<<"\n Enter Rs 1: ";
    cin >> RS;
    cout<<"\n Enter Rs 2: ";
    cin>>RS2;

    D1 = RS;  //SAme as D2(RS2) << But it shows error value must be passed when creating object;
    Dollar D2(RS2);     // This is same as above;

    cout<<"\n Dollar Equivalent to "<<RS << " : ";
    D1.Display();

    cout<<"\n Dollar Equivalent to "<< RS2 << " : ";
    D2.Display();

    return 0;
}
