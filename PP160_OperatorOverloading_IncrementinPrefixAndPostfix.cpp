

//Overloading of increment operator(++) in prefix and postfix notation using operator function as friend function;



#include<iostream>

using namespace std;
//My Way
class Complex
{
    int real, img;
public:
    void ReadData()
    {
        cout<<"\n Enter Real: ";
        cin >> real;
        cout<<"\n Enter image: ";
        cin >> img;
    }

    void Display()
    {
        cout<<"\n Real Part: "<< real;
        cout<<"\n Imaginary Part: "<<img;
    }
    friend void operator++(Complex &);
    friend void operator++(Complex &, int);
};

void operator++(Complex &Com)
{
    ++Com.real;
    ++Com.img;

}

void operator++(Complex &Com,int)
{
    Com.real++;
    Com.img++;
    //Com.Display();

}
int main()
{
    Complex C1,C2;
    cout<<"\n Enter Data For object C1: ";
    C1.ReadData();
    cout<<"\n Enter Data For object C2: ";
    C2.ReadData();

    cout<<"\n\n Before Prefix increment: ";
    C1.Display();

    ++C1; //Same as operator++(C1);

    cout<<"\n\n After Prefix increment : ";
    C1.Display();

    cout<<"\n\n Before Postfix increment: ";
    C2.Display();

    C2++; //Same as operator++(C1,int); //i use to do C2 = C2++ then returning object;

    cout<<"\n\n After Postfix increment: ";
    C2.Display();






    return 0;
}

//Book

/*
class Distance
{
    int meter, centi;
public:
    Distance(int m, int cm)
    {
        meter = m;
        centi = cm;
    }
    Distance()
    {
        meter = 0;
        centi = 0;
    }
    void Display()
    {
        cout<<meter<<"m " <<centi<<"cm "<<endl;
    }
    friend void operator++(Distance &);
    friend void operator++(Distance &,int);
};

void operator++(Distance &dis)
{
    ++dis.centi;
    ++dis.meter;
    if(dis.centi>= 100)
    {
        ++dis.meter;
        dis.centi -= 100;
    }
}
void operator++(Distance &Dis,int)
{
    Dis.centi++;
    Dis.meter++;
    if(Dis.centi >= 100)
    {
        ++Dis.meter;
        Dis.centi -= 100;
    }

}
int main()
{
    Distance dis1(5,8),dis2(25,33);
    cout<<"\n The Original distance Dis1 and Dis2 are: "<<endl;
    cout<<"\n Dis1 :"; dis1.Display();
    cout<<"\n Dis2 :"; dis2.Display();

    cout<<"\n*****************************************\n";
    ++dis1; // operator++(dis1)

    cout<<" The value of object dis1 (After pre increment: ) ";
    dis1.Display();

   // dis2++; // same as operator++(dis2,int);

    cout<<"The value of object dis2 (After Postfix increment):  ";
    dis2.Display();
    cout<<"\n Again Calling dis2: ";
    dis2.Display();

    return 0;
}


In this example, the increment operator '++' has been overloaded in both notations postfix and prefix. To identify the postfix notation, we have to pass extra parameter type int same as in member function. The operator function has one reference argument to change object itself


*/
