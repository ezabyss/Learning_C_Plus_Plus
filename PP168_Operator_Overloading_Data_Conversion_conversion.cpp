//WAP to convert Nepali Rupees(i.e single value expressed in RS) in Dollar and Cent.
//Assume 1$ = 117.41 and 100cent = 1$

#include <iostream>
//My Way
using namespace std;

const float DTN = 117.41;

class Dollar
{
    int dlr,cnt;
public:
    Dollar()
    {
        dlr = cnt =0;
    }
    Dollar(float nrs)
    {
        float total_dollar = nrs / DTN;
        cout<<"\n Total_dollar "<< total_dollar;
        dlr = int(total_dollar);
        cnt = (total_dollar-dlr) * 100;
    }
    void Display()
    {
        cout<<"\n Dollar : "<< dlr;
        cout<<"\n Cent   : "<< cnt;
    }
};
int main()
{
    float NRS;
    cout<<"\n Enter Amount in Nepali Currency : ";
    cin >> NRS;
    Dollar Dol;
    Dol = NRS; //Same as Dol(NRS);

    cout<<"\n RS "<< NRS<<" Is Equivalent to ";
    Dol.Display();
    return 0;
}
