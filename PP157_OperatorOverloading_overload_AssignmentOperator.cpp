//WAP to overload +=(i.e. += assignment operator)

#include <iostream>
using namespace std;
//My Way
class Money
{
    float rupee, paisa;
public:
    void Get()
    {
        cout<<"\n Enter Rupee : ";
        cin >> rupee;
        cout<<"\n Enter Paisa : ";
        cin >> paisa;
    }
    void Display()
    {
        cout<<"\n Rs "<<rupee<<" "<<paisa<<"p";
    }
    void operator+=(Money m)
    {
        rupee += m.rupee;
        paisa += m.paisa;
        if(paisa>=100)
        {
            ++rupee;
            paisa -= 100;
        }
    }

};
int main()
{
    Money m1,m2;
    cout<<"\n Enter first amount of Money : ";
    m1.Get();
    cout<<"\n Enter Second amount of Money : ";
    m2.Get();

    cout<<"\n First Money : ";
    m1.Display();

    m1 += m2;  //same as m1.operator+=(m2);

    cout<<"\n New Value of First money : ";
    m1.Display();
    return 0;
}
