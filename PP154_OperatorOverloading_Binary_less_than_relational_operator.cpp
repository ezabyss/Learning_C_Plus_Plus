//WAP to overload less than relational operator(i.e. <).
#include <iostream>
using namespace std;

class Distance
{
    float feet, inch;
public:
    void Get()
    {
        cout<<"\n Enter Feet : ";
        cin >> feet;
        cout<<"\n Enter inch : ";
        cin >> inch;
    }
    void Display()
    {
        cout<<"\n " <<feet << " ft "<< inch <<" in. ";
    }
    bool operator<(Distance D2)
    {
       float f1 = feet + (inch/12);
       float f2 = D2.feet + (D2.inch/12);
       if(f1<f2)
         return 1;
       else
         return 0;
    }
};
int main()
{
    Distance D1,D2, Greater;

    cout<<"\n Enter Value for D1 : ";
    D1.Get();
    cout<<"\n Enter Value for D2 : ";
    D2.Get();

    if(D1<D2) //same as D1.operator<(d2);
    {
        cout<<"\n Distance D1 is less than D2 .";
    }
    else
    {
        cout<<"\n Distance D2 is less than D1 . ";
    }
   // Greater.Display();
    return 0;
}
