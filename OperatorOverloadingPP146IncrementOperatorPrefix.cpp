//WAP to overload an increment operator i.e(++) in prefix notation


#include<iostream>

using namespace std;

class Distance
{
    int meter, centi;
public:
    Distance(int m , int cm)
    {
        meter = m;
        centi = cm;
    }

    void Display()
    {
        cout<<endl<< meter <<" M "<< centi <<" C.M "<<endl;
    }

    void operator++()
    {
        ++centi;
        ++meter;
        if(centi == 100)
        {
            ++meter;
            centi -= 100;
        }
    }
};



int main()
{
    Distance D1(12,99), D2(13,45);

    cout<<"\n The Value at D1: ";
    D1.Display();

    cout<<"\nThe Value at D2: ";
    D2.Display();

    ++D1; //D1.operator++();
    ++D2; //D2.operator++();

    cout<<"\n The Value at D1 after increment operator (prefix) : ";
    D1.Display();

    cout<<"\n The Value at D2 after increment operator overloading (prefix) : ";
    D2.Display();



    return 0;
}
