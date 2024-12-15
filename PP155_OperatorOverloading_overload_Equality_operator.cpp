//WAP to find overload equality operator(i.e. ==)

#include <iostream>
using namespace std;

class Distance
{
    float cm, m;
public:
    void Get()
    {
        cout<<"\n Enter Meter      : ";
        cin >> m;
        cout<<"\n Enter Centimeter : ";
        cin >> cm;
    }
    void Display()
    {
        cout<<"\n "<< m << " m. "<< cm <<" cm. ";
    }
    bool operator==(Distance D2)
    {
        float m1 = m + (cm/100);
        float m2 = D2.m + (D2.cm/100);
        if(m1==m2)
            return 1; //return true;
        else
            return false; //return 0;
    }
};
int main()
{
    Distance D1,D2;
    cout<<"\n Enter D1 : ";
    D1.Get();
    cout<<"\n Enter D2 : ";
    D2.Get();
    if(D1 == D2)
        cout<<"\n D1 & D2 are Equal. ";
    else
        cout<<"\n D1 & D2 are not Equal. ";
    return 0;
}
