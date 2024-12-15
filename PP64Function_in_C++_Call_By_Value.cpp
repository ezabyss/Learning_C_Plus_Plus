//WAP to illustrate function call by value


#include <iostream>

using namespace std;

void Swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"\n\n Swapped Value in Swap Function ( Call by Value) : ";
    cout<<"\n\t A : "<< a<<"\t B : "<<b;
}
int main()
{
    int a,b;
    cout<<"\n\n Enter A : ";
    cin >> a;
    cout<<"\n Enter B : ";
    cin >> b;
    cout<<"\n\n Before Swap : ";
    cout<<"\n\t A : "<< a <<"\t B : "<< b;
    Swap(a,b);
    cout<<"\n\n After Swap in Main() : ";
    cout<<"\n\t A : "<< a <<"\t B : "<< b;

    return 0;
}
