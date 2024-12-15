//WAP to convert an object of class dollar to an object of class Rupees. Assume, the data members of class Dollar are dol & cent and of class Rupees are Rs and Paisa. Use $1 = Rs.120 and $1 = 100 cents
//conversion routine is in class Dollar(i.e Source class);

// R = D;

#include <iostream>
using namespace std;
/*
class Rupees
{
    float Rs, Paisa;
public:
    Rupees()
    {
        Rs = Paisa =0;
    }
    Rupees(float R, float P)
    {
        Rs = R;
        Paisa = P;
    }
    void Display()
    {
        cout<<"\n Equivalent Rs & Paisa :  "<<Rs <<" And "<<Paisa;
    }
};
class Dollar
{
    float dol, cent;
public:
   void ReadValue()
   {
       cout<<"\n Enter Dollar : ";
       cin>>dol;
       cout<<"\n Enter Cent : ";
       cin>>cent;
   }
   void Display()
   {
       cout<<" $ "<< dol <<" And "<<cent <<" cent. ";
   }
   operator Rupees()
   {
       long Rs; //long int
       float P, total_Rs;

       total_Rs = ( dol + cent/100) * 89;
       Rs = long(total_Rs);
       P = (total_Rs - Rs) * 100;

       return Rupees(Rs,P);
   }
};
int main()
{
    Rupees R;
    Dollar D;
    D.ReadValue();
    R = D;
    cout<<"\n Dollar Value : ";
    D.Display();

    R.Display();



    return 0;
}
*/

//Book Way

class Rupees
{
    long Rs;
    float Paisa;

public:
    Rupees()
    {
        Rs = 0;
        Paisa = 0;
    }
    Rupees(long r, float p)
    {
        Rs = r;
        Paisa = p;
    }
    void Display()
    {
        cout<<"Rs. "<<Rs<<" and "<<Paisa<<" paisa ";
    }
};

class Dollar
{
    int Dol;
    float Cent;
public:
    Dollar()
    {
        Dol = Cent = 0;
    }
    Dollar(int d, float c)
    {
        Dol = d;
        Cent = c;

    }
    void ReadValue()
    {
        cout<<"\n Enter Dollar :";
        cin >> Dol;
        cout<<"\n Enter Cents : ";
        cin >> Cent;
    }
    void Display()
    {
        cout<<" $ " << Dol <<" and "<< Cent <<" cent. ";
    }
    operator Rupees()
    {
        float total_rs = (Dol + Cent/100) * 89;
        long rs = total_rs;// automatically truncate into rs
        float p = (total_rs - rs) * 100 ;//converts ruppes into paisa;
        return Rupees(rs,p);
    }
};

int main()
{
    Rupees R;
    Dollar D;
    D.ReadValue();

    R = D;
    cout<<"\n Dollar Value : ";
    D.Display();
    cout<<"\n Equivalent Value : ";
    R.Display();

    return 0;
}
