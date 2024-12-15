//W previous program prefix increment that return object

#include <iostream>

using namespace std;

class Distance
{
    int meter, centi;
public:
    Distance()
    {
        meter = 0;
        centi = 0;
    }
    Distance(int m, int c)
    {
        meter = m;
        centi = c;
    }
    void Display()
    {
        cout<<endl<<"\t\t"<<meter <<" M " << centi <<" C.M ";
    }

    Distance operator++()
    {
        Distance D;
        D.centi = ++centi;
        D.meter = ++meter;
        if(D.centi == 100)
        {
            //centi -= 100;
            //++meter;
            D.centi -= 100;
            ++D.meter;
        }
        return D;
    }
};

int main()
{
    Distance D1(13,99),D2;

    cout<<"\n The Value at Object D1: ";
    D1.Display();

    cout<<"\n The Value at Object D2: ";
    D2.Display();

    D2 = ++D1;// D1.operator++();

    cout<<"\n The Value at Object D1 After Increment operator : ";
    D1.Display();

    cout<<"\n The Value at object D2 After Increment operator : ";
    D2.Display();


    return 0;
}
