//WAP to add two integers and two fractional number separately
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


//Separate Way
/*
float Add(float a, float b)
{
    return a + b;
}
int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int ia, ib;
    float fa, fb;

    cout<<"\n Enter integer a & integer b : ";
    cin>>ia>>ib;
🥰
    cout<<"\n Enter float a & float b  : ";
    cin>>fa>>fb;

    cout<<"\n The sum of two integer is : "<< Add(ia,ib);
    cout<<"\n The sum of two float   is : "<< Add(fa,fb);

    return 0;
}
/*
In this example, there are two functions defined to handle integers and fractional numbers. The function int Add(int a, int b) adds two integers while other version of the function float Add(float a, float b) adds two fractional version of the function float Add(float a, float b) adds two fractional numbers, The particular version of the function is called according to types of argument passed while calling. The same program can be rewritten using concept of template as below
*/

//WAP to add two integers and two fractional numbers using single function. [i.e use function Template]

template <class master>

master Add(master a, master b)
{
    return a + b;
}

int main()
{

    float fa = 3.8787, fb = 96.328;
    int   ia = 98, ib = 300;



    cout<<"\n The Sum of Two Int    : "<< Add(ia,ib);
    cout<<"\n The Sum of Two float  : "<< Add(fa,fb);

    return 0;

    //In this example, Function Add() takes arguments of general type ( i.e template type argument) The data type T defined in this example is general type which can represent any data type. Thus, the function Add() can be used to add two integers as well as two float values.
}
