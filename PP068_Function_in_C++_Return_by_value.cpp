//WAP To illustrate Return by value.

#include <iostream>
using namespace std;
float Add(float a,float b)
{
    return (a+b); // return by value.
}
int main()
{
    float a, b;
    cout<<"\n Enter A & B : ";
    cin >> a >> b;
    float sum = Add(a,b);
    cout<<"\n Sum is : "<<sum;

    return 0;
}
