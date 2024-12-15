//WAP to calculate simple interest from p,t and r using default argument  for rate,r;
#include <iostream>
using namespace std;

float interest(float p,float t,float r = 3)
{
    return (p*t*r)/100;
}
int main()
{

    float principle, time, rate;
    cout<<"\n Enter Principle, Time and Rate : ";
    cin>> principle>> time>> rate;

    float i;
    i= interest(principle,time);
    cout<<"\n interest at default rate : "<< i;
    i = interest (principle,time,rate);
    cout<<"\n interest at "<<rate <<"% rate : "<< i;
    return 0;
}
