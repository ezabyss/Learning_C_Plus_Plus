//Define a Class named Complex with data members real and img. Use Appropriate member function of the class which accepts two objects of the class and add them.

#include <iostream>
using namespace std;
//Book Way
 class Complex
 {
 private:
    int real,img;
 public:
    void GetComplex();
    void AddComplex(Complex,Complex);
    void Display();
 };

 void Complex::GetComplex()
 {
     cout<<"\n Real Part : ";
     cin >> real;
     cout<<"\n Img  Part : ";
     cin>>img;
 }
 void Complex::AddComplex(Complex c1, Complex c2)
 {
     real = c1.real + c2.real;
     img =  c1.img  + c2.img;
 }
 void Complex::Display()
 {
     cout<<"\n The Sum is : ";
     if(img>0)
        cout<<real <<" +j"<<img;
     else
        cout<<real <<"-j"<< (-1)*img;
 }
int main()
{
    Complex First,Second,Result;

    cout<<"\n Enter First Complex : ";
    First.GetComplex();
    cout<<"\n Enter Second Complex : ";
    Second.GetComplex();

    Result.AddComplex(First,Second);
    Result.Display();

    return 0;
}
//My Way

/*
class Complex
{
    float real, img;
public:
    void Read()
    {
        cout<<"\n Enter Real  : ";
        cin >> real;
        cout<<"\n Enter image : ";
        cin >> img;
    }
    void Add(Complex O1, Complex O2)
    {
        float sum ;
        real = O1.real + O2.real;
        img  = O1.img  + O2.img;
    }

    void Display()
    {
        cout<<"\n Complex form : "<< real << " + j"<<img;
    }
};
#include <iostream>
using namespace std;

int main()
{
    Complex Ob1,Ob2,Sum;

    Ob1.Read();
    Ob2.Read();
    cout<<"\n Value in Object 1 : \n  ";
    Ob1.Display();
    cout<<"\n Value in Object 2 : \n  ";
    Ob2.Display();

    Sum.Add(Ob1,Ob2);
    cout<<"\n\n Sum is : ";
    Sum.Display();
    return 0;
}
*/
