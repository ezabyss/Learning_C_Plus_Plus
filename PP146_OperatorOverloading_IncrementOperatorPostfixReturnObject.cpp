
//WAP to overload  and increment operator i.e(++) in postfix notation.

#include<iostream>

using namespace std;

class Distance
{
    int centi, meter;
public:
    Distance()
    {
        centi = 0;
        meter = 0;
    }
    Distance(int m, int c)
    {
        meter = m;
        centi = c;
    }
    Display()
    {
        cout<<"\n\t"<< meter <<" M "<< centi <<" C.M ";
    }

    Distance operator++(int) //This int is not really an argument, but a signal to the compiler to inform about postfix notation.
    {
        Distance D;
        D.centi=  centi++ ;
        D.meter = meter++ ;
        if(D.centi == 100)
        {
            D.meter++;
            D.centi -= 100;
        }
        return D;

    }
};

int main()
{
    Distance D1(10,99),D2;

    cout<<"\nThe Value At D1: ";
    D1.Display();

    cout<<"\nThe Value At D2: ";
    D2.Display();

    D2 = D1++ ; //D1.operator++();
    cout<<"\n\nThe value At D1 after Post increment operator: ";
    D1.Display();

    cout<<"\nThe value At D2 after Post increment operator: ";
    D2.Display();

    cout<<"\n\n Again, The Value At D1 : ";
    D1.Display();

    cout<<"\n Again, The Value At D2 : ";
    D2.Display();


    return 0;
}
/*
Here, the operator function declared for increment operator in postfix notation is similar to that of prefix, except that, by convention, it takes a single argument of type int in declaration i.e. Distance operator ++(int). this int is not really an argument, but a signal to the compiler to inform about postfix notation. The increment operator has been overloaded for postfix notation. So, the statement: dis1 = dis++;
implies the object dis is assigned to object dis1 before increment of data members of dis object so, dis1 shows original values and but dis shows incremented values
*/
