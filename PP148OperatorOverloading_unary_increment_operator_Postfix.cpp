//WAP to overload an increment operator i.e(++) in postfix notation.

#include <iostream>
using namespace std;

class Distance
{
    float m, cm;
public:
    void Get()
    {
        cout<<"\n Enter metre      :  ";
        cin >> m;
        cout<<"\n Enter Centimetre : ";
        cin >> cm;
    }
    void Display()
    {
        cout<<"\n Metre      : "<< m;
        cout<<"\n Centimetre : "<< cm;
    }
    Distance operator++(int)
    {
        Distance dis;
        dis.m  = m++;
        dis.cm = cm++;

        return dis;
    }
};
int main()
{
    Distance D1,D2;
    D1.Get();
    cout<<"\n Value at D1 : ";
    D1.Display();
    cout<<"\n Value After Post increment  ";
    D2 = D1++;
    D2.Display();
    cout<<"\n Value At D1 After Post Increment : ";
    D1.Display();
    return 0;
}
