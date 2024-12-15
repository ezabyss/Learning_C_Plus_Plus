//WAP to swap the values of two variables using call by reference.

#include <iostream>

using namespace std;

void Swap(int *x ,int *y)
{
    cout<<"\n  x : "<< *x;
    cout<<"\n *x : "<< x;

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    cout<<"\n\n In Swap Function : ";
    cout<<"\n\t A : "<< *x <<"\t B : "<< *y;
}

int main()
{
    int a, b;
    cout<<"\n Enter A : ";
    cin>> a;
    cout<<"\n Enter B : ";
    cin>> b;

    cout<<"\n\n Before Swapping in Main() : ";
    cout<<"\n \t A : "<<a <<" B : "<<b;
    Swap(&a,&b);

    cout <<"\n After Swapping in Main() : ";
    cout<<"\n \t A : "<<a <<" B : "<<b;



    return 0;
}
