//Conversion is in class Rupees(i.e.Destination class)

#include <iostream>

using namespace std;

class Dollar
{
    int dol;
    float cent;
public:
    void ReadDollar()
    {
        cout<<"\n Enter Dol : ";
        cin >> dol;
        cout<<"\n Enter cent : ";
        cin >> cent;
    }
    void Display()
    {
        cout<<" $ "<< dol <<" and "<< cent <<" cent";
    }
    float getdol() //or you can make two different function to return dol & rupees;
    {
        return (dol + cent/100);
    }

    /*
    float getcent()
    {
        return cent;
    }
    */
};
class Rupees
{
    int rs;
    float paisa;
public:
    Rupees()
    {
        rs = paisa = 0;
    }
    Rupees(int r, float p)
    {
        rs = r;
        paisa = p;
    }
    void Display()
    {
        cout<<" Rs "<< rs <<" and "<<paisa <<" paisa ";
    }
    Rupees(Dollar D)
    {
        float total_rs = D.getdol() * 89; //1 dol = 120
        rs = int(total_rs); // truncate fractional part

        paisa = (total_rs - rs) * 100 ; //convert rs into paisa
    }
};

int main()
{
    Rupees R;
    Dollar D;
    cout<<"\n Enter Dollar : ";
    D.ReadDollar();

    R = D; // Same as rupee Dol;

    cout<<"\n Equivalent Rupees : ";
    R.Display();

    return 0;
}
