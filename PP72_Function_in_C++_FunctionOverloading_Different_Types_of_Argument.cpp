//WAP which has two functions with same name and same number of arguments, 9one for addition of two integers and other for addition of two double values.
#include <iostream>
using namespace std;

int add(int,int);
double add(double,double);
int main()
{
    int r1;
    double r2;
    r1 = add(10,30); // add() is call which has two arguments of type int.

    r2 = add(10.56,6.43); //All literal floating point values are doubles  unless they have the 'f' suffix, Thus, add() is called which has two arguments of type double

    cout<<"\n Sum of integer : "<< r1;
    cout<<"\n Sum of Double  : "<< r2;
    return 0;
}

int add(int a, int b)
{
    return (a+b);
}
double add(double a, double b)
{
    return (a+b);
}
//My Way
/*
int Add(int a, int b)
{
    return (a+b);
}
double Add(double a, double b)
{
    return (a + b);
}

int main()
{
    int ia, ib;
    double da,db;
    cout<<"\n Enter Two Integer Number : ";
    cin >> ia >> ib;
    cout<<"\n Enter Two Double Number  : ";
    cin >> da >> db;

    cout<<"\n The Sum of two integer number  : "<<Add(ia,ib);
    cout<<"\n The Sum of Two Double  number  : "<<Add(da,db);

    return 0;
}

*/
