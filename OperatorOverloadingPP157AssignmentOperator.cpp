//WAP to overload =+ (i.e Assignment operator)
//what it does ?? eg a += b; it sums the a & b then assign it the a;i.e same as a = a + b;

#include<iostream>
#include<conio.h>

using namespace std;

//From Book Solution;

class Money
{
    int rs, paisa;
public:
    Money()
    {
        rs = paisa = 0;
    }
    Money(int r, int p)
    {
        rs = r;
        paisa = p;
    }
    void ReadMoney()
    {
        cout<<" \n Enter Ruppe : ";
        cin >> rs;
        cout<<"\n Enter Paisa : ";
        cin >> paisa;
    }
    void Display()
    {
        cout<<"Rs. "<<rs<<" "<<paisa<<" paisa" ;
    }
    void operator+=(Money M2)
    {
        rs += M2.rs;//Same as rs = rs + M2.rs;
        paisa += M2.paisa; //Same as paisa = paisa + M2.paisa;
        if(paisa >= 100)
        {
            rs++;
            paisa -= 100; // same as paisa = paisa - 100;
        }
    }
};

int main()
{
    Money M1, M2;

    cout<<"\n Enter 1st Money: ";
    M1.ReadMoney();
    cout<<"\n Enter 2nd Money: ";
    M2.ReadMoney();

    cout<<"\n 1st Money is: ";
    M1.Display();
    cout<<"\n 2nd Money is: ";
    M2.Display();

    M1+= M2;//Same as M1 = M1 + M2 or M1.operator(M2)

    cout<<"\n\n New Value of 1st money is : ";
    M1.Display();

    return 0;
}










/*
class Distance
{
    float km;
public:
    void ReadDistance()
    {
        cout<<"\n In KM: ";
        cin >> km;
    }
    void Display()
    {
        cout<< km <<" K.M ";
    }
    void operator+=(Distance D2)
    {
        km += D2.km; //same as km = km + D2.km;
    }
};

int main()
{
    Distance D1,D2;
    cout<<"\n Enter 1st Distance: ";
    D1.ReadDistance();
    cout<<"\n Enter 2nd Distance: ";
    D2.ReadDistance();

    cout<<"\n Distances are :";
    cout<<"\n D1 "; D1.Display();
    cout<<"\n D2 "; D2.Display();

    cout<<"\n The New Distance in 1st Distance : ";
    D1 += D2; //same as D1 = D1 + D2; OR D1.operator+=(D2);

    D1.Display();

    return 0;
}
*/
